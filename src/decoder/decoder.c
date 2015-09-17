/* decoder.h:
 *
 *  Magic ring decoder for processor registers
 *
 */


#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <errno.h>
#include "common.h"
#include "decoder.h"


/* Read a specific register from memory */
uint32_t DecodeReadRegister(const Peripheral_t *p, const Register_t *r)
{
  uint32_t address, val;

  if(p == NULL) return 0;
  if(r == NULL) return 0;
  
  /* Calculate effective address */
  address = p->base + r->offset;

  /* read register according to size */
  switch(r->size) {
  case 8:
    val = *(uint8_t *)address;
    break;
  case 16:
    val = *(uint16_t *)address;
    break;  
  case 32:
    val = *(uint32_t *)address;
    break;
  default:
    printf("Invalid size 0x%x for register %s in periphral %s!\n",
	   (unsigned int)r->size,
	   r->name,
	   p->name);
    return 0;
  }
  return val;
}

/* Read a specific register from memory */
uint32_t DecodeWriteRegister(const Peripheral_t *p, const Register_t *r,
			     uint32_t val)
{
  uint32_t address;

  if(p == NULL) return 1;
  if(r == NULL) return 1;
  
  /* Calculate effective address */
  address = p->base + r->offset;

  /* read register according to size */
  switch(r->size) {
  case 8:
    *(uint8_t *)address = val;
    break;
  case 16:
    *(uint16_t *)address = val;
    break;  
  case 32:
    *(uint32_t *)address = val;
    break;
  default:
    printf("Invalid size 0x%x for register %s in periphral %s!\n",
	   (unsigned int)r->size,
	   r->name,
	   p->name);
    return 1;
  }
  return 0;
}

/* Decode a field */
void DecodeField(const Field_t *f, uint32_t val)
{
  uint32_t v;
  if(f == NULL) return;

  v = (val >> (f->offset)) & ((1<<f->width)-1);
  printf("  %21s : 0x%-2x (%6u) %2u %s offset: %u\n",
	 f->name,  
	 (unsigned int)v,
	 (unsigned int)v,
	 (unsigned int)(f->width),
	 (f->width > 1 ) ? "bits," : "bit, ",
	 (unsigned int)(f->offset));
}

/* Decode a register */
void DecodeRegister(const Register_t *r, uint32_t base, uint32_t val,
		    uint32_t decodeFields)
{
  Field_t const *f;
  
  if(r == NULL) return;

  //  printf("\tRegister :\n");
  printf(" Register %-13s : 0x%08x (%10u) Size: %2u Address: 0x%08x\n",
	 r->name,
	 (unsigned int)val,
	 (unsigned int)val,
	 (unsigned int)r->size,
	 (unsigned int)(base + r->offset)
	 );

  /* Dump out fields */
  if(r->fields != NULL && decodeFields) {
    for(f = r->fields; f->name != NULL; f++) {
      DecodeField(f,val);
    }
  }
  if(decodeFields) {
    printf("\n");
  }

}

/* Decode a peripheral */
void DecodePeripheral(const Peripheral_t *p, uint32_t decodeFields)
{
  Register_t const *r;
  uint32_t val;

  if(p == NULL) return;
  
  printf("Peripheral %-13s: Base address: 0x%08x\n",
	 p->name,  (unsigned int)p->base);

  /* Dump out registers */
  if(p->registers != NULL) {
    for(r = p->registers; r->name != NULL; r++) {
      /* Read value */
      val = DecodeReadRegister(p,r);
      /* Decode Register, but don't dump fields */
      DecodeRegister(r, p->base, val, decodeFields);
    }
  }
}

/* Pretty print the names of all the peripherals */
void DecodePrintPeripherals(const Peripheral_t *p)
{
  uint32_t col;
  col = 8;
  printf("\t");
  for(; p->name != NULL; p++) {
    col += printf("%s",p->name);
    if((p+1)->name != NULL) {
      col += printf(", ");
      if(col > 70) {
	col = 8;
	printf("\n\t");
      }
    }
  }
}

void DecodePrintRegisters(const Register_t *r) {
  uint8_t col;
  col = 8;
  printf("\t");
  for(; r->name != NULL; r++) {
    col += printf("%s",r->name);
    if((r+1)->name != NULL) {
      col += printf(", ");
      if(col > 70) {
	col = 8;
	printf("\n\t");
      }
    }
  }
}

void CmdDecode(int mode)
{
  int rc;
  char *pname, *rname, *fname, *n;
  uint32_t val,oval,t,m;
  Peripheral_t const *p;
  Register_t const *r;
  Field_t const *f;

  if(mode == CMD_LONG_HELP) {
    /* Try to fetch a peripheral name, then just give general help */
    rc = fetch_string_arg(&n);
    if(rc) {
      /* nothing to fetch, general help */
      printf("decode {<periph> {<reg>}|full}\n"
	     "decode <periph> <reg> <val>\n"
	     "decode <periph> <reg> <field> <val>\n\n"

	     "This command decodes the registers of a given peripheral\n"
	     "If the peripheral name is not supplied, it will dump all\n"
	     "perpiherals on the chip. If the register is not supplied\n"
	     "it will dump all registers for the peripheral. Adding the\n"
	     "word 'full' after the peripheral, will decode all the\n"
	     "fields\n"
	     "\n"
	     "The forms with <val> on the end allow you to set the\n"
	     "selected register/field value\n"
	     "\n"
	     "Valid peripherals are:\n"
	     "\n");
      DecodePrintPeripherals(Peripherals);
      printf("\n\n"
	     "For a list of valid registers for a given peripheral, enter\n"
	     "\n"
	     "help decode <periph>\n"
	     "\n");
    } else {
      /* User is requesting a list of registers for a peripheral */
      
      /* Locate the peripheral name */
      p = Peripherals;
      while((p->name != NULL) && strcasecmp(n,p->name)) {
	p++;
      }

      if(p->name == NULL) {
	/* No valid peripheral name found */
	printf("%s is not a valid peripheral name\n"
	       "Valid peripherals are:\n"
	       "\n",
	       n);
      DecodePrintPeripherals(Peripherals);
	return;
      }
      printf("Valid registers for peripheral %s:\n"
	     "\n",
	     p->name);
      DecodePrintRegisters(p->registers);
      printf("\n\n");
    }
    
    return;
  }
  /* User is requesting to decode something */
  rc = fetch_string_arg(&pname);
  if(rc) {
    /* User did not specify a peripheral name */
    printf("Missing peripheral name, please chose one of:\n\n");
    DecodePrintPeripherals(Peripherals);
    printf("\n\n");
    return;
  }

  /* Attempt to locate the periperhal */
  p = Peripherals;
  while((p->name != NULL) && strcasecmp(pname,p->name)) {
    p++;
  }

  if(p->name == NULL) {
    /* No valid peripheral name found */
    printf("'%s' is not a valid peripheral name, valid names for are:\n\n",
	   pname);
    DecodePrintPeripherals(Peripherals);
    printf("\n\n");
    return;
  }
  
  /* See if the user is specifying a register */
  rc = fetch_string_arg(&rname);
  if(rc) {
    /* No register name specified, dump whole peripheral */
    DecodePeripheral(p,0);
    return;
  }

  /* See if we can find the register in the list. */
  r = p->registers;
  while((r->name != NULL) && strcasecmp(rname,r->name)) {
    r++;
  }

  if(r->name == NULL) {
    /* if the user says 'full' do a full decode */
    if(strcasecmp(rname,"full") == 0) {
      DecodePeripheral(p,1);
      return;
    }

    /* No valid register name found */
    printf("'%s' is not a valid register name, valid names for %s are:\n\n",
	   rname, p->name);
    DecodePrintRegisters(p->registers);
    printf("\n\n");
    return;
  }    

  /* Check to see if there is a field name, or integer value to program */
  rc = fetch_string_arg(&fname);
  if(rc == 0) {
    /* There was something... see if it matches a field name */
    f = r->fields;
    while((f->name != NULL) && strcasecmp(fname,f->name)) {
      f++;
    }
    if(f->name != NULL) {
      /* Matched a field name, look for the value */
      rc = fetch_uint32_arg(&val);
      if(rc) {
	/* Unable to locate a value */
	printf("Missing Value to program into register %s\n",
	       r->name);
	return;
      }
    
      /* Update the register field */
      t = DecodeReadRegister(p,r);
      /* Create mask */
      m = (1<<f->width)-1;

      oval = (t >> f->offset) & m; /* Save old value */

      t &= ~(m << f->offset);
      t |= (val & m) << f->offset;
      DecodeWriteRegister(p,r,t);
      printf("%s.%s.%s (%d) -> (%d)\n",
	     p->name, r->name, f->name,
	     (unsigned)oval, (unsigned)val);
      return;

    }
    /* No matching register name, check if this is an integer */
    errno = 0;
    val = strtoul(fname,NULL,0);
    if(errno != 0) {
      /* Unable to do conversion */
      printf("Invalid number '%s' entered.\n",
	     fname);
      return;
    }
    /* Write to register */
    DecodeWriteRegister(p,r,val);
    printf("%s.%s = 0x%08x\n",
	   p->name, r->name,
	   (unsigned)val);
    return;

  }
  /* Read and dump the register, decode all fields */
  val = DecodeReadRegister(p,r);
  DecodeRegister(r,p->base, val,1);

}

ADD_CMD("decode", CmdDecode, "<periph> <reg>  Decode registers");

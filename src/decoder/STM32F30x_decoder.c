/* Header file generated automatically from SVD file
 * for STM32F30x
 *  DO NOT EDIT 
 */
#include <stdio.h>
#include <stdint.h>
#include "decoder.h"

const Field_t TIM2_CR1_fields[] = {
   { "CEN", 0, 1 },  /* Counter enable */
   { "UDIS", 1, 1 },  /* Update disable */
   { "URS", 2, 1 },  /* Update request source */
   { "OPM", 3, 1 },  /* One-pulse mode */
   { "DIR", 4, 1 },  /* Direction */
   { "CMS", 5, 2 },  /* Center-aligned mode
              selection */
   { "ARPE", 7, 1 },  /* Auto-reload preload enable */
   { "CKD", 8, 2 },  /* Clock division */
   { "UIFREMAP", 11, 1 },  /* UIF status bit remapping */
   { NULL, 0, 0 }
};

const Field_t TIM2_CR2_fields[] = {
   { "CCDS", 3, 1 },  /* Capture/compare DMA
              selection */
   { "MMS", 4, 3 },  /* Master mode selection */
   { "TI1S", 7, 1 },  /* TI1 selection */
   { NULL, 0, 0 }
};

const Field_t TIM2_SMCR_fields[] = {
   { "SMS", 0, 3 },  /* Slave mode selection */
   { "OCCS", 3, 1 },  /* OCREF clear selection */
   { "TS", 4, 3 },  /* Trigger selection */
   { "MSM", 7, 1 },  /* Master/Slave mode */
   { "ETF", 8, 4 },  /* External trigger filter */
   { "ETPS", 12, 2 },  /* External trigger prescaler */
   { "ECE", 14, 1 },  /* External clock enable */
   { "ETP", 15, 1 },  /* External trigger polarity */
   { "SMS_3", 16, 1 },  /* Slave mode selection bit3 */
   { NULL, 0, 0 }
};

const Field_t TIM2_DIER_fields[] = {
   { "UIE", 0, 1 },  /* Update interrupt enable */
   { "CC1IE", 1, 1 },  /* Capture/Compare 1 interrupt
              enable */
   { "CC2IE", 2, 1 },  /* Capture/Compare 2 interrupt
              enable */
   { "CC3IE", 3, 1 },  /* Capture/Compare 3 interrupt
              enable */
   { "CC4IE", 4, 1 },  /* Capture/Compare 4 interrupt
              enable */
   { "TIE", 6, 1 },  /* Trigger interrupt enable */
   { "UDE", 8, 1 },  /* Update DMA request enable */
   { "CC1DE", 9, 1 },  /* Capture/Compare 1 DMA request
              enable */
   { "CC2DE", 10, 1 },  /* Capture/Compare 2 DMA request
              enable */
   { "CC3DE", 11, 1 },  /* Capture/Compare 3 DMA request
              enable */
   { "CC4DE", 12, 1 },  /* Capture/Compare 4 DMA request
              enable */
   { "TDE", 14, 1 },  /* Trigger DMA request enable */
   { NULL, 0, 0 }
};

const Field_t TIM2_SR_fields[] = {
   { "UIF", 0, 1 },  /* Update interrupt flag */
   { "CC1IF", 1, 1 },  /* Capture/compare 1 interrupt
              flag */
   { "CC2IF", 2, 1 },  /* Capture/Compare 2 interrupt
              flag */
   { "CC3IF", 3, 1 },  /* Capture/Compare 3 interrupt
              flag */
   { "CC4IF", 4, 1 },  /* Capture/Compare 4 interrupt
              flag */
   { "TIF", 6, 1 },  /* Trigger interrupt flag */
   { "CC1OF", 9, 1 },  /* Capture/Compare 1 overcapture
              flag */
   { "CC2OF", 10, 1 },  /* Capture/compare 2 overcapture
              flag */
   { "CC3OF", 11, 1 },  /* Capture/Compare 3 overcapture
              flag */
   { "CC4OF", 12, 1 },  /* Capture/Compare 4 overcapture
              flag */
   { NULL, 0, 0 }
};

const Field_t TIM2_EGR_fields[] = {
   { "UG", 0, 1 },  /* Update generation */
   { "CC1G", 1, 1 },  /* Capture/compare 1
              generation */
   { "CC2G", 2, 1 },  /* Capture/compare 2
              generation */
   { "CC3G", 3, 1 },  /* Capture/compare 3
              generation */
   { "CC4G", 4, 1 },  /* Capture/compare 4
              generation */
   { "TG", 6, 1 },  /* Trigger generation */
   { NULL, 0, 0 }
};

const Field_t TIM2_CCMR1_Output_fields[] = {
   { "CC1S", 0, 2 },  /* Capture/Compare 1
              selection */
   { "OC1FE", 2, 1 },  /* Output compare 1 fast
              enable */
   { "OC1PE", 3, 1 },  /* Output compare 1 preload
              enable */
   { "OC1M", 4, 3 },  /* Output compare 1 mode */
   { "OC1CE", 7, 1 },  /* Output compare 1 clear
              enable */
   { "CC2S", 8, 2 },  /* Capture/Compare 2
              selection */
   { "OC2FE", 10, 1 },  /* Output compare 2 fast
              enable */
   { "OC2PE", 11, 1 },  /* Output compare 2 preload
              enable */
   { "OC2M", 12, 3 },  /* Output compare 2 mode */
   { "OC2CE", 15, 1 },  /* Output compare 2 clear
              enable */
   { "OC1M_3", 16, 1 },  /* Output compare 1 mode bit
              3 */
   { "OC2M_3", 24, 1 },  /* Output compare 2 mode bit
              3 */
   { NULL, 0, 0 }
};

const Field_t TIM2_CCMR1_Input_fields[] = {
   { "CC1S", 0, 2 },  /* Capture/Compare 1
              selection */
   { "IC1PSC", 2, 2 },  /* Input capture 1 prescaler */
   { "IC1F", 4, 4 },  /* Input capture 1 filter */
   { "CC2S", 8, 2 },  /* Capture/compare 2
              selection */
   { "IC2PSC", 10, 2 },  /* Input capture 2 prescaler */
   { "IC2F", 12, 4 },  /* Input capture 2 filter */
   { NULL, 0, 0 }
};

const Field_t TIM2_CCMR2_Input_fields[] = {
   { "CC3S", 0, 2 },  /* Capture/Compare 3
              selection */
   { "IC3PSC", 2, 2 },  /* Input capture 3 prescaler */
   { "IC3F", 4, 4 },  /* Input capture 3 filter */
   { "CC4S", 8, 2 },  /* Capture/Compare 4
              selection */
   { "IC4PSC", 10, 2 },  /* Input capture 4 prescaler */
   { "IC4F", 12, 4 },  /* Input capture 4 filter */
   { NULL, 0, 0 }
};

const Field_t TIM2_CCMR2_Output_fields[] = {
   { "CC3S", 0, 2 },  /* Capture/Compare 3
              selection */
   { "OC3FE", 2, 1 },  /* Output compare 3 fast
              enable */
   { "OC3PE", 3, 1 },  /* Output compare 3 preload
              enable */
   { "OC3M", 4, 3 },  /* Output compare 3 mode */
   { "OC3CE", 7, 1 },  /* Output compare 3 clear
              enable */
   { "CC4S", 8, 2 },  /* Capture/Compare 4
              selection */
   { "OC4FE", 10, 1 },  /* Output compare 4 fast
              enable */
   { "OC4PE", 11, 1 },  /* Output compare 4 preload
              enable */
   { "OC4M", 12, 3 },  /* Output compare 4 mode */
   { "O24CE", 15, 1 },  /* Output compare 4 clear
              enable */
   { "OC3M_3", 16, 1 },  /* Output compare 3 mode bit3 */
   { "OC4M_3", 24, 1 },  /* Output compare 4 mode bit3 */
   { NULL, 0, 0 }
};

const Field_t TIM2_CCER_fields[] = {
   { "CC1E", 0, 1 },  /* Capture/Compare 1 output
              enable */
   { "CC1P", 1, 1 },  /* Capture/Compare 1 output
              Polarity */
   { "CC1NP", 3, 1 },  /* Capture/Compare 1 output
              Polarity */
   { "CC2E", 4, 1 },  /* Capture/Compare 2 output
              enable */
   { "CC2P", 5, 1 },  /* Capture/Compare 2 output
              Polarity */
   { "CC2NP", 7, 1 },  /* Capture/Compare 2 output
              Polarity */
   { "CC3E", 8, 1 },  /* Capture/Compare 3 output
              enable */
   { "CC3P", 9, 1 },  /* Capture/Compare 3 output
              Polarity */
   { "CC3NP", 11, 1 },  /* Capture/Compare 3 output
              Polarity */
   { "CC4E", 12, 1 },  /* Capture/Compare 4 output
              enable */
   { "CC4P", 13, 1 },  /* Capture/Compare 3 output
              Polarity */
   { "CC4NP", 15, 1 },  /* Capture/Compare 3 output
              Polarity */
   { NULL, 0, 0 }
};

const Field_t TIM2_CNT_fields[] = {
   { "CNTL", 0, 16 },  /* Low counter value */
   { "CNTH", 16, 15 },  /* High counter value */
   { "CNT_or_UIFCPY", 31, 1 },  /* if IUFREMAP=0 than CNT with read write
              access else UIFCPY with read only
              access */
   { NULL, 0, 0 }
};

const Field_t TIM2_PSC_fields[] = {
   { "PSC", 0, 16 },  /* Prescaler value */
   { NULL, 0, 0 }
};

const Field_t TIM2_ARR_fields[] = {
   { "ARRL", 0, 16 },  /* Low Auto-reload value */
   { "ARRH", 16, 16 },  /* High Auto-reload value */
   { NULL, 0, 0 }
};

const Field_t TIM2_CCR1_fields[] = {
   { "CCR1L", 0, 16 },  /* Low Capture/Compare 1
              value */
   { "CCR1H", 16, 16 },  /* High Capture/Compare 1 value (on
              TIM2) */
   { NULL, 0, 0 }
};

const Field_t TIM2_CCR2_fields[] = {
   { "CCR2L", 0, 16 },  /* Low Capture/Compare 2
              value */
   { "CCR2H", 16, 16 },  /* High Capture/Compare 2 value (on
              TIM2) */
   { NULL, 0, 0 }
};

const Field_t TIM2_CCR3_fields[] = {
   { "CCR3L", 0, 16 },  /* Low Capture/Compare value */
   { "CCR3H", 16, 16 },  /* High Capture/Compare value (on
              TIM2) */
   { NULL, 0, 0 }
};

const Field_t TIM2_CCR4_fields[] = {
   { "CCR4L", 0, 16 },  /* Low Capture/Compare value */
   { "CCR4H", 16, 16 },  /* High Capture/Compare value (on
              TIM2) */
   { NULL, 0, 0 }
};

const Field_t TIM2_DCR_fields[] = {
   { "DBA", 0, 5 },  /* DMA base address */
   { "DBL", 8, 5 },  /* DMA burst length */
   { NULL, 0, 0 }
};

const Field_t TIM2_DMAR_fields[] = {
   { "DMAB", 0, 16 },  /* DMA register for burst
              accesses */
   { NULL, 0, 0 }
};

const Register_t TIM2_registers[] = {
   {"CR1", 0, 32, 0, TIM2_CR1_fields}, /* control register 1 */
   {"CR2", 4, 32, 0, TIM2_CR2_fields}, /* control register 2 */
   {"SMCR", 8, 32, 0, TIM2_SMCR_fields}, /* slave mode control register */
   {"DIER", 12, 32, 0, TIM2_DIER_fields}, /* DMA/Interrupt enable register */
   {"SR", 16, 32, 0, TIM2_SR_fields}, /* status register */
   {"EGR", 20, 32, 0, TIM2_EGR_fields}, /* event generation register */
   {"CCMR1_Output", 24, 32, 0, TIM2_CCMR1_Output_fields}, /* capture/compare mode register 1 (output
          mode) */
   {"CCMR1_Input", 24, 32, 0, TIM2_CCMR1_Input_fields}, /* capture/compare mode register 1 (input
          mode) */
   {"CCMR2_Input", 28, 32, 0, TIM2_CCMR2_Input_fields}, /* capture/compare mode register 2 (input
          mode) */
   {"CCMR2_Output", 28, 32, 0, TIM2_CCMR2_Output_fields}, /* capture/compare mode register 2 (output
          mode) */
   {"CCER", 32, 32, 0, TIM2_CCER_fields}, /* capture/compare enable
          register */
   {"CNT", 36, 32, 0, TIM2_CNT_fields}, /* counter */
   {"PSC", 40, 32, 0, TIM2_PSC_fields}, /* prescaler */
   {"ARR", 44, 32, 0, TIM2_ARR_fields}, /* auto-reload register */
   {"CCR1", 52, 32, 0, TIM2_CCR1_fields}, /* capture/compare register 1 */
   {"CCR2", 56, 32, 0, TIM2_CCR2_fields}, /* capture/compare register 2 */
   {"CCR3", 60, 32, 0, TIM2_CCR3_fields}, /* capture/compare register 3 */
   {"CCR4", 64, 32, 0, TIM2_CCR4_fields}, /* capture/compare register 4 */
   {"DCR", 72, 32, 0, TIM2_DCR_fields}, /* DMA control register */
   {"DMAR", 76, 32, 0, TIM2_DMAR_fields}, /* DMA address for full transfer */
   { NULL,0 ,0 ,0 , NULL }
};

const Field_t TIM6_CR1_fields[] = {
   { "CEN", 0, 1 },  /* Counter enable */
   { "UDIS", 1, 1 },  /* Update disable */
   { "URS", 2, 1 },  /* Update request source */
   { "OPM", 3, 1 },  /* One-pulse mode */
   { "ARPE", 7, 1 },  /* Auto-reload preload enable */
   { "UIFREMAP", 11, 1 },  /* UIF status bit remapping */
   { NULL, 0, 0 }
};

const Field_t TIM6_CR2_fields[] = {
   { "MMS", 4, 3 },  /* Master mode selection */
   { NULL, 0, 0 }
};

const Field_t TIM6_DIER_fields[] = {
   { "UIE", 0, 1 },  /* Update interrupt enable */
   { "UDE", 8, 1 },  /* Update DMA request enable */
   { NULL, 0, 0 }
};

const Field_t TIM6_SR_fields[] = {
   { "UIF", 0, 1 },  /* Update interrupt flag */
   { NULL, 0, 0 }
};

const Field_t TIM6_EGR_fields[] = {
   { "UG", 0, 1 },  /* Update generation */
   { NULL, 0, 0 }
};

const Field_t TIM6_CNT_fields[] = {
   { "CNT", 0, 16 },  /* Low counter value */
   { "UIFCPY", 31, 1 },  /* UIF Copy */
   { NULL, 0, 0 }
};

const Field_t TIM6_PSC_fields[] = {
   { "PSC", 0, 16 },  /* Prescaler value */
   { NULL, 0, 0 }
};

const Field_t TIM6_ARR_fields[] = {
   { "ARR", 0, 16 },  /* Low Auto-reload value */
   { NULL, 0, 0 }
};

const Register_t TIM6_registers[] = {
   {"CR1", 0, 32, 0, TIM6_CR1_fields}, /* control register 1 */
   {"CR2", 4, 32, 0, TIM6_CR2_fields}, /* control register 2 */
   {"DIER", 12, 32, 0, TIM6_DIER_fields}, /* DMA/Interrupt enable register */
   {"SR", 16, 32, 0, TIM6_SR_fields}, /* status register */
   {"EGR", 20, 32, 0, TIM6_EGR_fields}, /* event generation register */
   {"CNT", 36, 32, 0, TIM6_CNT_fields}, /* counter */
   {"PSC", 40, 32, 0, TIM6_PSC_fields}, /* prescaler */
   {"ARR", 44, 32, 0, TIM6_ARR_fields}, /* auto-reload register */
   { NULL,0 ,0 ,0 , NULL }
};

const Field_t RTC_TR_fields[] = {
   { "SU", 0, 4 },  /* Second units in BCD format */
   { "ST", 4, 3 },  /* Second tens in BCD format */
   { "MNU", 8, 4 },  /* Minute units in BCD format */
   { "MNT", 12, 3 },  /* Minute tens in BCD format */
   { "HU", 16, 4 },  /* Hour units in BCD format */
   { "HT", 20, 2 },  /* Hour tens in BCD format */
   { "PM", 22, 1 },  /* AM/PM notation */
   { NULL, 0, 0 }
};

const Field_t RTC_DR_fields[] = {
   { "DU", 0, 4 },  /* Date units in BCD format */
   { "DT", 4, 2 },  /* Date tens in BCD format */
   { "MU", 8, 4 },  /* Month units in BCD format */
   { "MT", 12, 1 },  /* Month tens in BCD format */
   { "WDU", 13, 3 },  /* Week day units */
   { "YU", 16, 4 },  /* Year units in BCD format */
   { "YT", 20, 4 },  /* Year tens in BCD format */
   { NULL, 0, 0 }
};

const Field_t RTC_CR_fields[] = {
   { "WCKSEL", 0, 3 },  /* Wakeup clock selection */
   { "TSEDGE", 3, 1 },  /* Time-stamp event active
              edge */
   { "REFCKON", 4, 1 },  /* Reference clock detection enable (50 or
              60 Hz) */
   { "BYPSHAD", 5, 1 },  /* Bypass the shadow
              registers */
   { "FMT", 6, 1 },  /* Hour format */
   { "ALRAE", 8, 1 },  /* Alarm A enable */
   { "ALRBE", 9, 1 },  /* Alarm B enable */
   { "WUTE", 10, 1 },  /* Wakeup timer enable */
   { "TSE", 11, 1 },  /* Time stamp enable */
   { "ALRAIE", 12, 1 },  /* Alarm A interrupt enable */
   { "ALRBIE", 13, 1 },  /* Alarm B interrupt enable */
   { "WUTIE", 14, 1 },  /* Wakeup timer interrupt
              enable */
   { "TSIE", 15, 1 },  /* Time-stamp interrupt
              enable */
   { "ADD1H", 16, 1 },  /* Add 1 hour (summer time
              change) */
   { "SUB1H", 17, 1 },  /* Subtract 1 hour (winter time
              change) */
   { "BKP", 18, 1 },  /* Backup */
   { "COSEL", 19, 1 },  /* Calibration output
              selection */
   { "POL", 20, 1 },  /* Output polarity */
   { "OSEL", 21, 2 },  /* Output selection */
   { "COE", 23, 1 },  /* Calibration output enable */
   { NULL, 0, 0 }
};

const Field_t RTC_ISR_fields[] = {
   { "ALRAWF", 0, 1 },  /* Alarm A write flag */
   { "ALRBWF", 1, 1 },  /* Alarm B write flag */
   { "WUTWF", 2, 1 },  /* Wakeup timer write flag */
   { "SHPF", 3, 1 },  /* Shift operation pending */
   { "INITS", 4, 1 },  /* Initialization status flag */
   { "RSF", 5, 1 },  /* Registers synchronization
              flag */
   { "INITF", 6, 1 },  /* Initialization flag */
   { "INIT", 7, 1 },  /* Initialization mode */
   { "ALRAF", 8, 1 },  /* Alarm A flag */
   { "ALRBF", 9, 1 },  /* Alarm B flag */
   { "WUTF", 10, 1 },  /* Wakeup timer flag */
   { "TSF", 11, 1 },  /* Time-stamp flag */
   { "TSOVF", 12, 1 },  /* Time-stamp overflow flag */
   { "TAMP1F", 13, 1 },  /* Tamper detection flag */
   { "TAMP2F", 14, 1 },  /* RTC_TAMP2 detection flag */
   { "TAMP3F", 15, 1 },  /* RTC_TAMP3 detection flag */
   { "RECALPF", 16, 1 },  /* Recalibration pending Flag */
   { NULL, 0, 0 }
};

const Field_t RTC_PRER_fields[] = {
   { "PREDIV_S", 0, 15 },  /* Synchronous prescaler
              factor */
   { "PREDIV_A", 16, 7 },  /* Asynchronous prescaler
              factor */
   { NULL, 0, 0 }
};

const Field_t RTC_WUTR_fields[] = {
   { "WUT", 0, 16 },  /* Wakeup auto-reload value
              bits */
   { NULL, 0, 0 }
};

const Field_t RTC_ALRMAR_fields[] = {
   { "SU", 0, 4 },  /* Second units in BCD format */
   { "ST", 4, 3 },  /* Second tens in BCD format */
   { "MSK1", 7, 1 },  /* Alarm A seconds mask */
   { "MNU", 8, 4 },  /* Minute units in BCD format */
   { "MNT", 12, 3 },  /* Minute tens in BCD format */
   { "MSK2", 15, 1 },  /* Alarm A minutes mask */
   { "HU", 16, 4 },  /* Hour units in BCD format */
   { "HT", 20, 2 },  /* Hour tens in BCD format */
   { "PM", 22, 1 },  /* AM/PM notation */
   { "MSK3", 23, 1 },  /* Alarm A hours mask */
   { "DU", 24, 4 },  /* Date units or day in BCD
              format */
   { "DT", 28, 2 },  /* Date tens in BCD format */
   { "WDSEL", 30, 1 },  /* Week day selection */
   { "MSK4", 31, 1 },  /* Alarm A date mask */
   { NULL, 0, 0 }
};

const Field_t RTC_ALRMBR_fields[] = {
   { "SU", 0, 4 },  /* Second units in BCD format */
   { "ST", 4, 3 },  /* Second tens in BCD format */
   { "MSK1", 7, 1 },  /* Alarm B seconds mask */
   { "MNU", 8, 4 },  /* Minute units in BCD format */
   { "MNT", 12, 3 },  /* Minute tens in BCD format */
   { "MSK2", 15, 1 },  /* Alarm B minutes mask */
   { "HU", 16, 4 },  /* Hour units in BCD format */
   { "HT", 20, 2 },  /* Hour tens in BCD format */
   { "PM", 22, 1 },  /* AM/PM notation */
   { "MSK3", 23, 1 },  /* Alarm B hours mask */
   { "DU", 24, 4 },  /* Date units or day in BCD
              format */
   { "DT", 28, 2 },  /* Date tens in BCD format */
   { "WDSEL", 30, 1 },  /* Week day selection */
   { "MSK4", 31, 1 },  /* Alarm B date mask */
   { NULL, 0, 0 }
};

const Field_t RTC_WPR_fields[] = {
   { "KEY", 0, 8 },  /* Write protection key */
   { NULL, 0, 0 }
};

const Field_t RTC_SSR_fields[] = {
   { "SS", 0, 16 },  /* Sub second value */
   { NULL, 0, 0 }
};

const Field_t RTC_SHIFTR_fields[] = {
   { "SUBFS", 0, 15 },  /* Subtract a fraction of a
              second */
   { "ADD1S", 31, 1 },  /* Add one second */
   { NULL, 0, 0 }
};

const Field_t RTC_TSTR_fields[] = {
   { "SU", 0, 4 },  /* Second units in BCD format */
   { "ST", 4, 3 },  /* Second tens in BCD format */
   { "MNU", 8, 4 },  /* Minute units in BCD format */
   { "MNT", 12, 3 },  /* Minute tens in BCD format */
   { "HU", 16, 4 },  /* Hour units in BCD format */
   { "HT", 20, 2 },  /* Hour tens in BCD format */
   { "PM", 22, 1 },  /* AM/PM notation */
   { NULL, 0, 0 }
};

const Field_t RTC_TSDR_fields[] = {
   { "DU", 0, 4 },  /* Date units in BCD format */
   { "DT", 4, 2 },  /* Date tens in BCD format */
   { "MU", 8, 4 },  /* Month units in BCD format */
   { "MT", 12, 1 },  /* Month tens in BCD format */
   { "WDU", 13, 3 },  /* Week day units */
   { NULL, 0, 0 }
};

const Field_t RTC_TSSSR_fields[] = {
   { "SS", 0, 16 },  /* Sub second value */
   { NULL, 0, 0 }
};

const Field_t RTC_CALR_fields[] = {
   { "CALM", 0, 9 },  /* Calibration minus */
   { "CALW16", 13, 1 },  /* Use a 16-second calibration cycle
              period */
   { "CALW8", 14, 1 },  /* Use an 8-second calibration cycle
              period */
   { "CALP", 15, 1 },  /* Increase frequency of RTC by 488.5
              ppm */
   { NULL, 0, 0 }
};

const Field_t RTC_TAFCR_fields[] = {
   { "TAMP1E", 0, 1 },  /* Tamper 1 detection enable */
   { "TAMP1TRG", 1, 1 },  /* Active level for tamper 1 */
   { "TAMPIE", 2, 1 },  /* Tamper interrupt enable */
   { "TAMP2E", 3, 1 },  /* Tamper 2 detection enable */
   { "TAMP2TRG", 4, 1 },  /* Active level for tamper 2 */
   { "TAMP3E", 5, 1 },  /* Tamper 3 detection enable */
   { "TAMP3TRG", 6, 1 },  /* Active level for tamper 3 */
   { "TAMPTS", 7, 1 },  /* Activate timestamp on tamper detection
              event */
   { "TAMPFREQ", 8, 3 },  /* Tamper sampling frequency */
   { "TAMPFLT", 11, 2 },  /* Tamper filter count */
   { "TAMPPRCH", 13, 2 },  /* Tamper precharge duration */
   { "TAMPPUDIS", 15, 1 },  /* TAMPER pull-up disable */
   { "PC13VALUE", 18, 1 },  /* PC13 value */
   { "PC13MODE", 19, 1 },  /* PC13 mode */
   { "PC14VALUE", 20, 1 },  /* PC14 value */
   { "PC14MODE", 21, 1 },  /* PC 14 mode */
   { "PC15VALUE", 22, 1 },  /* PC15 value */
   { "PC15MODE", 23, 1 },  /* PC15 mode */
   { NULL, 0, 0 }
};

const Field_t RTC_ALRMASSR_fields[] = {
   { "SS", 0, 15 },  /* Sub seconds value */
   { "MASKSS", 24, 4 },  /* Mask the most-significant bits starting
              at this bit */
   { NULL, 0, 0 }
};

const Field_t RTC_ALRMBSSR_fields[] = {
   { "SS", 0, 15 },  /* Sub seconds value */
   { "MASKSS", 24, 4 },  /* Mask the most-significant bits starting
              at this bit */
   { NULL, 0, 0 }
};

const Field_t RTC_BKP0R_fields[] = {
   { "BKP", 0, 32 },  /* BKP */
   { NULL, 0, 0 }
};

const Field_t RTC_BKP1R_fields[] = {
   { "BKP", 0, 32 },  /* BKP */
   { NULL, 0, 0 }
};

const Field_t RTC_BKP2R_fields[] = {
   { "BKP", 0, 32 },  /* BKP */
   { NULL, 0, 0 }
};

const Field_t RTC_BKP3R_fields[] = {
   { "BKP", 0, 32 },  /* BKP */
   { NULL, 0, 0 }
};

const Field_t RTC_BKP4R_fields[] = {
   { "BKP", 0, 32 },  /* BKP */
   { NULL, 0, 0 }
};

const Field_t RTC_BKP5R_fields[] = {
   { "BKP", 0, 32 },  /* BKP */
   { NULL, 0, 0 }
};

const Field_t RTC_BKP6R_fields[] = {
   { "BKP", 0, 32 },  /* BKP */
   { NULL, 0, 0 }
};

const Field_t RTC_BKP7R_fields[] = {
   { "BKP", 0, 32 },  /* BKP */
   { NULL, 0, 0 }
};

const Field_t RTC_BKP8R_fields[] = {
   { "BKP", 0, 32 },  /* BKP */
   { NULL, 0, 0 }
};

const Field_t RTC_BKP9R_fields[] = {
   { "BKP", 0, 32 },  /* BKP */
   { NULL, 0, 0 }
};

const Field_t RTC_BKP10R_fields[] = {
   { "BKP", 0, 32 },  /* BKP */
   { NULL, 0, 0 }
};

const Field_t RTC_BKP11R_fields[] = {
   { "BKP", 0, 32 },  /* BKP */
   { NULL, 0, 0 }
};

const Field_t RTC_BKP12R_fields[] = {
   { "BKP", 0, 32 },  /* BKP */
   { NULL, 0, 0 }
};

const Field_t RTC_BKP13R_fields[] = {
   { "BKP", 0, 32 },  /* BKP */
   { NULL, 0, 0 }
};

const Field_t RTC_BKP14R_fields[] = {
   { "BKP", 0, 32 },  /* BKP */
   { NULL, 0, 0 }
};

const Field_t RTC_BKP15R_fields[] = {
   { "BKP", 0, 32 },  /* BKP */
   { NULL, 0, 0 }
};

const Field_t RTC_BKP16R_fields[] = {
   { "BKP", 0, 32 },  /* BKP */
   { NULL, 0, 0 }
};

const Field_t RTC_BKP17R_fields[] = {
   { "BKP", 0, 32 },  /* BKP */
   { NULL, 0, 0 }
};

const Field_t RTC_BKP18R_fields[] = {
   { "BKP", 0, 32 },  /* BKP */
   { NULL, 0, 0 }
};

const Field_t RTC_BKP19R_fields[] = {
   { "BKP", 0, 32 },  /* BKP */
   { NULL, 0, 0 }
};

const Field_t RTC_BKP20R_fields[] = {
   { "BKP", 0, 32 },  /* BKP */
   { NULL, 0, 0 }
};

const Field_t RTC_BKP21R_fields[] = {
   { "BKP", 0, 32 },  /* BKP */
   { NULL, 0, 0 }
};

const Field_t RTC_BKP22R_fields[] = {
   { "BKP", 0, 32 },  /* BKP */
   { NULL, 0, 0 }
};

const Field_t RTC_BKP23R_fields[] = {
   { "BKP", 0, 32 },  /* BKP */
   { NULL, 0, 0 }
};

const Field_t RTC_BKP24R_fields[] = {
   { "BKP", 0, 32 },  /* BKP */
   { NULL, 0, 0 }
};

const Field_t RTC_BKP25R_fields[] = {
   { "BKP", 0, 32 },  /* BKP */
   { NULL, 0, 0 }
};

const Field_t RTC_BKP26R_fields[] = {
   { "BKP", 0, 32 },  /* BKP */
   { NULL, 0, 0 }
};

const Field_t RTC_BKP27R_fields[] = {
   { "BKP", 0, 32 },  /* BKP */
   { NULL, 0, 0 }
};

const Field_t RTC_BKP28R_fields[] = {
   { "BKP", 0, 32 },  /* BKP */
   { NULL, 0, 0 }
};

const Field_t RTC_BKP29R_fields[] = {
   { "BKP", 0, 32 },  /* BKP */
   { NULL, 0, 0 }
};

const Field_t RTC_BKP30R_fields[] = {
   { "BKP", 0, 32 },  /* BKP */
   { NULL, 0, 0 }
};

const Field_t RTC_BKP31R_fields[] = {
   { "BKP", 0, 32 },  /* BKP */
   { NULL, 0, 0 }
};

const Register_t RTC_registers[] = {
   {"TR", 0, 32, 0, RTC_TR_fields}, /* time register */
   {"DR", 4, 32, 0, RTC_DR_fields}, /* date register */
   {"CR", 8, 32, 0, RTC_CR_fields}, /* control register */
   {"ISR", 12, 32, 0, RTC_ISR_fields}, /* initialization and status
          register */
   {"PRER", 16, 32, 0, RTC_PRER_fields}, /* prescaler register */
   {"WUTR", 20, 32, 0, RTC_WUTR_fields}, /* wakeup timer register */
   {"ALRMAR", 28, 32, 0, RTC_ALRMAR_fields}, /* alarm A register */
   {"ALRMBR", 32, 32, 0, RTC_ALRMBR_fields}, /* alarm B register */
   {"WPR", 36, 32, 0, RTC_WPR_fields}, /* write protection register */
   {"SSR", 40, 32, 0, RTC_SSR_fields}, /* sub second register */
   {"SHIFTR", 44, 32, 0, RTC_SHIFTR_fields}, /* shift control register */
   {"TSTR", 48, 32, 0, RTC_TSTR_fields}, /* time stamp time register */
   {"TSDR", 52, 32, 0, RTC_TSDR_fields}, /* time stamp date register */
   {"TSSSR", 56, 32, 0, RTC_TSSSR_fields}, /* timestamp sub second register */
   {"CALR", 60, 32, 0, RTC_CALR_fields}, /* calibration register */
   {"TAFCR", 64, 32, 0, RTC_TAFCR_fields}, /* tamper and alternate function configuration
          register */
   {"ALRMASSR", 68, 32, 0, RTC_ALRMASSR_fields}, /* alarm A sub second register */
   {"ALRMBSSR", 72, 32, 0, RTC_ALRMBSSR_fields}, /* alarm B sub second register */
   {"BKP0R", 80, 32, 0, RTC_BKP0R_fields}, /* backup register */
   {"BKP1R", 84, 32, 0, RTC_BKP1R_fields}, /* backup register */
   {"BKP2R", 88, 32, 0, RTC_BKP2R_fields}, /* backup register */
   {"BKP3R", 92, 32, 0, RTC_BKP3R_fields}, /* backup register */
   {"BKP4R", 96, 32, 0, RTC_BKP4R_fields}, /* backup register */
   {"BKP5R", 100, 32, 0, RTC_BKP5R_fields}, /* backup register */
   {"BKP6R", 104, 32, 0, RTC_BKP6R_fields}, /* backup register */
   {"BKP7R", 108, 32, 0, RTC_BKP7R_fields}, /* backup register */
   {"BKP8R", 112, 32, 0, RTC_BKP8R_fields}, /* backup register */
   {"BKP9R", 116, 32, 0, RTC_BKP9R_fields}, /* backup register */
   {"BKP10R", 120, 32, 0, RTC_BKP10R_fields}, /* backup register */
   {"BKP11R", 124, 32, 0, RTC_BKP11R_fields}, /* backup register */
   {"BKP12R", 128, 32, 0, RTC_BKP12R_fields}, /* backup register */
   {"BKP13R", 132, 32, 0, RTC_BKP13R_fields}, /* backup register */
   {"BKP14R", 136, 32, 0, RTC_BKP14R_fields}, /* backup register */
   {"BKP15R", 140, 32, 0, RTC_BKP15R_fields}, /* backup register */
   {"BKP16R", 144, 32, 0, RTC_BKP16R_fields}, /* backup register */
   {"BKP17R", 148, 32, 0, RTC_BKP17R_fields}, /* backup register */
   {"BKP18R", 152, 32, 0, RTC_BKP18R_fields}, /* backup register */
   {"BKP19R", 156, 32, 0, RTC_BKP19R_fields}, /* backup register */
   {"BKP20R", 160, 32, 0, RTC_BKP20R_fields}, /* backup register */
   {"BKP21R", 164, 32, 0, RTC_BKP21R_fields}, /* backup register */
   {"BKP22R", 168, 32, 0, RTC_BKP22R_fields}, /* backup register */
   {"BKP23R", 172, 32, 0, RTC_BKP23R_fields}, /* backup register */
   {"BKP24R", 176, 32, 0, RTC_BKP24R_fields}, /* backup register */
   {"BKP25R", 180, 32, 0, RTC_BKP25R_fields}, /* backup register */
   {"BKP26R", 184, 32, 0, RTC_BKP26R_fields}, /* backup register */
   {"BKP27R", 188, 32, 0, RTC_BKP27R_fields}, /* backup register */
   {"BKP28R", 192, 32, 0, RTC_BKP28R_fields}, /* backup register */
   {"BKP29R", 196, 32, 0, RTC_BKP29R_fields}, /* backup register */
   {"BKP30R", 200, 32, 0, RTC_BKP30R_fields}, /* backup register */
   {"BKP31R", 204, 32, 0, RTC_BKP31R_fields}, /* backup register */
   { NULL,0 ,0 ,0 , NULL }
};

const Field_t WWDG_CR_fields[] = {
   { "T", 0, 7 },  /* 7-bit counter */
   { "WDGA", 7, 1 },  /* Activation bit */
   { NULL, 0, 0 }
};

const Field_t WWDG_CFR_fields[] = {
   { "W", 0, 7 },  /* 7-bit window value */
   { "WDGTB", 7, 2 },  /* Timer base */
   { "EWI", 9, 1 },  /* Early wakeup interrupt */
   { NULL, 0, 0 }
};

const Field_t WWDG_SR_fields[] = {
   { "EWIF", 0, 1 },  /* Early wakeup interrupt
              flag */
   { NULL, 0, 0 }
};

const Register_t WWDG_registers[] = {
   {"CR", 0, 32, 0, WWDG_CR_fields}, /* Control register */
   {"CFR", 4, 32, 0, WWDG_CFR_fields}, /* Configuration register */
   {"SR", 8, 32, 0, WWDG_SR_fields}, /* Status register */
   { NULL,0 ,0 ,0 , NULL }
};

const Field_t IWDG_KR_fields[] = {
   { "KEY", 0, 16 },  /* Key value */
   { NULL, 0, 0 }
};

const Field_t IWDG_PR_fields[] = {
   { "PR", 0, 3 },  /* Prescaler divider */
   { NULL, 0, 0 }
};

const Field_t IWDG_RLR_fields[] = {
   { "RL", 0, 12 },  /* Watchdog counter reload
              value */
   { NULL, 0, 0 }
};

const Field_t IWDG_SR_fields[] = {
   { "PVU", 0, 1 },  /* Watchdog prescaler value
              update */
   { "RVU", 1, 1 },  /* Watchdog counter reload value
              update */
   { "WVU", 2, 1 },  /* Watchdog counter window value
              update */
   { NULL, 0, 0 }
};

const Field_t IWDG_WINR_fields[] = {
   { "WIN", 0, 12 },  /* Watchdog counter window
              value */
   { NULL, 0, 0 }
};

const Register_t IWDG_registers[] = {
   {"KR", 0, 32, 0, IWDG_KR_fields}, /* Key register */
   {"PR", 4, 32, 0, IWDG_PR_fields}, /* Prescaler register */
   {"RLR", 8, 32, 0, IWDG_RLR_fields}, /* Reload register */
   {"SR", 12, 32, 0, IWDG_SR_fields}, /* Status register */
   {"WINR", 16, 32, 0, IWDG_WINR_fields}, /* Window register */
   { NULL,0 ,0 ,0 , NULL }
};

const Field_t I2C1_CR1_fields[] = {
   { "PE", 0, 1 },  /* Peripheral enable */
   { "TXIE", 1, 1 },  /* TX Interrupt enable */
   { "RXIE", 2, 1 },  /* RX Interrupt enable */
   { "ADDRIE", 3, 1 },  /* Address match interrupt enable (slave
              only) */
   { "NACKIE", 4, 1 },  /* Not acknowledge received interrupt
              enable */
   { "STOPIE", 5, 1 },  /* STOP detection Interrupt
              enable */
   { "TCIE", 6, 1 },  /* Transfer Complete interrupt
              enable */
   { "ERRIE", 7, 1 },  /* Error interrupts enable */
   { "DNF", 8, 4 },  /* Digital noise filter */
   { "ANFOFF", 12, 1 },  /* Analog noise filter OFF */
   { "SWRST", 13, 1 },  /* Software reset */
   { "TXDMAEN", 14, 1 },  /* DMA transmission requests
              enable */
   { "RXDMAEN", 15, 1 },  /* DMA reception requests
              enable */
   { "SBC", 16, 1 },  /* Slave byte control */
   { "NOSTRETCH", 17, 1 },  /* Clock stretching disable */
   { "WUPEN", 18, 1 },  /* Wakeup from STOP enable */
   { "GCEN", 19, 1 },  /* General call enable */
   { "SMBHEN", 20, 1 },  /* SMBus Host address enable */
   { "SMBDEN", 21, 1 },  /* SMBus Device Default address
              enable */
   { "ALERTEN", 22, 1 },  /* SMBUS alert enable */
   { "PECEN", 23, 1 },  /* PEC enable */
   { NULL, 0, 0 }
};

const Field_t I2C1_CR2_fields[] = {
   { "SADD0", 0, 1 },  /* Slave address bit 0 (master
              mode) */
   { "SADD1", 1, 7 },  /* Slave address bit 7:1 (master
              mode) */
   { "SADD8", 8, 2 },  /* Slave address bit 9:8 (master
              mode) */
   { "RD_WRN", 10, 1 },  /* Transfer direction (master
              mode) */
   { "ADD10", 11, 1 },  /* 10-bit addressing mode (master
              mode) */
   { "HEAD10R", 12, 1 },  /* 10-bit address header only read
              direction (master receiver mode) */
   { "START", 13, 1 },  /* Start generation */
   { "STOP", 14, 1 },  /* Stop generation (master
              mode) */
   { "NACK", 15, 1 },  /* NACK generation (slave
              mode) */
   { "NBYTES", 16, 8 },  /* Number of bytes */
   { "RELOAD", 24, 1 },  /* NBYTES reload mode */
   { "AUTOEND", 25, 1 },  /* Automatic end mode (master
              mode) */
   { "PECBYTE", 26, 1 },  /* Packet error checking byte */
   { NULL, 0, 0 }
};

const Field_t I2C1_OAR1_fields[] = {
   { "OA1_0", 0, 1 },  /* Interface address */
   { "OA1_1", 1, 7 },  /* Interface address */
   { "OA1_8", 8, 2 },  /* Interface address */
   { "OA1MODE", 10, 1 },  /* Own Address 1 10-bit mode */
   { "OA1EN", 15, 1 },  /* Own Address 1 enable */
   { NULL, 0, 0 }
};

const Field_t I2C1_OAR2_fields[] = {
   { "OA2", 1, 7 },  /* Interface address */
   { "OA2MSK", 8, 3 },  /* Own Address 2 masks */
   { "OA2EN", 15, 1 },  /* Own Address 2 enable */
   { NULL, 0, 0 }
};

const Field_t I2C1_TIMINGR_fields[] = {
   { "SCLL", 0, 8 },  /* SCL low period (master
              mode) */
   { "SCLH", 8, 8 },  /* SCL high period (master
              mode) */
   { "SDADEL", 16, 4 },  /* Data hold time */
   { "SCLDEL", 20, 4 },  /* Data setup time */
   { "PRESC", 28, 4 },  /* Timing prescaler */
   { NULL, 0, 0 }
};

const Field_t I2C1_TIMEOUTR_fields[] = {
   { "TIMEOUTA", 0, 12 },  /* Bus timeout A */
   { "TIDLE", 12, 1 },  /* Idle clock timeout
              detection */
   { "TIMOUTEN", 15, 1 },  /* Clock timeout enable */
   { "TIMEOUTB", 16, 12 },  /* Bus timeout B */
   { "TEXTEN", 31, 1 },  /* Extended clock timeout
              enable */
   { NULL, 0, 0 }
};

const Field_t I2C1_ISR_fields[] = {
   { "TXE", 0, 1 },  /* Transmit data register empty
              (transmitters) */
   { "TXIS", 1, 1 },  /* Transmit interrupt status
              (transmitters) */
   { "RXNE", 2, 1 },  /* Receive data register not empty
              (receivers) */
   { "ADDR", 3, 1 },  /* Address matched (slave
              mode) */
   { "NACKF", 4, 1 },  /* Not acknowledge received
              flag */
   { "STOPF", 5, 1 },  /* Stop detection flag */
   { "TC", 6, 1 },  /* Transfer Complete (master
              mode) */
   { "TCR", 7, 1 },  /* Transfer Complete Reload */
   { "BERR", 8, 1 },  /* Bus error */
   { "ARLO", 9, 1 },  /* Arbitration lost */
   { "OVR", 10, 1 },  /* Overrun/Underrun (slave
              mode) */
   { "PECERR", 11, 1 },  /* PEC Error in reception */
   { "TIMEOUT", 12, 1 },  /* Timeout or t_low detection
              flag */
   { "ALERT", 13, 1 },  /* SMBus alert */
   { "BUSY", 15, 1 },  /* Bus busy */
   { "DIR", 16, 1 },  /* Transfer direction (Slave
              mode) */
   { "ADDCODE", 17, 7 },  /* Address match code (Slave
              mode) */
   { NULL, 0, 0 }
};

const Field_t I2C1_ICR_fields[] = {
   { "ADDRCF", 3, 1 },  /* Address Matched flag clear */
   { "NACKCF", 4, 1 },  /* Not Acknowledge flag clear */
   { "STOPCF", 5, 1 },  /* Stop detection flag clear */
   { "BERRCF", 8, 1 },  /* Bus error flag clear */
   { "ARLOCF", 9, 1 },  /* Arbitration lost flag
              clear */
   { "OVRCF", 10, 1 },  /* Overrun/Underrun flag
              clear */
   { "PECCF", 11, 1 },  /* PEC Error flag clear */
   { "TIMOUTCF", 12, 1 },  /* Timeout detection flag
              clear */
   { "ALERTCF", 13, 1 },  /* Alert flag clear */
   { NULL, 0, 0 }
};

const Field_t I2C1_PECR_fields[] = {
   { "PEC", 0, 8 },  /* Packet error checking
              register */
   { NULL, 0, 0 }
};

const Field_t I2C1_RXDR_fields[] = {
   { "RXDATA", 0, 8 },  /* 8-bit receive data */
   { NULL, 0, 0 }
};

const Field_t I2C1_TXDR_fields[] = {
   { "TXDATA", 0, 8 },  /* 8-bit transmit data */
   { NULL, 0, 0 }
};

const Register_t I2C1_registers[] = {
   {"CR1", 0, 32, 0, I2C1_CR1_fields}, /* Control register 1 */
   {"CR2", 4, 32, 0, I2C1_CR2_fields}, /* Control register 2 */
   {"OAR1", 8, 32, 0, I2C1_OAR1_fields}, /* Own address register 1 */
   {"OAR2", 12, 32, 0, I2C1_OAR2_fields}, /* Own address register 2 */
   {"TIMINGR", 16, 32, 0, I2C1_TIMINGR_fields}, /* Timing register */
   {"TIMEOUTR", 20, 32, 0, I2C1_TIMEOUTR_fields}, /* Status register 1 */
   {"ISR", 24, 32, 0, I2C1_ISR_fields}, /* Interrupt and Status register */
   {"ICR", 28, 32, 0, I2C1_ICR_fields}, /* Interrupt clear register */
   {"PECR", 32, 32, 0, I2C1_PECR_fields}, /* PEC register */
   {"RXDR", 36, 32, 0, I2C1_RXDR_fields}, /* Receive data register */
   {"TXDR", 40, 32, 0, I2C1_TXDR_fields}, /* Transmit data register */
   { NULL,0 ,0 ,0 , NULL }
};

const Field_t USB_FS_USB_EP0R_fields[] = {
   { "EA", 0, 4 },  /* Endpoint address */
   { "STAT_TX", 4, 2 },  /* Status bits, for transmission
              transfers */
   { "DTOG_TX", 6, 1 },  /* Data Toggle, for transmission
              transfers */
   { "CTR_TX", 7, 1 },  /* Correct Transfer for
              transmission */
   { "EP_KIND", 8, 1 },  /* Endpoint kind */
   { "EP_TYPE", 9, 2 },  /* Endpoint type */
   { "SETUP", 11, 1 },  /* Setup transaction
              completed */
   { "STAT_RX", 12, 2 },  /* Status bits, for reception
              transfers */
   { "DTOG_RX", 14, 1 },  /* Data Toggle, for reception
              transfers */
   { "CTR_RX", 15, 1 },  /* Correct transfer for
              reception */
   { NULL, 0, 0 }
};

const Field_t USB_FS_USB_EP1R_fields[] = {
   { "EA", 0, 4 },  /* Endpoint address */
   { "STAT_TX", 4, 2 },  /* Status bits, for transmission
              transfers */
   { "DTOG_TX", 6, 1 },  /* Data Toggle, for transmission
              transfers */
   { "CTR_TX", 7, 1 },  /* Correct Transfer for
              transmission */
   { "EP_KIND", 8, 1 },  /* Endpoint kind */
   { "EP_TYPE", 9, 2 },  /* Endpoint type */
   { "SETUP", 11, 1 },  /* Setup transaction
              completed */
   { "STAT_RX", 12, 2 },  /* Status bits, for reception
              transfers */
   { "DTOG_RX", 14, 1 },  /* Data Toggle, for reception
              transfers */
   { "CTR_RX", 15, 1 },  /* Correct transfer for
              reception */
   { NULL, 0, 0 }
};

const Field_t USB_FS_USB_EP2R_fields[] = {
   { "EA", 0, 4 },  /* Endpoint address */
   { "STAT_TX", 4, 2 },  /* Status bits, for transmission
              transfers */
   { "DTOG_TX", 6, 1 },  /* Data Toggle, for transmission
              transfers */
   { "CTR_TX", 7, 1 },  /* Correct Transfer for
              transmission */
   { "EP_KIND", 8, 1 },  /* Endpoint kind */
   { "EP_TYPE", 9, 2 },  /* Endpoint type */
   { "SETUP", 11, 1 },  /* Setup transaction
              completed */
   { "STAT_RX", 12, 2 },  /* Status bits, for reception
              transfers */
   { "DTOG_RX", 14, 1 },  /* Data Toggle, for reception
              transfers */
   { "CTR_RX", 15, 1 },  /* Correct transfer for
              reception */
   { NULL, 0, 0 }
};

const Field_t USB_FS_USB_EP3R_fields[] = {
   { "EA", 0, 4 },  /* Endpoint address */
   { "STAT_TX", 4, 2 },  /* Status bits, for transmission
              transfers */
   { "DTOG_TX", 6, 1 },  /* Data Toggle, for transmission
              transfers */
   { "CTR_TX", 7, 1 },  /* Correct Transfer for
              transmission */
   { "EP_KIND", 8, 1 },  /* Endpoint kind */
   { "EP_TYPE", 9, 2 },  /* Endpoint type */
   { "SETUP", 11, 1 },  /* Setup transaction
              completed */
   { "STAT_RX", 12, 2 },  /* Status bits, for reception
              transfers */
   { "DTOG_RX", 14, 1 },  /* Data Toggle, for reception
              transfers */
   { "CTR_RX", 15, 1 },  /* Correct transfer for
              reception */
   { NULL, 0, 0 }
};

const Field_t USB_FS_USB_EP4R_fields[] = {
   { "EA", 0, 4 },  /* Endpoint address */
   { "STAT_TX", 4, 2 },  /* Status bits, for transmission
              transfers */
   { "DTOG_TX", 6, 1 },  /* Data Toggle, for transmission
              transfers */
   { "CTR_TX", 7, 1 },  /* Correct Transfer for
              transmission */
   { "EP_KIND", 8, 1 },  /* Endpoint kind */
   { "EP_TYPE", 9, 2 },  /* Endpoint type */
   { "SETUP", 11, 1 },  /* Setup transaction
              completed */
   { "STAT_RX", 12, 2 },  /* Status bits, for reception
              transfers */
   { "DTOG_RX", 14, 1 },  /* Data Toggle, for reception
              transfers */
   { "CTR_RX", 15, 1 },  /* Correct transfer for
              reception */
   { NULL, 0, 0 }
};

const Field_t USB_FS_USB_EP5R_fields[] = {
   { "EA", 0, 4 },  /* Endpoint address */
   { "STAT_TX", 4, 2 },  /* Status bits, for transmission
              transfers */
   { "DTOG_TX", 6, 1 },  /* Data Toggle, for transmission
              transfers */
   { "CTR_TX", 7, 1 },  /* Correct Transfer for
              transmission */
   { "EP_KIND", 8, 1 },  /* Endpoint kind */
   { "EP_TYPE", 9, 2 },  /* Endpoint type */
   { "SETUP", 11, 1 },  /* Setup transaction
              completed */
   { "STAT_RX", 12, 2 },  /* Status bits, for reception
              transfers */
   { "DTOG_RX", 14, 1 },  /* Data Toggle, for reception
              transfers */
   { "CTR_RX", 15, 1 },  /* Correct transfer for
              reception */
   { NULL, 0, 0 }
};

const Field_t USB_FS_USB_EP6R_fields[] = {
   { "EA", 0, 4 },  /* Endpoint address */
   { "STAT_TX", 4, 2 },  /* Status bits, for transmission
              transfers */
   { "DTOG_TX", 6, 1 },  /* Data Toggle, for transmission
              transfers */
   { "CTR_TX", 7, 1 },  /* Correct Transfer for
              transmission */
   { "EP_KIND", 8, 1 },  /* Endpoint kind */
   { "EP_TYPE", 9, 2 },  /* Endpoint type */
   { "SETUP", 11, 1 },  /* Setup transaction
              completed */
   { "STAT_RX", 12, 2 },  /* Status bits, for reception
              transfers */
   { "DTOG_RX", 14, 1 },  /* Data Toggle, for reception
              transfers */
   { "CTR_RX", 15, 1 },  /* Correct transfer for
              reception */
   { NULL, 0, 0 }
};

const Field_t USB_FS_USB_EP7R_fields[] = {
   { "EA", 0, 4 },  /* Endpoint address */
   { "STAT_TX", 4, 2 },  /* Status bits, for transmission
              transfers */
   { "DTOG_TX", 6, 1 },  /* Data Toggle, for transmission
              transfers */
   { "CTR_TX", 7, 1 },  /* Correct Transfer for
              transmission */
   { "EP_KIND", 8, 1 },  /* Endpoint kind */
   { "EP_TYPE", 9, 2 },  /* Endpoint type */
   { "SETUP", 11, 1 },  /* Setup transaction
              completed */
   { "STAT_RX", 12, 2 },  /* Status bits, for reception
              transfers */
   { "DTOG_RX", 14, 1 },  /* Data Toggle, for reception
              transfers */
   { "CTR_RX", 15, 1 },  /* Correct transfer for
              reception */
   { NULL, 0, 0 }
};

const Field_t USB_FS_USB_CNTR_fields[] = {
   { "FRES", 0, 1 },  /* Force USB Reset */
   { "PDWN", 1, 1 },  /* Power down */
   { "LPMODE", 2, 1 },  /* Low-power mode */
   { "FSUSP", 3, 1 },  /* Force suspend */
   { "RESUME", 4, 1 },  /* Resume request */
   { "ESOFM", 8, 1 },  /* Expected start of frame interrupt
              mask */
   { "SOFM", 9, 1 },  /* Start of frame interrupt
              mask */
   { "RESETM", 10, 1 },  /* USB reset interrupt mask */
   { "SUSPM", 11, 1 },  /* Suspend mode interrupt
              mask */
   { "WKUPM", 12, 1 },  /* Wakeup interrupt mask */
   { "ERRM", 13, 1 },  /* Error interrupt mask */
   { "PMAOVRM", 14, 1 },  /* Packet memory area over / underrun
              interrupt mask */
   { "CTRM", 15, 1 },  /* Correct transfer interrupt
              mask */
   { NULL, 0, 0 }
};

const Field_t USB_FS_ISTR_fields[] = {
   { "EP_ID", 0, 4 },  /* Endpoint Identifier */
   { "DIR", 4, 1 },  /* Direction of transaction */
   { "ESOF", 8, 1 },  /* Expected start frame */
   { "SOF", 9, 1 },  /* start of frame */
   { "RESET", 10, 1 },  /* reset request */
   { "SUSP", 11, 1 },  /* Suspend mode request */
   { "WKUP", 12, 1 },  /* Wakeup */
   { "ERR", 13, 1 },  /* Error */
   { "PMAOVR", 14, 1 },  /* Packet memory area over /
              underrun */
   { "CTR", 15, 1 },  /* Correct transfer */
   { NULL, 0, 0 }
};

const Field_t USB_FS_FNR_fields[] = {
   { "FN", 0, 11 },  /* Frame number */
   { "LSOF", 11, 2 },  /* Lost SOF */
   { "LCK", 13, 1 },  /* Locked */
   { "RXDM", 14, 1 },  /* Receive data - line status */
   { "RXDP", 15, 1 },  /* Receive data + line status */
   { NULL, 0, 0 }
};

const Field_t USB_FS_DADDR_fields[] = {
   { "ADD", 0, 1 },  /* Device address */
   { "ADD1", 1, 1 },  /* Device address */
   { "ADD2", 2, 1 },  /* Device address */
   { "ADD3", 3, 1 },  /* Device address */
   { "ADD4", 4, 1 },  /* Device address */
   { "ADD5", 5, 1 },  /* Device address */
   { "ADD6", 6, 1 },  /* Device address */
   { "EF", 7, 1 },  /* Enable function */
   { NULL, 0, 0 }
};

const Field_t USB_FS_BTABLE_fields[] = {
   { "BTABLE", 3, 13 },  /* Buffer table */
   { NULL, 0, 0 }
};

const Register_t USB_FS_registers[] = {
   {"USB_EP0R", 0, 32, 0, USB_FS_USB_EP0R_fields}, /* endpoint 0 register */
   {"USB_EP1R", 4, 32, 0, USB_FS_USB_EP1R_fields}, /* endpoint 1 register */
   {"USB_EP2R", 8, 32, 0, USB_FS_USB_EP2R_fields}, /* endpoint 2 register */
   {"USB_EP3R", 12, 32, 0, USB_FS_USB_EP3R_fields}, /* endpoint 3 register */
   {"USB_EP4R", 16, 32, 0, USB_FS_USB_EP4R_fields}, /* endpoint 4 register */
   {"USB_EP5R", 20, 32, 0, USB_FS_USB_EP5R_fields}, /* endpoint 5 register */
   {"USB_EP6R", 24, 32, 0, USB_FS_USB_EP6R_fields}, /* endpoint 6 register */
   {"USB_EP7R", 28, 32, 0, USB_FS_USB_EP7R_fields}, /* endpoint 7 register */
   {"USB_CNTR", 64, 32, 0, USB_FS_USB_CNTR_fields}, /* control register */
   {"ISTR", 68, 32, 0, USB_FS_ISTR_fields}, /* interrupt status register */
   {"FNR", 72, 32, 0, USB_FS_FNR_fields}, /* frame number register */
   {"DADDR", 76, 32, 0, USB_FS_DADDR_fields}, /* device address */
   {"BTABLE", 80, 32, 0, USB_FS_BTABLE_fields}, /* Buffer table address */
   { NULL,0 ,0 ,0 , NULL }
};

const Field_t CAN_MCR_fields[] = {
   { "INRQ", 0, 1 },  /* INRQ */
   { "SLEEP", 1, 1 },  /* SLEEP */
   { "TXFP", 2, 1 },  /* TXFP */
   { "RFLM", 3, 1 },  /* RFLM */
   { "NART", 4, 1 },  /* NART */
   { "AWUM", 5, 1 },  /* AWUM */
   { "ABOM", 6, 1 },  /* ABOM */
   { "TTCM", 7, 1 },  /* TTCM */
   { "RESET", 15, 1 },  /* RESET */
   { "DBF", 16, 1 },  /* DBF */
   { NULL, 0, 0 }
};

const Field_t CAN_MSR_fields[] = {
   { "INAK", 0, 1 },  /* INAK */
   { "SLAK", 1, 1 },  /* SLAK */
   { "ERRI", 2, 1 },  /* ERRI */
   { "WKUI", 3, 1 },  /* WKUI */
   { "SLAKI", 4, 1 },  /* SLAKI */
   { "TXM", 8, 1 },  /* TXM */
   { "RXM", 9, 1 },  /* RXM */
   { "SAMP", 10, 1 },  /* SAMP */
   { "RX", 11, 1 },  /* RX */
   { NULL, 0, 0 }
};

const Field_t CAN_TSR_fields[] = {
   { "RQCP0", 0, 1 },  /* RQCP0 */
   { "TXOK0", 1, 1 },  /* TXOK0 */
   { "ALST0", 2, 1 },  /* ALST0 */
   { "TERR0", 3, 1 },  /* TERR0 */
   { "ABRQ0", 7, 1 },  /* ABRQ0 */
   { "RQCP1", 8, 1 },  /* RQCP1 */
   { "TXOK1", 9, 1 },  /* TXOK1 */
   { "ALST1", 10, 1 },  /* ALST1 */
   { "TERR1", 11, 1 },  /* TERR1 */
   { "ABRQ1", 15, 1 },  /* ABRQ1 */
   { "RQCP2", 16, 1 },  /* RQCP2 */
   { "TXOK2", 17, 1 },  /* TXOK2 */
   { "ALST2", 18, 1 },  /* ALST2 */
   { "TERR2", 19, 1 },  /* TERR2 */
   { "ABRQ2", 23, 1 },  /* ABRQ2 */
   { "CODE", 24, 2 },  /* CODE */
   { "TME0", 26, 1 },  /* Lowest priority flag for mailbox
              0 */
   { "TME1", 27, 1 },  /* Lowest priority flag for mailbox
              1 */
   { "TME2", 28, 1 },  /* Lowest priority flag for mailbox
              2 */
   { "LOW0", 29, 1 },  /* Lowest priority flag for mailbox
              0 */
   { "LOW1", 30, 1 },  /* Lowest priority flag for mailbox
              1 */
   { "LOW2", 31, 1 },  /* Lowest priority flag for mailbox
              2 */
   { NULL, 0, 0 }
};

const Field_t CAN_RF0R_fields[] = {
   { "FMP0", 0, 2 },  /* FMP0 */
   { "FULL0", 3, 1 },  /* FULL0 */
   { "FOVR0", 4, 1 },  /* FOVR0 */
   { "RFOM0", 5, 1 },  /* RFOM0 */
   { NULL, 0, 0 }
};

const Field_t CAN_RF1R_fields[] = {
   { "FMP1", 0, 2 },  /* FMP1 */
   { "FULL1", 3, 1 },  /* FULL1 */
   { "FOVR1", 4, 1 },  /* FOVR1 */
   { "RFOM1", 5, 1 },  /* RFOM1 */
   { NULL, 0, 0 }
};

const Field_t CAN_IER_fields[] = {
   { "TMEIE", 0, 1 },  /* TMEIE */
   { "FMPIE0", 1, 1 },  /* FMPIE0 */
   { "FFIE0", 2, 1 },  /* FFIE0 */
   { "FOVIE0", 3, 1 },  /* FOVIE0 */
   { "FMPIE1", 4, 1 },  /* FMPIE1 */
   { "FFIE1", 5, 1 },  /* FFIE1 */
   { "FOVIE1", 6, 1 },  /* FOVIE1 */
   { "EWGIE", 8, 1 },  /* EWGIE */
   { "EPVIE", 9, 1 },  /* EPVIE */
   { "BOFIE", 10, 1 },  /* BOFIE */
   { "LECIE", 11, 1 },  /* LECIE */
   { "ERRIE", 15, 1 },  /* ERRIE */
   { "WKUIE", 16, 1 },  /* WKUIE */
   { "SLKIE", 17, 1 },  /* SLKIE */
   { NULL, 0, 0 }
};

const Field_t CAN_ESR_fields[] = {
   { "EWGF", 0, 1 },  /* EWGF */
   { "EPVF", 1, 1 },  /* EPVF */
   { "BOFF", 2, 1 },  /* BOFF */
   { "LEC", 4, 3 },  /* LEC */
   { "TEC", 16, 8 },  /* TEC */
   { "REC", 24, 8 },  /* REC */
   { NULL, 0, 0 }
};

const Field_t CAN_BTR_fields[] = {
   { "BRP", 0, 10 },  /* BRP */
   { "TS1", 16, 4 },  /* TS1 */
   { "TS2", 20, 3 },  /* TS2 */
   { "SJW", 24, 2 },  /* SJW */
   { "LBKM", 30, 1 },  /* LBKM */
   { "SILM", 31, 1 },  /* SILM */
   { NULL, 0, 0 }
};

const Field_t CAN_TI0R_fields[] = {
   { "TXRQ", 0, 1 },  /* TXRQ */
   { "RTR", 1, 1 },  /* RTR */
   { "IDE", 2, 1 },  /* IDE */
   { "EXID", 3, 18 },  /* EXID */
   { "STID", 21, 11 },  /* STID */
   { NULL, 0, 0 }
};

const Field_t CAN_TDT0R_fields[] = {
   { "DLC", 0, 4 },  /* DLC */
   { "TGT", 8, 1 },  /* TGT */
   { "TIME", 16, 16 },  /* TIME */
   { NULL, 0, 0 }
};

const Field_t CAN_TDL0R_fields[] = {
   { "DATA0", 0, 8 },  /* DATA0 */
   { "DATA1", 8, 8 },  /* DATA1 */
   { "DATA2", 16, 8 },  /* DATA2 */
   { "DATA3", 24, 8 },  /* DATA3 */
   { NULL, 0, 0 }
};

const Field_t CAN_TDH0R_fields[] = {
   { "DATA4", 0, 8 },  /* DATA4 */
   { "DATA5", 8, 8 },  /* DATA5 */
   { "DATA6", 16, 8 },  /* DATA6 */
   { "DATA7", 24, 8 },  /* DATA7 */
   { NULL, 0, 0 }
};

const Field_t CAN_TI1R_fields[] = {
   { "TXRQ", 0, 1 },  /* TXRQ */
   { "RTR", 1, 1 },  /* RTR */
   { "IDE", 2, 1 },  /* IDE */
   { "EXID", 3, 18 },  /* EXID */
   { "STID", 21, 11 },  /* STID */
   { NULL, 0, 0 }
};

const Field_t CAN_TDT1R_fields[] = {
   { "DLC", 0, 4 },  /* DLC */
   { "TGT", 8, 1 },  /* TGT */
   { "TIME", 16, 16 },  /* TIME */
   { NULL, 0, 0 }
};

const Field_t CAN_TDL1R_fields[] = {
   { "DATA0", 0, 8 },  /* DATA0 */
   { "DATA1", 8, 8 },  /* DATA1 */
   { "DATA2", 16, 8 },  /* DATA2 */
   { "DATA3", 24, 8 },  /* DATA3 */
   { NULL, 0, 0 }
};

const Field_t CAN_TDH1R_fields[] = {
   { "DATA4", 0, 8 },  /* DATA4 */
   { "DATA5", 8, 8 },  /* DATA5 */
   { "DATA6", 16, 8 },  /* DATA6 */
   { "DATA7", 24, 8 },  /* DATA7 */
   { NULL, 0, 0 }
};

const Field_t CAN_TI2R_fields[] = {
   { "TXRQ", 0, 1 },  /* TXRQ */
   { "RTR", 1, 1 },  /* RTR */
   { "IDE", 2, 1 },  /* IDE */
   { "EXID", 3, 18 },  /* EXID */
   { "STID", 21, 11 },  /* STID */
   { NULL, 0, 0 }
};

const Field_t CAN_TDT2R_fields[] = {
   { "DLC", 0, 4 },  /* DLC */
   { "TGT", 8, 1 },  /* TGT */
   { "TIME", 16, 16 },  /* TIME */
   { NULL, 0, 0 }
};

const Field_t CAN_TDL2R_fields[] = {
   { "DATA0", 0, 8 },  /* DATA0 */
   { "DATA1", 8, 8 },  /* DATA1 */
   { "DATA2", 16, 8 },  /* DATA2 */
   { "DATA3", 24, 8 },  /* DATA3 */
   { NULL, 0, 0 }
};

const Field_t CAN_TDH2R_fields[] = {
   { "DATA4", 0, 8 },  /* DATA4 */
   { "DATA5", 8, 8 },  /* DATA5 */
   { "DATA6", 16, 8 },  /* DATA6 */
   { "DATA7", 24, 8 },  /* DATA7 */
   { NULL, 0, 0 }
};

const Field_t CAN_RI0R_fields[] = {
   { "RTR", 1, 1 },  /* RTR */
   { "IDE", 2, 1 },  /* IDE */
   { "EXID", 3, 18 },  /* EXID */
   { "STID", 21, 11 },  /* STID */
   { NULL, 0, 0 }
};

const Field_t CAN_RDT0R_fields[] = {
   { "DLC", 0, 4 },  /* DLC */
   { "FMI", 8, 8 },  /* FMI */
   { "TIME", 16, 16 },  /* TIME */
   { NULL, 0, 0 }
};

const Field_t CAN_RDL0R_fields[] = {
   { "DATA0", 0, 8 },  /* DATA0 */
   { "DATA1", 8, 8 },  /* DATA1 */
   { "DATA2", 16, 8 },  /* DATA2 */
   { "DATA3", 24, 8 },  /* DATA3 */
   { NULL, 0, 0 }
};

const Field_t CAN_RDH0R_fields[] = {
   { "DATA4", 0, 8 },  /* DATA4 */
   { "DATA5", 8, 8 },  /* DATA5 */
   { "DATA6", 16, 8 },  /* DATA6 */
   { "DATA7", 24, 8 },  /* DATA7 */
   { NULL, 0, 0 }
};

const Field_t CAN_RI1R_fields[] = {
   { "RTR", 1, 1 },  /* RTR */
   { "IDE", 2, 1 },  /* IDE */
   { "EXID", 3, 18 },  /* EXID */
   { "STID", 21, 11 },  /* STID */
   { NULL, 0, 0 }
};

const Field_t CAN_RDT1R_fields[] = {
   { "DLC", 0, 4 },  /* DLC */
   { "FMI", 8, 8 },  /* FMI */
   { "TIME", 16, 16 },  /* TIME */
   { NULL, 0, 0 }
};

const Field_t CAN_RDL1R_fields[] = {
   { "DATA0", 0, 8 },  /* DATA0 */
   { "DATA1", 8, 8 },  /* DATA1 */
   { "DATA2", 16, 8 },  /* DATA2 */
   { "DATA3", 24, 8 },  /* DATA3 */
   { NULL, 0, 0 }
};

const Field_t CAN_RDH1R_fields[] = {
   { "DATA4", 0, 8 },  /* DATA4 */
   { "DATA5", 8, 8 },  /* DATA5 */
   { "DATA6", 16, 8 },  /* DATA6 */
   { "DATA7", 24, 8 },  /* DATA7 */
   { NULL, 0, 0 }
};

const Field_t CAN_FMR_fields[] = {
   { "FINIT", 0, 1 },  /* Filter init mode */
   { "CAN2SB", 8, 6 },  /* CAN2 start bank */
   { NULL, 0, 0 }
};

const Field_t CAN_FM1R_fields[] = {
   { "FBM0", 0, 1 },  /* Filter mode */
   { "FBM1", 1, 1 },  /* Filter mode */
   { "FBM2", 2, 1 },  /* Filter mode */
   { "FBM3", 3, 1 },  /* Filter mode */
   { "FBM4", 4, 1 },  /* Filter mode */
   { "FBM5", 5, 1 },  /* Filter mode */
   { "FBM6", 6, 1 },  /* Filter mode */
   { "FBM7", 7, 1 },  /* Filter mode */
   { "FBM8", 8, 1 },  /* Filter mode */
   { "FBM9", 9, 1 },  /* Filter mode */
   { "FBM10", 10, 1 },  /* Filter mode */
   { "FBM11", 11, 1 },  /* Filter mode */
   { "FBM12", 12, 1 },  /* Filter mode */
   { "FBM13", 13, 1 },  /* Filter mode */
   { "FBM14", 14, 1 },  /* Filter mode */
   { "FBM15", 15, 1 },  /* Filter mode */
   { "FBM16", 16, 1 },  /* Filter mode */
   { "FBM17", 17, 1 },  /* Filter mode */
   { "FBM18", 18, 1 },  /* Filter mode */
   { "FBM19", 19, 1 },  /* Filter mode */
   { "FBM20", 20, 1 },  /* Filter mode */
   { "FBM21", 21, 1 },  /* Filter mode */
   { "FBM22", 22, 1 },  /* Filter mode */
   { "FBM23", 23, 1 },  /* Filter mode */
   { "FBM24", 24, 1 },  /* Filter mode */
   { "FBM25", 25, 1 },  /* Filter mode */
   { "FBM26", 26, 1 },  /* Filter mode */
   { "FBM27", 27, 1 },  /* Filter mode */
   { NULL, 0, 0 }
};

const Field_t CAN_FS1R_fields[] = {
   { "FSC0", 0, 1 },  /* Filter scale configuration */
   { "FSC1", 1, 1 },  /* Filter scale configuration */
   { "FSC2", 2, 1 },  /* Filter scale configuration */
   { "FSC3", 3, 1 },  /* Filter scale configuration */
   { "FSC4", 4, 1 },  /* Filter scale configuration */
   { "FSC5", 5, 1 },  /* Filter scale configuration */
   { "FSC6", 6, 1 },  /* Filter scale configuration */
   { "FSC7", 7, 1 },  /* Filter scale configuration */
   { "FSC8", 8, 1 },  /* Filter scale configuration */
   { "FSC9", 9, 1 },  /* Filter scale configuration */
   { "FSC10", 10, 1 },  /* Filter scale configuration */
   { "FSC11", 11, 1 },  /* Filter scale configuration */
   { "FSC12", 12, 1 },  /* Filter scale configuration */
   { "FSC13", 13, 1 },  /* Filter scale configuration */
   { "FSC14", 14, 1 },  /* Filter scale configuration */
   { "FSC15", 15, 1 },  /* Filter scale configuration */
   { "FSC16", 16, 1 },  /* Filter scale configuration */
   { "FSC17", 17, 1 },  /* Filter scale configuration */
   { "FSC18", 18, 1 },  /* Filter scale configuration */
   { "FSC19", 19, 1 },  /* Filter scale configuration */
   { "FSC20", 20, 1 },  /* Filter scale configuration */
   { "FSC21", 21, 1 },  /* Filter scale configuration */
   { "FSC22", 22, 1 },  /* Filter scale configuration */
   { "FSC23", 23, 1 },  /* Filter scale configuration */
   { "FSC24", 24, 1 },  /* Filter scale configuration */
   { "FSC25", 25, 1 },  /* Filter scale configuration */
   { "FSC26", 26, 1 },  /* Filter scale configuration */
   { "FSC27", 27, 1 },  /* Filter scale configuration */
   { NULL, 0, 0 }
};

const Field_t CAN_FFA1R_fields[] = {
   { "FFA0", 0, 1 },  /* Filter FIFO assignment for filter
              0 */
   { "FFA1", 1, 1 },  /* Filter FIFO assignment for filter
              1 */
   { "FFA2", 2, 1 },  /* Filter FIFO assignment for filter
              2 */
   { "FFA3", 3, 1 },  /* Filter FIFO assignment for filter
              3 */
   { "FFA4", 4, 1 },  /* Filter FIFO assignment for filter
              4 */
   { "FFA5", 5, 1 },  /* Filter FIFO assignment for filter
              5 */
   { "FFA6", 6, 1 },  /* Filter FIFO assignment for filter
              6 */
   { "FFA7", 7, 1 },  /* Filter FIFO assignment for filter
              7 */
   { "FFA8", 8, 1 },  /* Filter FIFO assignment for filter
              8 */
   { "FFA9", 9, 1 },  /* Filter FIFO assignment for filter
              9 */
   { "FFA10", 10, 1 },  /* Filter FIFO assignment for filter
              10 */
   { "FFA11", 11, 1 },  /* Filter FIFO assignment for filter
              11 */
   { "FFA12", 12, 1 },  /* Filter FIFO assignment for filter
              12 */
   { "FFA13", 13, 1 },  /* Filter FIFO assignment for filter
              13 */
   { "FFA14", 14, 1 },  /* Filter FIFO assignment for filter
              14 */
   { "FFA15", 15, 1 },  /* Filter FIFO assignment for filter
              15 */
   { "FFA16", 16, 1 },  /* Filter FIFO assignment for filter
              16 */
   { "FFA17", 17, 1 },  /* Filter FIFO assignment for filter
              17 */
   { "FFA18", 18, 1 },  /* Filter FIFO assignment for filter
              18 */
   { "FFA19", 19, 1 },  /* Filter FIFO assignment for filter
              19 */
   { "FFA20", 20, 1 },  /* Filter FIFO assignment for filter
              20 */
   { "FFA21", 21, 1 },  /* Filter FIFO assignment for filter
              21 */
   { "FFA22", 22, 1 },  /* Filter FIFO assignment for filter
              22 */
   { "FFA23", 23, 1 },  /* Filter FIFO assignment for filter
              23 */
   { "FFA24", 24, 1 },  /* Filter FIFO assignment for filter
              24 */
   { "FFA25", 25, 1 },  /* Filter FIFO assignment for filter
              25 */
   { "FFA26", 26, 1 },  /* Filter FIFO assignment for filter
              26 */
   { "FFA27", 27, 1 },  /* Filter FIFO assignment for filter
              27 */
   { NULL, 0, 0 }
};

const Field_t CAN_FA1R_fields[] = {
   { "FACT0", 0, 1 },  /* Filter active */
   { "FACT1", 1, 1 },  /* Filter active */
   { "FACT2", 2, 1 },  /* Filter active */
   { "FACT3", 3, 1 },  /* Filter active */
   { "FACT4", 4, 1 },  /* Filter active */
   { "FACT5", 5, 1 },  /* Filter active */
   { "FACT6", 6, 1 },  /* Filter active */
   { "FACT7", 7, 1 },  /* Filter active */
   { "FACT8", 8, 1 },  /* Filter active */
   { "FACT9", 9, 1 },  /* Filter active */
   { "FACT10", 10, 1 },  /* Filter active */
   { "FACT11", 11, 1 },  /* Filter active */
   { "FACT12", 12, 1 },  /* Filter active */
   { "FACT13", 13, 1 },  /* Filter active */
   { "FACT14", 14, 1 },  /* Filter active */
   { "FACT15", 15, 1 },  /* Filter active */
   { "FACT16", 16, 1 },  /* Filter active */
   { "FACT17", 17, 1 },  /* Filter active */
   { "FACT18", 18, 1 },  /* Filter active */
   { "FACT19", 19, 1 },  /* Filter active */
   { "FACT20", 20, 1 },  /* Filter active */
   { "FACT21", 21, 1 },  /* Filter active */
   { "FACT22", 22, 1 },  /* Filter active */
   { "FACT23", 23, 1 },  /* Filter active */
   { "FACT24", 24, 1 },  /* Filter active */
   { "FACT25", 25, 1 },  /* Filter active */
   { "FACT26", 26, 1 },  /* Filter active */
   { "FACT27", 27, 1 },  /* Filter active */
   { NULL, 0, 0 }
};

const Field_t CAN_F0R1_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F0R2_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F1R1_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F1R2_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F2R1_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F2R2_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F3R1_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F3R2_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F4R1_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F4R2_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F5R1_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F5R2_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F6R1_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F6R2_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F7R1_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F7R2_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F8R1_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F8R2_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F9R1_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F9R2_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F10R1_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F10R2_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F11R1_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F11R2_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F12R1_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F12R2_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F13R1_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F13R2_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F14R1_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F14R2_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F15R1_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F15R2_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F16R1_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F16R2_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F17R1_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F17R2_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F18R1_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F18R2_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F19R1_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F19R2_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F20R1_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F20R2_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F21R1_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F21R2_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F22R1_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F22R2_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F23R1_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F23R2_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F24R1_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F24R2_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F25R1_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F25R2_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F26R1_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F26R2_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F27R1_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Field_t CAN_F27R2_fields[] = {
   { "FB0", 0, 1 },  /* Filter bits */
   { "FB1", 1, 1 },  /* Filter bits */
   { "FB2", 2, 1 },  /* Filter bits */
   { "FB3", 3, 1 },  /* Filter bits */
   { "FB4", 4, 1 },  /* Filter bits */
   { "FB5", 5, 1 },  /* Filter bits */
   { "FB6", 6, 1 },  /* Filter bits */
   { "FB7", 7, 1 },  /* Filter bits */
   { "FB8", 8, 1 },  /* Filter bits */
   { "FB9", 9, 1 },  /* Filter bits */
   { "FB10", 10, 1 },  /* Filter bits */
   { "FB11", 11, 1 },  /* Filter bits */
   { "FB12", 12, 1 },  /* Filter bits */
   { "FB13", 13, 1 },  /* Filter bits */
   { "FB14", 14, 1 },  /* Filter bits */
   { "FB15", 15, 1 },  /* Filter bits */
   { "FB16", 16, 1 },  /* Filter bits */
   { "FB17", 17, 1 },  /* Filter bits */
   { "FB18", 18, 1 },  /* Filter bits */
   { "FB19", 19, 1 },  /* Filter bits */
   { "FB20", 20, 1 },  /* Filter bits */
   { "FB21", 21, 1 },  /* Filter bits */
   { "FB22", 22, 1 },  /* Filter bits */
   { "FB23", 23, 1 },  /* Filter bits */
   { "FB24", 24, 1 },  /* Filter bits */
   { "FB25", 25, 1 },  /* Filter bits */
   { "FB26", 26, 1 },  /* Filter bits */
   { "FB27", 27, 1 },  /* Filter bits */
   { "FB28", 28, 1 },  /* Filter bits */
   { "FB29", 29, 1 },  /* Filter bits */
   { "FB30", 30, 1 },  /* Filter bits */
   { "FB31", 31, 1 },  /* Filter bits */
   { NULL, 0, 0 }
};

const Register_t CAN_registers[] = {
   {"MCR", 0, 32, 0, CAN_MCR_fields}, /* master control register */
   {"MSR", 4, 32, 0, CAN_MSR_fields}, /* master status register */
   {"TSR", 8, 32, 0, CAN_TSR_fields}, /* transmit status register */
   {"RF0R", 12, 32, 0, CAN_RF0R_fields}, /* receive FIFO 0 register */
   {"RF1R", 16, 32, 0, CAN_RF1R_fields}, /* receive FIFO 1 register */
   {"IER", 20, 32, 0, CAN_IER_fields}, /* interrupt enable register */
   {"ESR", 24, 32, 0, CAN_ESR_fields}, /* error status register */
   {"BTR", 28, 32, 0, CAN_BTR_fields}, /* bit timing register */
   {"TI0R", 384, 32, 0, CAN_TI0R_fields}, /* TX mailbox identifier register */
   {"TDT0R", 388, 32, 0, CAN_TDT0R_fields}, /* mailbox data length control and time stamp
          register */
   {"TDL0R", 392, 32, 0, CAN_TDL0R_fields}, /* mailbox data low register */
   {"TDH0R", 396, 32, 0, CAN_TDH0R_fields}, /* mailbox data high register */
   {"TI1R", 400, 32, 0, CAN_TI1R_fields}, /* TX mailbox identifier register */
   {"TDT1R", 404, 32, 0, CAN_TDT1R_fields}, /* mailbox data length control and time stamp
          register */
   {"TDL1R", 408, 32, 0, CAN_TDL1R_fields}, /* mailbox data low register */
   {"TDH1R", 412, 32, 0, CAN_TDH1R_fields}, /* mailbox data high register */
   {"TI2R", 416, 32, 0, CAN_TI2R_fields}, /* TX mailbox identifier register */
   {"TDT2R", 420, 32, 0, CAN_TDT2R_fields}, /* mailbox data length control and time stamp
          register */
   {"TDL2R", 424, 32, 0, CAN_TDL2R_fields}, /* mailbox data low register */
   {"TDH2R", 428, 32, 0, CAN_TDH2R_fields}, /* mailbox data high register */
   {"RI0R", 432, 32, 0, CAN_RI0R_fields}, /* receive FIFO mailbox identifier
          register */
   {"RDT0R", 436, 32, 0, CAN_RDT0R_fields}, /* receive FIFO mailbox data length control and
          time stamp register */
   {"RDL0R", 440, 32, 0, CAN_RDL0R_fields}, /* receive FIFO mailbox data low
          register */
   {"RDH0R", 444, 32, 0, CAN_RDH0R_fields}, /* receive FIFO mailbox data high
          register */
   {"RI1R", 448, 32, 0, CAN_RI1R_fields}, /* receive FIFO mailbox identifier
          register */
   {"RDT1R", 452, 32, 0, CAN_RDT1R_fields}, /* receive FIFO mailbox data length control and
          time stamp register */
   {"RDL1R", 456, 32, 0, CAN_RDL1R_fields}, /* receive FIFO mailbox data low
          register */
   {"RDH1R", 460, 32, 0, CAN_RDH1R_fields}, /* receive FIFO mailbox data high
          register */
   {"FMR", 512, 32, 0, CAN_FMR_fields}, /* filter master register */
   {"FM1R", 516, 32, 0, CAN_FM1R_fields}, /* filter mode register */
   {"FS1R", 524, 32, 0, CAN_FS1R_fields}, /* filter scale register */
   {"FFA1R", 532, 32, 0, CAN_FFA1R_fields}, /* filter FIFO assignment
          register */
   {"FA1R", 540, 32, 0, CAN_FA1R_fields}, /* CAN filter activation register */
   {"F0R1", 576, 32, 0, CAN_F0R1_fields}, /* Filter bank 0 register 1 */
   {"F0R2", 580, 32, 0, CAN_F0R2_fields}, /* Filter bank 0 register 2 */
   {"F1R1", 584, 32, 0, CAN_F1R1_fields}, /* Filter bank 1 register 1 */
   {"F1R2", 588, 32, 0, CAN_F1R2_fields}, /* Filter bank 1 register 2 */
   {"F2R1", 592, 32, 0, CAN_F2R1_fields}, /* Filter bank 2 register 1 */
   {"F2R2", 596, 32, 0, CAN_F2R2_fields}, /* Filter bank 2 register 2 */
   {"F3R1", 600, 32, 0, CAN_F3R1_fields}, /* Filter bank 3 register 1 */
   {"F3R2", 604, 32, 0, CAN_F3R2_fields}, /* Filter bank 3 register 2 */
   {"F4R1", 608, 32, 0, CAN_F4R1_fields}, /* Filter bank 4 register 1 */
   {"F4R2", 612, 32, 0, CAN_F4R2_fields}, /* Filter bank 4 register 2 */
   {"F5R1", 616, 32, 0, CAN_F5R1_fields}, /* Filter bank 5 register 1 */
   {"F5R2", 620, 32, 0, CAN_F5R2_fields}, /* Filter bank 5 register 2 */
   {"F6R1", 624, 32, 0, CAN_F6R1_fields}, /* Filter bank 6 register 1 */
   {"F6R2", 628, 32, 0, CAN_F6R2_fields}, /* Filter bank 6 register 2 */
   {"F7R1", 632, 32, 0, CAN_F7R1_fields}, /* Filter bank 7 register 1 */
   {"F7R2", 636, 32, 0, CAN_F7R2_fields}, /* Filter bank 7 register 2 */
   {"F8R1", 640, 32, 0, CAN_F8R1_fields}, /* Filter bank 8 register 1 */
   {"F8R2", 644, 32, 0, CAN_F8R2_fields}, /* Filter bank 8 register 2 */
   {"F9R1", 648, 32, 0, CAN_F9R1_fields}, /* Filter bank 9 register 1 */
   {"F9R2", 652, 32, 0, CAN_F9R2_fields}, /* Filter bank 9 register 2 */
   {"F10R1", 656, 32, 0, CAN_F10R1_fields}, /* Filter bank 10 register 1 */
   {"F10R2", 660, 32, 0, CAN_F10R2_fields}, /* Filter bank 10 register 2 */
   {"F11R1", 664, 32, 0, CAN_F11R1_fields}, /* Filter bank 11 register 1 */
   {"F11R2", 668, 32, 0, CAN_F11R2_fields}, /* Filter bank 11 register 2 */
   {"F12R1", 672, 32, 0, CAN_F12R1_fields}, /* Filter bank 4 register 1 */
   {"F12R2", 676, 32, 0, CAN_F12R2_fields}, /* Filter bank 12 register 2 */
   {"F13R1", 680, 32, 0, CAN_F13R1_fields}, /* Filter bank 13 register 1 */
   {"F13R2", 684, 32, 0, CAN_F13R2_fields}, /* Filter bank 13 register 2 */
   {"F14R1", 688, 32, 0, CAN_F14R1_fields}, /* Filter bank 14 register 1 */
   {"F14R2", 692, 32, 0, CAN_F14R2_fields}, /* Filter bank 14 register 2 */
   {"F15R1", 696, 32, 0, CAN_F15R1_fields}, /* Filter bank 15 register 1 */
   {"F15R2", 700, 32, 0, CAN_F15R2_fields}, /* Filter bank 15 register 2 */
   {"F16R1", 704, 32, 0, CAN_F16R1_fields}, /* Filter bank 16 register 1 */
   {"F16R2", 708, 32, 0, CAN_F16R2_fields}, /* Filter bank 16 register 2 */
   {"F17R1", 712, 32, 0, CAN_F17R1_fields}, /* Filter bank 17 register 1 */
   {"F17R2", 716, 32, 0, CAN_F17R2_fields}, /* Filter bank 17 register 2 */
   {"F18R1", 720, 32, 0, CAN_F18R1_fields}, /* Filter bank 18 register 1 */
   {"F18R2", 724, 32, 0, CAN_F18R2_fields}, /* Filter bank 18 register 2 */
   {"F19R1", 728, 32, 0, CAN_F19R1_fields}, /* Filter bank 19 register 1 */
   {"F19R2", 732, 32, 0, CAN_F19R2_fields}, /* Filter bank 19 register 2 */
   {"F20R1", 736, 32, 0, CAN_F20R1_fields}, /* Filter bank 20 register 1 */
   {"F20R2", 740, 32, 0, CAN_F20R2_fields}, /* Filter bank 20 register 2 */
   {"F21R1", 744, 32, 0, CAN_F21R1_fields}, /* Filter bank 21 register 1 */
   {"F21R2", 748, 32, 0, CAN_F21R2_fields}, /* Filter bank 21 register 2 */
   {"F22R1", 752, 32, 0, CAN_F22R1_fields}, /* Filter bank 22 register 1 */
   {"F22R2", 756, 32, 0, CAN_F22R2_fields}, /* Filter bank 22 register 2 */
   {"F23R1", 760, 32, 0, CAN_F23R1_fields}, /* Filter bank 23 register 1 */
   {"F23R2", 764, 32, 0, CAN_F23R2_fields}, /* Filter bank 23 register 2 */
   {"F24R1", 768, 32, 0, CAN_F24R1_fields}, /* Filter bank 24 register 1 */
   {"F24R2", 772, 32, 0, CAN_F24R2_fields}, /* Filter bank 24 register 2 */
   {"F25R1", 776, 32, 0, CAN_F25R1_fields}, /* Filter bank 25 register 1 */
   {"F25R2", 780, 32, 0, CAN_F25R2_fields}, /* Filter bank 25 register 2 */
   {"F26R1", 784, 32, 0, CAN_F26R1_fields}, /* Filter bank 26 register 1 */
   {"F26R2", 788, 32, 0, CAN_F26R2_fields}, /* Filter bank 26 register 2 */
   {"F27R1", 792, 32, 0, CAN_F27R1_fields}, /* Filter bank 27 register 1 */
   {"F27R2", 796, 32, 0, CAN_F27R2_fields}, /* Filter bank 27 register 2 */
   { NULL,0 ,0 ,0 , NULL }
};

const Field_t PWR_CR_fields[] = {
   { "LPDS", 0, 1 },  /* Low-power deep sleep */
   { "PDDS", 1, 1 },  /* Power down deepsleep */
   { "CWUF", 2, 1 },  /* Clear wakeup flag */
   { "CSBF", 3, 1 },  /* Clear standby flag */
   { "PVDE", 4, 1 },  /* Power voltage detector
              enable */
   { "PLS", 5, 3 },  /* PVD level selection */
   { "DBP", 8, 1 },  /* Disable backup domain write
              protection */
   { NULL, 0, 0 }
};

const Field_t PWR_CSR_fields[] = {
   { "WUF", 0, 1 },  /* Wakeup flag */
   { "SBF", 1, 1 },  /* Standby flag */
   { "PVDO", 2, 1 },  /* PVD output */
   { "EWUP1", 8, 1 },  /* Enable WKUP1 pin */
   { "EWUP2", 9, 1 },  /* Enable WKUP2 pin */
   { NULL, 0, 0 }
};

const Register_t PWR_registers[] = {
   {"CR", 0, 32, 0, PWR_CR_fields}, /* power control register */
   {"CSR", 4, 32, 0, PWR_CSR_fields}, /* power control/status register */
   { NULL,0 ,0 ,0 , NULL }
};

const Field_t DAC_CR_fields[] = {
   { "EN1", 0, 1 },  /* DAC channel1 enable */
   { "BOFF1", 1, 1 },  /* DAC channel1 output buffer
              disable */
   { "TEN1", 2, 1 },  /* DAC channel1 trigger
              enable */
   { "TSEL1", 3, 3 },  /* DAC channel1 trigger
              selection */
   { "WAVE1", 6, 2 },  /* DAC channel1 noise/triangle wave
              generation enable */
   { "MAMP1", 8, 4 },  /* DAC channel1 mask/amplitude
              selector */
   { "DMAEN1", 12, 1 },  /* DAC channel1 DMA enable */
   { "DMAUDRIE1", 13, 1 },  /* DAC channel1 DMA Underrun Interrupt
              enable */
   { "EN2", 16, 1 },  /* DAC channel2 enable */
   { "BOFF2", 17, 1 },  /* DAC channel2 output buffer
              disable */
   { "TEN2", 18, 1 },  /* DAC channel2 trigger
              enable */
   { "TSEL2", 19, 3 },  /* DAC channel2 trigger
              selection */
   { "WAVE2", 22, 2 },  /* DAC channel2 noise/triangle wave
              generation enable */
   { "MAMP2", 24, 4 },  /* DAC channel2 mask/amplitude
              selector */
   { "DMAEN2", 28, 1 },  /* DAC channel2 DMA enable */
   { "DMAUDRIE2", 29, 1 },  /* DAC channel2 DMA underrun interrupt
              enable */
   { NULL, 0, 0 }
};

const Field_t DAC_SWTRIGR_fields[] = {
   { "SWTRIG1", 0, 1 },  /* DAC channel1 software
              trigger */
   { "SWTRIG2", 1, 1 },  /* DAC channel2 software
              trigger */
   { NULL, 0, 0 }
};

const Field_t DAC_DHR12R1_fields[] = {
   { "DACC1DHR", 0, 12 },  /* DAC channel1 12-bit right-aligned
              data */
   { NULL, 0, 0 }
};

const Field_t DAC_DHR12L1_fields[] = {
   { "DACC1DHR", 4, 12 },  /* DAC channel1 12-bit left-aligned
              data */
   { NULL, 0, 0 }
};

const Field_t DAC_DHR8R1_fields[] = {
   { "DACC1DHR", 0, 8 },  /* DAC channel1 8-bit right-aligned
              data */
   { NULL, 0, 0 }
};

const Field_t DAC_DHR12R2_fields[] = {
   { "DACC2DHR", 0, 12 },  /* DAC channel2 12-bit right-aligned
              data */
   { NULL, 0, 0 }
};

const Field_t DAC_DHR12L2_fields[] = {
   { "DACC2DHR", 4, 12 },  /* DAC channel2 12-bit left-aligned
              data */
   { NULL, 0, 0 }
};

const Field_t DAC_DHR8R2_fields[] = {
   { "DACC2DHR", 0, 8 },  /* DAC channel2 8-bit right-aligned
              data */
   { NULL, 0, 0 }
};

const Field_t DAC_DHR12RD_fields[] = {
   { "DACC1DHR", 0, 12 },  /* DAC channel1 12-bit right-aligned
              data */
   { "DACC2DHR", 16, 12 },  /* DAC channel2 12-bit right-aligned
              data */
   { NULL, 0, 0 }
};

const Field_t DAC_DHR12LD_fields[] = {
   { "DACC1DHR", 4, 12 },  /* DAC channel1 12-bit left-aligned
              data */
   { "DACC2DHR", 20, 12 },  /* DAC channel2 12-bit left-aligned
              data */
   { NULL, 0, 0 }
};

const Field_t DAC_DHR8RD_fields[] = {
   { "DACC1DHR", 0, 8 },  /* DAC channel1 8-bit right-aligned
              data */
   { "DACC2DHR", 8, 8 },  /* DAC channel2 8-bit right-aligned
              data */
   { NULL, 0, 0 }
};

const Field_t DAC_DOR1_fields[] = {
   { "DACC1DOR", 0, 12 },  /* DAC channel1 data output */
   { NULL, 0, 0 }
};

const Field_t DAC_DOR2_fields[] = {
   { "DACC2DOR", 0, 12 },  /* DAC channel2 data output */
   { NULL, 0, 0 }
};

const Field_t DAC_SR_fields[] = {
   { "DMAUDR1", 13, 1 },  /* DAC channel1 DMA underrun
              flag */
   { "DMAUDR2", 29, 1 },  /* DAC channel2 DMA underrun
              flag */
   { NULL, 0, 0 }
};

const Register_t DAC_registers[] = {
   {"CR", 0, 32, 0, DAC_CR_fields}, /* control register */
   {"SWTRIGR", 4, 32, 0, DAC_SWTRIGR_fields}, /* software trigger register */
   {"DHR12R1", 8, 32, 0, DAC_DHR12R1_fields}, /* channel1 12-bit right-aligned data holding
          register */
   {"DHR12L1", 12, 32, 0, DAC_DHR12L1_fields}, /* channel1 12-bit left aligned data holding
          register */
   {"DHR8R1", 16, 32, 0, DAC_DHR8R1_fields}, /* channel1 8-bit right aligned data holding
          register */
   {"DHR12R2", 20, 32, 0, DAC_DHR12R2_fields}, /* channel2 12-bit right aligned data holding
          register */
   {"DHR12L2", 24, 32, 0, DAC_DHR12L2_fields}, /* channel2 12-bit left aligned data holding
          register */
   {"DHR8R2", 28, 32, 0, DAC_DHR8R2_fields}, /* channel2 8-bit right-aligned data holding
          register */
   {"DHR12RD", 32, 32, 0, DAC_DHR12RD_fields}, /* Dual DAC 12-bit right-aligned data holding
          register */
   {"DHR12LD", 36, 32, 0, DAC_DHR12LD_fields}, /* DUAL DAC 12-bit left aligned data holding
          register */
   {"DHR8RD", 40, 32, 0, DAC_DHR8RD_fields}, /* DUAL DAC 8-bit right aligned data holding
          register */
   {"DOR1", 44, 32, 0, DAC_DOR1_fields}, /* channel1 data output register */
   {"DOR2", 48, 32, 0, DAC_DOR2_fields}, /* channel2 data output register */
   {"SR", 52, 32, 0, DAC_SR_fields}, /* status register */
   { NULL,0 ,0 ,0 , NULL }
};

const Field_t SYSCFG_CFGR1_fields[] = {
   { "MEM_MODE", 0, 2 },  /* Memory mapping selection
              bits */
   { "USB_IT_RMP", 5, 1 },  /* USB interrupt remap */
   { "TIM1_ITR_RMP", 6, 1 },  /* Timer 1 ITR3 selection */
   { "DAC_TRIG_RMP", 7, 1 },  /* DAC trigger remap (when TSEL =
              001) */
   { "ADC24_DMA_RMP", 8, 1 },  /* ADC24 DMA remapping bit */
   { "TIM16_DMA_RMP", 11, 1 },  /* TIM16 DMA request remapping
              bit */
   { "TIM17_DMA_RMP", 12, 1 },  /* TIM17 DMA request remapping
              bit */
   { "TIM6_DAC1_DMA_RMP", 13, 1 },  /* TIM6 and DAC1 DMA request remapping
              bit */
   { "TIM7_DAC2_DMA_RMP", 14, 1 },  /* TIM7 and DAC2 DMA request remapping
              bit */
   { "I2C_PB6_FM", 16, 1 },  /* Fast Mode Plus (FM+) driving capability
              activation bits. */
   { "I2C_PB7_FM", 17, 1 },  /* Fast Mode Plus (FM+) driving capability
              activation bits. */
   { "I2C_PB8_FM", 18, 1 },  /* Fast Mode Plus (FM+) driving capability
              activation bits. */
   { "I2C_PB9_FM", 19, 1 },  /* Fast Mode Plus (FM+) driving capability
              activation bits. */
   { "I2C1_FM", 20, 1 },  /* I2C1 Fast Mode Plus */
   { "I2C2_FM", 21, 1 },  /* I2C2 Fast Mode Plus */
   { "ENCODER_MODE", 22, 2 },  /* Encoder mode */
   { "FPU_IT", 26, 6 },  /* Interrupt enable bits from
              FPU */
   { NULL, 0, 0 }
};

const Field_t SYSCFG_RCR_fields[] = {
   { "PAGE0_WP", 0, 1 },  /* CCM SRAM page write protection
              bit */
   { "PAGE1_WP", 1, 1 },  /* CCM SRAM page write protection
              bit */
   { "PAGE2_WP", 2, 1 },  /* CCM SRAM page write protection
              bit */
   { "PAGE3_WP", 3, 1 },  /* CCM SRAM page write protection
              bit */
   { "PAGE4_WP", 4, 1 },  /* CCM SRAM page write protection
              bit */
   { "PAGE5_WP", 5, 1 },  /* CCM SRAM page write protection
              bit */
   { "PAGE6_WP", 6, 1 },  /* CCM SRAM page write protection
              bit */
   { "PAGE7_WP", 7, 1 },  /* CCM SRAM page write protection
              bit */
   { NULL, 0, 0 }
};

const Field_t SYSCFG_EXTICR1_fields[] = {
   { "EXTI0", 0, 4 },  /* EXTI 0 configuration bits */
   { "EXTI1", 4, 4 },  /* EXTI 1 configuration bits */
   { "EXTI2", 8, 4 },  /* EXTI 2 configuration bits */
   { "EXTI3", 12, 4 },  /* EXTI 3 configuration bits */
   { NULL, 0, 0 }
};

const Field_t SYSCFG_EXTICR2_fields[] = {
   { "EXTI4", 0, 4 },  /* EXTI 4 configuration bits */
   { "EXTI5", 4, 4 },  /* EXTI 5 configuration bits */
   { "EXTI6", 8, 4 },  /* EXTI 6 configuration bits */
   { "EXTI7", 12, 4 },  /* EXTI 7 configuration bits */
   { NULL, 0, 0 }
};

const Field_t SYSCFG_EXTICR3_fields[] = {
   { "EXTI8", 0, 4 },  /* EXTI 8 configuration bits */
   { "EXTI9", 4, 4 },  /* EXTI 9 configuration bits */
   { "EXTI10", 8, 4 },  /* EXTI 10 configuration bits */
   { "EXTI11", 12, 4 },  /* EXTI 11 configuration bits */
   { NULL, 0, 0 }
};

const Field_t SYSCFG_EXTICR4_fields[] = {
   { "EXTI12", 0, 4 },  /* EXTI 12 configuration bits */
   { "EXTI13", 4, 4 },  /* EXTI 13 configuration bits */
   { "EXTI14", 8, 4 },  /* EXTI 14 configuration bits */
   { "EXTI15", 12, 4 },  /* EXTI 15 configuration bits */
   { NULL, 0, 0 }
};

const Field_t SYSCFG_CFGR2_fields[] = {
   { "LOCUP_LOCK", 0, 1 },  /* Cortex-M0 LOCKUP bit enable
              bit */
   { "SRAM_PARITY_LOCK", 1, 1 },  /* SRAM parity lock bit */
   { "PVD_LOCK", 2, 1 },  /* PVD lock enable bit */
   { "BYP_ADD_PAR", 4, 1 },  /* Bypass address bit 29 in parity
              calculation */
   { "SRAM_PEF", 8, 1 },  /* SRAM parity flag */
   { NULL, 0, 0 }
};

const Register_t SYSCFG_registers[] = {
   {"CFGR1", 0, 32, 0, SYSCFG_CFGR1_fields}, /* configuration register 1 */
   {"RCR", 4, 32, 0, SYSCFG_RCR_fields}, /* CCM SRAM protection register */
   {"EXTICR1", 8, 32, 0, SYSCFG_EXTICR1_fields}, /* external interrupt configuration register
          1 */
   {"EXTICR2", 12, 32, 0, SYSCFG_EXTICR2_fields}, /* external interrupt configuration register
          2 */
   {"EXTICR3", 16, 32, 0, SYSCFG_EXTICR3_fields}, /* external interrupt configuration register
          3 */
   {"EXTICR4", 20, 32, 0, SYSCFG_EXTICR4_fields}, /* external interrupt configuration register
          4 */
   {"CFGR2", 24, 32, 0, SYSCFG_CFGR2_fields}, /* configuration register 2 */
   { NULL,0 ,0 ,0 , NULL }
};

const Field_t COMP_COMP1_CSR_fields[] = {
   { "COMP1EN", 0, 1 },  /* Comparator 1 enable */
   { "COMP1_INP_DAC", 1, 1 },  /* COMP1_INP_DAC */
   { "COMP1MODE", 2, 2 },  /* Comparator 1 mode */
   { "COMP1INSEL", 4, 3 },  /* Comparator 1 inverting input
              selection */
   { "COMP1_OUT_SEL", 10, 4 },  /* Comparator 1 output
              selection */
   { "COMP1POL", 15, 1 },  /* Comparator 1 output
              polarity */
   { "COMP1HYST", 16, 2 },  /* Comparator 1 hysteresis */
   { "COMP1_BLANKING", 18, 3 },  /* Comparator 1 blanking
              source */
   { "COMP1OUT", 30, 1 },  /* Comparator 1 output */
   { "COMP1LOCK", 31, 1 },  /* Comparator 1 lock */
   { NULL, 0, 0 }
};

const Field_t COMP_COMP2_CSR_fields[] = {
   { "COMP2EN", 0, 1 },  /* Comparator 2 enable */
   { "COMP2MODE", 2, 2 },  /* Comparator 2 mode */
   { "COMP2INSEL", 4, 3 },  /* Comparator 2 inverting input
              selection */
   { "COMP2INPSEL", 7, 1 },  /* Comparator 2 non inverted input
              selection */
   { "COMP2INMSEL", 9, 1 },  /* Comparator 1inverting input
              selection */
   { "COMP2_OUT_SEL", 10, 4 },  /* Comparator 2 output
              selection */
   { "COMP2POL", 15, 1 },  /* Comparator 2 output
              polarity */
   { "COMP2HYST", 16, 2 },  /* Comparator 2 hysteresis */
   { "COMP2_BLANKING", 18, 3 },  /* Comparator 2 blanking
              source */
   { "COMP2OUT", 30, 1 },  /* Comparator 2 output */
   { "COMP2LOCK", 31, 1 },  /* Comparator 2 lock */
   { NULL, 0, 0 }
};

const Field_t COMP_COMP3_CSR_fields[] = {
   { "COMP3EN", 0, 1 },  /* Comparator 3 enable */
   { "COMP3MODE", 2, 2 },  /* Comparator 3 mode */
   { "COMP3INSEL", 4, 3 },  /* Comparator 3 inverting input
              selection */
   { "COMP3INPSEL", 7, 1 },  /* Comparator 3 non inverted input
              selection */
   { "COMP3_OUT_SEL", 10, 4 },  /* Comparator 3 output
              selection */
   { "COMP3POL", 15, 1 },  /* Comparator 3 output
              polarity */
   { "COMP3HYST", 16, 2 },  /* Comparator 3 hysteresis */
   { "COMP3_BLANKING", 18, 3 },  /* Comparator 3 blanking
              source */
   { "COMP3OUT", 30, 1 },  /* Comparator 3 output */
   { "COMP3LOCK", 31, 1 },  /* Comparator 3 lock */
   { NULL, 0, 0 }
};

const Field_t COMP_COMP4_CSR_fields[] = {
   { "COMP4EN", 0, 1 },  /* Comparator 4 enable */
   { "COMP4MODE", 2, 2 },  /* Comparator 4 mode */
   { "COMP4INSEL", 4, 3 },  /* Comparator 4 inverting input
              selection */
   { "COMP4INPSEL", 7, 1 },  /* Comparator 4 non inverted input
              selection */
   { "COM4WINMODE", 9, 1 },  /* Comparator 4 window mode */
   { "COMP4_OUT_SEL", 10, 4 },  /* Comparator 4 output
              selection */
   { "COMP4POL", 15, 1 },  /* Comparator 4 output
              polarity */
   { "COMP4HYST", 16, 2 },  /* Comparator 4 hysteresis */
   { "COMP4_BLANKING", 18, 3 },  /* Comparator 4 blanking
              source */
   { "COMP4OUT", 30, 1 },  /* Comparator 4 output */
   { "COMP4LOCK", 31, 1 },  /* Comparator 4 lock */
   { NULL, 0, 0 }
};

const Field_t COMP_COMP5_CSR_fields[] = {
   { "COMP5EN", 0, 1 },  /* Comparator 5 enable */
   { "COMP5MODE", 2, 2 },  /* Comparator 5 mode */
   { "COMP5INSEL", 4, 3 },  /* Comparator 5 inverting input
              selection */
   { "COMP5INPSEL", 7, 1 },  /* Comparator 5 non inverted input
              selection */
   { "COMP5_OUT_SEL", 10, 4 },  /* Comparator 5 output
              selection */
   { "COMP5POL", 15, 1 },  /* Comparator 5 output
              polarity */
   { "COMP5HYST", 16, 2 },  /* Comparator 5 hysteresis */
   { "COMP5_BLANKING", 18, 3 },  /* Comparator 5 blanking
              source */
   { "COMP5OUT", 30, 1 },  /* Comparator51 output */
   { "COMP5LOCK", 31, 1 },  /* Comparator 5 lock */
   { NULL, 0, 0 }
};

const Field_t COMP_COMP6_CSR_fields[] = {
   { "COMP6EN", 0, 1 },  /* Comparator 6 enable */
   { "COMP6MODE", 2, 2 },  /* Comparator 6 mode */
   { "COMP6INSEL", 4, 3 },  /* Comparator 6 inverting input
              selection */
   { "COMP6INPSEL", 7, 1 },  /* Comparator 6 non inverted input
              selection */
   { "COM6WINMODE", 9, 1 },  /* Comparator 6 window mode */
   { "COMP6_OUT_SEL", 10, 4 },  /* Comparator 6 output
              selection */
   { "COMP6POL", 15, 1 },  /* Comparator 6 output
              polarity */
   { "COMP6HYST", 16, 2 },  /* Comparator 6 hysteresis */
   { "COMP6_BLANKING", 18, 3 },  /* Comparator 6 blanking
              source */
   { "COMP6OUT", 30, 1 },  /* Comparator 6 output */
   { "COMP6LOCK", 31, 1 },  /* Comparator 6 lock */
   { NULL, 0, 0 }
};

const Field_t COMP_COMP7_CSR_fields[] = {
   { "COMP7EN", 0, 1 },  /* Comparator 7 enable */
   { "COMP7MODE", 2, 2 },  /* Comparator 7 mode */
   { "COMP7INSEL", 4, 3 },  /* Comparator 7 inverting input
              selection */
   { "COMP7INPSEL", 7, 1 },  /* Comparator 7 non inverted input
              selection */
   { "COMP7_OUT_SEL", 10, 4 },  /* Comparator 7 output
              selection */
   { "COMP7POL", 15, 1 },  /* Comparator 7 output
              polarity */
   { "COMP7HYST", 16, 2 },  /* Comparator 7 hysteresis */
   { "COMP7_BLANKING", 18, 3 },  /* Comparator 7 blanking
              source */
   { "COMP7OUT", 30, 1 },  /* Comparator 7 output */
   { "COMP7LOCK", 31, 1 },  /* Comparator 7 lock */
   { NULL, 0, 0 }
};

const Register_t COMP_registers[] = {
   {"COMP1_CSR", 0, 32, 0, COMP_COMP1_CSR_fields}, /* control and status register */
   {"COMP2_CSR", 4, 32, 0, COMP_COMP2_CSR_fields}, /* control and status register */
   {"COMP3_CSR", 8, 32, 0, COMP_COMP3_CSR_fields}, /* control and status register */
   {"COMP4_CSR", 12, 32, 0, COMP_COMP4_CSR_fields}, /* control and status register */
   {"COMP5_CSR", 16, 32, 0, COMP_COMP5_CSR_fields}, /* control and status register */
   {"COMP6_CSR", 20, 32, 0, COMP_COMP6_CSR_fields}, /* control and status register */
   {"COMP7_CSR", 24, 32, 0, COMP_COMP7_CSR_fields}, /* control and status register */
   { NULL,0 ,0 ,0 , NULL }
};

const Field_t OPAMP_OPAMP1_CR_fields[] = {
   { "OPAMP1_EN", 0, 1 },  /* OPAMP1 enable */
   { "FORCE_VP", 1, 1 },  /* FORCE_VP */
   { "VP_SEL", 2, 2 },  /* OPAMP1 Non inverting input
              selection */
   { "VM_SEL", 5, 2 },  /* OPAMP1 inverting input
              selection */
   { "TCM_EN", 7, 1 },  /* Timer controlled Mux mode
              enable */
   { "VMS_SEL", 8, 1 },  /* OPAMP1 inverting input secondary
              selection */
   { "VPS_SEL", 9, 2 },  /* OPAMP1 Non inverting input secondary
              selection */
   { "CALON", 11, 1 },  /* Calibration mode enable */
   { "CALSEL", 12, 2 },  /* Calibration selection */
   { "PGA_GAIN", 14, 4 },  /* Gain in PGA mode */
   { "USER_TRIM", 18, 1 },  /* User trimming enable */
   { "TRIMOFFSETP", 19, 5 },  /* Offset trimming value
              (PMOS) */
   { "TRIMOFFSETN", 24, 5 },  /* Offset trimming value
              (NMOS) */
   { "TSTREF", 29, 1 },  /* TSTREF */
   { "OUTCAL", 30, 1 },  /* OPAMP 1 ouput status flag */
   { "LOCK", 31, 1 },  /* OPAMP 1 lock */
   { NULL, 0, 0 }
};

const Field_t OPAMP_OPAMP2_CR_fields[] = {
   { "OPAMP2EN", 0, 1 },  /* OPAMP2 enable */
   { "FORCE_VP", 1, 1 },  /* FORCE_VP */
   { "VP_SEL", 2, 2 },  /* OPAMP2 Non inverting input
              selection */
   { "VM_SEL", 5, 2 },  /* OPAMP2 inverting input
              selection */
   { "TCM_EN", 7, 1 },  /* Timer controlled Mux mode
              enable */
   { "VMS_SEL", 8, 1 },  /* OPAMP2 inverting input secondary
              selection */
   { "VPS_SEL", 9, 2 },  /* OPAMP2 Non inverting input secondary
              selection */
   { "CALON", 11, 1 },  /* Calibration mode enable */
   { "CAL_SEL", 12, 2 },  /* Calibration selection */
   { "PGA_GAIN", 14, 4 },  /* Gain in PGA mode */
   { "USER_TRIM", 18, 1 },  /* User trimming enable */
   { "TRIMOFFSETP", 19, 5 },  /* Offset trimming value
              (PMOS) */
   { "TRIMOFFSETN", 24, 5 },  /* Offset trimming value
              (NMOS) */
   { "TSTREF", 29, 1 },  /* TSTREF */
   { "OUTCAL", 30, 1 },  /* OPAMP 2 ouput status flag */
   { "LOCK", 31, 1 },  /* OPAMP 2 lock */
   { NULL, 0, 0 }
};

const Field_t OPAMP_OPAMP3_CR_fields[] = {
   { "OPAMP3EN", 0, 1 },  /* OPAMP3 enable */
   { "FORCE_VP", 1, 1 },  /* FORCE_VP */
   { "VP_SEL", 2, 2 },  /* OPAMP3 Non inverting input
              selection */
   { "VM_SEL", 5, 2 },  /* OPAMP3 inverting input
              selection */
   { "TCM_EN", 7, 1 },  /* Timer controlled Mux mode
              enable */
   { "VMS_SEL", 8, 1 },  /* OPAMP3 inverting input secondary
              selection */
   { "VPS_SEL", 9, 2 },  /* OPAMP3 Non inverting input secondary
              selection */
   { "CALON", 11, 1 },  /* Calibration mode enable */
   { "CALSEL", 12, 2 },  /* Calibration selection */
   { "PGA_GAIN", 14, 4 },  /* Gain in PGA mode */
   { "USER_TRIM", 18, 1 },  /* User trimming enable */
   { "TRIMOFFSETP", 19, 5 },  /* Offset trimming value
              (PMOS) */
   { "TRIMOFFSETN", 24, 5 },  /* Offset trimming value
              (NMOS) */
   { "TSTREF", 29, 1 },  /* TSTREF */
   { "OUTCAL", 30, 1 },  /* OPAMP 3 ouput status flag */
   { "LOCK", 31, 1 },  /* OPAMP 3 lock */
   { NULL, 0, 0 }
};

const Field_t OPAMP_OPAMP4_CR_fields[] = {
   { "OPAMP4EN", 0, 1 },  /* OPAMP4 enable */
   { "FORCE_VP", 1, 1 },  /* FORCE_VP */
   { "VP_SEL", 2, 2 },  /* OPAMP4 Non inverting input
              selection */
   { "VM_SEL", 5, 2 },  /* OPAMP4 inverting input
              selection */
   { "TCM_EN", 7, 1 },  /* Timer controlled Mux mode
              enable */
   { "VMS_SEL", 8, 1 },  /* OPAMP4 inverting input secondary
              selection */
   { "VPS_SEL", 9, 2 },  /* OPAMP4 Non inverting input secondary
              selection */
   { "CALON", 11, 1 },  /* Calibration mode enable */
   { "CALSEL", 12, 2 },  /* Calibration selection */
   { "PGA_GAIN", 14, 4 },  /* Gain in PGA mode */
   { "USER_TRIM", 18, 1 },  /* User trimming enable */
   { "TRIMOFFSETP", 19, 5 },  /* Offset trimming value
              (PMOS) */
   { "TRIMOFFSETN", 24, 5 },  /* Offset trimming value
              (NMOS) */
   { "TSTREF", 29, 1 },  /* TSTREF */
   { "OUTCAL", 30, 1 },  /* OPAMP 4 ouput status flag */
   { "LOCK", 31, 1 },  /* OPAMP 4 lock */
   { NULL, 0, 0 }
};

const Register_t OPAMP_registers[] = {
   {"OPAMP1_CR", 0, 32, 0, OPAMP_OPAMP1_CR_fields}, /* OPAMP1 control register */
   {"OPAMP2_CR", 4, 32, 0, OPAMP_OPAMP2_CR_fields}, /* OPAMP2 control register */
   {"OPAMP3_CR", 8, 32, 0, OPAMP_OPAMP3_CR_fields}, /* OPAMP3 control register */
   {"OPAMP4_CR", 12, 32, 0, OPAMP_OPAMP4_CR_fields}, /* OPAMP4 control register */
   { NULL,0 ,0 ,0 , NULL }
};

const Field_t EXTI_IMR1_fields[] = {
   { "MR0", 0, 1 },  /* Interrupt Mask on line 0 */
   { "MR1", 1, 1 },  /* Interrupt Mask on line 1 */
   { "MR2", 2, 1 },  /* Interrupt Mask on line 2 */
   { "MR3", 3, 1 },  /* Interrupt Mask on line 3 */
   { "MR4", 4, 1 },  /* Interrupt Mask on line 4 */
   { "MR5", 5, 1 },  /* Interrupt Mask on line 5 */
   { "MR6", 6, 1 },  /* Interrupt Mask on line 6 */
   { "MR7", 7, 1 },  /* Interrupt Mask on line 7 */
   { "MR8", 8, 1 },  /* Interrupt Mask on line 8 */
   { "MR9", 9, 1 },  /* Interrupt Mask on line 9 */
   { "MR10", 10, 1 },  /* Interrupt Mask on line 10 */
   { "MR11", 11, 1 },  /* Interrupt Mask on line 11 */
   { "MR12", 12, 1 },  /* Interrupt Mask on line 12 */
   { "MR13", 13, 1 },  /* Interrupt Mask on line 13 */
   { "MR14", 14, 1 },  /* Interrupt Mask on line 14 */
   { "MR15", 15, 1 },  /* Interrupt Mask on line 15 */
   { "MR16", 16, 1 },  /* Interrupt Mask on line 16 */
   { "MR17", 17, 1 },  /* Interrupt Mask on line 17 */
   { "MR18", 18, 1 },  /* Interrupt Mask on line 18 */
   { "MR19", 19, 1 },  /* Interrupt Mask on line 19 */
   { "MR20", 20, 1 },  /* Interrupt Mask on line 20 */
   { "MR21", 21, 1 },  /* Interrupt Mask on line 21 */
   { "MR22", 22, 1 },  /* Interrupt Mask on line 22 */
   { "MR23", 23, 1 },  /* Interrupt Mask on line 23 */
   { "MR24", 24, 1 },  /* Interrupt Mask on line 24 */
   { "MR25", 25, 1 },  /* Interrupt Mask on line 25 */
   { "MR26", 26, 1 },  /* Interrupt Mask on line 26 */
   { "MR27", 27, 1 },  /* Interrupt Mask on line 27 */
   { "MR28", 28, 1 },  /* Interrupt Mask on line 28 */
   { "MR29", 29, 1 },  /* Interrupt Mask on line 29 */
   { "MR30", 30, 1 },  /* Interrupt Mask on line 30 */
   { "MR31", 31, 1 },  /* Interrupt Mask on line 31 */
   { NULL, 0, 0 }
};

const Field_t EXTI_EMR1_fields[] = {
   { "MR0", 0, 1 },  /* Event Mask on line 0 */
   { "MR1", 1, 1 },  /* Event Mask on line 1 */
   { "MR2", 2, 1 },  /* Event Mask on line 2 */
   { "MR3", 3, 1 },  /* Event Mask on line 3 */
   { "MR4", 4, 1 },  /* Event Mask on line 4 */
   { "MR5", 5, 1 },  /* Event Mask on line 5 */
   { "MR6", 6, 1 },  /* Event Mask on line 6 */
   { "MR7", 7, 1 },  /* Event Mask on line 7 */
   { "MR8", 8, 1 },  /* Event Mask on line 8 */
   { "MR9", 9, 1 },  /* Event Mask on line 9 */
   { "MR10", 10, 1 },  /* Event Mask on line 10 */
   { "MR11", 11, 1 },  /* Event Mask on line 11 */
   { "MR12", 12, 1 },  /* Event Mask on line 12 */
   { "MR13", 13, 1 },  /* Event Mask on line 13 */
   { "MR14", 14, 1 },  /* Event Mask on line 14 */
   { "MR15", 15, 1 },  /* Event Mask on line 15 */
   { "MR16", 16, 1 },  /* Event Mask on line 16 */
   { "MR17", 17, 1 },  /* Event Mask on line 17 */
   { "MR18", 18, 1 },  /* Event Mask on line 18 */
   { "MR19", 19, 1 },  /* Event Mask on line 19 */
   { "MR20", 20, 1 },  /* Event Mask on line 20 */
   { "MR21", 21, 1 },  /* Event Mask on line 21 */
   { "MR22", 22, 1 },  /* Event Mask on line 22 */
   { "MR23", 23, 1 },  /* Event Mask on line 23 */
   { "MR24", 24, 1 },  /* Event Mask on line 24 */
   { "MR25", 25, 1 },  /* Event Mask on line 25 */
   { "MR26", 26, 1 },  /* Event Mask on line 26 */
   { "MR27", 27, 1 },  /* Event Mask on line 27 */
   { "MR28", 28, 1 },  /* Event Mask on line 28 */
   { "MR29", 29, 1 },  /* Event Mask on line 29 */
   { "MR30", 30, 1 },  /* Event Mask on line 30 */
   { "MR31", 31, 1 },  /* Event Mask on line 31 */
   { NULL, 0, 0 }
};

const Field_t EXTI_RTSR1_fields[] = {
   { "TR0", 0, 1 },  /* Rising trigger event configuration of
              line 0 */
   { "TR1", 1, 1 },  /* Rising trigger event configuration of
              line 1 */
   { "TR2", 2, 1 },  /* Rising trigger event configuration of
              line 2 */
   { "TR3", 3, 1 },  /* Rising trigger event configuration of
              line 3 */
   { "TR4", 4, 1 },  /* Rising trigger event configuration of
              line 4 */
   { "TR5", 5, 1 },  /* Rising trigger event configuration of
              line 5 */
   { "TR6", 6, 1 },  /* Rising trigger event configuration of
              line 6 */
   { "TR7", 7, 1 },  /* Rising trigger event configuration of
              line 7 */
   { "TR8", 8, 1 },  /* Rising trigger event configuration of
              line 8 */
   { "TR9", 9, 1 },  /* Rising trigger event configuration of
              line 9 */
   { "TR10", 10, 1 },  /* Rising trigger event configuration of
              line 10 */
   { "TR11", 11, 1 },  /* Rising trigger event configuration of
              line 11 */
   { "TR12", 12, 1 },  /* Rising trigger event configuration of
              line 12 */
   { "TR13", 13, 1 },  /* Rising trigger event configuration of
              line 13 */
   { "TR14", 14, 1 },  /* Rising trigger event configuration of
              line 14 */
   { "TR15", 15, 1 },  /* Rising trigger event configuration of
              line 15 */
   { "TR16", 16, 1 },  /* Rising trigger event configuration of
              line 16 */
   { "TR17", 17, 1 },  /* Rising trigger event configuration of
              line 17 */
   { "TR18", 18, 1 },  /* Rising trigger event configuration of
              line 18 */
   { "TR19", 19, 1 },  /* Rising trigger event configuration of
              line 19 */
   { "TR20", 20, 1 },  /* Rising trigger event configuration of
              line 20 */
   { "TR21", 21, 1 },  /* Rising trigger event configuration of
              line 21 */
   { "TR22", 22, 1 },  /* Rising trigger event configuration of
              line 22 */
   { "TR29", 29, 1 },  /* Rising trigger event configuration of
              line 29 */
   { "TR30", 30, 1 },  /* Rising trigger event configuration of
              line 30 */
   { "TR31", 31, 1 },  /* Rising trigger event configuration of
              line 31 */
   { NULL, 0, 0 }
};

const Field_t EXTI_FTSR1_fields[] = {
   { "TR0", 0, 1 },  /* Falling trigger event configuration of
              line 0 */
   { "TR1", 1, 1 },  /* Falling trigger event configuration of
              line 1 */
   { "TR2", 2, 1 },  /* Falling trigger event configuration of
              line 2 */
   { "TR3", 3, 1 },  /* Falling trigger event configuration of
              line 3 */
   { "TR4", 4, 1 },  /* Falling trigger event configuration of
              line 4 */
   { "TR5", 5, 1 },  /* Falling trigger event configuration of
              line 5 */
   { "TR6", 6, 1 },  /* Falling trigger event configuration of
              line 6 */
   { "TR7", 7, 1 },  /* Falling trigger event configuration of
              line 7 */
   { "TR8", 8, 1 },  /* Falling trigger event configuration of
              line 8 */
   { "TR9", 9, 1 },  /* Falling trigger event configuration of
              line 9 */
   { "TR10", 10, 1 },  /* Falling trigger event configuration of
              line 10 */
   { "TR11", 11, 1 },  /* Falling trigger event configuration of
              line 11 */
   { "TR12", 12, 1 },  /* Falling trigger event configuration of
              line 12 */
   { "TR13", 13, 1 },  /* Falling trigger event configuration of
              line 13 */
   { "TR14", 14, 1 },  /* Falling trigger event configuration of
              line 14 */
   { "TR15", 15, 1 },  /* Falling trigger event configuration of
              line 15 */
   { "TR16", 16, 1 },  /* Falling trigger event configuration of
              line 16 */
   { "TR17", 17, 1 },  /* Falling trigger event configuration of
              line 17 */
   { "TR18", 18, 1 },  /* Falling trigger event configuration of
              line 18 */
   { "TR19", 19, 1 },  /* Falling trigger event configuration of
              line 19 */
   { "TR20", 20, 1 },  /* Falling trigger event configuration of
              line 20 */
   { "TR21", 21, 1 },  /* Falling trigger event configuration of
              line 21 */
   { "TR22", 22, 1 },  /* Falling trigger event configuration of
              line 22 */
   { "TR29", 29, 1 },  /* Falling trigger event configuration of
              line 29 */
   { "TR30", 30, 1 },  /* Falling trigger event configuration of
              line 30. */
   { "TR31", 31, 1 },  /* Falling trigger event configuration of
              line 31 */
   { NULL, 0, 0 }
};

const Field_t EXTI_SWIER1_fields[] = {
   { "SWIER0", 0, 1 },  /* Software Interrupt on line
              0 */
   { "SWIER1", 1, 1 },  /* Software Interrupt on line
              1 */
   { "SWIER2", 2, 1 },  /* Software Interrupt on line
              2 */
   { "SWIER3", 3, 1 },  /* Software Interrupt on line
              3 */
   { "SWIER4", 4, 1 },  /* Software Interrupt on line
              4 */
   { "SWIER5", 5, 1 },  /* Software Interrupt on line
              5 */
   { "SWIER6", 6, 1 },  /* Software Interrupt on line
              6 */
   { "SWIER7", 7, 1 },  /* Software Interrupt on line
              7 */
   { "SWIER8", 8, 1 },  /* Software Interrupt on line
              8 */
   { "SWIER9", 9, 1 },  /* Software Interrupt on line
              9 */
   { "SWIER10", 10, 1 },  /* Software Interrupt on line
              10 */
   { "SWIER11", 11, 1 },  /* Software Interrupt on line
              11 */
   { "SWIER12", 12, 1 },  /* Software Interrupt on line
              12 */
   { "SWIER13", 13, 1 },  /* Software Interrupt on line
              13 */
   { "SWIER14", 14, 1 },  /* Software Interrupt on line
              14 */
   { "SWIER15", 15, 1 },  /* Software Interrupt on line
              15 */
   { "SWIER16", 16, 1 },  /* Software Interrupt on line
              16 */
   { "SWIER17", 17, 1 },  /* Software Interrupt on line
              17 */
   { "SWIER18", 18, 1 },  /* Software Interrupt on line
              18 */
   { "SWIER19", 19, 1 },  /* Software Interrupt on line
              19 */
   { "SWIER20", 20, 1 },  /* Software Interrupt on line
              20 */
   { "SWIER21", 21, 1 },  /* Software Interrupt on line
              21 */
   { "SWIER22", 22, 1 },  /* Software Interrupt on line
              22 */
   { "SWIER29", 29, 1 },  /* Software Interrupt on line
              29 */
   { "SWIER30", 30, 1 },  /* Software Interrupt on line
              309 */
   { "SWIER31", 31, 1 },  /* Software Interrupt on line
              319 */
   { NULL, 0, 0 }
};

const Field_t EXTI_PR1_fields[] = {
   { "PR0", 0, 1 },  /* Pending bit 0 */
   { "PR1", 1, 1 },  /* Pending bit 1 */
   { "PR2", 2, 1 },  /* Pending bit 2 */
   { "PR3", 3, 1 },  /* Pending bit 3 */
   { "PR4", 4, 1 },  /* Pending bit 4 */
   { "PR5", 5, 1 },  /* Pending bit 5 */
   { "PR6", 6, 1 },  /* Pending bit 6 */
   { "PR7", 7, 1 },  /* Pending bit 7 */
   { "PR8", 8, 1 },  /* Pending bit 8 */
   { "PR9", 9, 1 },  /* Pending bit 9 */
   { "PR10", 10, 1 },  /* Pending bit 10 */
   { "PR11", 11, 1 },  /* Pending bit 11 */
   { "PR12", 12, 1 },  /* Pending bit 12 */
   { "PR13", 13, 1 },  /* Pending bit 13 */
   { "PR14", 14, 1 },  /* Pending bit 14 */
   { "PR15", 15, 1 },  /* Pending bit 15 */
   { "PR16", 16, 1 },  /* Pending bit 16 */
   { "PR17", 17, 1 },  /* Pending bit 17 */
   { "PR18", 18, 1 },  /* Pending bit 18 */
   { "PR19", 19, 1 },  /* Pending bit 19 */
   { "PR20", 20, 1 },  /* Pending bit 20 */
   { "PR21", 21, 1 },  /* Pending bit 21 */
   { "PR22", 22, 1 },  /* Pending bit 22 */
   { "PR29", 29, 1 },  /* Pending bit 29 */
   { "PR30", 30, 1 },  /* Pending bit 30 */
   { "PR31", 31, 1 },  /* Pending bit 31 */
   { NULL, 0, 0 }
};

const Field_t EXTI_IMR2_fields[] = {
   { "MR32", 0, 1 },  /* Interrupt Mask on external/internal line
              32 */
   { "MR33", 1, 1 },  /* Interrupt Mask on external/internal line
              33 */
   { "MR34", 2, 1 },  /* Interrupt Mask on external/internal line
              34 */
   { "MR35", 3, 1 },  /* Interrupt Mask on external/internal line
              35 */
   { NULL, 0, 0 }
};

const Field_t EXTI_EMR2_fields[] = {
   { "MR32", 0, 1 },  /* Event mask on external/internal line
              32 */
   { "MR33", 1, 1 },  /* Event mask on external/internal line
              33 */
   { "MR34", 2, 1 },  /* Event mask on external/internal line
              34 */
   { "MR35", 3, 1 },  /* Event mask on external/internal line
              35 */
   { NULL, 0, 0 }
};

const Field_t EXTI_RTSR2_fields[] = {
   { "TR32", 0, 1 },  /* Rising trigger event configuration bit
              of line 32 */
   { "TR33", 1, 1 },  /* Rising trigger event configuration bit
              of line 33 */
   { NULL, 0, 0 }
};

const Field_t EXTI_FTSR2_fields[] = {
   { "TR32", 0, 1 },  /* Falling trigger event configuration bit
              of line 32 */
   { "TR33", 1, 1 },  /* Falling trigger event configuration bit
              of line 33 */
   { NULL, 0, 0 }
};

const Field_t EXTI_SWIER2_fields[] = {
   { "SWIER32", 0, 1 },  /* Software interrupt on line
              32 */
   { "SWIER33", 1, 1 },  /* Software interrupt on line
              33 */
   { NULL, 0, 0 }
};

const Field_t EXTI_PR2_fields[] = {
   { "PR32", 0, 1 },  /* Pending bit on line 32 */
   { "PR33", 1, 1 },  /* Pending bit on line 33 */
   { NULL, 0, 0 }
};

const Register_t EXTI_registers[] = {
   {"IMR1", 0, 32, 0, EXTI_IMR1_fields}, /* Interrupt mask register */
   {"EMR1", 4, 32, 0, EXTI_EMR1_fields}, /* Event mask register */
   {"RTSR1", 8, 32, 0, EXTI_RTSR1_fields}, /* Rising Trigger selection
          register */
   {"FTSR1", 12, 32, 0, EXTI_FTSR1_fields}, /* Falling Trigger selection
          register */
   {"SWIER1", 16, 32, 0, EXTI_SWIER1_fields}, /* Software interrupt event
          register */
   {"PR1", 20, 32, 0, EXTI_PR1_fields}, /* Pending register */
   {"IMR2", 24, 32, 0, EXTI_IMR2_fields}, /* Interrupt mask register */
   {"EMR2", 28, 32, 0, EXTI_EMR2_fields}, /* Event mask register */
   {"RTSR2", 32, 32, 0, EXTI_RTSR2_fields}, /* Rising Trigger selection
          register */
   {"FTSR2", 36, 32, 0, EXTI_FTSR2_fields}, /* Falling Trigger selection
          register */
   {"SWIER2", 40, 32, 0, EXTI_SWIER2_fields}, /* Software interrupt event
          register */
   {"PR2", 44, 32, 0, EXTI_PR2_fields}, /* Pending register */
   { NULL,0 ,0 ,0 , NULL }
};

const Field_t TIM1_CR1_fields[] = {
   { "CEN", 0, 1 },  /* Counter enable */
   { "UDIS", 1, 1 },  /* Update disable */
   { "URS", 2, 1 },  /* Update request source */
   { "OPM", 3, 1 },  /* One-pulse mode */
   { "DIR", 4, 1 },  /* Direction */
   { "CMS", 5, 2 },  /* Center-aligned mode
              selection */
   { "ARPE", 7, 1 },  /* Auto-reload preload enable */
   { "CKD", 8, 2 },  /* Clock division */
   { "UIFREMAP", 11, 1 },  /* UIF status bit remapping */
   { NULL, 0, 0 }
};

const Field_t TIM1_CR2_fields[] = {
   { "CCPC", 0, 1 },  /* Capture/compare preloaded
              control */
   { "CCUS", 2, 1 },  /* Capture/compare control update
              selection */
   { "CCDS", 3, 1 },  /* Capture/compare DMA
              selection */
   { "MMS", 4, 3 },  /* Master mode selection */
   { "TI1S", 7, 1 },  /* TI1 selection */
   { "OIS1", 8, 1 },  /* Output Idle state 1 */
   { "OIS1N", 9, 1 },  /* Output Idle state 1 */
   { "OIS2", 10, 1 },  /* Output Idle state 2 */
   { "OIS2N", 11, 1 },  /* Output Idle state 2 */
   { "OIS3", 12, 1 },  /* Output Idle state 3 */
   { "OIS3N", 13, 1 },  /* Output Idle state 3 */
   { "OIS4", 14, 1 },  /* Output Idle state 4 */
   { "OIS5", 16, 1 },  /* Output Idle state 5 */
   { "OIS6", 18, 1 },  /* Output Idle state 6 */
   { "MMS2", 20, 4 },  /* Master mode selection 2 */
   { NULL, 0, 0 }
};

const Field_t TIM1_SMCR_fields[] = {
   { "SMS", 0, 3 },  /* Slave mode selection */
   { "OCCS", 3, 1 },  /* OCREF clear selection */
   { "TS", 4, 3 },  /* Trigger selection */
   { "MSM", 7, 1 },  /* Master/Slave mode */
   { "ETF", 8, 4 },  /* External trigger filter */
   { "ETPS", 12, 2 },  /* External trigger prescaler */
   { "ECE", 14, 1 },  /* External clock enable */
   { "ETP", 15, 1 },  /* External trigger polarity */
   { "SMS3", 16, 1 },  /* Slave mode selection bit 3 */
   { NULL, 0, 0 }
};

const Field_t TIM1_DIER_fields[] = {
   { "UIE", 0, 1 },  /* Update interrupt enable */
   { "CC1IE", 1, 1 },  /* Capture/Compare 1 interrupt
              enable */
   { "CC2IE", 2, 1 },  /* Capture/Compare 2 interrupt
              enable */
   { "CC3IE", 3, 1 },  /* Capture/Compare 3 interrupt
              enable */
   { "CC4IE", 4, 1 },  /* Capture/Compare 4 interrupt
              enable */
   { "COMIE", 5, 1 },  /* COM interrupt enable */
   { "TIE", 6, 1 },  /* Trigger interrupt enable */
   { "BIE", 7, 1 },  /* Break interrupt enable */
   { "UDE", 8, 1 },  /* Update DMA request enable */
   { "CC1DE", 9, 1 },  /* Capture/Compare 1 DMA request
              enable */
   { "CC2DE", 10, 1 },  /* Capture/Compare 2 DMA request
              enable */
   { "CC3DE", 11, 1 },  /* Capture/Compare 3 DMA request
              enable */
   { "CC4DE", 12, 1 },  /* Capture/Compare 4 DMA request
              enable */
   { "COMDE", 13, 1 },  /* Reserved */
   { "TDE", 14, 1 },  /* Trigger DMA request enable */
   { NULL, 0, 0 }
};

const Field_t TIM1_SR_fields[] = {
   { "UIF", 0, 1 },  /* Update interrupt flag */
   { "CC1IF", 1, 1 },  /* Capture/compare 1 interrupt
              flag */
   { "CC2IF", 2, 1 },  /* Capture/Compare 2 interrupt
              flag */
   { "CC3IF", 3, 1 },  /* Capture/Compare 3 interrupt
              flag */
   { "CC4IF", 4, 1 },  /* Capture/Compare 4 interrupt
              flag */
   { "COMIF", 5, 1 },  /* COM interrupt flag */
   { "TIF", 6, 1 },  /* Trigger interrupt flag */
   { "BIF", 7, 1 },  /* Break interrupt flag */
   { "B2IF", 8, 1 },  /* Break 2 interrupt flag */
   { "CC1OF", 9, 1 },  /* Capture/Compare 1 overcapture
              flag */
   { "CC2OF", 10, 1 },  /* Capture/compare 2 overcapture
              flag */
   { "CC3OF", 11, 1 },  /* Capture/Compare 3 overcapture
              flag */
   { "CC4OF", 12, 1 },  /* Capture/Compare 4 overcapture
              flag */
   { "C5IF", 16, 1 },  /* Capture/Compare 5 interrupt
              flag */
   { "C6IF", 17, 1 },  /* Capture/Compare 6 interrupt
              flag */
   { NULL, 0, 0 }
};

const Field_t TIM1_EGR_fields[] = {
   { "UG", 0, 1 },  /* Update generation */
   { "CC1G", 1, 1 },  /* Capture/compare 1
              generation */
   { "CC2G", 2, 1 },  /* Capture/compare 2
              generation */
   { "CC3G", 3, 1 },  /* Capture/compare 3
              generation */
   { "CC4G", 4, 1 },  /* Capture/compare 4
              generation */
   { "COMG", 5, 1 },  /* Capture/Compare control update
              generation */
   { "TG", 6, 1 },  /* Trigger generation */
   { "BG", 7, 1 },  /* Break generation */
   { "B2G", 8, 1 },  /* Break 2 generation */
   { NULL, 0, 0 }
};

const Field_t TIM1_CCMR1_Output_fields[] = {
   { "CC1S", 0, 2 },  /* Capture/Compare 1
              selection */
   { "OC1FE", 2, 1 },  /* Output Compare 1 fast
              enable */
   { "OC1PE", 3, 1 },  /* Output Compare 1 preload
              enable */
   { "OC1M", 4, 3 },  /* Output Compare 1 mode */
   { "OC1CE", 7, 1 },  /* Output Compare 1 clear
              enable */
   { "CC2S", 8, 2 },  /* Capture/Compare 2
              selection */
   { "OC2FE", 10, 1 },  /* Output Compare 2 fast
              enable */
   { "OC2PE", 11, 1 },  /* Output Compare 2 preload
              enable */
   { "OC2M", 12, 3 },  /* Output Compare 2 mode */
   { "OC2CE", 15, 1 },  /* Output Compare 2 clear
              enable */
   { "OC1M_3", 16, 1 },  /* Output Compare 1 mode bit
              3 */
   { "OC2M_3", 24, 1 },  /* Output Compare 2 mode bit
              3 */
   { NULL, 0, 0 }
};

const Field_t TIM1_CCMR1_Input_fields[] = {
   { "CC1S", 0, 2 },  /* Capture/Compare 1
              selection */
   { "IC1PCS", 2, 2 },  /* Input capture 1 prescaler */
   { "IC1F", 4, 4 },  /* Input capture 1 filter */
   { "CC2S", 8, 2 },  /* Capture/Compare 2
              selection */
   { "IC2PCS", 10, 2 },  /* Input capture 2 prescaler */
   { "IC2F", 12, 4 },  /* Input capture 2 filter */
   { NULL, 0, 0 }
};

const Field_t TIM1_CCMR2_Input_fields[] = {
   { "CC3S", 0, 2 },  /* Capture/compare 3
              selection */
   { "IC3PSC", 2, 2 },  /* Input capture 3 prescaler */
   { "IC3F", 4, 4 },  /* Input capture 3 filter */
   { "CC4S", 8, 2 },  /* Capture/Compare 4
              selection */
   { "IC4PSC", 10, 2 },  /* Input capture 4 prescaler */
   { "IC4F", 12, 4 },  /* Input capture 4 filter */
   { NULL, 0, 0 }
};

const Field_t TIM1_CCMR2_Output_fields[] = {
   { "CC3S", 0, 2 },  /* Capture/Compare 3
              selection */
   { "OC3FE", 2, 1 },  /* Output compare 3 fast
              enable */
   { "OC3PE", 3, 1 },  /* Output compare 3 preload
              enable */
   { "OC3M", 4, 3 },  /* Output compare 3 mode */
   { "OC3CE", 7, 1 },  /* Output compare 3 clear
              enable */
   { "CC4S", 8, 2 },  /* Capture/Compare 4
              selection */
   { "OC4FE", 10, 1 },  /* Output compare 4 fast
              enable */
   { "OC4PE", 11, 1 },  /* Output compare 4 preload
              enable */
   { "OC4M", 12, 3 },  /* Output compare 4 mode */
   { "OC4CE", 15, 1 },  /* Output compare 4 clear
              enable */
   { "OC3M_3", 16, 1 },  /* Output Compare 3 mode bit
              3 */
   { "OC4M_3", 24, 1 },  /* Output Compare 4 mode bit
              3 */
   { NULL, 0, 0 }
};

const Field_t TIM1_CCER_fields[] = {
   { "CC1E", 0, 1 },  /* Capture/Compare 1 output
              enable */
   { "CC1P", 1, 1 },  /* Capture/Compare 1 output
              Polarity */
   { "CC1NE", 2, 1 },  /* Capture/Compare 1 complementary output
              enable */
   { "CC1NP", 3, 1 },  /* Capture/Compare 1 output
              Polarity */
   { "CC2E", 4, 1 },  /* Capture/Compare 2 output
              enable */
   { "CC2P", 5, 1 },  /* Capture/Compare 2 output
              Polarity */
   { "CC2NE", 6, 1 },  /* Capture/Compare 2 complementary output
              enable */
   { "CC2NP", 7, 1 },  /* Capture/Compare 2 output
              Polarity */
   { "CC3E", 8, 1 },  /* Capture/Compare 3 output
              enable */
   { "CC3P", 9, 1 },  /* Capture/Compare 3 output
              Polarity */
   { "CC3NE", 10, 1 },  /* Capture/Compare 3 complementary output
              enable */
   { "CC3NP", 11, 1 },  /* Capture/Compare 3 output
              Polarity */
   { "CC4E", 12, 1 },  /* Capture/Compare 4 output
              enable */
   { "CC4P", 13, 1 },  /* Capture/Compare 3 output
              Polarity */
   { "CC4NP", 15, 1 },  /* Capture/Compare 4 output
              Polarity */
   { "CC5E", 16, 1 },  /* Capture/Compare 5 output
              enable */
   { "CC5P", 17, 1 },  /* Capture/Compare 5 output
              Polarity */
   { "CC6E", 20, 1 },  /* Capture/Compare 6 output
              enable */
   { "CC6P", 21, 1 },  /* Capture/Compare 6 output
              Polarity */
   { NULL, 0, 0 }
};

const Field_t TIM1_CNT_fields[] = {
   { "CNT", 0, 16 },  /* counter value */
   { "UIFCPY", 31, 1 },  /* UIF copy */
   { NULL, 0, 0 }
};

const Field_t TIM1_PSC_fields[] = {
   { "PSC", 0, 16 },  /* Prescaler value */
   { NULL, 0, 0 }
};

const Field_t TIM1_ARR_fields[] = {
   { "ARR", 0, 16 },  /* Auto-reload value */
   { NULL, 0, 0 }
};

const Field_t TIM1_RCR_fields[] = {
   { "REP", 0, 16 },  /* Repetition counter value */
   { NULL, 0, 0 }
};

const Field_t TIM1_CCR1_fields[] = {
   { "CCR1", 0, 16 },  /* Capture/Compare 1 value */
   { NULL, 0, 0 }
};

const Field_t TIM1_CCR2_fields[] = {
   { "CCR2", 0, 16 },  /* Capture/Compare 2 value */
   { NULL, 0, 0 }
};

const Field_t TIM1_CCR3_fields[] = {
   { "CCR3", 0, 16 },  /* Capture/Compare 3 value */
   { NULL, 0, 0 }
};

const Field_t TIM1_CCR4_fields[] = {
   { "CCR4", 0, 16 },  /* Capture/Compare 3 value */
   { NULL, 0, 0 }
};

const Field_t TIM1_BDTR_fields[] = {
   { "DTG", 0, 8 },  /* Dead-time generator setup */
   { "LOCK", 8, 2 },  /* Lock configuration */
   { "OSSI", 10, 1 },  /* Off-state selection for Idle
              mode */
   { "OSSR", 11, 1 },  /* Off-state selection for Run
              mode */
   { "BKE", 12, 1 },  /* Break enable */
   { "BKP", 13, 1 },  /* Break polarity */
   { "AOE", 14, 1 },  /* Automatic output enable */
   { "MOE", 15, 1 },  /* Main output enable */
   { "BKF", 16, 4 },  /* Break filter */
   { "BK2F", 20, 4 },  /* Break 2 filter */
   { "BK2E", 24, 1 },  /* Break 2 enable */
   { "BK2P", 25, 1 },  /* Break 2 polarity */
   { NULL, 0, 0 }
};

const Field_t TIM1_DCR_fields[] = {
   { "DBA", 0, 5 },  /* DMA base address */
   { "DBL", 8, 5 },  /* DMA burst length */
   { NULL, 0, 0 }
};

const Field_t TIM1_DMAR_fields[] = {
   { "DMAB", 0, 16 },  /* DMA register for burst
              accesses */
   { NULL, 0, 0 }
};

const Field_t TIM1_CCMR3_Output_fields[] = {
   { "OC5FE", 2, 1 },  /* Output compare 5 fast
              enable */
   { "OC5PE", 3, 1 },  /* Output compare 5 preload
              enable */
   { "OC5M", 4, 3 },  /* Output compare 5 mode */
   { "OC5CE", 7, 1 },  /* Output compare 5 clear
              enable */
   { "OC6FE", 10, 1 },  /* Output compare 6 fast
              enable */
   { "OC6PE", 11, 1 },  /* Output compare 6 preload
              enable */
   { "OC6M", 12, 3 },  /* Output compare 6 mode */
   { "OC6CE", 15, 1 },  /* Output compare 6 clear
              enable */
   { "OC5M_3", 16, 1 },  /* Outout Compare 5 mode bit
              3 */
   { "OC6M_3", 24, 1 },  /* Outout Compare 6 mode bit
              3 */
   { NULL, 0, 0 }
};

const Field_t TIM1_CCR5_fields[] = {
   { "CCR5", 0, 16 },  /* Capture/Compare 5 value */
   { "GC5C1", 29, 1 },  /* Group Channel 5 and Channel
              1 */
   { "GC5C2", 30, 1 },  /* Group Channel 5 and Channel
              2 */
   { "GC5C3", 31, 1 },  /* Group Channel 5 and Channel
              3 */
   { NULL, 0, 0 }
};

const Field_t TIM1_CCR6_fields[] = {
   { "CCR6", 0, 16 },  /* Capture/Compare 6 value */
   { NULL, 0, 0 }
};

const Field_t TIM1_OR_fields[] = {
   { "TIM1_ETR_ADC1_RMP", 0, 2 },  /* TIM1_ETR_ADC1 remapping
              capability */
   { "TIM1_ETR_ADC4_RMP", 2, 2 },  /* TIM1_ETR_ADC4 remapping
              capability */
   { NULL, 0, 0 }
};

const Register_t TIM1_registers[] = {
   {"CR1", 0, 32, 0, TIM1_CR1_fields}, /* control register 1 */
   {"CR2", 4, 32, 0, TIM1_CR2_fields}, /* control register 2 */
   {"SMCR", 8, 32, 0, TIM1_SMCR_fields}, /* slave mode control register */
   {"DIER", 12, 32, 0, TIM1_DIER_fields}, /* DMA/Interrupt enable register */
   {"SR", 16, 32, 0, TIM1_SR_fields}, /* status register */
   {"EGR", 20, 32, 0, TIM1_EGR_fields}, /* event generation register */
   {"CCMR1_Output", 24, 32, 0, TIM1_CCMR1_Output_fields}, /* capture/compare mode register (output
          mode) */
   {"CCMR1_Input", 24, 32, 0, TIM1_CCMR1_Input_fields}, /* capture/compare mode register 1 (input
          mode) */
   {"CCMR2_Input", 28, 32, 0, TIM1_CCMR2_Input_fields}, /* capture/compare mode register 2 (input
          mode) */
   {"CCMR2_Output", 28, 32, 0, TIM1_CCMR2_Output_fields}, /* capture/compare mode register (output
          mode) */
   {"CCER", 32, 32, 0, TIM1_CCER_fields}, /* capture/compare enable
          register */
   {"CNT", 36, 32, 0, TIM1_CNT_fields}, /* counter */
   {"PSC", 40, 32, 0, TIM1_PSC_fields}, /* prescaler */
   {"ARR", 44, 32, 0, TIM1_ARR_fields}, /* auto-reload register */
   {"RCR", 48, 32, 0, TIM1_RCR_fields}, /* repetition counter register */
   {"CCR1", 52, 32, 0, TIM1_CCR1_fields}, /* capture/compare register 1 */
   {"CCR2", 56, 32, 0, TIM1_CCR2_fields}, /* capture/compare register 2 */
   {"CCR3", 60, 32, 0, TIM1_CCR3_fields}, /* capture/compare register 3 */
   {"CCR4", 64, 32, 0, TIM1_CCR4_fields}, /* capture/compare register 4 */
   {"BDTR", 68, 32, 0, TIM1_BDTR_fields}, /* break and dead-time register */
   {"DCR", 72, 32, 0, TIM1_DCR_fields}, /* DMA control register */
   {"DMAR", 76, 32, 0, TIM1_DMAR_fields}, /* DMA address for full transfer */
   {"CCMR3_Output", 84, 32, 0, TIM1_CCMR3_Output_fields}, /* capture/compare mode register 3 (output
          mode) */
   {"CCR5", 88, 32, 0, TIM1_CCR5_fields}, /* capture/compare register 5 */
   {"CCR6", 92, 32, 0, TIM1_CCR6_fields}, /* capture/compare register 6 */
   {"OR", 96, 32, 0, TIM1_OR_fields}, /* option registers */
   { NULL,0 ,0 ,0 , NULL }
};

const Field_t SPI1_CR1_fields[] = {
   { "CPHA", 0, 1 },  /* Clock phase */
   { "CPOL", 1, 1 },  /* Clock polarity */
   { "MSTR", 2, 1 },  /* Master selection */
   { "BR", 3, 3 },  /* Baud rate control */
   { "SPE", 6, 1 },  /* SPI enable */
   { "LSBFIRST", 7, 1 },  /* Frame format */
   { "SSI", 8, 1 },  /* Internal slave select */
   { "SSM", 9, 1 },  /* Software slave management */
   { "RXONLY", 10, 1 },  /* Receive only */
   { "DFF", 11, 1 },  /* Data frame format */
   { "CRCNEXT", 12, 1 },  /* CRC transfer next */
   { "CRCEN", 13, 1 },  /* Hardware CRC calculation
              enable */
   { "BIDIOE", 14, 1 },  /* Output enable in bidirectional
              mode */
   { "BIDIMODE", 15, 1 },  /* Bidirectional data mode
              enable */
   { NULL, 0, 0 }
};

const Field_t SPI1_CR2_fields[] = {
   { "RXDMAEN", 0, 1 },  /* Rx buffer DMA enable */
   { "TXDMAEN", 1, 1 },  /* Tx buffer DMA enable */
   { "SSOE", 2, 1 },  /* SS output enable */
   { "NSSP", 3, 1 },  /* NSS pulse management */
   { "FRF", 4, 1 },  /* Frame format */
   { "ERRIE", 5, 1 },  /* Error interrupt enable */
   { "RXNEIE", 6, 1 },  /* RX buffer not empty interrupt
              enable */
   { "TXEIE", 7, 1 },  /* Tx buffer empty interrupt
              enable */
   { "DS", 8, 4 },  /* Data size */
   { "FRXTH", 12, 1 },  /* FIFO reception threshold */
   { "LDMA_RX", 13, 1 },  /* Last DMA transfer for
              reception */
   { "LDMA_TX", 14, 1 },  /* Last DMA transfer for
              transmission */
   { NULL, 0, 0 }
};

const Field_t SPI1_SR_fields[] = {
   { "RXNE", 0, 1 },  /* Receive buffer not empty */
   { "TXE", 1, 1 },  /* Transmit buffer empty */
   { "CHSIDE", 2, 1 },  /* Channel side */
   { "UDR", 3, 1 },  /* Underrun flag */
   { "CRCERR", 4, 1 },  /* CRC error flag */
   { "MODF", 5, 1 },  /* Mode fault */
   { "OVR", 6, 1 },  /* Overrun flag */
   { "BSY", 7, 1 },  /* Busy flag */
   { "TIFRFE", 8, 1 },  /* TI frame format error */
   { "FRLVL", 9, 2 },  /* FIFO reception level */
   { "FTLVL", 11, 2 },  /* FIFO transmission level */
   { NULL, 0, 0 }
};

const Field_t SPI1_DR_fields[] = {
   { "DR", 0, 16 },  /* Data register */
   { NULL, 0, 0 }
};

const Field_t SPI1_CRCPR_fields[] = {
   { "CRCPOLY", 0, 16 },  /* CRC polynomial register */
   { NULL, 0, 0 }
};

const Field_t SPI1_RXCRCR_fields[] = {
   { "RxCRC", 0, 16 },  /* Rx CRC register */
   { NULL, 0, 0 }
};

const Field_t SPI1_TXCRCR_fields[] = {
   { "TxCRC", 0, 16 },  /* Tx CRC register */
   { NULL, 0, 0 }
};

const Field_t SPI1_I2SCFGR_fields[] = {
   { "CHLEN", 0, 1 },  /* Channel length (number of bits per audio
              channel) */
   { "DATLEN", 1, 2 },  /* Data length to be
              transferred */
   { "CKPOL", 3, 1 },  /* Steady state clock
              polarity */
   { "I2SSTD", 4, 2 },  /* I2S standard selection */
   { "PCMSYNC", 7, 1 },  /* PCM frame synchronization */
   { "I2SCFG", 8, 2 },  /* I2S configuration mode */
   { "I2SE", 10, 1 },  /* I2S Enable */
   { "I2SMOD", 11, 1 },  /* I2S mode selection */
   { NULL, 0, 0 }
};

const Field_t SPI1_I2SPR_fields[] = {
   { "I2SDIV", 0, 8 },  /* I2S Linear prescaler */
   { "ODD", 8, 1 },  /* Odd factor for the
              prescaler */
   { "MCKOE", 9, 1 },  /* Master clock output enable */
   { NULL, 0, 0 }
};

const Register_t SPI1_registers[] = {
   {"CR1", 0, 32, 0, SPI1_CR1_fields}, /* control register 1 */
   {"CR2", 4, 32, 0, SPI1_CR2_fields}, /* control register 2 */
   {"SR", 8, 32, 0, SPI1_SR_fields}, /* status register */
   {"DR", 12, 32, 0, SPI1_DR_fields}, /* data register */
   {"CRCPR", 16, 32, 0, SPI1_CRCPR_fields}, /* CRC polynomial register */
   {"RXCRCR", 20, 32, 0, SPI1_RXCRCR_fields}, /* RX CRC register */
   {"TXCRCR", 24, 32, 0, SPI1_TXCRCR_fields}, /* TX CRC register */
   {"I2SCFGR", 28, 32, 0, SPI1_I2SCFGR_fields}, /* I2S configuration register */
   {"I2SPR", 32, 32, 0, SPI1_I2SPR_fields}, /* I2S prescaler register */
   { NULL,0 ,0 ,0 , NULL }
};

const Field_t TIM8_CR1_fields[] = {
   { "CEN", 0, 1 },  /* Counter enable */
   { "UDIS", 1, 1 },  /* Update disable */
   { "URS", 2, 1 },  /* Update request source */
   { "OPM", 3, 1 },  /* One-pulse mode */
   { "DIR", 4, 1 },  /* Direction */
   { "CMS", 5, 2 },  /* Center-aligned mode
              selection */
   { "ARPE", 7, 1 },  /* Auto-reload preload enable */
   { "CKD", 8, 2 },  /* Clock division */
   { "UIFREMAP", 11, 1 },  /* UIF status bit remapping */
   { NULL, 0, 0 }
};

const Field_t TIM8_CR2_fields[] = {
   { "CCPC", 0, 1 },  /* Capture/compare preloaded
              control */
   { "CCUS", 2, 1 },  /* Capture/compare control update
              selection */
   { "CCDS", 3, 1 },  /* Capture/compare DMA
              selection */
   { "MMS", 4, 3 },  /* Master mode selection */
   { "TI1S", 7, 1 },  /* TI1 selection */
   { "OIS1", 8, 1 },  /* Output Idle state 1 */
   { "OIS1N", 9, 1 },  /* Output Idle state 1 */
   { "OIS2", 10, 1 },  /* Output Idle state 2 */
   { "OIS2N", 11, 1 },  /* Output Idle state 2 */
   { "OIS3", 12, 1 },  /* Output Idle state 3 */
   { "OIS3N", 13, 1 },  /* Output Idle state 3 */
   { "OIS4", 14, 1 },  /* Output Idle state 4 */
   { "OIS5", 16, 1 },  /* Output Idle state 5 */
   { "OIS6", 18, 1 },  /* Output Idle state 6 */
   { "MMS2", 20, 4 },  /* Master mode selection 2 */
   { NULL, 0, 0 }
};

const Field_t TIM8_SMCR_fields[] = {
   { "SMS", 0, 3 },  /* Slave mode selection */
   { "OCCS", 3, 1 },  /* OCREF clear selection */
   { "TS", 4, 3 },  /* Trigger selection */
   { "MSM", 7, 1 },  /* Master/Slave mode */
   { "ETF", 8, 4 },  /* External trigger filter */
   { "ETPS", 12, 2 },  /* External trigger prescaler */
   { "ECE", 14, 1 },  /* External clock enable */
   { "ETP", 15, 1 },  /* External trigger polarity */
   { "SMS3", 16, 1 },  /* Slave mode selection bit 3 */
   { NULL, 0, 0 }
};

const Field_t TIM8_DIER_fields[] = {
   { "UIE", 0, 1 },  /* Update interrupt enable */
   { "CC1IE", 1, 1 },  /* Capture/Compare 1 interrupt
              enable */
   { "CC2IE", 2, 1 },  /* Capture/Compare 2 interrupt
              enable */
   { "CC3IE", 3, 1 },  /* Capture/Compare 3 interrupt
              enable */
   { "CC4IE", 4, 1 },  /* Capture/Compare 4 interrupt
              enable */
   { "COMIE", 5, 1 },  /* COM interrupt enable */
   { "TIE", 6, 1 },  /* Trigger interrupt enable */
   { "BIE", 7, 1 },  /* Break interrupt enable */
   { "UDE", 8, 1 },  /* Update DMA request enable */
   { "CC1DE", 9, 1 },  /* Capture/Compare 1 DMA request
              enable */
   { "CC2DE", 10, 1 },  /* Capture/Compare 2 DMA request
              enable */
   { "CC3DE", 11, 1 },  /* Capture/Compare 3 DMA request
              enable */
   { "CC4DE", 12, 1 },  /* Capture/Compare 4 DMA request
              enable */
   { "COMDE", 13, 1 },  /* Reserved */
   { "TDE", 14, 1 },  /* Trigger DMA request enable */
   { NULL, 0, 0 }
};

const Field_t TIM8_SR_fields[] = {
   { "UIF", 0, 1 },  /* Update interrupt flag */
   { "CC1IF", 1, 1 },  /* Capture/compare 1 interrupt
              flag */
   { "CC2IF", 2, 1 },  /* Capture/Compare 2 interrupt
              flag */
   { "CC3IF", 3, 1 },  /* Capture/Compare 3 interrupt
              flag */
   { "CC4IF", 4, 1 },  /* Capture/Compare 4 interrupt
              flag */
   { "COMIF", 5, 1 },  /* COM interrupt flag */
   { "TIF", 6, 1 },  /* Trigger interrupt flag */
   { "BIF", 7, 1 },  /* Break interrupt flag */
   { "B2IF", 8, 1 },  /* Break 2 interrupt flag */
   { "CC1OF", 9, 1 },  /* Capture/Compare 1 overcapture
              flag */
   { "CC2OF", 10, 1 },  /* Capture/compare 2 overcapture
              flag */
   { "CC3OF", 11, 1 },  /* Capture/Compare 3 overcapture
              flag */
   { "CC4OF", 12, 1 },  /* Capture/Compare 4 overcapture
              flag */
   { "C5IF", 16, 1 },  /* Capture/Compare 5 interrupt
              flag */
   { "C6IF", 17, 1 },  /* Capture/Compare 6 interrupt
              flag */
   { NULL, 0, 0 }
};

const Field_t TIM8_EGR_fields[] = {
   { "UG", 0, 1 },  /* Update generation */
   { "CC1G", 1, 1 },  /* Capture/compare 1
              generation */
   { "CC2G", 2, 1 },  /* Capture/compare 2
              generation */
   { "CC3G", 3, 1 },  /* Capture/compare 3
              generation */
   { "CC4G", 4, 1 },  /* Capture/compare 4
              generation */
   { "COMG", 5, 1 },  /* Capture/Compare control update
              generation */
   { "TG", 6, 1 },  /* Trigger generation */
   { "BG", 7, 1 },  /* Break generation */
   { "B2G", 8, 1 },  /* Break 2 generation */
   { NULL, 0, 0 }
};

const Field_t TIM8_CCMR1_Output_fields[] = {
   { "CC1S", 0, 2 },  /* Capture/Compare 1
              selection */
   { "OC1FE", 2, 1 },  /* Output Compare 1 fast
              enable */
   { "OC1PE", 3, 1 },  /* Output Compare 1 preload
              enable */
   { "OC1M", 4, 3 },  /* Output Compare 1 mode */
   { "OC1CE", 7, 1 },  /* Output Compare 1 clear
              enable */
   { "CC2S", 8, 2 },  /* Capture/Compare 2
              selection */
   { "OC2FE", 10, 1 },  /* Output Compare 2 fast
              enable */
   { "OC2PE", 11, 1 },  /* Output Compare 2 preload
              enable */
   { "OC2M", 12, 3 },  /* Output Compare 2 mode */
   { "OC2CE", 15, 1 },  /* Output Compare 2 clear
              enable */
   { "OC1M_3", 16, 1 },  /* Output Compare 1 mode bit
              3 */
   { "OC2M_3", 24, 1 },  /* Output Compare 2 mode bit
              3 */
   { NULL, 0, 0 }
};

const Field_t TIM8_CCMR1_Input_fields[] = {
   { "CC1S", 0, 2 },  /* Capture/Compare 1
              selection */
   { "IC1PCS", 2, 2 },  /* Input capture 1 prescaler */
   { "IC1F", 4, 4 },  /* Input capture 1 filter */
   { "CC2S", 8, 2 },  /* Capture/Compare 2
              selection */
   { "IC2PCS", 10, 2 },  /* Input capture 2 prescaler */
   { "IC2F", 12, 4 },  /* Input capture 2 filter */
   { NULL, 0, 0 }
};

const Field_t TIM8_CCMR2_Input_fields[] = {
   { "CC3S", 0, 2 },  /* Capture/compare 3
              selection */
   { "IC3PSC", 2, 2 },  /* Input capture 3 prescaler */
   { "IC3F", 4, 4 },  /* Input capture 3 filter */
   { "CC4S", 8, 2 },  /* Capture/Compare 4
              selection */
   { "IC4PSC", 10, 2 },  /* Input capture 4 prescaler */
   { "IC4F", 12, 4 },  /* Input capture 4 filter */
   { NULL, 0, 0 }
};

const Field_t TIM8_CCMR2_Output_fields[] = {
   { "CC3S", 0, 2 },  /* Capture/Compare 3
              selection */
   { "OC3FE", 2, 1 },  /* Output compare 3 fast
              enable */
   { "OC3PE", 3, 1 },  /* Output compare 3 preload
              enable */
   { "OC3M", 4, 3 },  /* Output compare 3 mode */
   { "OC3CE", 7, 1 },  /* Output compare 3 clear
              enable */
   { "CC4S", 8, 2 },  /* Capture/Compare 4
              selection */
   { "OC4FE", 10, 1 },  /* Output compare 4 fast
              enable */
   { "OC4PE", 11, 1 },  /* Output compare 4 preload
              enable */
   { "OC4M", 12, 3 },  /* Output compare 4 mode */
   { "OC4CE", 15, 1 },  /* Output compare 4 clear
              enable */
   { "OC3M_3", 16, 1 },  /* Output Compare 3 mode bit
              3 */
   { "OC4M_3", 24, 1 },  /* Output Compare 4 mode bit
              3 */
   { NULL, 0, 0 }
};

const Field_t TIM8_CCER_fields[] = {
   { "CC1E", 0, 1 },  /* Capture/Compare 1 output
              enable */
   { "CC1P", 1, 1 },  /* Capture/Compare 1 output
              Polarity */
   { "CC1NE", 2, 1 },  /* Capture/Compare 1 complementary output
              enable */
   { "CC1NP", 3, 1 },  /* Capture/Compare 1 output
              Polarity */
   { "CC2E", 4, 1 },  /* Capture/Compare 2 output
              enable */
   { "CC2P", 5, 1 },  /* Capture/Compare 2 output
              Polarity */
   { "CC2NE", 6, 1 },  /* Capture/Compare 2 complementary output
              enable */
   { "CC2NP", 7, 1 },  /* Capture/Compare 2 output
              Polarity */
   { "CC3E", 8, 1 },  /* Capture/Compare 3 output
              enable */
   { "CC3P", 9, 1 },  /* Capture/Compare 3 output
              Polarity */
   { "CC3NE", 10, 1 },  /* Capture/Compare 3 complementary output
              enable */
   { "CC3NP", 11, 1 },  /* Capture/Compare 3 output
              Polarity */
   { "CC4E", 12, 1 },  /* Capture/Compare 4 output
              enable */
   { "CC4P", 13, 1 },  /* Capture/Compare 3 output
              Polarity */
   { "CC4NP", 15, 1 },  /* Capture/Compare 4 output
              Polarity */
   { "CC5E", 16, 1 },  /* Capture/Compare 5 output
              enable */
   { "CC5P", 17, 1 },  /* Capture/Compare 5 output
              Polarity */
   { "CC6E", 20, 1 },  /* Capture/Compare 6 output
              enable */
   { "CC6P", 21, 1 },  /* Capture/Compare 6 output
              Polarity */
   { NULL, 0, 0 }
};

const Field_t TIM8_CNT_fields[] = {
   { "CNT", 0, 16 },  /* counter value */
   { "UIFCPY", 31, 1 },  /* UIF copy */
   { NULL, 0, 0 }
};

const Field_t TIM8_PSC_fields[] = {
   { "PSC", 0, 16 },  /* Prescaler value */
   { NULL, 0, 0 }
};

const Field_t TIM8_ARR_fields[] = {
   { "ARR", 0, 16 },  /* Auto-reload value */
   { NULL, 0, 0 }
};

const Field_t TIM8_RCR_fields[] = {
   { "REP", 0, 16 },  /* Repetition counter value */
   { NULL, 0, 0 }
};

const Field_t TIM8_CCR1_fields[] = {
   { "CCR1", 0, 16 },  /* Capture/Compare 1 value */
   { NULL, 0, 0 }
};

const Field_t TIM8_CCR2_fields[] = {
   { "CCR2", 0, 16 },  /* Capture/Compare 2 value */
   { NULL, 0, 0 }
};

const Field_t TIM8_CCR3_fields[] = {
   { "CCR3", 0, 16 },  /* Capture/Compare 3 value */
   { NULL, 0, 0 }
};

const Field_t TIM8_CCR4_fields[] = {
   { "CCR4", 0, 16 },  /* Capture/Compare 3 value */
   { NULL, 0, 0 }
};

const Field_t TIM8_BDTR_fields[] = {
   { "DTG", 0, 8 },  /* Dead-time generator setup */
   { "LOCK", 8, 2 },  /* Lock configuration */
   { "OSSI", 10, 1 },  /* Off-state selection for Idle
              mode */
   { "OSSR", 11, 1 },  /* Off-state selection for Run
              mode */
   { "BKE", 12, 1 },  /* Break enable */
   { "BKP", 13, 1 },  /* Break polarity */
   { "AOE", 14, 1 },  /* Automatic output enable */
   { "MOE", 15, 1 },  /* Main output enable */
   { "BKF", 16, 4 },  /* Break filter */
   { "BK2F", 20, 4 },  /* Break 2 filter */
   { "BK2E", 24, 1 },  /* Break 2 enable */
   { "BK2P", 25, 1 },  /* Break 2 polarity */
   { NULL, 0, 0 }
};

const Field_t TIM8_DCR_fields[] = {
   { "DBA", 0, 5 },  /* DMA base address */
   { "DBL", 8, 5 },  /* DMA burst length */
   { NULL, 0, 0 }
};

const Field_t TIM8_DMAR_fields[] = {
   { "DMAB", 0, 16 },  /* DMA register for burst
              accesses */
   { NULL, 0, 0 }
};

const Field_t TIM8_CCMR3_Output_fields[] = {
   { "OC5FE", 2, 1 },  /* Output compare 5 fast
              enable */
   { "OC5PE", 3, 1 },  /* Output compare 5 preload
              enable */
   { "OC5M", 4, 3 },  /* Output compare 5 mode */
   { "OC5CE", 7, 1 },  /* Output compare 5 clear
              enable */
   { "OC6FE", 10, 1 },  /* Output compare 6 fast
              enable */
   { "OC6PE", 11, 1 },  /* Output compare 6 preload
              enable */
   { "OC6M", 12, 3 },  /* Output compare 6 mode */
   { "OC6CE", 15, 1 },  /* Output compare 6 clear
              enable */
   { "OC5M_3", 16, 1 },  /* Outout Compare 5 mode bit
              3 */
   { "OC6M_3", 24, 1 },  /* Outout Compare 6 mode bit
              3 */
   { NULL, 0, 0 }
};

const Field_t TIM8_CCR5_fields[] = {
   { "CCR5", 0, 16 },  /* Capture/Compare 5 value */
   { "GC5C1", 29, 1 },  /* Group Channel 5 and Channel
              1 */
   { "GC5C2", 30, 1 },  /* Group Channel 5 and Channel
              2 */
   { "GC5C3", 31, 1 },  /* Group Channel 5 and Channel
              3 */
   { NULL, 0, 0 }
};

const Field_t TIM8_CCR6_fields[] = {
   { "CCR6", 0, 16 },  /* Capture/Compare 6 value */
   { NULL, 0, 0 }
};

const Field_t TIM8_OR_fields[] = {
   { "TIM8_ETR_ADC2_RMP", 0, 2 },  /* TIM8_ETR_ADC2 remapping
              capability */
   { "TIM8_ETR_ADC3_RMP", 2, 2 },  /* TIM8_ETR_ADC3 remapping
              capability */
   { NULL, 0, 0 }
};

const Register_t TIM8_registers[] = {
   {"CR1", 0, 32, 0, TIM8_CR1_fields}, /* control register 1 */
   {"CR2", 4, 32, 0, TIM8_CR2_fields}, /* control register 2 */
   {"SMCR", 8, 32, 0, TIM8_SMCR_fields}, /* slave mode control register */
   {"DIER", 12, 32, 0, TIM8_DIER_fields}, /* DMA/Interrupt enable register */
   {"SR", 16, 32, 0, TIM8_SR_fields}, /* status register */
   {"EGR", 20, 32, 0, TIM8_EGR_fields}, /* event generation register */
   {"CCMR1_Output", 24, 32, 0, TIM8_CCMR1_Output_fields}, /* capture/compare mode register (output
          mode) */
   {"CCMR1_Input", 24, 32, 0, TIM8_CCMR1_Input_fields}, /* capture/compare mode register 1 (input
          mode) */
   {"CCMR2_Input", 28, 32, 0, TIM8_CCMR2_Input_fields}, /* capture/compare mode register 2 (input
          mode) */
   {"CCMR2_Output", 28, 32, 0, TIM8_CCMR2_Output_fields}, /* capture/compare mode register (output
          mode) */
   {"CCER", 32, 32, 0, TIM8_CCER_fields}, /* capture/compare enable
          register */
   {"CNT", 36, 32, 0, TIM8_CNT_fields}, /* counter */
   {"PSC", 40, 32, 0, TIM8_PSC_fields}, /* prescaler */
   {"ARR", 44, 32, 0, TIM8_ARR_fields}, /* auto-reload register */
   {"RCR", 48, 32, 0, TIM8_RCR_fields}, /* repetition counter register */
   {"CCR1", 52, 32, 0, TIM8_CCR1_fields}, /* capture/compare register 1 */
   {"CCR2", 56, 32, 0, TIM8_CCR2_fields}, /* capture/compare register 2 */
   {"CCR3", 60, 32, 0, TIM8_CCR3_fields}, /* capture/compare register 3 */
   {"CCR4", 64, 32, 0, TIM8_CCR4_fields}, /* capture/compare register 4 */
   {"BDTR", 68, 32, 0, TIM8_BDTR_fields}, /* break and dead-time register */
   {"DCR", 72, 32, 0, TIM8_DCR_fields}, /* DMA control register */
   {"DMAR", 76, 32, 0, TIM8_DMAR_fields}, /* DMA address for full transfer */
   {"CCMR3_Output", 84, 32, 0, TIM8_CCMR3_Output_fields}, /* capture/compare mode register 3 (output
          mode) */
   {"CCR5", 88, 32, 0, TIM8_CCR5_fields}, /* capture/compare register 5 */
   {"CCR6", 92, 32, 0, TIM8_CCR6_fields}, /* capture/compare register 6 */
   {"OR", 96, 32, 0, TIM8_OR_fields}, /* option registers */
   { NULL,0 ,0 ,0 , NULL }
};

const Field_t USART1_CR1_fields[] = {
   { "UE", 0, 1 },  /* USART enable */
   { "UESM", 1, 1 },  /* USART enable in Stop mode */
   { "RE", 2, 1 },  /* Receiver enable */
   { "TE", 3, 1 },  /* Transmitter enable */
   { "IDLEIE", 4, 1 },  /* IDLE interrupt enable */
   { "RXNEIE", 5, 1 },  /* RXNE interrupt enable */
   { "TCIE", 6, 1 },  /* Transmission complete interrupt
              enable */
   { "TXEIE", 7, 1 },  /* interrupt enable */
   { "PEIE", 8, 1 },  /* PE interrupt enable */
   { "PS", 9, 1 },  /* Parity selection */
   { "PCE", 10, 1 },  /* Parity control enable */
   { "WAKE", 11, 1 },  /* Receiver wakeup method */
   { "M", 12, 1 },  /* Word length */
   { "MME", 13, 1 },  /* Mute mode enable */
   { "CMIE", 14, 1 },  /* Character match interrupt
              enable */
   { "OVER8", 15, 1 },  /* Oversampling mode */
   { "DEDT", 16, 5 },  /* Driver Enable deassertion
              time */
   { "DEAT", 21, 5 },  /* Driver Enable assertion
              time */
   { "RTOIE", 26, 1 },  /* Receiver timeout interrupt
              enable */
   { "EOBIE", 27, 1 },  /* End of Block interrupt
              enable */
   { NULL, 0, 0 }
};

const Field_t USART1_CR2_fields[] = {
   { "ADDM7", 4, 1 },  /* 7-bit Address Detection/4-bit Address
              Detection */
   { "LBDL", 5, 1 },  /* LIN break detection length */
   { "LBDIE", 6, 1 },  /* LIN break detection interrupt
              enable */
   { "LBCL", 8, 1 },  /* Last bit clock pulse */
   { "CPHA", 9, 1 },  /* Clock phase */
   { "CPOL", 10, 1 },  /* Clock polarity */
   { "CLKEN", 11, 1 },  /* Clock enable */
   { "STOP", 12, 2 },  /* STOP bits */
   { "LINEN", 14, 1 },  /* LIN mode enable */
   { "SWAP", 15, 1 },  /* Swap TX/RX pins */
   { "RXINV", 16, 1 },  /* RX pin active level
              inversion */
   { "TXINV", 17, 1 },  /* TX pin active level
              inversion */
   { "DATAINV", 18, 1 },  /* Binary data inversion */
   { "MSBFIRST", 19, 1 },  /* Most significant bit first */
   { "ABREN", 20, 1 },  /* Auto baud rate enable */
   { "ABRMOD", 21, 2 },  /* Auto baud rate mode */
   { "RTOEN", 23, 1 },  /* Receiver timeout enable */
   { "ADD0", 24, 4 },  /* Address of the USART node */
   { "ADD4", 28, 4 },  /* Address of the USART node */
   { NULL, 0, 0 }
};

const Field_t USART1_CR3_fields[] = {
   { "EIE", 0, 1 },  /* Error interrupt enable */
   { "IREN", 1, 1 },  /* IrDA mode enable */
   { "IRLP", 2, 1 },  /* IrDA low-power */
   { "HDSEL", 3, 1 },  /* Half-duplex selection */
   { "NACK", 4, 1 },  /* Smartcard NACK enable */
   { "SCEN", 5, 1 },  /* Smartcard mode enable */
   { "DMAR", 6, 1 },  /* DMA enable receiver */
   { "DMAT", 7, 1 },  /* DMA enable transmitter */
   { "RTSE", 8, 1 },  /* RTS enable */
   { "CTSE", 9, 1 },  /* CTS enable */
   { "CTSIE", 10, 1 },  /* CTS interrupt enable */
   { "ONEBIT", 11, 1 },  /* One sample bit method
              enable */
   { "OVRDIS", 12, 1 },  /* Overrun Disable */
   { "DDRE", 13, 1 },  /* DMA Disable on Reception
              Error */
   { "DEM", 14, 1 },  /* Driver enable mode */
   { "DEP", 15, 1 },  /* Driver enable polarity
              selection */
   { "SCARCNT", 17, 3 },  /* Smartcard auto-retry count */
   { "WUS", 20, 2 },  /* Wakeup from Stop mode interrupt flag
              selection */
   { "WUFIE", 22, 1 },  /* Wakeup from Stop mode interrupt
              enable */
   { NULL, 0, 0 }
};

const Field_t USART1_BRR_fields[] = {
   { "DIV_Fraction", 0, 4 },  /* fraction of USARTDIV */
   { "DIV_Mantissa", 4, 12 },  /* mantissa of USARTDIV */
   { NULL, 0, 0 }
};

const Field_t USART1_GTPR_fields[] = {
   { "PSC", 0, 8 },  /* Prescaler value */
   { "GT", 8, 8 },  /* Guard time value */
   { NULL, 0, 0 }
};

const Field_t USART1_RTOR_fields[] = {
   { "RTO", 0, 24 },  /* Receiver timeout value */
   { "BLEN", 24, 8 },  /* Block Length */
   { NULL, 0, 0 }
};

const Field_t USART1_RQR_fields[] = {
   { "ABRRQ", 0, 1 },  /* Auto baud rate request */
   { "SBKRQ", 1, 1 },  /* Send break request */
   { "MMRQ", 2, 1 },  /* Mute mode request */
   { "RXFRQ", 3, 1 },  /* Receive data flush request */
   { "TXFRQ", 4, 1 },  /* Transmit data flush
              request */
   { NULL, 0, 0 }
};

const Field_t USART1_ISR_fields[] = {
   { "PE", 0, 1 },  /* Parity error */
   { "FE", 1, 1 },  /* Framing error */
   { "NF", 2, 1 },  /* Noise detected flag */
   { "ORE", 3, 1 },  /* Overrun error */
   { "IDLE", 4, 1 },  /* Idle line detected */
   { "RXNE", 5, 1 },  /* Read data register not
              empty */
   { "TC", 6, 1 },  /* Transmission complete */
   { "TXE", 7, 1 },  /* Transmit data register
              empty */
   { "LBDF", 8, 1 },  /* LIN break detection flag */
   { "CTSIF", 9, 1 },  /* CTS interrupt flag */
   { "CTS", 10, 1 },  /* CTS flag */
   { "RTOF", 11, 1 },  /* Receiver timeout */
   { "EOBF", 12, 1 },  /* End of block flag */
   { "ABRE", 14, 1 },  /* Auto baud rate error */
   { "ABRF", 15, 1 },  /* Auto baud rate flag */
   { "BUSY", 16, 1 },  /* Busy flag */
   { "CMF", 17, 1 },  /* character match flag */
   { "SBKF", 18, 1 },  /* Send break flag */
   { "RWU", 19, 1 },  /* Receiver wakeup from Mute
              mode */
   { "WUF", 20, 1 },  /* Wakeup from Stop mode flag */
   { "TEACK", 21, 1 },  /* Transmit enable acknowledge
              flag */
   { "REACK", 22, 1 },  /* Receive enable acknowledge
              flag */
   { NULL, 0, 0 }
};

const Field_t USART1_ICR_fields[] = {
   { "PECF", 0, 1 },  /* Parity error clear flag */
   { "FECF", 1, 1 },  /* Framing error clear flag */
   { "NCF", 2, 1 },  /* Noise detected clear flag */
   { "ORECF", 3, 1 },  /* Overrun error clear flag */
   { "IDLECF", 4, 1 },  /* Idle line detected clear
              flag */
   { "TCCF", 6, 1 },  /* Transmission complete clear
              flag */
   { "LBDCF", 8, 1 },  /* LIN break detection clear
              flag */
   { "CTSCF", 9, 1 },  /* CTS clear flag */
   { "RTOCF", 11, 1 },  /* Receiver timeout clear
              flag */
   { "EOBCF", 12, 1 },  /* End of timeout clear flag */
   { "CMCF", 17, 1 },  /* Character match clear flag */
   { "WUCF", 20, 1 },  /* Wakeup from Stop mode clear
              flag */
   { NULL, 0, 0 }
};

const Field_t USART1_RDR_fields[] = {
   { "RDR", 0, 9 },  /* Receive data value */
   { NULL, 0, 0 }
};

const Field_t USART1_TDR_fields[] = {
   { "TDR", 0, 9 },  /* Transmit data value */
   { NULL, 0, 0 }
};

const Register_t USART1_registers[] = {
   {"CR1", 0, 32, 0, USART1_CR1_fields}, /* Control register 1 */
   {"CR2", 4, 32, 0, USART1_CR2_fields}, /* Control register 2 */
   {"CR3", 8, 32, 0, USART1_CR3_fields}, /* Control register 3 */
   {"BRR", 12, 32, 0, USART1_BRR_fields}, /* Baud rate register */
   {"GTPR", 16, 32, 0, USART1_GTPR_fields}, /* Guard time and prescaler
          register */
   {"RTOR", 20, 32, 0, USART1_RTOR_fields}, /* Receiver timeout register */
   {"RQR", 24, 32, 0, USART1_RQR_fields}, /* Request register */
   {"ISR", 28, 32, 0, USART1_ISR_fields}, /* Interrupt & status
          register */
   {"ICR", 32, 32, 0, USART1_ICR_fields}, /* Interrupt flag clear register */
   {"RDR", 36, 32, 0, USART1_RDR_fields}, /* Receive data register */
   {"TDR", 40, 32, 0, USART1_TDR_fields}, /* Transmit data register */
   { NULL,0 ,0 ,0 , NULL }
};

const Field_t TIM15_CR1_fields[] = {
   { "CEN", 0, 1 },  /* Counter enable */
   { "UDIS", 1, 1 },  /* Update disable */
   { "URS", 2, 1 },  /* Update request source */
   { "OPM", 3, 1 },  /* One-pulse mode */
   { "ARPE", 7, 1 },  /* Auto-reload preload enable */
   { "CKD", 8, 2 },  /* Clock division */
   { "UIFREMAP", 11, 1 },  /* UIF status bit remapping */
   { NULL, 0, 0 }
};

const Field_t TIM15_CR2_fields[] = {
   { "CCPC", 0, 1 },  /* Capture/compare preloaded
              control */
   { "CCUS", 2, 1 },  /* Capture/compare control update
              selection */
   { "CCDS", 3, 1 },  /* Capture/compare DMA
              selection */
   { "MMS", 4, 3 },  /* Master mode selection */
   { "TI1S", 7, 1 },  /* TI1 selection */
   { "OIS1", 8, 1 },  /* Output Idle state 1 */
   { "OIS1N", 9, 1 },  /* Output Idle state 1 */
   { "OIS2", 10, 1 },  /* Output Idle state 2 */
   { NULL, 0, 0 }
};

const Field_t TIM15_SMCR_fields[] = {
   { "SMS", 0, 3 },  /* Slave mode selection */
   { "TS", 4, 3 },  /* Trigger selection */
   { "MSM", 7, 1 },  /* Master/Slave mode */
   { "SMS_3", 16, 1 },  /* Slave mode selection bit 3 */
   { NULL, 0, 0 }
};

const Field_t TIM15_DIER_fields[] = {
   { "UIE", 0, 1 },  /* Update interrupt enable */
   { "CC1IE", 1, 1 },  /* Capture/Compare 1 interrupt
              enable */
   { "CC2IE", 2, 1 },  /* Capture/Compare 2 interrupt
              enable */
   { "COMIE", 5, 1 },  /* COM interrupt enable */
   { "TIE", 6, 1 },  /* Trigger interrupt enable */
   { "BIE", 7, 1 },  /* Break interrupt enable */
   { "UDE", 8, 1 },  /* Update DMA request enable */
   { "CC1DE", 9, 1 },  /* Capture/Compare 1 DMA request
              enable */
   { "CC2DE", 10, 1 },  /* Capture/Compare 2 DMA request
              enable */
   { "COMDE", 13, 1 },  /* COM DMA request enable */
   { "TDE", 14, 1 },  /* Trigger DMA request enable */
   { NULL, 0, 0 }
};

const Field_t TIM15_SR_fields[] = {
   { "UIF", 0, 1 },  /* Update interrupt flag */
   { "CC1IF", 1, 1 },  /* Capture/compare 1 interrupt
              flag */
   { "CC2IF", 2, 1 },  /* Capture/Compare 2 interrupt
              flag */
   { "COMIF", 5, 1 },  /* COM interrupt flag */
   { "TIF", 6, 1 },  /* Trigger interrupt flag */
   { "BIF", 7, 1 },  /* Break interrupt flag */
   { "CC1OF", 9, 1 },  /* Capture/Compare 1 overcapture
              flag */
   { "CC2OF", 10, 1 },  /* Capture/compare 2 overcapture
              flag */
   { NULL, 0, 0 }
};

const Field_t TIM15_EGR_fields[] = {
   { "UG", 0, 1 },  /* Update generation */
   { "CC1G", 1, 1 },  /* Capture/compare 1
              generation */
   { "CC2G", 2, 1 },  /* Capture/compare 2
              generation */
   { "COMG", 5, 1 },  /* Capture/Compare control update
              generation */
   { "TG", 6, 1 },  /* Trigger generation */
   { "BG", 7, 1 },  /* Break generation */
   { NULL, 0, 0 }
};

const Field_t TIM15_CCMR1_Output_fields[] = {
   { "CC1S", 0, 2 },  /* Capture/Compare 1
              selection */
   { "OC1FE", 2, 1 },  /* Output Compare 1 fast
              enable */
   { "OC1PE", 3, 1 },  /* Output Compare 1 preload
              enable */
   { "OC1M", 4, 3 },  /* Output Compare 1 mode */
   { "CC2S", 8, 2 },  /* Capture/Compare 2
              selection */
   { "OC2FE", 10, 1 },  /* Output Compare 2 fast
              enable */
   { "OC2PE", 11, 1 },  /* Output Compare 2 preload
              enable */
   { "OC2M", 12, 3 },  /* Output Compare 2 mode */
   { "OC1M_3", 16, 1 },  /* Output Compare 1 mode bit
              3 */
   { "OC2M_3", 24, 1 },  /* Output Compare 2 mode bit
              3 */
   { NULL, 0, 0 }
};

const Field_t TIM15_CCMR1_Input_fields[] = {
   { "CC1S", 0, 2 },  /* Capture/Compare 1
              selection */
   { "IC1PSC", 2, 2 },  /* Input capture 1 prescaler */
   { "IC1F", 4, 4 },  /* Input capture 1 filter */
   { "CC2S", 8, 2 },  /* Capture/Compare 2
              selection */
   { "IC2PSC", 10, 2 },  /* Input capture 2 prescaler */
   { "IC2F", 12, 4 },  /* Input capture 2 filter */
   { NULL, 0, 0 }
};

const Field_t TIM15_CCER_fields[] = {
   { "CC1E", 0, 1 },  /* Capture/Compare 1 output
              enable */
   { "CC1P", 1, 1 },  /* Capture/Compare 1 output
              Polarity */
   { "CC1NE", 2, 1 },  /* Capture/Compare 1 complementary output
              enable */
   { "CC1NP", 3, 1 },  /* Capture/Compare 1 output
              Polarity */
   { "CC2E", 4, 1 },  /* Capture/Compare 2 output
              enable */
   { "CC2P", 5, 1 },  /* Capture/Compare 2 output
              Polarity */
   { "CC2NP", 7, 1 },  /* Capture/Compare 2 output
              Polarity */
   { NULL, 0, 0 }
};

const Field_t TIM15_CNT_fields[] = {
   { "CNT", 0, 16 },  /* counter value */
   { "UIFCPY", 31, 1 },  /* UIF copy */
   { NULL, 0, 0 }
};

const Field_t TIM15_PSC_fields[] = {
   { "PSC", 0, 16 },  /* Prescaler value */
   { NULL, 0, 0 }
};

const Field_t TIM15_ARR_fields[] = {
   { "ARR", 0, 16 },  /* Auto-reload value */
   { NULL, 0, 0 }
};

const Field_t TIM15_RCR_fields[] = {
   { "REP", 0, 8 },  /* Repetition counter value */
   { NULL, 0, 0 }
};

const Field_t TIM15_CCR1_fields[] = {
   { "CCR1", 0, 16 },  /* Capture/Compare 1 value */
   { NULL, 0, 0 }
};

const Field_t TIM15_CCR2_fields[] = {
   { "CCR2", 0, 16 },  /* Capture/Compare 2 value */
   { NULL, 0, 0 }
};

const Field_t TIM15_BDTR_fields[] = {
   { "DTG", 0, 8 },  /* Dead-time generator setup */
   { "LOCK", 8, 2 },  /* Lock configuration */
   { "OSSI", 10, 1 },  /* Off-state selection for Idle
              mode */
   { "OSSR", 11, 1 },  /* Off-state selection for Run
              mode */
   { "BKE", 12, 1 },  /* Break enable */
   { "BKP", 13, 1 },  /* Break polarity */
   { "AOE", 14, 1 },  /* Automatic output enable */
   { "MOE", 15, 1 },  /* Main output enable */
   { "BKF", 16, 4 },  /* Break filter */
   { NULL, 0, 0 }
};

const Field_t TIM15_DCR_fields[] = {
   { "DBA", 0, 5 },  /* DMA base address */
   { "DBL", 8, 5 },  /* DMA burst length */
   { NULL, 0, 0 }
};

const Field_t TIM15_DMAR_fields[] = {
   { "DMAB", 0, 16 },  /* DMA register for burst
              accesses */
   { NULL, 0, 0 }
};

const Register_t TIM15_registers[] = {
   {"CR1", 0, 32, 0, TIM15_CR1_fields}, /* control register 1 */
   {"CR2", 4, 32, 0, TIM15_CR2_fields}, /* control register 2 */
   {"SMCR", 8, 32, 0, TIM15_SMCR_fields}, /* slave mode control register */
   {"DIER", 12, 32, 0, TIM15_DIER_fields}, /* DMA/Interrupt enable register */
   {"SR", 16, 32, 0, TIM15_SR_fields}, /* status register */
   {"EGR", 20, 32, 0, TIM15_EGR_fields}, /* event generation register */
   {"CCMR1_Output", 24, 32, 0, TIM15_CCMR1_Output_fields}, /* capture/compare mode register (output
          mode) */
   {"CCMR1_Input", 24, 32, 0, TIM15_CCMR1_Input_fields}, /* capture/compare mode register 1 (input
          mode) */
   {"CCER", 32, 32, 0, TIM15_CCER_fields}, /* capture/compare enable
          register */
   {"CNT", 36, 32, 0, TIM15_CNT_fields}, /* counter */
   {"PSC", 40, 32, 0, TIM15_PSC_fields}, /* prescaler */
   {"ARR", 44, 32, 0, TIM15_ARR_fields}, /* auto-reload register */
   {"RCR", 48, 32, 0, TIM15_RCR_fields}, /* repetition counter register */
   {"CCR1", 52, 32, 0, TIM15_CCR1_fields}, /* capture/compare register 1 */
   {"CCR2", 56, 32, 0, TIM15_CCR2_fields}, /* capture/compare register 2 */
   {"BDTR", 68, 32, 0, TIM15_BDTR_fields}, /* break and dead-time register */
   {"DCR", 72, 32, 0, TIM15_DCR_fields}, /* DMA control register */
   {"DMAR", 76, 32, 0, TIM15_DMAR_fields}, /* DMA address for full transfer */
   { NULL,0 ,0 ,0 , NULL }
};

const Field_t TIM16_CR1_fields[] = {
   { "CEN", 0, 1 },  /* Counter enable */
   { "UDIS", 1, 1 },  /* Update disable */
   { "URS", 2, 1 },  /* Update request source */
   { "OPM", 3, 1 },  /* One-pulse mode */
   { "ARPE", 7, 1 },  /* Auto-reload preload enable */
   { "CKD", 8, 2 },  /* Clock division */
   { "UIFREMAP", 11, 1 },  /* UIF status bit remapping */
   { NULL, 0, 0 }
};

const Field_t TIM16_CR2_fields[] = {
   { "CCPC", 0, 1 },  /* Capture/compare preloaded
              control */
   { "CCUS", 2, 1 },  /* Capture/compare control update
              selection */
   { "CCDS", 3, 1 },  /* Capture/compare DMA
              selection */
   { "OIS1", 8, 1 },  /* Output Idle state 1 */
   { "OIS1N", 9, 1 },  /* Output Idle state 1 */
   { NULL, 0, 0 }
};

const Field_t TIM16_DIER_fields[] = {
   { "UIE", 0, 1 },  /* Update interrupt enable */
   { "CC1IE", 1, 1 },  /* Capture/Compare 1 interrupt
              enable */
   { "COMIE", 5, 1 },  /* COM interrupt enable */
   { "TIE", 6, 1 },  /* Trigger interrupt enable */
   { "BIE", 7, 1 },  /* Break interrupt enable */
   { "UDE", 8, 1 },  /* Update DMA request enable */
   { "CC1DE", 9, 1 },  /* Capture/Compare 1 DMA request
              enable */
   { "COMDE", 13, 1 },  /* COM DMA request enable */
   { "TDE", 14, 1 },  /* Trigger DMA request enable */
   { NULL, 0, 0 }
};

const Field_t TIM16_SR_fields[] = {
   { "UIF", 0, 1 },  /* Update interrupt flag */
   { "CC1IF", 1, 1 },  /* Capture/compare 1 interrupt
              flag */
   { "COMIF", 5, 1 },  /* COM interrupt flag */
   { "TIF", 6, 1 },  /* Trigger interrupt flag */
   { "BIF", 7, 1 },  /* Break interrupt flag */
   { "CC1OF", 9, 1 },  /* Capture/Compare 1 overcapture
              flag */
   { NULL, 0, 0 }
};

const Field_t TIM16_EGR_fields[] = {
   { "UG", 0, 1 },  /* Update generation */
   { "CC1G", 1, 1 },  /* Capture/compare 1
              generation */
   { "COMG", 5, 1 },  /* Capture/Compare control update
              generation */
   { "TG", 6, 1 },  /* Trigger generation */
   { "BG", 7, 1 },  /* Break generation */
   { NULL, 0, 0 }
};

const Field_t TIM16_CCMR1_Output_fields[] = {
   { "CC1S", 0, 2 },  /* Capture/Compare 1
              selection */
   { "OC1FE", 2, 1 },  /* Output Compare 1 fast
              enable */
   { "OC1PE", 3, 1 },  /* Output Compare 1 preload
              enable */
   { "OC1M", 4, 3 },  /* Output Compare 1 mode */
   { "OC1M_3", 16, 1 },  /* Output Compare 1 mode */
   { NULL, 0, 0 }
};

const Field_t TIM16_CCMR1_Input_fields[] = {
   { "CC1S", 0, 2 },  /* Capture/Compare 1
              selection */
   { "IC1PSC", 2, 2 },  /* Input capture 1 prescaler */
   { "IC1F", 4, 4 },  /* Input capture 1 filter */
   { NULL, 0, 0 }
};

const Field_t TIM16_CCER_fields[] = {
   { "CC1E", 0, 1 },  /* Capture/Compare 1 output
              enable */
   { "CC1P", 1, 1 },  /* Capture/Compare 1 output
              Polarity */
   { "CC1NE", 2, 1 },  /* Capture/Compare 1 complementary output
              enable */
   { "CC1NP", 3, 1 },  /* Capture/Compare 1 output
              Polarity */
   { NULL, 0, 0 }
};

const Field_t TIM16_CNT_fields[] = {
   { "CNT", 0, 16 },  /* counter value */
   { "UIFCPY", 31, 1 },  /* UIF Copy */
   { NULL, 0, 0 }
};

const Field_t TIM16_PSC_fields[] = {
   { "PSC", 0, 16 },  /* Prescaler value */
   { NULL, 0, 0 }
};

const Field_t TIM16_ARR_fields[] = {
   { "ARR", 0, 16 },  /* Auto-reload value */
   { NULL, 0, 0 }
};

const Field_t TIM16_RCR_fields[] = {
   { "REP", 0, 8 },  /* Repetition counter value */
   { NULL, 0, 0 }
};

const Field_t TIM16_CCR1_fields[] = {
   { "CCR1", 0, 16 },  /* Capture/Compare 1 value */
   { NULL, 0, 0 }
};

const Field_t TIM16_BDTR_fields[] = {
   { "DTG", 0, 8 },  /* Dead-time generator setup */
   { "LOCK", 8, 2 },  /* Lock configuration */
   { "OSSI", 10, 1 },  /* Off-state selection for Idle
              mode */
   { "OSSR", 11, 1 },  /* Off-state selection for Run
              mode */
   { "BKE", 12, 1 },  /* Break enable */
   { "BKP", 13, 1 },  /* Break polarity */
   { "AOE", 14, 1 },  /* Automatic output enable */
   { "MOE", 15, 1 },  /* Main output enable */
   { "BKF", 16, 4 },  /* Break filter */
   { NULL, 0, 0 }
};

const Field_t TIM16_DCR_fields[] = {
   { "DBA", 0, 5 },  /* DMA base address */
   { "DBL", 8, 5 },  /* DMA burst length */
   { NULL, 0, 0 }
};

const Field_t TIM16_DMAR_fields[] = {
   { "DMAB", 0, 16 },  /* DMA register for burst
              accesses */
   { NULL, 0, 0 }
};

const Register_t TIM16_registers[] = {
   {"CR1", 0, 32, 0, TIM16_CR1_fields}, /* control register 1 */
   {"CR2", 4, 32, 0, TIM16_CR2_fields}, /* control register 2 */
   {"DIER", 12, 32, 0, TIM16_DIER_fields}, /* DMA/Interrupt enable register */
   {"SR", 16, 32, 0, TIM16_SR_fields}, /* status register */
   {"EGR", 20, 32, 0, TIM16_EGR_fields}, /* event generation register */
   {"CCMR1_Output", 24, 32, 0, TIM16_CCMR1_Output_fields}, /* capture/compare mode register (output
          mode) */
   {"CCMR1_Input", 24, 32, 0, TIM16_CCMR1_Input_fields}, /* capture/compare mode register 1 (input
          mode) */
   {"CCER", 32, 32, 0, TIM16_CCER_fields}, /* capture/compare enable
          register */
   {"CNT", 36, 32, 0, TIM16_CNT_fields}, /* counter */
   {"PSC", 40, 32, 0, TIM16_PSC_fields}, /* prescaler */
   {"ARR", 44, 32, 0, TIM16_ARR_fields}, /* auto-reload register */
   {"RCR", 48, 32, 0, TIM16_RCR_fields}, /* repetition counter register */
   {"CCR1", 52, 32, 0, TIM16_CCR1_fields}, /* capture/compare register 1 */
   {"BDTR", 68, 32, 0, TIM16_BDTR_fields}, /* break and dead-time register */
   {"DCR", 72, 32, 0, TIM16_DCR_fields}, /* DMA control register */
   {"DMAR", 76, 32, 0, TIM16_DMAR_fields}, /* DMA address for full transfer */
   {"OR", 80, 32, 0, NULL}, /* option register */
   { NULL,0 ,0 ,0 , NULL }
};

const Field_t TIM17_CR1_fields[] = {
   { "CEN", 0, 1 },  /* Counter enable */
   { "UDIS", 1, 1 },  /* Update disable */
   { "URS", 2, 1 },  /* Update request source */
   { "OPM", 3, 1 },  /* One-pulse mode */
   { "ARPE", 7, 1 },  /* Auto-reload preload enable */
   { "CKD", 8, 2 },  /* Clock division */
   { "UIFREMAP", 11, 1 },  /* UIF status bit remapping */
   { NULL, 0, 0 }
};

const Field_t TIM17_CR2_fields[] = {
   { "CCPC", 0, 1 },  /* Capture/compare preloaded
              control */
   { "CCUS", 2, 1 },  /* Capture/compare control update
              selection */
   { "CCDS", 3, 1 },  /* Capture/compare DMA
              selection */
   { "OIS1", 8, 1 },  /* Output Idle state 1 */
   { "OIS1N", 9, 1 },  /* Output Idle state 1 */
   { NULL, 0, 0 }
};

const Field_t TIM17_DIER_fields[] = {
   { "UIE", 0, 1 },  /* Update interrupt enable */
   { "CC1IE", 1, 1 },  /* Capture/Compare 1 interrupt
              enable */
   { "COMIE", 5, 1 },  /* COM interrupt enable */
   { "TIE", 6, 1 },  /* Trigger interrupt enable */
   { "BIE", 7, 1 },  /* Break interrupt enable */
   { "UDE", 8, 1 },  /* Update DMA request enable */
   { "CC1DE", 9, 1 },  /* Capture/Compare 1 DMA request
              enable */
   { "COMDE", 13, 1 },  /* COM DMA request enable */
   { "TDE", 14, 1 },  /* Trigger DMA request enable */
   { NULL, 0, 0 }
};

const Field_t TIM17_SR_fields[] = {
   { "UIF", 0, 1 },  /* Update interrupt flag */
   { "CC1IF", 1, 1 },  /* Capture/compare 1 interrupt
              flag */
   { "COMIF", 5, 1 },  /* COM interrupt flag */
   { "TIF", 6, 1 },  /* Trigger interrupt flag */
   { "BIF", 7, 1 },  /* Break interrupt flag */
   { "CC1OF", 9, 1 },  /* Capture/Compare 1 overcapture
              flag */
   { NULL, 0, 0 }
};

const Field_t TIM17_EGR_fields[] = {
   { "UG", 0, 1 },  /* Update generation */
   { "CC1G", 1, 1 },  /* Capture/compare 1
              generation */
   { "COMG", 5, 1 },  /* Capture/Compare control update
              generation */
   { "TG", 6, 1 },  /* Trigger generation */
   { "BG", 7, 1 },  /* Break generation */
   { NULL, 0, 0 }
};

const Field_t TIM17_CCMR1_Output_fields[] = {
   { "CC1S", 0, 2 },  /* Capture/Compare 1
              selection */
   { "OC1FE", 2, 1 },  /* Output Compare 1 fast
              enable */
   { "OC1PE", 3, 1 },  /* Output Compare 1 preload
              enable */
   { "OC1M", 4, 3 },  /* Output Compare 1 mode */
   { "OC1M_3", 16, 1 },  /* Output Compare 1 mode */
   { NULL, 0, 0 }
};

const Field_t TIM17_CCMR1_Input_fields[] = {
   { "CC1S", 0, 2 },  /* Capture/Compare 1
              selection */
   { "IC1PSC", 2, 2 },  /* Input capture 1 prescaler */
   { "IC1F", 4, 4 },  /* Input capture 1 filter */
   { NULL, 0, 0 }
};

const Field_t TIM17_CCER_fields[] = {
   { "CC1E", 0, 1 },  /* Capture/Compare 1 output
              enable */
   { "CC1P", 1, 1 },  /* Capture/Compare 1 output
              Polarity */
   { "CC1NE", 2, 1 },  /* Capture/Compare 1 complementary output
              enable */
   { "CC1NP", 3, 1 },  /* Capture/Compare 1 output
              Polarity */
   { NULL, 0, 0 }
};

const Field_t TIM17_CNT_fields[] = {
   { "CNT", 0, 16 },  /* counter value */
   { "UIFCPY", 31, 1 },  /* UIF Copy */
   { NULL, 0, 0 }
};

const Field_t TIM17_PSC_fields[] = {
   { "PSC", 0, 16 },  /* Prescaler value */
   { NULL, 0, 0 }
};

const Field_t TIM17_ARR_fields[] = {
   { "ARR", 0, 16 },  /* Auto-reload value */
   { NULL, 0, 0 }
};

const Field_t TIM17_RCR_fields[] = {
   { "REP", 0, 8 },  /* Repetition counter value */
   { NULL, 0, 0 }
};

const Field_t TIM17_CCR1_fields[] = {
   { "CCR1", 0, 16 },  /* Capture/Compare 1 value */
   { NULL, 0, 0 }
};

const Field_t TIM17_BDTR_fields[] = {
   { "DTG", 0, 8 },  /* Dead-time generator setup */
   { "LOCK", 8, 2 },  /* Lock configuration */
   { "OSSI", 10, 1 },  /* Off-state selection for Idle
              mode */
   { "OSSR", 11, 1 },  /* Off-state selection for Run
              mode */
   { "BKE", 12, 1 },  /* Break enable */
   { "BKP", 13, 1 },  /* Break polarity */
   { "AOE", 14, 1 },  /* Automatic output enable */
   { "MOE", 15, 1 },  /* Main output enable */
   { "BKF", 16, 4 },  /* Break filter */
   { NULL, 0, 0 }
};

const Field_t TIM17_DCR_fields[] = {
   { "DBA", 0, 5 },  /* DMA base address */
   { "DBL", 8, 5 },  /* DMA burst length */
   { NULL, 0, 0 }
};

const Field_t TIM17_DMAR_fields[] = {
   { "DMAB", 0, 16 },  /* DMA register for burst
              accesses */
   { NULL, 0, 0 }
};

const Register_t TIM17_registers[] = {
   {"CR1", 0, 32, 0, TIM17_CR1_fields}, /* control register 1 */
   {"CR2", 4, 32, 0, TIM17_CR2_fields}, /* control register 2 */
   {"DIER", 12, 32, 0, TIM17_DIER_fields}, /* DMA/Interrupt enable register */
   {"SR", 16, 32, 0, TIM17_SR_fields}, /* status register */
   {"EGR", 20, 32, 0, TIM17_EGR_fields}, /* event generation register */
   {"CCMR1_Output", 24, 32, 0, TIM17_CCMR1_Output_fields}, /* capture/compare mode register (output
          mode) */
   {"CCMR1_Input", 24, 32, 0, TIM17_CCMR1_Input_fields}, /* capture/compare mode register 1 (input
          mode) */
   {"CCER", 32, 32, 0, TIM17_CCER_fields}, /* capture/compare enable
          register */
   {"CNT", 36, 32, 0, TIM17_CNT_fields}, /* counter */
   {"PSC", 40, 32, 0, TIM17_PSC_fields}, /* prescaler */
   {"ARR", 44, 32, 0, TIM17_ARR_fields}, /* auto-reload register */
   {"RCR", 48, 32, 0, TIM17_RCR_fields}, /* repetition counter register */
   {"CCR1", 52, 32, 0, TIM17_CCR1_fields}, /* capture/compare register 1 */
   {"BDTR", 68, 32, 0, TIM17_BDTR_fields}, /* break and dead-time register */
   {"DCR", 72, 32, 0, TIM17_DCR_fields}, /* DMA control register */
   {"DMAR", 76, 32, 0, TIM17_DMAR_fields}, /* DMA address for full transfer */
   { NULL,0 ,0 ,0 , NULL }
};

const Field_t DMA1_ISR_fields[] = {
   { "GIF1", 0, 1 },  /* Channel 1 Global interrupt
              flag */
   { "TCIF1", 1, 1 },  /* Channel 1 Transfer Complete
              flag */
   { "HTIF1", 2, 1 },  /* Channel 1 Half Transfer Complete
              flag */
   { "TEIF1", 3, 1 },  /* Channel 1 Transfer Error
              flag */
   { "GIF2", 4, 1 },  /* Channel 2 Global interrupt
              flag */
   { "TCIF2", 5, 1 },  /* Channel 2 Transfer Complete
              flag */
   { "HTIF2", 6, 1 },  /* Channel 2 Half Transfer Complete
              flag */
   { "TEIF2", 7, 1 },  /* Channel 2 Transfer Error
              flag */
   { "GIF3", 8, 1 },  /* Channel 3 Global interrupt
              flag */
   { "TCIF3", 9, 1 },  /* Channel 3 Transfer Complete
              flag */
   { "HTIF3", 10, 1 },  /* Channel 3 Half Transfer Complete
              flag */
   { "TEIF3", 11, 1 },  /* Channel 3 Transfer Error
              flag */
   { "GIF4", 12, 1 },  /* Channel 4 Global interrupt
              flag */
   { "TCIF4", 13, 1 },  /* Channel 4 Transfer Complete
              flag */
   { "HTIF4", 14, 1 },  /* Channel 4 Half Transfer Complete
              flag */
   { "TEIF4", 15, 1 },  /* Channel 4 Transfer Error
              flag */
   { "GIF5", 16, 1 },  /* Channel 5 Global interrupt
              flag */
   { "TCIF5", 17, 1 },  /* Channel 5 Transfer Complete
              flag */
   { "HTIF5", 18, 1 },  /* Channel 5 Half Transfer Complete
              flag */
   { "TEIF5", 19, 1 },  /* Channel 5 Transfer Error
              flag */
   { "GIF6", 20, 1 },  /* Channel 6 Global interrupt
              flag */
   { "TCIF6", 21, 1 },  /* Channel 6 Transfer Complete
              flag */
   { "HTIF6", 22, 1 },  /* Channel 6 Half Transfer Complete
              flag */
   { "TEIF6", 23, 1 },  /* Channel 6 Transfer Error
              flag */
   { "GIF7", 24, 1 },  /* Channel 7 Global interrupt
              flag */
   { "TCIF7", 25, 1 },  /* Channel 7 Transfer Complete
              flag */
   { "HTIF7", 26, 1 },  /* Channel 7 Half Transfer Complete
              flag */
   { "TEIF7", 27, 1 },  /* Channel 7 Transfer Error
              flag */
   { NULL, 0, 0 }
};

const Field_t DMA1_IFCR_fields[] = {
   { "CGIF1", 0, 1 },  /* Channel 1 Global interrupt
              clear */
   { "CTCIF1", 1, 1 },  /* Channel 1 Transfer Complete
              clear */
   { "CHTIF1", 2, 1 },  /* Channel 1 Half Transfer
              clear */
   { "CTEIF1", 3, 1 },  /* Channel 1 Transfer Error
              clear */
   { "CGIF2", 4, 1 },  /* Channel 2 Global interrupt
              clear */
   { "CTCIF2", 5, 1 },  /* Channel 2 Transfer Complete
              clear */
   { "CHTIF2", 6, 1 },  /* Channel 2 Half Transfer
              clear */
   { "CTEIF2", 7, 1 },  /* Channel 2 Transfer Error
              clear */
   { "CGIF3", 8, 1 },  /* Channel 3 Global interrupt
              clear */
   { "CTCIF3", 9, 1 },  /* Channel 3 Transfer Complete
              clear */
   { "CHTIF3", 10, 1 },  /* Channel 3 Half Transfer
              clear */
   { "CTEIF3", 11, 1 },  /* Channel 3 Transfer Error
              clear */
   { "CGIF4", 12, 1 },  /* Channel 4 Global interrupt
              clear */
   { "CTCIF4", 13, 1 },  /* Channel 4 Transfer Complete
              clear */
   { "CHTIF4", 14, 1 },  /* Channel 4 Half Transfer
              clear */
   { "CTEIF4", 15, 1 },  /* Channel 4 Transfer Error
              clear */
   { "CGIF5", 16, 1 },  /* Channel 5 Global interrupt
              clear */
   { "CTCIF5", 17, 1 },  /* Channel 5 Transfer Complete
              clear */
   { "CHTIF5", 18, 1 },  /* Channel 5 Half Transfer
              clear */
   { "CTEIF5", 19, 1 },  /* Channel 5 Transfer Error
              clear */
   { "CGIF6", 20, 1 },  /* Channel 6 Global interrupt
              clear */
   { "CTCIF6", 21, 1 },  /* Channel 6 Transfer Complete
              clear */
   { "CHTIF6", 22, 1 },  /* Channel 6 Half Transfer
              clear */
   { "CTEIF6", 23, 1 },  /* Channel 6 Transfer Error
              clear */
   { "CGIF7", 24, 1 },  /* Channel 7 Global interrupt
              clear */
   { "CTCIF7", 25, 1 },  /* Channel 7 Transfer Complete
              clear */
   { "CHTIF7", 26, 1 },  /* Channel 7 Half Transfer
              clear */
   { "CTEIF7", 27, 1 },  /* Channel 7 Transfer Error
              clear */
   { NULL, 0, 0 }
};

const Field_t DMA1_CCR1_fields[] = {
   { "EN", 0, 1 },  /* Channel enable */
   { "TCIE", 1, 1 },  /* Transfer complete interrupt
              enable */
   { "HTIE", 2, 1 },  /* Half Transfer interrupt
              enable */
   { "TEIE", 3, 1 },  /* Transfer error interrupt
              enable */
   { "DIR", 4, 1 },  /* Data transfer direction */
   { "CIRC", 5, 1 },  /* Circular mode */
   { "PINC", 6, 1 },  /* Peripheral increment mode */
   { "MINC", 7, 1 },  /* Memory increment mode */
   { "PSIZE", 8, 2 },  /* Peripheral size */
   { "MSIZE", 10, 2 },  /* Memory size */
   { "PL", 12, 2 },  /* Channel Priority level */
   { "MEM2MEM", 14, 1 },  /* Memory to memory mode */
   { NULL, 0, 0 }
};

const Field_t DMA1_CNDTR1_fields[] = {
   { "NDT", 0, 16 },  /* Number of data to transfer */
   { NULL, 0, 0 }
};

const Field_t DMA1_CPAR1_fields[] = {
   { "PA", 0, 32 },  /* Peripheral address */
   { NULL, 0, 0 }
};

const Field_t DMA1_CMAR1_fields[] = {
   { "MA", 0, 32 },  /* Memory address */
   { NULL, 0, 0 }
};

const Field_t DMA1_CCR2_fields[] = {
   { "EN", 0, 1 },  /* Channel enable */
   { "TCIE", 1, 1 },  /* Transfer complete interrupt
              enable */
   { "HTIE", 2, 1 },  /* Half Transfer interrupt
              enable */
   { "TEIE", 3, 1 },  /* Transfer error interrupt
              enable */
   { "DIR", 4, 1 },  /* Data transfer direction */
   { "CIRC", 5, 1 },  /* Circular mode */
   { "PINC", 6, 1 },  /* Peripheral increment mode */
   { "MINC", 7, 1 },  /* Memory increment mode */
   { "PSIZE", 8, 2 },  /* Peripheral size */
   { "MSIZE", 10, 2 },  /* Memory size */
   { "PL", 12, 2 },  /* Channel Priority level */
   { "MEM2MEM", 14, 1 },  /* Memory to memory mode */
   { NULL, 0, 0 }
};

const Field_t DMA1_CNDTR2_fields[] = {
   { "NDT", 0, 16 },  /* Number of data to transfer */
   { NULL, 0, 0 }
};

const Field_t DMA1_CPAR2_fields[] = {
   { "PA", 0, 32 },  /* Peripheral address */
   { NULL, 0, 0 }
};

const Field_t DMA1_CMAR2_fields[] = {
   { "MA", 0, 32 },  /* Memory address */
   { NULL, 0, 0 }
};

const Field_t DMA1_CCR3_fields[] = {
   { "EN", 0, 1 },  /* Channel enable */
   { "TCIE", 1, 1 },  /* Transfer complete interrupt
              enable */
   { "HTIE", 2, 1 },  /* Half Transfer interrupt
              enable */
   { "TEIE", 3, 1 },  /* Transfer error interrupt
              enable */
   { "DIR", 4, 1 },  /* Data transfer direction */
   { "CIRC", 5, 1 },  /* Circular mode */
   { "PINC", 6, 1 },  /* Peripheral increment mode */
   { "MINC", 7, 1 },  /* Memory increment mode */
   { "PSIZE", 8, 2 },  /* Peripheral size */
   { "MSIZE", 10, 2 },  /* Memory size */
   { "PL", 12, 2 },  /* Channel Priority level */
   { "MEM2MEM", 14, 1 },  /* Memory to memory mode */
   { NULL, 0, 0 }
};

const Field_t DMA1_CNDTR3_fields[] = {
   { "NDT", 0, 16 },  /* Number of data to transfer */
   { NULL, 0, 0 }
};

const Field_t DMA1_CPAR3_fields[] = {
   { "PA", 0, 32 },  /* Peripheral address */
   { NULL, 0, 0 }
};

const Field_t DMA1_CMAR3_fields[] = {
   { "MA", 0, 32 },  /* Memory address */
   { NULL, 0, 0 }
};

const Field_t DMA1_CCR4_fields[] = {
   { "EN", 0, 1 },  /* Channel enable */
   { "TCIE", 1, 1 },  /* Transfer complete interrupt
              enable */
   { "HTIE", 2, 1 },  /* Half Transfer interrupt
              enable */
   { "TEIE", 3, 1 },  /* Transfer error interrupt
              enable */
   { "DIR", 4, 1 },  /* Data transfer direction */
   { "CIRC", 5, 1 },  /* Circular mode */
   { "PINC", 6, 1 },  /* Peripheral increment mode */
   { "MINC", 7, 1 },  /* Memory increment mode */
   { "PSIZE", 8, 2 },  /* Peripheral size */
   { "MSIZE", 10, 2 },  /* Memory size */
   { "PL", 12, 2 },  /* Channel Priority level */
   { "MEM2MEM", 14, 1 },  /* Memory to memory mode */
   { NULL, 0, 0 }
};

const Field_t DMA1_CNDTR4_fields[] = {
   { "NDT", 0, 16 },  /* Number of data to transfer */
   { NULL, 0, 0 }
};

const Field_t DMA1_CPAR4_fields[] = {
   { "PA", 0, 32 },  /* Peripheral address */
   { NULL, 0, 0 }
};

const Field_t DMA1_CMAR4_fields[] = {
   { "MA", 0, 32 },  /* Memory address */
   { NULL, 0, 0 }
};

const Field_t DMA1_CCR5_fields[] = {
   { "EN", 0, 1 },  /* Channel enable */
   { "TCIE", 1, 1 },  /* Transfer complete interrupt
              enable */
   { "HTIE", 2, 1 },  /* Half Transfer interrupt
              enable */
   { "TEIE", 3, 1 },  /* Transfer error interrupt
              enable */
   { "DIR", 4, 1 },  /* Data transfer direction */
   { "CIRC", 5, 1 },  /* Circular mode */
   { "PINC", 6, 1 },  /* Peripheral increment mode */
   { "MINC", 7, 1 },  /* Memory increment mode */
   { "PSIZE", 8, 2 },  /* Peripheral size */
   { "MSIZE", 10, 2 },  /* Memory size */
   { "PL", 12, 2 },  /* Channel Priority level */
   { "MEM2MEM", 14, 1 },  /* Memory to memory mode */
   { NULL, 0, 0 }
};

const Field_t DMA1_CNDTR5_fields[] = {
   { "NDT", 0, 16 },  /* Number of data to transfer */
   { NULL, 0, 0 }
};

const Field_t DMA1_CPAR5_fields[] = {
   { "PA", 0, 32 },  /* Peripheral address */
   { NULL, 0, 0 }
};

const Field_t DMA1_CMAR5_fields[] = {
   { "MA", 0, 32 },  /* Memory address */
   { NULL, 0, 0 }
};

const Field_t DMA1_CCR6_fields[] = {
   { "EN", 0, 1 },  /* Channel enable */
   { "TCIE", 1, 1 },  /* Transfer complete interrupt
              enable */
   { "HTIE", 2, 1 },  /* Half Transfer interrupt
              enable */
   { "TEIE", 3, 1 },  /* Transfer error interrupt
              enable */
   { "DIR", 4, 1 },  /* Data transfer direction */
   { "CIRC", 5, 1 },  /* Circular mode */
   { "PINC", 6, 1 },  /* Peripheral increment mode */
   { "MINC", 7, 1 },  /* Memory increment mode */
   { "PSIZE", 8, 2 },  /* Peripheral size */
   { "MSIZE", 10, 2 },  /* Memory size */
   { "PL", 12, 2 },  /* Channel Priority level */
   { "MEM2MEM", 14, 1 },  /* Memory to memory mode */
   { NULL, 0, 0 }
};

const Field_t DMA1_CNDTR6_fields[] = {
   { "NDT", 0, 16 },  /* Number of data to transfer */
   { NULL, 0, 0 }
};

const Field_t DMA1_CPAR6_fields[] = {
   { "PA", 0, 32 },  /* Peripheral address */
   { NULL, 0, 0 }
};

const Field_t DMA1_CMAR6_fields[] = {
   { "MA", 0, 32 },  /* Memory address */
   { NULL, 0, 0 }
};

const Field_t DMA1_CCR7_fields[] = {
   { "EN", 0, 1 },  /* Channel enable */
   { "TCIE", 1, 1 },  /* Transfer complete interrupt
              enable */
   { "HTIE", 2, 1 },  /* Half Transfer interrupt
              enable */
   { "TEIE", 3, 1 },  /* Transfer error interrupt
              enable */
   { "DIR", 4, 1 },  /* Data transfer direction */
   { "CIRC", 5, 1 },  /* Circular mode */
   { "PINC", 6, 1 },  /* Peripheral increment mode */
   { "MINC", 7, 1 },  /* Memory increment mode */
   { "PSIZE", 8, 2 },  /* Peripheral size */
   { "MSIZE", 10, 2 },  /* Memory size */
   { "PL", 12, 2 },  /* Channel Priority level */
   { "MEM2MEM", 14, 1 },  /* Memory to memory mode */
   { NULL, 0, 0 }
};

const Field_t DMA1_CNDTR7_fields[] = {
   { "NDT", 0, 16 },  /* Number of data to transfer */
   { NULL, 0, 0 }
};

const Field_t DMA1_CPAR7_fields[] = {
   { "PA", 0, 32 },  /* Peripheral address */
   { NULL, 0, 0 }
};

const Field_t DMA1_CMAR7_fields[] = {
   { "MA", 0, 32 },  /* Memory address */
   { NULL, 0, 0 }
};

const Register_t DMA1_registers[] = {
   {"ISR", 0, 32, 0, DMA1_ISR_fields}, /* DMA interrupt status register
          (DMA_ISR) */
   {"IFCR", 4, 32, 0, DMA1_IFCR_fields}, /* DMA interrupt flag clear register
          (DMA_IFCR) */
   {"CCR1", 8, 32, 0, DMA1_CCR1_fields}, /* DMA channel configuration register
          (DMA_CCR) */
   {"CNDTR1", 12, 32, 0, DMA1_CNDTR1_fields}, /* DMA channel 1 number of data
          register */
   {"CPAR1", 16, 32, 0, DMA1_CPAR1_fields}, /* DMA channel 1 peripheral address
          register */
   {"CMAR1", 20, 32, 0, DMA1_CMAR1_fields}, /* DMA channel 1 memory address
          register */
   {"CCR2", 28, 32, 0, DMA1_CCR2_fields}, /* DMA channel configuration register
          (DMA_CCR) */
   {"CNDTR2", 32, 32, 0, DMA1_CNDTR2_fields}, /* DMA channel 2 number of data
          register */
   {"CPAR2", 36, 32, 0, DMA1_CPAR2_fields}, /* DMA channel 2 peripheral address
          register */
   {"CMAR2", 40, 32, 0, DMA1_CMAR2_fields}, /* DMA channel 2 memory address
          register */
   {"CCR3", 48, 32, 0, DMA1_CCR3_fields}, /* DMA channel configuration register
          (DMA_CCR) */
   {"CNDTR3", 52, 32, 0, DMA1_CNDTR3_fields}, /* DMA channel 3 number of data
          register */
   {"CPAR3", 56, 32, 0, DMA1_CPAR3_fields}, /* DMA channel 3 peripheral address
          register */
   {"CMAR3", 60, 32, 0, DMA1_CMAR3_fields}, /* DMA channel 3 memory address
          register */
   {"CCR4", 68, 32, 0, DMA1_CCR4_fields}, /* DMA channel configuration register
          (DMA_CCR) */
   {"CNDTR4", 72, 32, 0, DMA1_CNDTR4_fields}, /* DMA channel 4 number of data
          register */
   {"CPAR4", 76, 32, 0, DMA1_CPAR4_fields}, /* DMA channel 4 peripheral address
          register */
   {"CMAR4", 80, 32, 0, DMA1_CMAR4_fields}, /* DMA channel 4 memory address
          register */
   {"CCR5", 88, 32, 0, DMA1_CCR5_fields}, /* DMA channel configuration register
          (DMA_CCR) */
   {"CNDTR5", 92, 32, 0, DMA1_CNDTR5_fields}, /* DMA channel 5 number of data
          register */
   {"CPAR5", 96, 32, 0, DMA1_CPAR5_fields}, /* DMA channel 5 peripheral address
          register */
   {"CMAR5", 100, 32, 0, DMA1_CMAR5_fields}, /* DMA channel 5 memory address
          register */
   {"CCR6", 108, 32, 0, DMA1_CCR6_fields}, /* DMA channel configuration register
          (DMA_CCR) */
   {"CNDTR6", 112, 32, 0, DMA1_CNDTR6_fields}, /* DMA channel 6 number of data
          register */
   {"CPAR6", 116, 32, 0, DMA1_CPAR6_fields}, /* DMA channel 6 peripheral address
          register */
   {"CMAR6", 120, 32, 0, DMA1_CMAR6_fields}, /* DMA channel 6 memory address
          register */
   {"CCR7", 128, 32, 0, DMA1_CCR7_fields}, /* DMA channel configuration register
          (DMA_CCR) */
   {"CNDTR7", 132, 32, 0, DMA1_CNDTR7_fields}, /* DMA channel 7 number of data
          register */
   {"CPAR7", 136, 32, 0, DMA1_CPAR7_fields}, /* DMA channel 7 peripheral address
          register */
   {"CMAR7", 140, 32, 0, DMA1_CMAR7_fields}, /* DMA channel 7 memory address
          register */
   { NULL,0 ,0 ,0 , NULL }
};

const Field_t RCC_CR_fields[] = {
   { "HSION", 0, 1 },  /* Internal High Speed clock
              enable */
   { "HSIRDY", 1, 1 },  /* Internal High Speed clock ready
              flag */
   { "HSITRIM", 3, 5 },  /* Internal High Speed clock
              trimming */
   { "HSICAL", 8, 8 },  /* Internal High Speed clock
              Calibration */
   { "HSEON", 16, 1 },  /* External High Speed clock
              enable */
   { "HSERDY", 17, 1 },  /* External High Speed clock ready
              flag */
   { "HSEBYP", 18, 1 },  /* External High Speed clock
              Bypass */
   { "CSSON", 19, 1 },  /* Clock Security System
              enable */
   { "PLLON", 24, 1 },  /* PLL enable */
   { "PLLRDY", 25, 1 },  /* PLL clock ready flag */
   { NULL, 0, 0 }
};

const Field_t RCC_CFGR_fields[] = {
   { "SW", 0, 2 },  /* System clock Switch */
   { "SWS", 2, 2 },  /* System Clock Switch Status */
   { "HPRE", 4, 4 },  /* AHB prescaler */
   { "PPRE1", 8, 3 },  /* APB Low speed prescaler
              (APB1) */
   { "PPRE2", 11, 3 },  /* APB high speed prescaler
              (APB2) */
   { "PLLSRC", 16, 1 },  /* PLL entry clock source */
   { "PLLXTPRE", 17, 1 },  /* HSE divider for PLL entry */
   { "PLLMUL", 18, 4 },  /* PLL Multiplication Factor */
   { "USBPRES", 22, 1 },  /* USB prescaler */
   { "I2SSRC", 23, 1 },  /* I2S external clock source
              selection */
   { "MCO", 24, 3 },  /* Microcontroller clock
              output */
   { "MCOF", 28, 1 },  /* Microcontroller Clock Output
              Flag */
   { NULL, 0, 0 }
};

const Field_t RCC_CIR_fields[] = {
   { "LSIRDYF", 0, 1 },  /* LSI Ready Interrupt flag */
   { "LSERDYF", 1, 1 },  /* LSE Ready Interrupt flag */
   { "HSIRDYF", 2, 1 },  /* HSI Ready Interrupt flag */
   { "HSERDYF", 3, 1 },  /* HSE Ready Interrupt flag */
   { "PLLRDYF", 4, 1 },  /* PLL Ready Interrupt flag */
   { "CSSF", 7, 1 },  /* Clock Security System Interrupt
              flag */
   { "LSIRDYIE", 8, 1 },  /* LSI Ready Interrupt Enable */
   { "LSERDYIE", 9, 1 },  /* LSE Ready Interrupt Enable */
   { "HSIRDYIE", 10, 1 },  /* HSI Ready Interrupt Enable */
   { "HSERDYIE", 11, 1 },  /* HSE Ready Interrupt Enable */
   { "PLLRDYIE", 12, 1 },  /* PLL Ready Interrupt Enable */
   { "LSIRDYC", 16, 1 },  /* LSI Ready Interrupt Clear */
   { "LSERDYC", 17, 1 },  /* LSE Ready Interrupt Clear */
   { "HSIRDYC", 18, 1 },  /* HSI Ready Interrupt Clear */
   { "HSERDYC", 19, 1 },  /* HSE Ready Interrupt Clear */
   { "PLLRDYC", 20, 1 },  /* PLL Ready Interrupt Clear */
   { "CSSC", 23, 1 },  /* Clock security system interrupt
              clear */
   { NULL, 0, 0 }
};

const Field_t RCC_APB2RSTR_fields[] = {
   { "SYSCFGRST", 0, 1 },  /* SYSCFG and COMP reset */
   { "TIM1RST", 11, 1 },  /* TIM1 timer reset */
   { "SPI1RST", 12, 1 },  /* SPI 1 reset */
   { "TIM8RST", 13, 1 },  /* TIM8 timer reset */
   { "USART1RST", 14, 1 },  /* USART1 reset */
   { "TIM15RST", 16, 1 },  /* TIM15 timer reset */
   { "TIM16RST", 17, 1 },  /* TIM16 timer reset */
   { "TIM17RST", 18, 1 },  /* TIM17 timer reset */
   { NULL, 0, 0 }
};

const Field_t RCC_APB1RSTR_fields[] = {
   { "TIM2RST", 0, 1 },  /* Timer 2 reset */
   { "TIM3RST", 1, 1 },  /* Timer 3 reset */
   { "TIM4RST", 2, 1 },  /* Timer 14 reset */
   { "TIM6RST", 4, 1 },  /* Timer 6 reset */
   { "TIM7RST", 5, 1 },  /* Timer 7 reset */
   { "WWDGRST", 11, 1 },  /* Window watchdog reset */
   { "SPI2RST", 14, 1 },  /* SPI2 reset */
   { "SPI3RST", 15, 1 },  /* SPI3 reset */
   { "USART2RST", 17, 1 },  /* USART 2 reset */
   { "USART3RST", 18, 1 },  /* USART3 reset */
   { "UART4RST", 19, 1 },  /* UART 4 reset */
   { "UART5RST", 20, 1 },  /* UART 5 reset */
   { "I2C1RST", 21, 1 },  /* I2C1 reset */
   { "I2C2RST", 22, 1 },  /* I2C2 reset */
   { "USBRST", 23, 1 },  /* USB reset */
   { "CANRST", 25, 1 },  /* CAN reset */
   { "PWRRST", 28, 1 },  /* Power interface reset */
   { "DACRST", 29, 1 },  /* DAC interface reset */
   { NULL, 0, 0 }
};

const Field_t RCC_AHBENR_fields[] = {
   { "DMAEN", 0, 1 },  /* DMA1 clock enable */
   { "DMA2EN", 1, 1 },  /* DMA2 clock enable */
   { "SRAMEN", 2, 1 },  /* SRAM interface clock
              enable */
   { "FLITFEN", 4, 1 },  /* FLITF clock enable */
   { "CRCEN", 6, 1 },  /* CRC clock enable */
   { "IOPAEN", 17, 1 },  /* I/O port A clock enable */
   { "IOPBEN", 18, 1 },  /* I/O port B clock enable */
   { "IOPCEN", 19, 1 },  /* I/O port C clock enable */
   { "IOPDEN", 20, 1 },  /* I/O port D clock enable */
   { "IOPEEN", 21, 1 },  /* I/O port E clock enable */
   { "IOPFEN", 22, 1 },  /* I/O port F clock enable */
   { "TSCEN", 24, 1 },  /* Touch sensing controller clock
              enable */
   { "ADC12EN", 28, 1 },  /* ADC1 and ADC2 clock enable */
   { "ADC34EN", 29, 1 },  /* ADC3 and ADC4 clock enable */
   { NULL, 0, 0 }
};

const Field_t RCC_APB2ENR_fields[] = {
   { "SYSCFGEN", 0, 1 },  /* SYSCFG clock enable */
   { "TIM1EN", 11, 1 },  /* TIM1 Timer clock enable */
   { "SPI1EN", 12, 1 },  /* SPI 1 clock enable */
   { "TIM8EN", 13, 1 },  /* TIM8 Timer clock enable */
   { "USART1EN", 14, 1 },  /* USART1 clock enable */
   { "TIM15EN", 16, 1 },  /* TIM15 timer clock enable */
   { "TIM16EN", 17, 1 },  /* TIM16 timer clock enable */
   { "TIM17EN", 18, 1 },  /* TIM17 timer clock enable */
   { NULL, 0, 0 }
};

const Field_t RCC_APB1ENR_fields[] = {
   { "TIM2EN", 0, 1 },  /* Timer 2 clock enable */
   { "TIM3EN", 1, 1 },  /* Timer 3 clock enable */
   { "TIM4EN", 2, 1 },  /* Timer 4 clock enable */
   { "TIM6EN", 4, 1 },  /* Timer 6 clock enable */
   { "TIM7EN", 5, 1 },  /* Timer 7 clock enable */
   { "WWDGEN", 11, 1 },  /* Window watchdog clock
              enable */
   { "SPI2EN", 14, 1 },  /* SPI 2 clock enable */
   { "SPI3EN", 15, 1 },  /* SPI 3 clock enable */
   { "USART2EN", 17, 1 },  /* USART 2 clock enable */
   { "I2C1EN", 21, 1 },  /* I2C 1 clock enable */
   { "I2C2EN", 22, 1 },  /* I2C 2 clock enable */
   { "USBEN", 23, 1 },  /* USB clock enable */
   { "CANEN", 25, 1 },  /* CAN clock enable */
   { "PWREN", 28, 1 },  /* Power interface clock
              enable */
   { "DACEN", 29, 1 },  /* DAC interface clock enable */
   { NULL, 0, 0 }
};

const Field_t RCC_BDCR_fields[] = {
   { "LSEON", 0, 1 },  /* External Low Speed oscillator
              enable */
   { "LSERDY", 1, 1 },  /* External Low Speed oscillator
              ready */
   { "LSEBYP", 2, 1 },  /* External Low Speed oscillator
              bypass */
   { "LSEDRV", 3, 2 },  /* LSE oscillator drive
              capability */
   { "RTCSEL", 8, 2 },  /* RTC clock source selection */
   { "RTCEN", 15, 1 },  /* RTC clock enable */
   { "BDRST", 16, 1 },  /* Backup domain software
              reset */
   { NULL, 0, 0 }
};

const Field_t RCC_CSR_fields[] = {
   { "LSION", 0, 1 },  /* Internal low speed oscillator
              enable */
   { "LSIRDY", 1, 1 },  /* Internal low speed oscillator
              ready */
   { "RMVF", 24, 1 },  /* Remove reset flag */
   { "OBLRSTF", 25, 1 },  /* Option byte loader reset
              flag */
   { "PINRSTF", 26, 1 },  /* PIN reset flag */
   { "PORRSTF", 27, 1 },  /* POR/PDR reset flag */
   { "SFTRSTF", 28, 1 },  /* Software reset flag */
   { "IWDGRSTF", 29, 1 },  /* Independent watchdog reset
              flag */
   { "WWDGRSTF", 30, 1 },  /* Window watchdog reset flag */
   { "LPWRRSTF", 31, 1 },  /* Low-power reset flag */
   { NULL, 0, 0 }
};

const Field_t RCC_AHBRSTR_fields[] = {
   { "IOPARST", 17, 1 },  /* I/O port A reset */
   { "IOPBRST", 18, 1 },  /* I/O port B reset */
   { "IOPCRST", 19, 1 },  /* I/O port C reset */
   { "IOPDRST", 20, 1 },  /* I/O port D reset */
   { "IOPERST", 21, 1 },  /* I/O port E reset */
   { "IOPFRST", 22, 1 },  /* I/O port F reset */
   { "TSCRST", 24, 1 },  /* Touch sensing controller
              reset */
   { "ADC12RST", 28, 1 },  /* ADC1 and ADC2 reset */
   { "ADC34RST", 29, 1 },  /* ADC3 and ADC4 reset */
   { NULL, 0, 0 }
};

const Field_t RCC_CFGR2_fields[] = {
   { "PREDIV", 0, 4 },  /* PREDIV division factor */
   { "ADC12PRES", 4, 5 },  /* ADC1 and ADC2 prescaler */
   { "ADC34PRES", 9, 5 },  /* ADC3 and ADC4 prescaler */
   { NULL, 0, 0 }
};

const Field_t RCC_CFGR3_fields[] = {
   { "USART1SW", 0, 2 },  /* USART1 clock source
              selection */
   { "I2C1SW", 4, 1 },  /* I2C1 clock source
              selection */
   { "I2C2SW", 5, 1 },  /* I2C2 clock source
              selection */
   { "TIM1SW", 8, 1 },  /* Timer1 clock source
              selection */
   { "TIM8SW", 9, 1 },  /* Timer8 clock source
              selection */
   { "USART2SW", 16, 2 },  /* USART2 clock source
              selection */
   { "USART3SW", 18, 2 },  /* USART3 clock source
              selection */
   { "UART4SW", 20, 2 },  /* UART4 clock source
              selection */
   { "UART5SW", 22, 2 },  /* UART5 clock source
              selection */
   { NULL, 0, 0 }
};

const Register_t RCC_registers[] = {
   {"CR", 0, 32, 0, RCC_CR_fields}, /* Clock control register */
   {"CFGR", 4, 32, 0, RCC_CFGR_fields}, /* Clock configuration register
          (RCC_CFGR) */
   {"CIR", 8, 32, 0, RCC_CIR_fields}, /* Clock interrupt register
          (RCC_CIR) */
   {"APB2RSTR", 12, 32, 0, RCC_APB2RSTR_fields}, /* APB2 peripheral reset register
          (RCC_APB2RSTR) */
   {"APB1RSTR", 16, 32, 0, RCC_APB1RSTR_fields}, /* APB1 peripheral reset register
          (RCC_APB1RSTR) */
   {"AHBENR", 20, 32, 0, RCC_AHBENR_fields}, /* AHB Peripheral Clock enable register
          (RCC_AHBENR) */
   {"APB2ENR", 24, 32, 0, RCC_APB2ENR_fields}, /* APB2 peripheral clock enable register
          (RCC_APB2ENR) */
   {"APB1ENR", 28, 32, 0, RCC_APB1ENR_fields}, /* APB1 peripheral clock enable register
          (RCC_APB1ENR) */
   {"BDCR", 32, 32, 0, RCC_BDCR_fields}, /* Backup domain control register
          (RCC_BDCR) */
   {"CSR", 36, 32, 0, RCC_CSR_fields}, /* Control/status register
          (RCC_CSR) */
   {"AHBRSTR", 40, 32, 0, RCC_AHBRSTR_fields}, /* AHB peripheral reset register */
   {"CFGR2", 44, 32, 0, RCC_CFGR2_fields}, /* Clock configuration register 2 */
   {"CFGR3", 48, 32, 0, RCC_CFGR3_fields}, /* Clock configuration register 3 */
   { NULL,0 ,0 ,0 , NULL }
};

const Field_t Flash_ACR_fields[] = {
   { "LATENCY", 0, 3 },  /* LATENCY */
   { "PRFTBE", 4, 1 },  /* PRFTBE */
   { "PRFTBS", 5, 1 },  /* PRFTBS */
   { NULL, 0, 0 }
};

const Field_t Flash_KEYR_fields[] = {
   { "FKEYR", 0, 32 },  /* Flash Key */
   { NULL, 0, 0 }
};

const Field_t Flash_OPTKEYR_fields[] = {
   { "OPTKEYR", 0, 32 },  /* Option byte key */
   { NULL, 0, 0 }
};

const Field_t Flash_SR_fields[] = {
   { "BSY", 0, 1 },  /* Busy */
   { "PGERR", 2, 1 },  /* Programming error */
   { "WRPRT", 4, 1 },  /* Write protection error */
   { "EOP", 5, 1 },  /* End of operation */
   { NULL, 0, 0 }
};

const Field_t Flash_CR_fields[] = {
   { "PG", 0, 1 },  /* Programming */
   { "PER", 1, 1 },  /* Page erase */
   { "MER", 2, 1 },  /* Mass erase */
   { "OPTPG", 4, 1 },  /* Option byte programming */
   { "OPTER", 5, 1 },  /* Option byte erase */
   { "STRT", 6, 1 },  /* Start */
   { "LOCK", 7, 1 },  /* Lock */
   { "OPTWRE", 9, 1 },  /* Option bytes write enable */
   { "ERRIE", 10, 1 },  /* Error interrupt enable */
   { "EOPIE", 12, 1 },  /* End of operation interrupt
              enable */
   { "FORCE_OPTLOAD", 13, 1 },  /* Force option byte loading */
   { NULL, 0, 0 }
};

const Field_t Flash_AR_fields[] = {
   { "FAR", 0, 32 },  /* Flash address */
   { NULL, 0, 0 }
};

const Field_t Flash_OBR_fields[] = {
   { "OPTERR", 0, 1 },  /* Option byte error */
   { "LEVEL1_PROT", 1, 1 },  /* Level 1 protection status */
   { "LEVEL2_PROT", 2, 1 },  /* Level 2 protection status */
   { "WDG_SW", 8, 1 },  /* WDG_SW */
   { "nRST_STOP", 9, 1 },  /* nRST_STOP */
   { "nRST_STDBY", 10, 1 },  /* nRST_STDBY */
   { "BOOT1", 12, 1 },  /* BOOT1 */
   { "VDDA_MONITOR", 13, 1 },  /* VDDA_MONITOR */
   { "SRAM_PARITY_CHECK", 14, 1 },  /* SRAM_PARITY_CHECK */
   { "Data0", 16, 8 },  /* Data0 */
   { "Data1", 24, 8 },  /* Data1 */
   { NULL, 0, 0 }
};

const Field_t Flash_WRPR_fields[] = {
   { "WRP", 0, 32 },  /* Write protect */
   { NULL, 0, 0 }
};

const Register_t Flash_registers[] = {
   {"ACR", 0, 32, 0, Flash_ACR_fields}, /* Flash access control register */
   {"KEYR", 4, 32, 0, Flash_KEYR_fields}, /* Flash key register */
   {"OPTKEYR", 8, 32, 0, Flash_OPTKEYR_fields}, /* Flash option key register */
   {"SR", 12, 32, 0, Flash_SR_fields}, /* Flash status register */
   {"CR", 16, 32, 0, Flash_CR_fields}, /* Flash control register */
   {"AR", 20, 32, 0, Flash_AR_fields}, /* Flash address register */
   {"OBR", 28, 32, 0, Flash_OBR_fields}, /* Option byte register */
   {"WRPR", 32, 32, 0, Flash_WRPR_fields}, /* Write protection register */
   { NULL,0 ,0 ,0 , NULL }
};

const Field_t CRC_DR_fields[] = {
   { "DR", 0, 32 },  /* Data register bits */
   { NULL, 0, 0 }
};

const Field_t CRC_IDR_fields[] = {
   { "IDR", 0, 8 },  /* General-purpose 8-bit data register
              bits */
   { NULL, 0, 0 }
};

const Field_t CRC_CR_fields[] = {
   { "RESET", 0, 1 },  /* reset bit */
   { "POLYSIZE", 3, 2 },  /* Polynomial size */
   { "REV_IN", 5, 2 },  /* Reverse input data */
   { "REV_OUT", 7, 1 },  /* Reverse output data */
   { NULL, 0, 0 }
};

const Field_t CRC_INIT_fields[] = {
   { "INIT", 0, 32 },  /* Programmable initial CRC
              value */
   { NULL, 0, 0 }
};

const Field_t CRC_POL_fields[] = {
   { "POL", 0, 32 },  /* Programmable polynomial */
   { NULL, 0, 0 }
};

const Register_t CRC_registers[] = {
   {"DR", 0, 32, 0, CRC_DR_fields}, /* Data register */
   {"IDR", 4, 32, 0, CRC_IDR_fields}, /* Independent data register */
   {"CR", 8, 32, 0, CRC_CR_fields}, /* Control register */
   {"INIT", 16, 32, 0, CRC_INIT_fields}, /* Initial CRC value */
   {"POL", 20, 32, 0, CRC_POL_fields}, /* CRC polynomial */
   { NULL,0 ,0 ,0 , NULL }
};

const Field_t TSC_CR_fields[] = {
   { "TSCE", 0, 1 },  /* Touch sensing controller
              enable */
   { "START", 1, 1 },  /* Start a new acquisition */
   { "AM", 2, 1 },  /* Acquisition mode */
   { "SYNCPOL", 3, 1 },  /* Synchronization pin
              polarity */
   { "IODEF", 4, 1 },  /* I/O Default mode */
   { "MCV", 5, 3 },  /* Max count value */
   { "PGPSC", 12, 3 },  /* pulse generator prescaler */
   { "SSPSC", 15, 1 },  /* Spread spectrum prescaler */
   { "SSE", 16, 1 },  /* Spread spectrum enable */
   { "SSD", 17, 7 },  /* Spread spectrum deviation */
   { "CTPL", 24, 4 },  /* Charge transfer pulse low */
   { "CTPH", 28, 4 },  /* Charge transfer pulse high */
   { NULL, 0, 0 }
};

const Field_t TSC_IER_fields[] = {
   { "EOAIE", 0, 1 },  /* End of acquisition interrupt
              enable */
   { "MCEIE", 1, 1 },  /* Max count error interrupt
              enable */
   { NULL, 0, 0 }
};

const Field_t TSC_ICR_fields[] = {
   { "EOAIC", 0, 1 },  /* End of acquisition interrupt
              clear */
   { "MCEIC", 1, 1 },  /* Max count error interrupt
              clear */
   { NULL, 0, 0 }
};

const Field_t TSC_ISR_fields[] = {
   { "EOAF", 0, 1 },  /* End of acquisition flag */
   { "MCEF", 1, 1 },  /* Max count error flag */
   { NULL, 0, 0 }
};

const Field_t TSC_IOHCR_fields[] = {
   { "G1_IO1", 0, 1 },  /* G1_IO1 Schmitt trigger hysteresis
              mode */
   { "G1_IO2", 1, 1 },  /* G1_IO2 Schmitt trigger hysteresis
              mode */
   { "G1_IO3", 2, 1 },  /* G1_IO3 Schmitt trigger hysteresis
              mode */
   { "G1_IO4", 3, 1 },  /* G1_IO4 Schmitt trigger hysteresis
              mode */
   { "G2_IO1", 4, 1 },  /* G2_IO1 Schmitt trigger hysteresis
              mode */
   { "G2_IO2", 5, 1 },  /* G2_IO2 Schmitt trigger hysteresis
              mode */
   { "G2_IO3", 6, 1 },  /* G2_IO3 Schmitt trigger hysteresis
              mode */
   { "G2_IO4", 7, 1 },  /* G2_IO4 Schmitt trigger hysteresis
              mode */
   { "G3_IO1", 8, 1 },  /* G3_IO1 Schmitt trigger hysteresis
              mode */
   { "G3_IO2", 9, 1 },  /* G3_IO2 Schmitt trigger hysteresis
              mode */
   { "G3_IO3", 10, 1 },  /* G3_IO3 Schmitt trigger hysteresis
              mode */
   { "G3_IO4", 11, 1 },  /* G3_IO4 Schmitt trigger hysteresis
              mode */
   { "G4_IO1", 12, 1 },  /* G4_IO1 Schmitt trigger hysteresis
              mode */
   { "G4_IO2", 13, 1 },  /* G4_IO2 Schmitt trigger hysteresis
              mode */
   { "G4_IO3", 14, 1 },  /* G4_IO3 Schmitt trigger hysteresis
              mode */
   { "G4_IO4", 15, 1 },  /* G4_IO4 Schmitt trigger hysteresis
              mode */
   { "G5_IO1", 16, 1 },  /* G5_IO1 Schmitt trigger hysteresis
              mode */
   { "G5_IO2", 17, 1 },  /* G5_IO2 Schmitt trigger hysteresis
              mode */
   { "G5_IO3", 18, 1 },  /* G5_IO3 Schmitt trigger hysteresis
              mode */
   { "G5_IO4", 19, 1 },  /* G5_IO4 Schmitt trigger hysteresis
              mode */
   { "G6_IO1", 20, 1 },  /* G6_IO1 Schmitt trigger hysteresis
              mode */
   { "G6_IO2", 21, 1 },  /* G6_IO2 Schmitt trigger hysteresis
              mode */
   { "G6_IO3", 22, 1 },  /* G6_IO3 Schmitt trigger hysteresis
              mode */
   { "G6_IO4", 23, 1 },  /* G6_IO4 Schmitt trigger hysteresis
              mode */
   { "G7_IO1", 24, 1 },  /* G7_IO1 Schmitt trigger hysteresis
              mode */
   { "G7_IO2", 25, 1 },  /* G7_IO2 Schmitt trigger hysteresis
              mode */
   { "G7_IO3", 26, 1 },  /* G7_IO3 Schmitt trigger hysteresis
              mode */
   { "G7_IO4", 27, 1 },  /* G7_IO4 Schmitt trigger hysteresis
              mode */
   { "G8_IO1", 28, 1 },  /* G8_IO1 Schmitt trigger hysteresis
              mode */
   { "G8_IO2", 29, 1 },  /* G8_IO2 Schmitt trigger hysteresis
              mode */
   { "G8_IO3", 30, 1 },  /* G8_IO3 Schmitt trigger hysteresis
              mode */
   { "G8_IO4", 31, 1 },  /* G8_IO4 Schmitt trigger hysteresis
              mode */
   { NULL, 0, 0 }
};

const Field_t TSC_IOASCR_fields[] = {
   { "G1_IO1", 0, 1 },  /* G1_IO1 analog switch
              enable */
   { "G1_IO2", 1, 1 },  /* G1_IO2 analog switch
              enable */
   { "G1_IO3", 2, 1 },  /* G1_IO3 analog switch
              enable */
   { "G1_IO4", 3, 1 },  /* G1_IO4 analog switch
              enable */
   { "G2_IO1", 4, 1 },  /* G2_IO1 analog switch
              enable */
   { "G2_IO2", 5, 1 },  /* G2_IO2 analog switch
              enable */
   { "G2_IO3", 6, 1 },  /* G2_IO3 analog switch
              enable */
   { "G2_IO4", 7, 1 },  /* G2_IO4 analog switch
              enable */
   { "G3_IO1", 8, 1 },  /* G3_IO1 analog switch
              enable */
   { "G3_IO2", 9, 1 },  /* G3_IO2 analog switch
              enable */
   { "G3_IO3", 10, 1 },  /* G3_IO3 analog switch
              enable */
   { "G3_IO4", 11, 1 },  /* G3_IO4 analog switch
              enable */
   { "G4_IO1", 12, 1 },  /* G4_IO1 analog switch
              enable */
   { "G4_IO2", 13, 1 },  /* G4_IO2 analog switch
              enable */
   { "G4_IO3", 14, 1 },  /* G4_IO3 analog switch
              enable */
   { "G4_IO4", 15, 1 },  /* G4_IO4 analog switch
              enable */
   { "G5_IO1", 16, 1 },  /* G5_IO1 analog switch
              enable */
   { "G5_IO2", 17, 1 },  /* G5_IO2 analog switch
              enable */
   { "G5_IO3", 18, 1 },  /* G5_IO3 analog switch
              enable */
   { "G5_IO4", 19, 1 },  /* G5_IO4 analog switch
              enable */
   { "G6_IO1", 20, 1 },  /* G6_IO1 analog switch
              enable */
   { "G6_IO2", 21, 1 },  /* G6_IO2 analog switch
              enable */
   { "G6_IO3", 22, 1 },  /* G6_IO3 analog switch
              enable */
   { "G6_IO4", 23, 1 },  /* G6_IO4 analog switch
              enable */
   { "G7_IO1", 24, 1 },  /* G7_IO1 analog switch
              enable */
   { "G7_IO2", 25, 1 },  /* G7_IO2 analog switch
              enable */
   { "G7_IO3", 26, 1 },  /* G7_IO3 analog switch
              enable */
   { "G7_IO4", 27, 1 },  /* G7_IO4 analog switch
              enable */
   { "G8_IO1", 28, 1 },  /* G8_IO1 analog switch
              enable */
   { "G8_IO2", 29, 1 },  /* G8_IO2 analog switch
              enable */
   { "G8_IO3", 30, 1 },  /* G8_IO3 analog switch
              enable */
   { "G8_IO4", 31, 1 },  /* G8_IO4 analog switch
              enable */
   { NULL, 0, 0 }
};

const Field_t TSC_IOSCR_fields[] = {
   { "G1_IO1", 0, 1 },  /* G1_IO1 sampling mode */
   { "G1_IO2", 1, 1 },  /* G1_IO2 sampling mode */
   { "G1_IO3", 2, 1 },  /* G1_IO3 sampling mode */
   { "G1_IO4", 3, 1 },  /* G1_IO4 sampling mode */
   { "G2_IO1", 4, 1 },  /* G2_IO1 sampling mode */
   { "G2_IO2", 5, 1 },  /* G2_IO2 sampling mode */
   { "G2_IO3", 6, 1 },  /* G2_IO3 sampling mode */
   { "G2_IO4", 7, 1 },  /* G2_IO4 sampling mode */
   { "G3_IO1", 8, 1 },  /* G3_IO1 sampling mode */
   { "G3_IO2", 9, 1 },  /* G3_IO2 sampling mode */
   { "G3_IO3", 10, 1 },  /* G3_IO3 sampling mode */
   { "G3_IO4", 11, 1 },  /* G3_IO4 sampling mode */
   { "G4_IO1", 12, 1 },  /* G4_IO1 sampling mode */
   { "G4_IO2", 13, 1 },  /* G4_IO2 sampling mode */
   { "G4_IO3", 14, 1 },  /* G4_IO3 sampling mode */
   { "G4_IO4", 15, 1 },  /* G4_IO4 sampling mode */
   { "G5_IO1", 16, 1 },  /* G5_IO1 sampling mode */
   { "G5_IO2", 17, 1 },  /* G5_IO2 sampling mode */
   { "G5_IO3", 18, 1 },  /* G5_IO3 sampling mode */
   { "G5_IO4", 19, 1 },  /* G5_IO4 sampling mode */
   { "G6_IO1", 20, 1 },  /* G6_IO1 sampling mode */
   { "G6_IO2", 21, 1 },  /* G6_IO2 sampling mode */
   { "G6_IO3", 22, 1 },  /* G6_IO3 sampling mode */
   { "G6_IO4", 23, 1 },  /* G6_IO4 sampling mode */
   { "G7_IO1", 24, 1 },  /* G7_IO1 sampling mode */
   { "G7_IO2", 25, 1 },  /* G7_IO2 sampling mode */
   { "G7_IO3", 26, 1 },  /* G7_IO3 sampling mode */
   { "G7_IO4", 27, 1 },  /* G7_IO4 sampling mode */
   { "G8_IO1", 28, 1 },  /* G8_IO1 sampling mode */
   { "G8_IO2", 29, 1 },  /* G8_IO2 sampling mode */
   { "G8_IO3", 30, 1 },  /* G8_IO3 sampling mode */
   { "G8_IO4", 31, 1 },  /* G8_IO4 sampling mode */
   { NULL, 0, 0 }
};

const Field_t TSC_IOCCR_fields[] = {
   { "G1_IO1", 0, 1 },  /* G1_IO1 channel mode */
   { "G1_IO2", 1, 1 },  /* G1_IO2 channel mode */
   { "G1_IO3", 2, 1 },  /* G1_IO3 channel mode */
   { "G1_IO4", 3, 1 },  /* G1_IO4 channel mode */
   { "G2_IO1", 4, 1 },  /* G2_IO1 channel mode */
   { "G2_IO2", 5, 1 },  /* G2_IO2 channel mode */
   { "G2_IO3", 6, 1 },  /* G2_IO3 channel mode */
   { "G2_IO4", 7, 1 },  /* G2_IO4 channel mode */
   { "G3_IO1", 8, 1 },  /* G3_IO1 channel mode */
   { "G3_IO2", 9, 1 },  /* G3_IO2 channel mode */
   { "G3_IO3", 10, 1 },  /* G3_IO3 channel mode */
   { "G3_IO4", 11, 1 },  /* G3_IO4 channel mode */
   { "G4_IO1", 12, 1 },  /* G4_IO1 channel mode */
   { "G4_IO2", 13, 1 },  /* G4_IO2 channel mode */
   { "G4_IO3", 14, 1 },  /* G4_IO3 channel mode */
   { "G4_IO4", 15, 1 },  /* G4_IO4 channel mode */
   { "G5_IO1", 16, 1 },  /* G5_IO1 channel mode */
   { "G5_IO2", 17, 1 },  /* G5_IO2 channel mode */
   { "G5_IO3", 18, 1 },  /* G5_IO3 channel mode */
   { "G5_IO4", 19, 1 },  /* G5_IO4 channel mode */
   { "G6_IO1", 20, 1 },  /* G6_IO1 channel mode */
   { "G6_IO2", 21, 1 },  /* G6_IO2 channel mode */
   { "G6_IO3", 22, 1 },  /* G6_IO3 channel mode */
   { "G6_IO4", 23, 1 },  /* G6_IO4 channel mode */
   { "G7_IO1", 24, 1 },  /* G7_IO1 channel mode */
   { "G7_IO2", 25, 1 },  /* G7_IO2 channel mode */
   { "G7_IO3", 26, 1 },  /* G7_IO3 channel mode */
   { "G7_IO4", 27, 1 },  /* G7_IO4 channel mode */
   { "G8_IO1", 28, 1 },  /* G8_IO1 channel mode */
   { "G8_IO2", 29, 1 },  /* G8_IO2 channel mode */
   { "G8_IO3", 30, 1 },  /* G8_IO3 channel mode */
   { "G8_IO4", 31, 1 },  /* G8_IO4 channel mode */
   { NULL, 0, 0 }
};

const Field_t TSC_IOGCSR_fields[] = {
   { "G1E", 0, 1 },  /* Analog I/O group x enable */
   { "G2E", 1, 1 },  /* Analog I/O group x enable */
   { "G3E", 2, 1 },  /* Analog I/O group x enable */
   { "G4E", 3, 1 },  /* Analog I/O group x enable */
   { "G5E", 4, 1 },  /* Analog I/O group x enable */
   { "G6E", 5, 1 },  /* Analog I/O group x enable */
   { "G7E", 6, 1 },  /* Analog I/O group x enable */
   { "G8E", 7, 1 },  /* Analog I/O group x enable */
   { "G1S", 16, 1 },  /* Analog I/O group x status */
   { "G2S", 17, 1 },  /* Analog I/O group x status */
   { "G3S", 18, 1 },  /* Analog I/O group x status */
   { "G4S", 19, 1 },  /* Analog I/O group x status */
   { "G5S", 20, 1 },  /* Analog I/O group x status */
   { "G6S", 21, 1 },  /* Analog I/O group x status */
   { "G7S", 22, 1 },  /* Analog I/O group x status */
   { "G8S", 23, 1 },  /* Analog I/O group x status */
   { NULL, 0, 0 }
};

const Field_t TSC_IOG1CR_fields[] = {
   { "CNT", 0, 14 },  /* Counter value */
   { NULL, 0, 0 }
};

const Field_t TSC_IOG2CR_fields[] = {
   { "CNT", 0, 14 },  /* Counter value */
   { NULL, 0, 0 }
};

const Field_t TSC_IOG3CR_fields[] = {
   { "CNT", 0, 14 },  /* Counter value */
   { NULL, 0, 0 }
};

const Field_t TSC_IOG4CR_fields[] = {
   { "CNT", 0, 14 },  /* Counter value */
   { NULL, 0, 0 }
};

const Field_t TSC_IOG5CR_fields[] = {
   { "CNT", 0, 14 },  /* Counter value */
   { NULL, 0, 0 }
};

const Field_t TSC_IOG6CR_fields[] = {
   { "CNT", 0, 14 },  /* Counter value */
   { NULL, 0, 0 }
};

const Field_t TSC_IOG7CR_fields[] = {
   { "CNT", 0, 14 },  /* Counter value */
   { NULL, 0, 0 }
};

const Field_t TSC_IOG8CR_fields[] = {
   { "CNT", 0, 14 },  /* Counter value */
   { NULL, 0, 0 }
};

const Register_t TSC_registers[] = {
   {"CR", 0, 32, 0, TSC_CR_fields}, /* control register */
   {"IER", 4, 32, 0, TSC_IER_fields}, /* interrupt enable register */
   {"ICR", 8, 32, 0, TSC_ICR_fields}, /* interrupt clear register */
   {"ISR", 12, 32, 0, TSC_ISR_fields}, /* interrupt status register */
   {"IOHCR", 16, 32, 0, TSC_IOHCR_fields}, /* I/O hysteresis control
          register */
   {"IOASCR", 24, 32, 0, TSC_IOASCR_fields}, /* I/O analog switch control
          register */
   {"IOSCR", 32, 32, 0, TSC_IOSCR_fields}, /* I/O sampling control register */
   {"IOCCR", 40, 32, 0, TSC_IOCCR_fields}, /* I/O channel control register */
   {"IOGCSR", 48, 32, 0, TSC_IOGCSR_fields}, /* I/O group control status
          register */
   {"IOG1CR", 52, 32, 0, TSC_IOG1CR_fields}, /* I/O group x counter register */
   {"IOG2CR", 56, 32, 0, TSC_IOG2CR_fields}, /* I/O group x counter register */
   {"IOG3CR", 60, 32, 0, TSC_IOG3CR_fields}, /* I/O group x counter register */
   {"IOG4CR", 64, 32, 0, TSC_IOG4CR_fields}, /* I/O group x counter register */
   {"IOG5CR", 68, 32, 0, TSC_IOG5CR_fields}, /* I/O group x counter register */
   {"IOG6CR", 72, 32, 0, TSC_IOG6CR_fields}, /* I/O group x counter register */
   {"IOG7CR", 76, 32, 0, TSC_IOG7CR_fields}, /* I/O group x counter register */
   {"IOG8CR", 80, 32, 0, TSC_IOG8CR_fields}, /* I/O group x counter register */
   { NULL,0 ,0 ,0 , NULL }
};

const Field_t GPIOA_MODER_fields[] = {
   { "MODER0", 0, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "MODER1", 2, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "MODER2", 4, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "MODER3", 6, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "MODER4", 8, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "MODER5", 10, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "MODER6", 12, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "MODER7", 14, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "MODER8", 16, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "MODER9", 18, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "MODER10", 20, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "MODER11", 22, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "MODER12", 24, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "MODER13", 26, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "MODER14", 28, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "MODER15", 30, 2 },  /* Port x configuration bits (y =
              0..15) */
   { NULL, 0, 0 }
};

const Field_t GPIOA_OTYPER_fields[] = {
   { "OT0", 0, 1 },  /* Port x configuration bits (y =
              0..15) */
   { "OT1", 1, 1 },  /* Port x configuration bits (y =
              0..15) */
   { "OT2", 2, 1 },  /* Port x configuration bits (y =
              0..15) */
   { "OT3", 3, 1 },  /* Port x configuration bits (y =
              0..15) */
   { "OT4", 4, 1 },  /* Port x configuration bits (y =
              0..15) */
   { "OT5", 5, 1 },  /* Port x configuration bits (y =
              0..15) */
   { "OT6", 6, 1 },  /* Port x configuration bits (y =
              0..15) */
   { "OT7", 7, 1 },  /* Port x configuration bits (y =
              0..15) */
   { "OT8", 8, 1 },  /* Port x configuration bits (y =
              0..15) */
   { "OT9", 9, 1 },  /* Port x configuration bits (y =
              0..15) */
   { "OT10", 10, 1 },  /* Port x configuration bits (y =
              0..15) */
   { "OT11", 11, 1 },  /* Port x configuration bits (y =
              0..15) */
   { "OT12", 12, 1 },  /* Port x configuration bits (y =
              0..15) */
   { "OT13", 13, 1 },  /* Port x configuration bits (y =
              0..15) */
   { "OT14", 14, 1 },  /* Port x configuration bits (y =
              0..15) */
   { "OT15", 15, 1 },  /* Port x configuration bits (y =
              0..15) */
   { NULL, 0, 0 }
};

const Field_t GPIOA_OSPEEDR_fields[] = {
   { "OSPEEDR0", 0, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "OSPEEDR1", 2, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "OSPEEDR2", 4, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "OSPEEDR3", 6, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "OSPEEDR4", 8, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "OSPEEDR5", 10, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "OSPEEDR6", 12, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "OSPEEDR7", 14, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "OSPEEDR8", 16, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "OSPEEDR9", 18, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "OSPEEDR10", 20, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "OSPEEDR11", 22, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "OSPEEDR12", 24, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "OSPEEDR13", 26, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "OSPEEDR14", 28, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "OSPEEDR15", 30, 2 },  /* Port x configuration bits (y =
              0..15) */
   { NULL, 0, 0 }
};

const Field_t GPIOA_PUPDR_fields[] = {
   { "PUPDR0", 0, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "PUPDR1", 2, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "PUPDR2", 4, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "PUPDR3", 6, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "PUPDR4", 8, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "PUPDR5", 10, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "PUPDR6", 12, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "PUPDR7", 14, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "PUPDR8", 16, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "PUPDR9", 18, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "PUPDR10", 20, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "PUPDR11", 22, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "PUPDR12", 24, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "PUPDR13", 26, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "PUPDR14", 28, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "PUPDR15", 30, 2 },  /* Port x configuration bits (y =
              0..15) */
   { NULL, 0, 0 }
};

const Field_t GPIOA_IDR_fields[] = {
   { "IDR0", 0, 1 },  /* Port input data (y =
              0..15) */
   { "IDR1", 1, 1 },  /* Port input data (y =
              0..15) */
   { "IDR2", 2, 1 },  /* Port input data (y =
              0..15) */
   { "IDR3", 3, 1 },  /* Port input data (y =
              0..15) */
   { "IDR4", 4, 1 },  /* Port input data (y =
              0..15) */
   { "IDR5", 5, 1 },  /* Port input data (y =
              0..15) */
   { "IDR6", 6, 1 },  /* Port input data (y =
              0..15) */
   { "IDR7", 7, 1 },  /* Port input data (y =
              0..15) */
   { "IDR8", 8, 1 },  /* Port input data (y =
              0..15) */
   { "IDR9", 9, 1 },  /* Port input data (y =
              0..15) */
   { "IDR10", 10, 1 },  /* Port input data (y =
              0..15) */
   { "IDR11", 11, 1 },  /* Port input data (y =
              0..15) */
   { "IDR12", 12, 1 },  /* Port input data (y =
              0..15) */
   { "IDR13", 13, 1 },  /* Port input data (y =
              0..15) */
   { "IDR14", 14, 1 },  /* Port input data (y =
              0..15) */
   { "IDR15", 15, 1 },  /* Port input data (y =
              0..15) */
   { NULL, 0, 0 }
};

const Field_t GPIOA_ODR_fields[] = {
   { "ODR0", 0, 1 },  /* Port output data (y =
              0..15) */
   { "ODR1", 1, 1 },  /* Port output data (y =
              0..15) */
   { "ODR2", 2, 1 },  /* Port output data (y =
              0..15) */
   { "ODR3", 3, 1 },  /* Port output data (y =
              0..15) */
   { "ODR4", 4, 1 },  /* Port output data (y =
              0..15) */
   { "ODR5", 5, 1 },  /* Port output data (y =
              0..15) */
   { "ODR6", 6, 1 },  /* Port output data (y =
              0..15) */
   { "ODR7", 7, 1 },  /* Port output data (y =
              0..15) */
   { "ODR8", 8, 1 },  /* Port output data (y =
              0..15) */
   { "ODR9", 9, 1 },  /* Port output data (y =
              0..15) */
   { "ODR10", 10, 1 },  /* Port output data (y =
              0..15) */
   { "ODR11", 11, 1 },  /* Port output data (y =
              0..15) */
   { "ODR12", 12, 1 },  /* Port output data (y =
              0..15) */
   { "ODR13", 13, 1 },  /* Port output data (y =
              0..15) */
   { "ODR14", 14, 1 },  /* Port output data (y =
              0..15) */
   { "ODR15", 15, 1 },  /* Port output data (y =
              0..15) */
   { NULL, 0, 0 }
};

const Field_t GPIOA_BSRR_fields[] = {
   { "BS0", 0, 1 },  /* Port x set bit y (y=
              0..15) */
   { "BS1", 1, 1 },  /* Port x set bit y (y=
              0..15) */
   { "BS2", 2, 1 },  /* Port x set bit y (y=
              0..15) */
   { "BS3", 3, 1 },  /* Port x set bit y (y=
              0..15) */
   { "BS4", 4, 1 },  /* Port x set bit y (y=
              0..15) */
   { "BS5", 5, 1 },  /* Port x set bit y (y=
              0..15) */
   { "BS6", 6, 1 },  /* Port x set bit y (y=
              0..15) */
   { "BS7", 7, 1 },  /* Port x set bit y (y=
              0..15) */
   { "BS8", 8, 1 },  /* Port x set bit y (y=
              0..15) */
   { "BS9", 9, 1 },  /* Port x set bit y (y=
              0..15) */
   { "BS10", 10, 1 },  /* Port x set bit y (y=
              0..15) */
   { "BS11", 11, 1 },  /* Port x set bit y (y=
              0..15) */
   { "BS12", 12, 1 },  /* Port x set bit y (y=
              0..15) */
   { "BS13", 13, 1 },  /* Port x set bit y (y=
              0..15) */
   { "BS14", 14, 1 },  /* Port x set bit y (y=
              0..15) */
   { "BS15", 15, 1 },  /* Port x set bit y (y=
              0..15) */
   { "BR0", 16, 1 },  /* Port x set bit y (y=
              0..15) */
   { "BR1", 17, 1 },  /* Port x reset bit y (y =
              0..15) */
   { "BR2", 18, 1 },  /* Port x reset bit y (y =
              0..15) */
   { "BR3", 19, 1 },  /* Port x reset bit y (y =
              0..15) */
   { "BR4", 20, 1 },  /* Port x reset bit y (y =
              0..15) */
   { "BR5", 21, 1 },  /* Port x reset bit y (y =
              0..15) */
   { "BR6", 22, 1 },  /* Port x reset bit y (y =
              0..15) */
   { "BR7", 23, 1 },  /* Port x reset bit y (y =
              0..15) */
   { "BR8", 24, 1 },  /* Port x reset bit y (y =
              0..15) */
   { "BR9", 25, 1 },  /* Port x reset bit y (y =
              0..15) */
   { "BR10", 26, 1 },  /* Port x reset bit y (y =
              0..15) */
   { "BR11", 27, 1 },  /* Port x reset bit y (y =
              0..15) */
   { "BR12", 28, 1 },  /* Port x reset bit y (y =
              0..15) */
   { "BR13", 29, 1 },  /* Port x reset bit y (y =
              0..15) */
   { "BR14", 30, 1 },  /* Port x reset bit y (y =
              0..15) */
   { "BR15", 31, 1 },  /* Port x reset bit y (y =
              0..15) */
   { NULL, 0, 0 }
};

const Field_t GPIOA_LCKR_fields[] = {
   { "LCK0", 0, 1 },  /* Port x lock bit y (y=
              0..15) */
   { "LCK1", 1, 1 },  /* Port x lock bit y (y=
              0..15) */
   { "LCK2", 2, 1 },  /* Port x lock bit y (y=
              0..15) */
   { "LCK3", 3, 1 },  /* Port x lock bit y (y=
              0..15) */
   { "LCK4", 4, 1 },  /* Port x lock bit y (y=
              0..15) */
   { "LCK5", 5, 1 },  /* Port x lock bit y (y=
              0..15) */
   { "LCK6", 6, 1 },  /* Port x lock bit y (y=
              0..15) */
   { "LCK7", 7, 1 },  /* Port x lock bit y (y=
              0..15) */
   { "LCK8", 8, 1 },  /* Port x lock bit y (y=
              0..15) */
   { "LCK9", 9, 1 },  /* Port x lock bit y (y=
              0..15) */
   { "LCK10", 10, 1 },  /* Port x lock bit y (y=
              0..15) */
   { "LCK11", 11, 1 },  /* Port x lock bit y (y=
              0..15) */
   { "LCK12", 12, 1 },  /* Port x lock bit y (y=
              0..15) */
   { "LCK13", 13, 1 },  /* Port x lock bit y (y=
              0..15) */
   { "LCK14", 14, 1 },  /* Port x lock bit y (y=
              0..15) */
   { "LCK15", 15, 1 },  /* Port x lock bit y (y=
              0..15) */
   { "LCKK", 16, 1 },  /* Lok Key */
   { NULL, 0, 0 }
};

const Field_t GPIOA_AFRL_fields[] = {
   { "AFRL0", 0, 4 },  /* Alternate function selection for port x
              bit y (y = 0..7) */
   { "AFRL1", 4, 4 },  /* Alternate function selection for port x
              bit y (y = 0..7) */
   { "AFRL2", 8, 4 },  /* Alternate function selection for port x
              bit y (y = 0..7) */
   { "AFRL3", 12, 4 },  /* Alternate function selection for port x
              bit y (y = 0..7) */
   { "AFRL4", 16, 4 },  /* Alternate function selection for port x
              bit y (y = 0..7) */
   { "AFRL5", 20, 4 },  /* Alternate function selection for port x
              bit y (y = 0..7) */
   { "AFRL6", 24, 4 },  /* Alternate function selection for port x
              bit y (y = 0..7) */
   { "AFRL7", 28, 4 },  /* Alternate function selection for port x
              bit y (y = 0..7) */
   { NULL, 0, 0 }
};

const Field_t GPIOA_AFRH_fields[] = {
   { "AFRH8", 0, 4 },  /* Alternate function selection for port x
              bit y (y = 8..15) */
   { "AFRH9", 4, 4 },  /* Alternate function selection for port x
              bit y (y = 8..15) */
   { "AFRH10", 8, 4 },  /* Alternate function selection for port x
              bit y (y = 8..15) */
   { "AFRH11", 12, 4 },  /* Alternate function selection for port x
              bit y (y = 8..15) */
   { "AFRH12", 16, 4 },  /* Alternate function selection for port x
              bit y (y = 8..15) */
   { "AFRH13", 20, 4 },  /* Alternate function selection for port x
              bit y (y = 8..15) */
   { "AFRH14", 24, 4 },  /* Alternate function selection for port x
              bit y (y = 8..15) */
   { "AFRH15", 28, 4 },  /* Alternate function selection for port x
              bit y (y = 8..15) */
   { NULL, 0, 0 }
};

const Field_t GPIOA_BRR_fields[] = {
   { "BR0", 0, 1 },  /* Port x Reset bit y */
   { "BR1", 1, 1 },  /* Port x Reset bit y */
   { "BR2", 2, 1 },  /* Port x Reset bit y */
   { "BR3", 3, 1 },  /* Port x Reset bit y */
   { "BR4", 4, 1 },  /* Port x Reset bit y */
   { "BR5", 5, 1 },  /* Port x Reset bit y */
   { "BR6", 6, 1 },  /* Port x Reset bit y */
   { "BR7", 7, 1 },  /* Port x Reset bit y */
   { "BR8", 8, 1 },  /* Port x Reset bit y */
   { "BR9", 9, 1 },  /* Port x Reset bit y */
   { "BR10", 10, 1 },  /* Port x Reset bit y */
   { "BR11", 11, 1 },  /* Port x Reset bit y */
   { "BR12", 12, 1 },  /* Port x Reset bit y */
   { "BR13", 13, 1 },  /* Port x Reset bit y */
   { "BR14", 14, 1 },  /* Port x Reset bit y */
   { "BR15", 15, 1 },  /* Port x Reset bit y */
   { NULL, 0, 0 }
};

const Register_t GPIOA_registers[] = {
   {"MODER", 0, 32, 0, GPIOA_MODER_fields}, /* GPIO port mode register */
   {"OTYPER", 4, 32, 0, GPIOA_OTYPER_fields}, /* GPIO port output type register */
   {"OSPEEDR", 8, 32, 0, GPIOA_OSPEEDR_fields}, /* GPIO port output speed
          register */
   {"PUPDR", 12, 32, 0, GPIOA_PUPDR_fields}, /* GPIO port pull-up/pull-down
          register */
   {"IDR", 16, 32, 0, GPIOA_IDR_fields}, /* GPIO port input data register */
   {"ODR", 20, 32, 0, GPIOA_ODR_fields}, /* GPIO port output data register */
   {"BSRR", 24, 32, 0, GPIOA_BSRR_fields}, /* GPIO port bit set/reset
          register */
   {"LCKR", 28, 32, 0, GPIOA_LCKR_fields}, /* GPIO port configuration lock
          register */
   {"AFRL", 32, 32, 0, GPIOA_AFRL_fields}, /* GPIO alternate function low
          register */
   {"AFRH", 36, 32, 0, GPIOA_AFRH_fields}, /* GPIO alternate function high
          register */
   {"BRR", 40, 32, 0, GPIOA_BRR_fields}, /* Port bit reset register */
   { NULL,0 ,0 ,0 , NULL }
};

const Field_t GPIOB_MODER_fields[] = {
   { "MODER0", 0, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "MODER1", 2, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "MODER2", 4, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "MODER3", 6, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "MODER4", 8, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "MODER5", 10, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "MODER6", 12, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "MODER7", 14, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "MODER8", 16, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "MODER9", 18, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "MODER10", 20, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "MODER11", 22, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "MODER12", 24, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "MODER13", 26, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "MODER14", 28, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "MODER15", 30, 2 },  /* Port x configuration bits (y =
              0..15) */
   { NULL, 0, 0 }
};

const Field_t GPIOB_OTYPER_fields[] = {
   { "OT0", 0, 1 },  /* Port x configuration bit 0 */
   { "OT1", 1, 1 },  /* Port x configuration bit 1 */
   { "OT2", 2, 1 },  /* Port x configuration bit 2 */
   { "OT3", 3, 1 },  /* Port x configuration bit 3 */
   { "OT4", 4, 1 },  /* Port x configuration bit 4 */
   { "OT5", 5, 1 },  /* Port x configuration bit 5 */
   { "OT6", 6, 1 },  /* Port x configuration bit 6 */
   { "OT7", 7, 1 },  /* Port x configuration bit 7 */
   { "OT8", 8, 1 },  /* Port x configuration bit 8 */
   { "OT9", 9, 1 },  /* Port x configuration bit 9 */
   { "OT10", 10, 1 },  /* Port x configuration bit
              10 */
   { "OT11", 11, 1 },  /* Port x configuration bit
              11 */
   { "OT12", 12, 1 },  /* Port x configuration bit
              12 */
   { "OT13", 13, 1 },  /* Port x configuration bit
              13 */
   { "OT14", 14, 1 },  /* Port x configuration bit
              14 */
   { "OT15", 15, 1 },  /* Port x configuration bit
              15 */
   { NULL, 0, 0 }
};

const Field_t GPIOB_OSPEEDR_fields[] = {
   { "OSPEEDR0", 0, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "OSPEEDR1", 2, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "OSPEEDR2", 4, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "OSPEEDR3", 6, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "OSPEEDR4", 8, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "OSPEEDR5", 10, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "OSPEEDR6", 12, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "OSPEEDR7", 14, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "OSPEEDR8", 16, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "OSPEEDR9", 18, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "OSPEEDR10", 20, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "OSPEEDR11", 22, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "OSPEEDR12", 24, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "OSPEEDR13", 26, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "OSPEEDR14", 28, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "OSPEEDR15", 30, 2 },  /* Port x configuration bits (y =
              0..15) */
   { NULL, 0, 0 }
};

const Field_t GPIOB_PUPDR_fields[] = {
   { "PUPDR0", 0, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "PUPDR1", 2, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "PUPDR2", 4, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "PUPDR3", 6, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "PUPDR4", 8, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "PUPDR5", 10, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "PUPDR6", 12, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "PUPDR7", 14, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "PUPDR8", 16, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "PUPDR9", 18, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "PUPDR10", 20, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "PUPDR11", 22, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "PUPDR12", 24, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "PUPDR13", 26, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "PUPDR14", 28, 2 },  /* Port x configuration bits (y =
              0..15) */
   { "PUPDR15", 30, 2 },  /* Port x configuration bits (y =
              0..15) */
   { NULL, 0, 0 }
};

const Field_t GPIOB_IDR_fields[] = {
   { "IDR0", 0, 1 },  /* Port input data (y =
              0..15) */
   { "IDR1", 1, 1 },  /* Port input data (y =
              0..15) */
   { "IDR2", 2, 1 },  /* Port input data (y =
              0..15) */
   { "IDR3", 3, 1 },  /* Port input data (y =
              0..15) */
   { "IDR4", 4, 1 },  /* Port input data (y =
              0..15) */
   { "IDR5", 5, 1 },  /* Port input data (y =
              0..15) */
   { "IDR6", 6, 1 },  /* Port input data (y =
              0..15) */
   { "IDR7", 7, 1 },  /* Port input data (y =
              0..15) */
   { "IDR8", 8, 1 },  /* Port input data (y =
              0..15) */
   { "IDR9", 9, 1 },  /* Port input data (y =
              0..15) */
   { "IDR10", 10, 1 },  /* Port input data (y =
              0..15) */
   { "IDR11", 11, 1 },  /* Port input data (y =
              0..15) */
   { "IDR12", 12, 1 },  /* Port input data (y =
              0..15) */
   { "IDR13", 13, 1 },  /* Port input data (y =
              0..15) */
   { "IDR14", 14, 1 },  /* Port input data (y =
              0..15) */
   { "IDR15", 15, 1 },  /* Port input data (y =
              0..15) */
   { NULL, 0, 0 }
};

const Field_t GPIOB_ODR_fields[] = {
   { "ODR0", 0, 1 },  /* Port output data (y =
              0..15) */
   { "ODR1", 1, 1 },  /* Port output data (y =
              0..15) */
   { "ODR2", 2, 1 },  /* Port output data (y =
              0..15) */
   { "ODR3", 3, 1 },  /* Port output data (y =
              0..15) */
   { "ODR4", 4, 1 },  /* Port output data (y =
              0..15) */
   { "ODR5", 5, 1 },  /* Port output data (y =
              0..15) */
   { "ODR6", 6, 1 },  /* Port output data (y =
              0..15) */
   { "ODR7", 7, 1 },  /* Port output data (y =
              0..15) */
   { "ODR8", 8, 1 },  /* Port output data (y =
              0..15) */
   { "ODR9", 9, 1 },  /* Port output data (y =
              0..15) */
   { "ODR10", 10, 1 },  /* Port output data (y =
              0..15) */
   { "ODR11", 11, 1 },  /* Port output data (y =
              0..15) */
   { "ODR12", 12, 1 },  /* Port output data (y =
              0..15) */
   { "ODR13", 13, 1 },  /* Port output data (y =
              0..15) */
   { "ODR14", 14, 1 },  /* Port output data (y =
              0..15) */
   { "ODR15", 15, 1 },  /* Port output data (y =
              0..15) */
   { NULL, 0, 0 }
};

const Field_t GPIOB_BSRR_fields[] = {
   { "BS0", 0, 1 },  /* Port x set bit y (y=
              0..15) */
   { "BS1", 1, 1 },  /* Port x set bit y (y=
              0..15) */
   { "BS2", 2, 1 },  /* Port x set bit y (y=
              0..15) */
   { "BS3", 3, 1 },  /* Port x set bit y (y=
              0..15) */
   { "BS4", 4, 1 },  /* Port x set bit y (y=
              0..15) */
   { "BS5", 5, 1 },  /* Port x set bit y (y=
              0..15) */
   { "BS6", 6, 1 },  /* Port x set bit y (y=
              0..15) */
   { "BS7", 7, 1 },  /* Port x set bit y (y=
              0..15) */
   { "BS8", 8, 1 },  /* Port x set bit y (y=
              0..15) */
   { "BS9", 9, 1 },  /* Port x set bit y (y=
              0..15) */
   { "BS10", 10, 1 },  /* Port x set bit y (y=
              0..15) */
   { "BS11", 11, 1 },  /* Port x set bit y (y=
              0..15) */
   { "BS12", 12, 1 },  /* Port x set bit y (y=
              0..15) */
   { "BS13", 13, 1 },  /* Port x set bit y (y=
              0..15) */
   { "BS14", 14, 1 },  /* Port x set bit y (y=
              0..15) */
   { "BS15", 15, 1 },  /* Port x set bit y (y=
              0..15) */
   { "BR0", 16, 1 },  /* Port x set bit y (y=
              0..15) */
   { "BR1", 17, 1 },  /* Port x reset bit y (y =
              0..15) */
   { "BR2", 18, 1 },  /* Port x reset bit y (y =
              0..15) */
   { "BR3", 19, 1 },  /* Port x reset bit y (y =
              0..15) */
   { "BR4", 20, 1 },  /* Port x reset bit y (y =
              0..15) */
   { "BR5", 21, 1 },  /* Port x reset bit y (y =
              0..15) */
   { "BR6", 22, 1 },  /* Port x reset bit y (y =
              0..15) */
   { "BR7", 23, 1 },  /* Port x reset bit y (y =
              0..15) */
   { "BR8", 24, 1 },  /* Port x reset bit y (y =
              0..15) */
   { "BR9", 25, 1 },  /* Port x reset bit y (y =
              0..15) */
   { "BR10", 26, 1 },  /* Port x reset bit y (y =
              0..15) */
   { "BR11", 27, 1 },  /* Port x reset bit y (y =
              0..15) */
   { "BR12", 28, 1 },  /* Port x reset bit y (y =
              0..15) */
   { "BR13", 29, 1 },  /* Port x reset bit y (y =
              0..15) */
   { "BR14", 30, 1 },  /* Port x reset bit y (y =
              0..15) */
   { "BR15", 31, 1 },  /* Port x reset bit y (y =
              0..15) */
   { NULL, 0, 0 }
};

const Field_t GPIOB_LCKR_fields[] = {
   { "LCK0", 0, 1 },  /* Port x lock bit y (y=
              0..15) */
   { "LCK1", 1, 1 },  /* Port x lock bit y (y=
              0..15) */
   { "LCK2", 2, 1 },  /* Port x lock bit y (y=
              0..15) */
   { "LCK3", 3, 1 },  /* Port x lock bit y (y=
              0..15) */
   { "LCK4", 4, 1 },  /* Port x lock bit y (y=
              0..15) */
   { "LCK5", 5, 1 },  /* Port x lock bit y (y=
              0..15) */
   { "LCK6", 6, 1 },  /* Port x lock bit y (y=
              0..15) */
   { "LCK7", 7, 1 },  /* Port x lock bit y (y=
              0..15) */
   { "LCK8", 8, 1 },  /* Port x lock bit y (y=
              0..15) */
   { "LCK9", 9, 1 },  /* Port x lock bit y (y=
              0..15) */
   { "LCK10", 10, 1 },  /* Port x lock bit y (y=
              0..15) */
   { "LCK11", 11, 1 },  /* Port x lock bit y (y=
              0..15) */
   { "LCK12", 12, 1 },  /* Port x lock bit y (y=
              0..15) */
   { "LCK13", 13, 1 },  /* Port x lock bit y (y=
              0..15) */
   { "LCK14", 14, 1 },  /* Port x lock bit y (y=
              0..15) */
   { "LCK15", 15, 1 },  /* Port x lock bit y (y=
              0..15) */
   { "LCKK", 16, 1 },  /* Lok Key */
   { NULL, 0, 0 }
};

const Field_t GPIOB_AFRL_fields[] = {
   { "AFRL0", 0, 4 },  /* Alternate function selection for port x
              bit y (y = 0..7) */
   { "AFRL1", 4, 4 },  /* Alternate function selection for port x
              bit y (y = 0..7) */
   { "AFRL2", 8, 4 },  /* Alternate function selection for port x
              bit y (y = 0..7) */
   { "AFRL3", 12, 4 },  /* Alternate function selection for port x
              bit y (y = 0..7) */
   { "AFRL4", 16, 4 },  /* Alternate function selection for port x
              bit y (y = 0..7) */
   { "AFRL5", 20, 4 },  /* Alternate function selection for port x
              bit y (y = 0..7) */
   { "AFRL6", 24, 4 },  /* Alternate function selection for port x
              bit y (y = 0..7) */
   { "AFRL7", 28, 4 },  /* Alternate function selection for port x
              bit y (y = 0..7) */
   { NULL, 0, 0 }
};

const Field_t GPIOB_AFRH_fields[] = {
   { "AFRH8", 0, 4 },  /* Alternate function selection for port x
              bit y (y = 8..15) */
   { "AFRH9", 4, 4 },  /* Alternate function selection for port x
              bit y (y = 8..15) */
   { "AFRH10", 8, 4 },  /* Alternate function selection for port x
              bit y (y = 8..15) */
   { "AFRH11", 12, 4 },  /* Alternate function selection for port x
              bit y (y = 8..15) */
   { "AFRH12", 16, 4 },  /* Alternate function selection for port x
              bit y (y = 8..15) */
   { "AFRH13", 20, 4 },  /* Alternate function selection for port x
              bit y (y = 8..15) */
   { "AFRH14", 24, 4 },  /* Alternate function selection for port x
              bit y (y = 8..15) */
   { "AFRH15", 28, 4 },  /* Alternate function selection for port x
              bit y (y = 8..15) */
   { NULL, 0, 0 }
};

const Field_t GPIOB_BRR_fields[] = {
   { "BR0", 0, 1 },  /* Port x Reset bit y */
   { "BR1", 1, 1 },  /* Port x Reset bit y */
   { "BR2", 2, 1 },  /* Port x Reset bit y */
   { "BR3", 3, 1 },  /* Port x Reset bit y */
   { "BR4", 4, 1 },  /* Port x Reset bit y */
   { "BR5", 5, 1 },  /* Port x Reset bit y */
   { "BR6", 6, 1 },  /* Port x Reset bit y */
   { "BR7", 7, 1 },  /* Port x Reset bit y */
   { "BR8", 8, 1 },  /* Port x Reset bit y */
   { "BR9", 9, 1 },  /* Port x Reset bit y */
   { "BR10", 10, 1 },  /* Port x Reset bit y */
   { "BR11", 11, 1 },  /* Port x Reset bit y */
   { "BR12", 12, 1 },  /* Port x Reset bit y */
   { "BR13", 13, 1 },  /* Port x Reset bit y */
   { "BR14", 14, 1 },  /* Port x Reset bit y */
   { "BR15", 15, 1 },  /* Port x Reset bit y */
   { NULL, 0, 0 }
};

const Register_t GPIOB_registers[] = {
   {"MODER", 0, 32, 0, GPIOB_MODER_fields}, /* GPIO port mode register */
   {"OTYPER", 4, 32, 0, GPIOB_OTYPER_fields}, /* GPIO port output type register */
   {"OSPEEDR", 8, 32, 0, GPIOB_OSPEEDR_fields}, /* GPIO port output speed
          register */
   {"PUPDR", 12, 32, 0, GPIOB_PUPDR_fields}, /* GPIO port pull-up/pull-down
          register */
   {"IDR", 16, 32, 0, GPIOB_IDR_fields}, /* GPIO port input data register */
   {"ODR", 20, 32, 0, GPIOB_ODR_fields}, /* GPIO port output data register */
   {"BSRR", 24, 32, 0, GPIOB_BSRR_fields}, /* GPIO port bit set/reset
          register */
   {"LCKR", 28, 32, 0, GPIOB_LCKR_fields}, /* GPIO port configuration lock
          register */
   {"AFRL", 32, 32, 0, GPIOB_AFRL_fields}, /* GPIO alternate function low
          register */
   {"AFRH", 36, 32, 0, GPIOB_AFRH_fields}, /* GPIO alternate function high
          register */
   {"BRR", 40, 32, 0, GPIOB_BRR_fields}, /* Port bit reset register */
   { NULL,0 ,0 ,0 , NULL }
};

const Field_t ADC1_ISR_fields[] = {
   { "ADRDY", 0, 1 },  /* ADRDY */
   { "EOSMP", 1, 1 },  /* EOSMP */
   { "EOC", 2, 1 },  /* EOC */
   { "EOS", 3, 1 },  /* EOS */
   { "OVR", 4, 1 },  /* OVR */
   { "JEOC", 5, 1 },  /* JEOC */
   { "JEOS", 6, 1 },  /* JEOS */
   { "AWD1", 7, 1 },  /* AWD1 */
   { "AWD2", 8, 1 },  /* AWD2 */
   { "AWD3", 9, 1 },  /* AWD3 */
   { "JQOVF", 10, 1 },  /* JQOVF */
   { NULL, 0, 0 }
};

const Field_t ADC1_IER_fields[] = {
   { "ADRDYIE", 0, 1 },  /* ADRDYIE */
   { "EOSMPIE", 1, 1 },  /* EOSMPIE */
   { "EOCIE", 2, 1 },  /* EOCIE */
   { "EOSIE", 3, 1 },  /* EOSIE */
   { "OVRIE", 4, 1 },  /* OVRIE */
   { "JEOCIE", 5, 1 },  /* JEOCIE */
   { "JEOSIE", 6, 1 },  /* JEOSIE */
   { "AWD1IE", 7, 1 },  /* AWD1IE */
   { "AWD2IE", 8, 1 },  /* AWD2IE */
   { "AWD3IE", 9, 1 },  /* AWD3IE */
   { "JQOVFIE", 10, 1 },  /* JQOVFIE */
   { NULL, 0, 0 }
};

const Field_t ADC1_CR_fields[] = {
   { "ADEN", 0, 1 },  /* ADEN */
   { "ADDIS", 1, 1 },  /* ADDIS */
   { "ADSTART", 2, 1 },  /* ADSTART */
   { "JADSTART", 3, 1 },  /* JADSTART */
   { "ADSTP", 4, 1 },  /* ADSTP */
   { "JADSTP", 5, 1 },  /* JADSTP */
   { "ADVREGEN", 28, 1 },  /* ADVREGEN */
   { "DEEPPWD", 29, 1 },  /* DEEPPWD */
   { "ADCALDIF", 30, 1 },  /* ADCALDIF */
   { "ADCAL", 31, 1 },  /* ADCAL */
   { NULL, 0, 0 }
};

const Field_t ADC1_CFGR_fields[] = {
   { "DMAEN", 0, 1 },  /* DMAEN */
   { "DMACFG", 1, 1 },  /* DMACFG */
   { "RES", 3, 2 },  /* RES */
   { "ALIGN", 5, 1 },  /* ALIGN */
   { "EXTSEL", 6, 4 },  /* EXTSEL */
   { "EXTEN", 10, 2 },  /* EXTEN */
   { "OVRMOD", 12, 1 },  /* OVRMOD */
   { "CONT", 13, 1 },  /* CONT */
   { "AUTDLY", 14, 1 },  /* AUTDLY */
   { "AUTOFF", 15, 1 },  /* AUTOFF */
   { "DISCEN", 16, 1 },  /* DISCEN */
   { "DISCNUM", 17, 3 },  /* DISCNUM */
   { "JDISCEN", 20, 1 },  /* JDISCEN */
   { "JQM", 21, 1 },  /* JQM */
   { "AWD1SGL", 22, 1 },  /* AWD1SGL */
   { "AWD1EN", 23, 1 },  /* AWD1EN */
   { "JAWD1EN", 24, 1 },  /* JAWD1EN */
   { "JAUTO", 25, 1 },  /* JAUTO */
   { "AWDCH1CH", 26, 5 },  /* AWDCH1CH */
   { NULL, 0, 0 }
};

const Field_t ADC1_SMPR1_fields[] = {
   { "SMP1", 3, 3 },  /* SMP1 */
   { "SMP2", 6, 3 },  /* SMP2 */
   { "SMP3", 9, 3 },  /* SMP3 */
   { "SMP4", 12, 3 },  /* SMP4 */
   { "SMP5", 15, 3 },  /* SMP5 */
   { "SMP6", 18, 3 },  /* SMP6 */
   { "SMP7", 21, 3 },  /* SMP7 */
   { "SMP8", 24, 3 },  /* SMP8 */
   { "SMP9", 27, 3 },  /* SMP9 */
   { NULL, 0, 0 }
};

const Field_t ADC1_SMPR2_fields[] = {
   { "SMP10", 0, 3 },  /* SMP10 */
   { "SMP11", 3, 3 },  /* SMP11 */
   { "SMP12", 6, 3 },  /* SMP12 */
   { "SMP13", 9, 3 },  /* SMP13 */
   { "SMP14", 12, 3 },  /* SMP14 */
   { "SMP15", 15, 3 },  /* SMP15 */
   { "SMP16", 18, 3 },  /* SMP16 */
   { "SMP17", 21, 3 },  /* SMP17 */
   { "SMP18", 24, 3 },  /* SMP18 */
   { NULL, 0, 0 }
};

const Field_t ADC1_TR1_fields[] = {
   { "LT1", 0, 12 },  /* LT1 */
   { "HT1", 16, 12 },  /* HT1 */
   { NULL, 0, 0 }
};

const Field_t ADC1_TR2_fields[] = {
   { "LT2", 0, 8 },  /* LT2 */
   { "HT2", 16, 8 },  /* HT2 */
   { NULL, 0, 0 }
};

const Field_t ADC1_TR3_fields[] = {
   { "LT3", 0, 8 },  /* LT3 */
   { "HT3", 16, 8 },  /* HT3 */
   { NULL, 0, 0 }
};

const Field_t ADC1_SQR1_fields[] = {
   { "L3", 0, 4 },  /* L3 */
   { "SQ1", 6, 5 },  /* SQ1 */
   { "SQ2", 12, 5 },  /* SQ2 */
   { "SQ3", 18, 5 },  /* SQ3 */
   { "SQ4", 24, 5 },  /* SQ4 */
   { NULL, 0, 0 }
};

const Field_t ADC1_SQR2_fields[] = {
   { "SQ5", 0, 5 },  /* SQ5 */
   { "SQ6", 6, 5 },  /* SQ6 */
   { "SQ7", 12, 5 },  /* SQ7 */
   { "SQ8", 18, 5 },  /* SQ8 */
   { "SQ9", 24, 5 },  /* SQ9 */
   { NULL, 0, 0 }
};

const Field_t ADC1_SQR3_fields[] = {
   { "SQ10", 0, 5 },  /* SQ10 */
   { "SQ11", 6, 5 },  /* SQ11 */
   { "SQ12", 12, 5 },  /* SQ12 */
   { "SQ13", 18, 5 },  /* SQ13 */
   { "SQ14", 24, 5 },  /* SQ14 */
   { NULL, 0, 0 }
};

const Field_t ADC1_SQR4_fields[] = {
   { "SQ15", 0, 5 },  /* SQ15 */
   { "SQ16", 6, 5 },  /* SQ16 */
   { NULL, 0, 0 }
};

const Field_t ADC1_DR_fields[] = {
   { "regularDATA", 0, 16 },  /* regularDATA */
   { NULL, 0, 0 }
};

const Field_t ADC1_JSQR_fields[] = {
   { "JL", 0, 2 },  /* JL */
   { "JEXTSEL", 2, 4 },  /* JEXTSEL */
   { "JEXTEN", 6, 2 },  /* JEXTEN */
   { "JSQ1", 8, 5 },  /* JSQ1 */
   { "JSQ2", 14, 5 },  /* JSQ2 */
   { "JSQ3", 20, 5 },  /* JSQ3 */
   { "JSQ4", 26, 5 },  /* JSQ4 */
   { NULL, 0, 0 }
};

const Field_t ADC1_OFR1_fields[] = {
   { "OFFSET1", 0, 12 },  /* OFFSET1 */
   { "OFFSET1_CH", 26, 5 },  /* OFFSET1_CH */
   { "OFFSET1_EN", 31, 1 },  /* OFFSET1_EN */
   { NULL, 0, 0 }
};

const Field_t ADC1_OFR2_fields[] = {
   { "OFFSET2", 0, 12 },  /* OFFSET2 */
   { "OFFSET2_CH", 26, 5 },  /* OFFSET2_CH */
   { "OFFSET2_EN", 31, 1 },  /* OFFSET2_EN */
   { NULL, 0, 0 }
};

const Field_t ADC1_OFR3_fields[] = {
   { "OFFSET3", 0, 12 },  /* OFFSET3 */
   { "OFFSET3_CH", 26, 5 },  /* OFFSET3_CH */
   { "OFFSET3_EN", 31, 1 },  /* OFFSET3_EN */
   { NULL, 0, 0 }
};

const Field_t ADC1_OFR4_fields[] = {
   { "OFFSET4", 0, 12 },  /* OFFSET4 */
   { "OFFSET4_CH", 26, 5 },  /* OFFSET4_CH */
   { "OFFSET4_EN", 31, 1 },  /* OFFSET4_EN */
   { NULL, 0, 0 }
};

const Field_t ADC1_JDR1_fields[] = {
   { "JDATA1", 0, 16 },  /* JDATA1 */
   { NULL, 0, 0 }
};

const Field_t ADC1_JDR2_fields[] = {
   { "JDATA2", 0, 16 },  /* JDATA2 */
   { NULL, 0, 0 }
};

const Field_t ADC1_JDR3_fields[] = {
   { "JDATA3", 0, 16 },  /* JDATA3 */
   { NULL, 0, 0 }
};

const Field_t ADC1_JDR4_fields[] = {
   { "JDATA4", 0, 16 },  /* JDATA4 */
   { NULL, 0, 0 }
};

const Field_t ADC1_AWD2CR_fields[] = {
   { "AWD2CH", 1, 18 },  /* AWD2CH */
   { NULL, 0, 0 }
};

const Field_t ADC1_AWD3CR_fields[] = {
   { "AWD3CH", 1, 18 },  /* AWD3CH */
   { NULL, 0, 0 }
};

const Field_t ADC1_DIFSEL_fields[] = {
   { "DIFSEL_1_15", 1, 15 },  /* Differential mode for channels 15 to
              1 */
   { "DIFSEL_16_18", 16, 3 },  /* Differential mode for channels 18 to
              16 */
   { NULL, 0, 0 }
};

const Field_t ADC1_CALFACT_fields[] = {
   { "CALFACT_S", 0, 7 },  /* CALFACT_S */
   { "CALFACT_D", 16, 7 },  /* CALFACT_D */
   { NULL, 0, 0 }
};

const Register_t ADC1_registers[] = {
   {"ISR", 0, 32, 0, ADC1_ISR_fields}, /* interrupt and status register */
   {"IER", 4, 32, 0, ADC1_IER_fields}, /* interrupt enable register */
   {"CR", 8, 32, 0, ADC1_CR_fields}, /* control register */
   {"CFGR", 12, 32, 0, ADC1_CFGR_fields}, /* configuration register */
   {"SMPR1", 20, 32, 0, ADC1_SMPR1_fields}, /* sample time register 1 */
   {"SMPR2", 24, 32, 0, ADC1_SMPR2_fields}, /* sample time register 2 */
   {"TR1", 32, 32, 0, ADC1_TR1_fields}, /* watchdog threshold register 1 */
   {"TR2", 36, 32, 0, ADC1_TR2_fields}, /* watchdog threshold register */
   {"TR3", 40, 32, 0, ADC1_TR3_fields}, /* watchdog threshold register 3 */
   {"SQR1", 48, 32, 0, ADC1_SQR1_fields}, /* regular sequence register 1 */
   {"SQR2", 52, 32, 0, ADC1_SQR2_fields}, /* regular sequence register 2 */
   {"SQR3", 56, 32, 0, ADC1_SQR3_fields}, /* regular sequence register 3 */
   {"SQR4", 60, 32, 0, ADC1_SQR4_fields}, /* regular sequence register 4 */
   {"DR", 64, 32, 0, ADC1_DR_fields}, /* regular Data Register */
   {"JSQR", 76, 32, 0, ADC1_JSQR_fields}, /* injected sequence register */
   {"OFR1", 96, 32, 0, ADC1_OFR1_fields}, /* offset register 1 */
   {"OFR2", 100, 32, 0, ADC1_OFR2_fields}, /* offset register 2 */
   {"OFR3", 104, 32, 0, ADC1_OFR3_fields}, /* offset register 3 */
   {"OFR4", 108, 32, 0, ADC1_OFR4_fields}, /* offset register 4 */
   {"JDR1", 128, 32, 0, ADC1_JDR1_fields}, /* injected data register 1 */
   {"JDR2", 132, 32, 0, ADC1_JDR2_fields}, /* injected data register 2 */
   {"JDR3", 136, 32, 0, ADC1_JDR3_fields}, /* injected data register 3 */
   {"JDR4", 140, 32, 0, ADC1_JDR4_fields}, /* injected data register 4 */
   {"AWD2CR", 160, 32, 0, ADC1_AWD2CR_fields}, /* Analog Watchdog 2 Configuration
          Register */
   {"AWD3CR", 164, 32, 0, ADC1_AWD3CR_fields}, /* Analog Watchdog 3 Configuration
          Register */
   {"DIFSEL", 176, 32, 0, ADC1_DIFSEL_fields}, /* Differential Mode Selection Register
          2 */
   {"CALFACT", 180, 32, 0, ADC1_CALFACT_fields}, /* Calibration Factors */
   { NULL,0 ,0 ,0 , NULL }
};

const Field_t ADC1_2_CSR_fields[] = {
   { "ADDRDY_MST", 0, 1 },  /* ADDRDY_MST */
   { "EOSMP_MST", 1, 1 },  /* EOSMP_MST */
   { "EOC_MST", 2, 1 },  /* EOC_MST */
   { "EOS_MST", 3, 1 },  /* EOS_MST */
   { "OVR_MST", 4, 1 },  /* OVR_MST */
   { "JEOC_MST", 5, 1 },  /* JEOC_MST */
   { "JEOS_MST", 6, 1 },  /* JEOS_MST */
   { "AWD1_MST", 7, 1 },  /* AWD1_MST */
   { "AWD2_MST", 8, 1 },  /* AWD2_MST */
   { "AWD3_MST", 9, 1 },  /* AWD3_MST */
   { "JQOVF_MST", 10, 1 },  /* JQOVF_MST */
   { "ADRDY_SLV", 16, 1 },  /* ADRDY_SLV */
   { "EOSMP_SLV", 17, 1 },  /* EOSMP_SLV */
   { "EOC_SLV", 18, 1 },  /* End of regular conversion of the slave
              ADC */
   { "EOS_SLV", 19, 1 },  /* End of regular sequence flag of the
              slave ADC */
   { "OVR_SLV", 20, 1 },  /* Overrun flag of the slave
              ADC */
   { "JEOC_SLV", 21, 1 },  /* End of injected conversion flag of the
              slave ADC */
   { "JEOS_SLV", 22, 1 },  /* End of injected sequence flag of the
              slave ADC */
   { "AWD1_SLV", 23, 1 },  /* Analog watchdog 1 flag of the slave
              ADC */
   { "AWD2_SLV", 24, 1 },  /* Analog watchdog 2 flag of the slave
              ADC */
   { "AWD3_SLV", 25, 1 },  /* Analog watchdog 3 flag of the slave
              ADC */
   { "JQOVF_SLV", 26, 1 },  /* Injected Context Queue Overflow flag of
              the slave ADC */
   { NULL, 0, 0 }
};

const Field_t ADC1_2_CCR_fields[] = {
   { "MULT", 0, 5 },  /* Multi ADC mode selection */
   { "DELAY", 8, 4 },  /* Delay between 2 sampling
              phases */
   { "DMACFG", 13, 1 },  /* DMA configuration (for multi-ADC
              mode) */
   { "MDMA", 14, 2 },  /* Direct memory access mode for multi ADC
              mode */
   { "CKMODE", 16, 2 },  /* ADC clock mode */
   { "VREFEN", 22, 1 },  /* VREFINT enable */
   { "TSEN", 23, 1 },  /* Temperature sensor enable */
   { "VBATEN", 24, 1 },  /* VBAT enable */
   { NULL, 0, 0 }
};

const Field_t ADC1_2_CDR_fields[] = {
   { "RDATA_MST", 0, 16 },  /* Regular data of the master
              ADC */
   { "RDATA_SLV", 16, 16 },  /* Regular data of the slave
              ADC */
   { NULL, 0, 0 }
};

const Register_t ADC1_2_registers[] = {
   {"CSR", 0, 32, 0, ADC1_2_CSR_fields}, /* ADC Common status register */
   {"CCR", 8, 32, 0, ADC1_2_CCR_fields}, /* ADC common control register */
   {"CDR", 12, 32, 0, ADC1_2_CDR_fields}, /* ADC common regular data register for dual
          and triple modes */
   { NULL,0 ,0 ,0 , NULL }
};

const Field_t NVIC_ICTR_fields[] = {
   { "INTLINESNUM", 0, 4 },  /* Total number of interrupt lines in
              groups */
   { NULL, 0, 0 }
};

const Field_t NVIC_ISER0_fields[] = {
   { "SETENA", 0, 32 },  /* SETENA */
   { NULL, 0, 0 }
};

const Field_t NVIC_ISER1_fields[] = {
   { "SETENA", 0, 32 },  /* SETENA */
   { NULL, 0, 0 }
};

const Field_t NVIC_ISER2_fields[] = {
   { "SETENA", 0, 32 },  /* SETENA */
   { NULL, 0, 0 }
};

const Field_t NVIC_ICER0_fields[] = {
   { "CLRENA", 0, 32 },  /* CLRENA */
   { NULL, 0, 0 }
};

const Field_t NVIC_ICER1_fields[] = {
   { "CLRENA", 0, 32 },  /* CLRENA */
   { NULL, 0, 0 }
};

const Field_t NVIC_ICER2_fields[] = {
   { "CLRENA", 0, 32 },  /* CLRENA */
   { NULL, 0, 0 }
};

const Field_t NVIC_ISPR0_fields[] = {
   { "SETPEND", 0, 32 },  /* SETPEND */
   { NULL, 0, 0 }
};

const Field_t NVIC_ISPR1_fields[] = {
   { "SETPEND", 0, 32 },  /* SETPEND */
   { NULL, 0, 0 }
};

const Field_t NVIC_ISPR2_fields[] = {
   { "SETPEND", 0, 32 },  /* SETPEND */
   { NULL, 0, 0 }
};

const Field_t NVIC_ICPR0_fields[] = {
   { "CLRPEND", 0, 32 },  /* CLRPEND */
   { NULL, 0, 0 }
};

const Field_t NVIC_ICPR1_fields[] = {
   { "CLRPEND", 0, 32 },  /* CLRPEND */
   { NULL, 0, 0 }
};

const Field_t NVIC_ICPR2_fields[] = {
   { "CLRPEND", 0, 32 },  /* CLRPEND */
   { NULL, 0, 0 }
};

const Field_t NVIC_IABR0_fields[] = {
   { "ACTIVE", 0, 32 },  /* ACTIVE */
   { NULL, 0, 0 }
};

const Field_t NVIC_IABR1_fields[] = {
   { "ACTIVE", 0, 32 },  /* ACTIVE */
   { NULL, 0, 0 }
};

const Field_t NVIC_IABR2_fields[] = {
   { "ACTIVE", 0, 32 },  /* ACTIVE */
   { NULL, 0, 0 }
};

const Field_t NVIC_IPR0_fields[] = {
   { "IPR_N0", 0, 8 },  /* IPR_N0 */
   { "IPR_N1", 8, 8 },  /* IPR_N1 */
   { "IPR_N2", 16, 8 },  /* IPR_N2 */
   { "IPR_N3", 24, 8 },  /* IPR_N3 */
   { NULL, 0, 0 }
};

const Field_t NVIC_IPR1_fields[] = {
   { "IPR_N0", 0, 8 },  /* IPR_N0 */
   { "IPR_N1", 8, 8 },  /* IPR_N1 */
   { "IPR_N2", 16, 8 },  /* IPR_N2 */
   { "IPR_N3", 24, 8 },  /* IPR_N3 */
   { NULL, 0, 0 }
};

const Field_t NVIC_IPR2_fields[] = {
   { "IPR_N0", 0, 8 },  /* IPR_N0 */
   { "IPR_N1", 8, 8 },  /* IPR_N1 */
   { "IPR_N2", 16, 8 },  /* IPR_N2 */
   { "IPR_N3", 24, 8 },  /* IPR_N3 */
   { NULL, 0, 0 }
};

const Field_t NVIC_IPR3_fields[] = {
   { "IPR_N0", 0, 8 },  /* IPR_N0 */
   { "IPR_N1", 8, 8 },  /* IPR_N1 */
   { "IPR_N2", 16, 8 },  /* IPR_N2 */
   { "IPR_N3", 24, 8 },  /* IPR_N3 */
   { NULL, 0, 0 }
};

const Field_t NVIC_IPR4_fields[] = {
   { "IPR_N0", 0, 8 },  /* IPR_N0 */
   { "IPR_N1", 8, 8 },  /* IPR_N1 */
   { "IPR_N2", 16, 8 },  /* IPR_N2 */
   { "IPR_N3", 24, 8 },  /* IPR_N3 */
   { NULL, 0, 0 }
};

const Field_t NVIC_IPR5_fields[] = {
   { "IPR_N0", 0, 8 },  /* IPR_N0 */
   { "IPR_N1", 8, 8 },  /* IPR_N1 */
   { "IPR_N2", 16, 8 },  /* IPR_N2 */
   { "IPR_N3", 24, 8 },  /* IPR_N3 */
   { NULL, 0, 0 }
};

const Field_t NVIC_IPR6_fields[] = {
   { "IPR_N0", 0, 8 },  /* IPR_N0 */
   { "IPR_N1", 8, 8 },  /* IPR_N1 */
   { "IPR_N2", 16, 8 },  /* IPR_N2 */
   { "IPR_N3", 24, 8 },  /* IPR_N3 */
   { NULL, 0, 0 }
};

const Field_t NVIC_IPR7_fields[] = {
   { "IPR_N0", 0, 8 },  /* IPR_N0 */
   { "IPR_N1", 8, 8 },  /* IPR_N1 */
   { "IPR_N2", 16, 8 },  /* IPR_N2 */
   { "IPR_N3", 24, 8 },  /* IPR_N3 */
   { NULL, 0, 0 }
};

const Field_t NVIC_IPR8_fields[] = {
   { "IPR_N0", 0, 8 },  /* IPR_N0 */
   { "IPR_N1", 8, 8 },  /* IPR_N1 */
   { "IPR_N2", 16, 8 },  /* IPR_N2 */
   { "IPR_N3", 24, 8 },  /* IPR_N3 */
   { NULL, 0, 0 }
};

const Field_t NVIC_IPR9_fields[] = {
   { "IPR_N0", 0, 8 },  /* IPR_N0 */
   { "IPR_N1", 8, 8 },  /* IPR_N1 */
   { "IPR_N2", 16, 8 },  /* IPR_N2 */
   { "IPR_N3", 24, 8 },  /* IPR_N3 */
   { NULL, 0, 0 }
};

const Field_t NVIC_IPR10_fields[] = {
   { "IPR_N0", 0, 8 },  /* IPR_N0 */
   { "IPR_N1", 8, 8 },  /* IPR_N1 */
   { "IPR_N2", 16, 8 },  /* IPR_N2 */
   { "IPR_N3", 24, 8 },  /* IPR_N3 */
   { NULL, 0, 0 }
};

const Field_t NVIC_IPR11_fields[] = {
   { "IPR_N0", 0, 8 },  /* IPR_N0 */
   { "IPR_N1", 8, 8 },  /* IPR_N1 */
   { "IPR_N2", 16, 8 },  /* IPR_N2 */
   { "IPR_N3", 24, 8 },  /* IPR_N3 */
   { NULL, 0, 0 }
};

const Field_t NVIC_IPR12_fields[] = {
   { "IPR_N0", 0, 8 },  /* IPR_N0 */
   { "IPR_N1", 8, 8 },  /* IPR_N1 */
   { "IPR_N2", 16, 8 },  /* IPR_N2 */
   { "IPR_N3", 24, 8 },  /* IPR_N3 */
   { NULL, 0, 0 }
};

const Field_t NVIC_IPR13_fields[] = {
   { "IPR_N0", 0, 8 },  /* IPR_N0 */
   { "IPR_N1", 8, 8 },  /* IPR_N1 */
   { "IPR_N2", 16, 8 },  /* IPR_N2 */
   { "IPR_N3", 24, 8 },  /* IPR_N3 */
   { NULL, 0, 0 }
};

const Field_t NVIC_IPR14_fields[] = {
   { "IPR_N0", 0, 8 },  /* IPR_N0 */
   { "IPR_N1", 8, 8 },  /* IPR_N1 */
   { "IPR_N2", 16, 8 },  /* IPR_N2 */
   { "IPR_N3", 24, 8 },  /* IPR_N3 */
   { NULL, 0, 0 }
};

const Field_t NVIC_IPR15_fields[] = {
   { "IPR_N0", 0, 8 },  /* IPR_N0 */
   { "IPR_N1", 8, 8 },  /* IPR_N1 */
   { "IPR_N2", 16, 8 },  /* IPR_N2 */
   { "IPR_N3", 24, 8 },  /* IPR_N3 */
   { NULL, 0, 0 }
};

const Field_t NVIC_IPR16_fields[] = {
   { "IPR_N0", 0, 8 },  /* IPR_N0 */
   { "IPR_N1", 8, 8 },  /* IPR_N1 */
   { "IPR_N2", 16, 8 },  /* IPR_N2 */
   { "IPR_N3", 24, 8 },  /* IPR_N3 */
   { NULL, 0, 0 }
};

const Field_t NVIC_IPR17_fields[] = {
   { "IPR_N0", 0, 8 },  /* IPR_N0 */
   { "IPR_N1", 8, 8 },  /* IPR_N1 */
   { "IPR_N2", 16, 8 },  /* IPR_N2 */
   { "IPR_N3", 24, 8 },  /* IPR_N3 */
   { NULL, 0, 0 }
};

const Field_t NVIC_IPR18_fields[] = {
   { "IPR_N0", 0, 8 },  /* IPR_N0 */
   { "IPR_N1", 8, 8 },  /* IPR_N1 */
   { "IPR_N2", 16, 8 },  /* IPR_N2 */
   { "IPR_N3", 24, 8 },  /* IPR_N3 */
   { NULL, 0, 0 }
};

const Field_t NVIC_IPR19_fields[] = {
   { "IPR_N0", 0, 8 },  /* IPR_N0 */
   { "IPR_N1", 8, 8 },  /* IPR_N1 */
   { "IPR_N2", 16, 8 },  /* IPR_N2 */
   { "IPR_N3", 24, 8 },  /* IPR_N3 */
   { NULL, 0, 0 }
};

const Field_t NVIC_IPR20_fields[] = {
   { "IPR_N0", 0, 8 },  /* IPR_N0 */
   { "IPR_N1", 8, 8 },  /* IPR_N1 */
   { "IPR_N2", 16, 8 },  /* IPR_N2 */
   { "IPR_N3", 24, 8 },  /* IPR_N3 */
   { NULL, 0, 0 }
};

const Field_t NVIC_STIR_fields[] = {
   { "INTID", 0, 9 },  /* interrupt to be triggered */
   { NULL, 0, 0 }
};

const Register_t NVIC_registers[] = {
   {"ICTR", 4, 32, 0, NVIC_ICTR_fields}, /* Interrupt Controller Type
          Register */
   {"ISER0", 256, 32, 0, NVIC_ISER0_fields}, /* Interrupt Set-Enable Register */
   {"ISER1", 260, 32, 0, NVIC_ISER1_fields}, /* Interrupt Set-Enable Register */
   {"ISER2", 264, 32, 0, NVIC_ISER2_fields}, /* Interrupt Set-Enable Register */
   {"ICER0", 384, 32, 0, NVIC_ICER0_fields}, /* Interrupt Clear-Enable
          Register */
   {"ICER1", 388, 32, 0, NVIC_ICER1_fields}, /* Interrupt Clear-Enable
          Register */
   {"ICER2", 392, 32, 0, NVIC_ICER2_fields}, /* Interrupt Clear-Enable
          Register */
   {"ISPR0", 512, 32, 0, NVIC_ISPR0_fields}, /* Interrupt Set-Pending Register */
   {"ISPR1", 516, 32, 0, NVIC_ISPR1_fields}, /* Interrupt Set-Pending Register */
   {"ISPR2", 520, 32, 0, NVIC_ISPR2_fields}, /* Interrupt Set-Pending Register */
   {"ICPR0", 640, 32, 0, NVIC_ICPR0_fields}, /* Interrupt Clear-Pending
          Register */
   {"ICPR1", 644, 32, 0, NVIC_ICPR1_fields}, /* Interrupt Clear-Pending
          Register */
   {"ICPR2", 648, 32, 0, NVIC_ICPR2_fields}, /* Interrupt Clear-Pending
          Register */
   {"IABR0", 768, 32, 0, NVIC_IABR0_fields}, /* Interrupt Active Bit Register */
   {"IABR1", 772, 32, 0, NVIC_IABR1_fields}, /* Interrupt Active Bit Register */
   {"IABR2", 776, 32, 0, NVIC_IABR2_fields}, /* Interrupt Active Bit Register */
   {"IPR0", 1024, 32, 0, NVIC_IPR0_fields}, /* Interrupt Priority Register */
   {"IPR1", 1028, 32, 0, NVIC_IPR1_fields}, /* Interrupt Priority Register */
   {"IPR2", 1032, 32, 0, NVIC_IPR2_fields}, /* Interrupt Priority Register */
   {"IPR3", 1036, 32, 0, NVIC_IPR3_fields}, /* Interrupt Priority Register */
   {"IPR4", 1040, 32, 0, NVIC_IPR4_fields}, /* Interrupt Priority Register */
   {"IPR5", 1044, 32, 0, NVIC_IPR5_fields}, /* Interrupt Priority Register */
   {"IPR6", 1048, 32, 0, NVIC_IPR6_fields}, /* Interrupt Priority Register */
   {"IPR7", 1052, 32, 0, NVIC_IPR7_fields}, /* Interrupt Priority Register */
   {"IPR8", 1056, 32, 0, NVIC_IPR8_fields}, /* Interrupt Priority Register */
   {"IPR9", 1060, 32, 0, NVIC_IPR9_fields}, /* Interrupt Priority Register */
   {"IPR10", 1064, 32, 0, NVIC_IPR10_fields}, /* Interrupt Priority Register */
   {"IPR11", 1068, 32, 0, NVIC_IPR11_fields}, /* Interrupt Priority Register */
   {"IPR12", 1072, 32, 0, NVIC_IPR12_fields}, /* Interrupt Priority Register */
   {"IPR13", 1076, 32, 0, NVIC_IPR13_fields}, /* Interrupt Priority Register */
   {"IPR14", 1080, 32, 0, NVIC_IPR14_fields}, /* Interrupt Priority Register */
   {"IPR15", 1084, 32, 0, NVIC_IPR15_fields}, /* Interrupt Priority Register */
   {"IPR16", 1088, 32, 0, NVIC_IPR16_fields}, /* Interrupt Priority Register */
   {"IPR17", 1092, 32, 0, NVIC_IPR17_fields}, /* Interrupt Priority Register */
   {"IPR18", 1096, 32, 0, NVIC_IPR18_fields}, /* Interrupt Priority Register */
   {"IPR19", 1100, 32, 0, NVIC_IPR19_fields}, /* Interrupt Priority Register */
   {"IPR20", 1104, 32, 0, NVIC_IPR20_fields}, /* Interrupt Priority Register */
   {"STIR", 3840, 32, 0, NVIC_STIR_fields}, /* Software Triggered Interrupt
          Register */
   { NULL,0 ,0 ,0 , NULL }
};

const Field_t FPU_CPACR_fields[] = {
   { "CP0", 0, 1 },  /* Access privileges for coprocessor
              0 */
   { "CP1", 2, 1 },  /* Access privileges for coprocessor
              1 */
   { "CP2", 4, 1 },  /* Access privileges for coprocessor
              2 */
   { "CP3", 6, 1 },  /* Access privileges for coprocessor
              3 */
   { "CP4", 8, 1 },  /* Access privileges for coprocessor
              4 */
   { "CP5", 10, 1 },  /* Access privileges for coprocessor
              5 */
   { "CP6", 12, 2 },  /* Access privileges for coprocessor
              6 */
   { "CP7", 14, 1 },  /* Access privileges for coprocessor
              7 */
   { "CP10", 20, 1 },  /* Access privileges for coprocessor
              10 */
   { "CP11", 22, 1 },  /* Access privileges for coprocessor
              11 */
   { NULL, 0, 0 }
};

const Field_t FPU_FPCCR_fields[] = {
   { "LSPACT", 0, 1 },  /* LSPACT */
   { "USER", 1, 1 },  /* USER */
   { "THREAD", 3, 1 },  /* THREAD */
   { "HFRDY", 4, 1 },  /* HFRDY */
   { "MMRDY", 5, 1 },  /* MMRDY */
   { "BFRDY", 6, 1 },  /* BFRDY */
   { "MONRDY", 8, 1 },  /* MONRDY */
   { "LSPEN", 30, 1 },  /* LSPEN */
   { "ASPEN", 31, 1 },  /* ASPEN */
   { NULL, 0, 0 }
};

const Field_t FPU_FPCAR_fields[] = {
   { "ADDRESS", 3, 29 },  /* ADDRESS */
   { NULL, 0, 0 }
};

const Field_t FPU_FPDSCR_fields[] = {
   { "RMode", 22, 2 },  /* RMode */
   { "FZ", 24, 1 },  /* FZ */
   { "DN", 25, 1 },  /* DN */
   { "AHP", 26, 1 },  /* AHP */
   { NULL, 0, 0 }
};

const Field_t FPU_MVFR0_fields[] = {
   { "A_SIMD", 0, 4 },  /* A_SIMD registers */
   { "Single_precision", 4, 4 },  /* Single_precision */
   { "Double_precision", 8, 4 },  /* Double_precision */
   { "FP_exception_trapping", 12, 4 },  /* FP exception trapping */
   { "Divide", 16, 4 },  /* Divide */
   { "Square_root", 20, 4 },  /* Square root */
   { "Short_vectors", 24, 4 },  /* Short vectors */
   { "FP_rounding_modes", 28, 4 },  /* FP rounding modes */
   { NULL, 0, 0 }
};

const Field_t FPU_MVFR1_fields[] = {
   { "FtZ_mode", 0, 4 },  /* FtZ mode */
   { "D_NaN_mode", 4, 4 },  /* D_NaN mode */
   { "FP_HPFP", 24, 4 },  /* FP HPFP */
   { "FP_fused_MAC", 28, 4 },  /* FP fused MAC */
   { NULL, 0, 0 }
};

const Register_t FPU_registers[] = {
   {"CPACR", 0, 32, 0, FPU_CPACR_fields}, /* Coprocessor Access Control
          Register */
   {"FPCCR", 428, 32, 0, FPU_FPCCR_fields}, /* FP Context Control Register */
   {"FPCAR", 432, 32, 0, FPU_FPCAR_fields}, /* FP Context Address Register */
   {"FPDSCR", 436, 32, 0, FPU_FPDSCR_fields}, /* FP Default Status Control
          Register */
   {"MVFR0", 440, 32, 0, FPU_MVFR0_fields}, /* Media and VFP Feature Register
          0 */
   {"MVFR1", 444, 32, 0, FPU_MVFR1_fields}, /* Media and VFP Feature Register
          1 */
   { NULL,0 ,0 ,0 , NULL }
};

const Field_t DBGMCU_IDCODE_fields[] = {
   { "DEV_ID", 0, 12 },  /* Device Identifier */
   { "REV_ID", 16, 16 },  /* Revision Identifier */
   { NULL, 0, 0 }
};

const Field_t DBGMCU_CR_fields[] = {
   { "DBG_SLEEP", 0, 1 },  /* Debug Sleep mode */
   { "DBG_STOP", 1, 1 },  /* Debug Stop Mode */
   { "DBG_STANDBY", 2, 1 },  /* Debug Standby Mode */
   { "TRACE_IOEN", 5, 1 },  /* Trace pin assignment
              control */
   { "TRACE_MODE", 6, 2 },  /* Trace pin assignment
              control */
   { NULL, 0, 0 }
};

const Field_t DBGMCU_APB1FZ_fields[] = {
   { "DBG_TIM2_STOP", 0, 1 },  /* Debug Timer 2 stopped when Core is
              halted */
   { "DBG_TIM3_STOP", 1, 1 },  /* Debug Timer 3 stopped when Core is
              halted */
   { "DBG_TIM4_STOP", 2, 1 },  /* Debug Timer 4 stopped when Core is
              halted */
   { "DBG_TIM5_STOP", 3, 1 },  /* Debug Timer 5 stopped when Core is
              halted */
   { "DBG_TIM6_STOP", 4, 1 },  /* Debug Timer 6 stopped when Core is
              halted */
   { "DBG_TIM7_STOP", 5, 1 },  /* Debug Timer 7 stopped when Core is
              halted */
   { "DBG_TIM12_STOP", 6, 1 },  /* Debug Timer 12 stopped when Core is
              halted */
   { "DBG_TIM13_STOP", 7, 1 },  /* Debug Timer 13 stopped when Core is
              halted */
   { "DBG_TIMER14_STOP", 8, 1 },  /* Debug Timer 14 stopped when Core is
              halted */
   { "DBG_TIM18_STOP", 9, 1 },  /* Debug Timer 18 stopped when Core is
              halted */
   { "DBG_RTC_STOP", 10, 1 },  /* Debug RTC stopped when Core is
              halted */
   { "DBG_WWDG_STOP", 11, 1 },  /* Debug Window Wachdog stopped when Core
              is halted */
   { "DBG_IWDG_STOP", 12, 1 },  /* Debug Independent Wachdog stopped when
              Core is halted */
   { "I2C1_SMBUS_TIMEOUT", 21, 1 },  /* SMBUS timeout mode stopped when Core is
              halted */
   { "I2C2_SMBUS_TIMEOUT", 22, 1 },  /* SMBUS timeout mode stopped when Core is
              halted */
   { "DBG_CAN_STOP", 25, 1 },  /* Debug CAN stopped when core is
              halted */
   { NULL, 0, 0 }
};

const Field_t DBGMCU_APB2FZ_fields[] = {
   { "DBG_TIM15_STOP", 2, 1 },  /* Debug Timer 15 stopped when Core is
              halted */
   { "DBG_TIM16_STOP", 3, 1 },  /* Debug Timer 16 stopped when Core is
              halted */
   { "DBG_TIM17_STO", 4, 1 },  /* Debug Timer 17 stopped when Core is
              halted */
   { "DBG_TIM19_STOP", 5, 1 },  /* Debug Timer 19 stopped when Core is
              halted */
   { NULL, 0, 0 }
};

const Register_t DBGMCU_registers[] = {
   {"IDCODE", 0, 32, 0, DBGMCU_IDCODE_fields}, /* MCU Device ID Code Register */
   {"CR", 4, 32, 0, DBGMCU_CR_fields}, /* Debug MCU Configuration
          Register */
   {"APB1FZ", 8, 32, 0, DBGMCU_APB1FZ_fields}, /* APB Low Freeze Register */
   {"APB2FZ", 12, 32, 0, DBGMCU_APB2FZ_fields}, /* APB High Freeze Register */
   { NULL,0 ,0 ,0 , NULL }
};

const Field_t DES_UID0_fields[] = {
  { "YLOC", 0, 16 }, /* Y Loc on wafer */
  { "XLOC", 16, 16 }, /* X Loc on wafer */
  { NULL, 0, 0}
};

const Field_t DES_UID1_fields[] = {
  { "WAF_NUM", 0, 8 }, /* Wafer Number */
  { "LOT_NUM0", 8, 24 }, /* Lot Number */
  { NULL, 0, 0}
};

const Field_t DES_UID2_fields[] = {
  { "LOT_NUM1", 0, 32 }, /* Lot Number */
  { NULL, 0, 0}
};

const Register_t DES_registers[] = {
  {"UID0", 0, 32, 0, DES_UID0_fields},
  {"UID1", 4, 32, 0, DES_UID1_fields},
  {"UID2", 8, 32, 0, DES_UID2_fields},
  {"TS_CAL1", 12, 16, 0, NULL},
  {"VREFINT_CAL", 14, 16, 0, NULL},
  {"TS_CAL2", 22, 16, 0, NULL},
  {"FLASH_SIZE", 0x1ffff7cc - 0x1ffff7ac, 16, 0, NULL},
  { NULL,0 ,0 ,0 , NULL }
};


const Peripheral_t Peripherals[] = {
   {"TIM2", 0x40000000, TIM2_registers }, /* General purpose timer */
   {"TIM3", 0x40000400, TIM2_registers }, /*  */
   {"TIM4", 0x40000800, TIM2_registers }, /*  */
   {"TIM6", 0x40001000, TIM6_registers }, /* Basic timers */
   {"TIM7", 0x40001400, TIM6_registers }, /*  */
   {"RTC", 0x40002800, RTC_registers }, /* Real-time clock */
   {"WWDG", 0x40002c00, WWDG_registers }, /* Window watchdog */
   {"IWDG", 0x40003000, IWDG_registers }, /* Independent watchdog */
   {"I2S2ext", 0x40003400, SPI1_registers }, /*  */
   {"SPI2", 0x40003800, SPI1_registers }, /*  */
   {"SPI3", 0x40003c00, SPI1_registers }, /*  */
   {"I2S3ext", 0x40004000, SPI1_registers }, /*  */
   {"USART2", 0x40004400, USART1_registers }, /*  */
   {"USART3", 0x40004800, USART1_registers }, /*  */
   {"UART4", 0x40004c00, USART1_registers }, /*  */
   {"UART5", 0x40005000, USART1_registers }, /*  */
   {"I2C1", 0x40005400, I2C1_registers }, /* Inter-integrated circuit */
   {"I2C2", 0x40005800, I2C1_registers }, /*  */
   {"USB_FS", 0x40005c00, USB_FS_registers }, /* Universal serial bus full-speed device
      interface */
   {"CAN", 0x40006400, CAN_registers }, /* Controller area network */
   {"PWR", 0x40007000, PWR_registers }, /* Power control */
   {"DAC", 0x40007400, DAC_registers }, /* Digital-to-analog converter */
   {"SYSCFG", 0x40010000, SYSCFG_registers }, /* System configuration controller */
   {"COMP", 0x4001001c, COMP_registers }, /* Comparator */
   {"OPAMP", 0x40010038, OPAMP_registers }, /* Operational amplifier */
   {"EXTI", 0x40010400, EXTI_registers }, /* External interrupt/event
      controller */
   {"TIM1", 0x40012c00, TIM1_registers }, /* Advanced timer */
   {"SPI1", 0x40013000, SPI1_registers }, /* Serial peripheral interface/Inter-IC
      sound */
   {"TIM8", 0x40013400, TIM8_registers }, /* Advanced-timers */
   {"USART1", 0x40013800, USART1_registers }, /* Universal synchronous asynchronous receiver
      transmitter */
   {"TIM15", 0x40014000, TIM15_registers }, /* General purpose timers */
   {"TIM16", 0x40014400, TIM16_registers }, /* General-purpose-timers */
   {"TIM17", 0x40014800, TIM17_registers }, /* General purpose timer */
   {"DMA1", 0x40020000, DMA1_registers }, /* DMA controller 1 */
   {"DMA2", 0x40020400, DMA1_registers }, /*  */
   {"RCC", 0x40021000, RCC_registers }, /* Reset and clock control */
   {"Flash", 0x40022000, Flash_registers }, /* Flash */
   {"CRC", 0x40023000, CRC_registers }, /* cyclic redundancy check calculation
      unit */
   {"TSC", 0x40024000, TSC_registers }, /* Touch sensing controller */
   {"GPIOA", 0x48000000, GPIOA_registers }, /* General-purpose I/Os */
   {"GPIOB", 0x48000400, GPIOB_registers }, /* General-purpose I/Os */
   {"GPIOC", 0x48000800, GPIOB_registers }, /*  */
   {"GPIOD", 0x48000c00, GPIOB_registers }, /*  */
   {"GPIOE", 0x48001000, GPIOB_registers }, /*  */
   {"GPIOF", 0x48001400, GPIOB_registers }, /*  */
   {"ADC1", 0x50000000, ADC1_registers }, /* Analog-to-Digital Converter */
   {"ADC2", 0x50000100, ADC1_registers }, /*  */
   {"ADC1_2", 0x50000300, ADC1_2_registers }, /* Analog-to-Digital Converter */
   {"ADC3", 0x50000400, ADC1_registers }, /*  */
   {"ADC4", 0x50000500, ADC1_registers }, /*  */
   {"ADC3_4", 0x50000700, ADC1_2_registers }, /*  */
   {"NVIC", 0xe000e000, NVIC_registers }, /* Nested Vectored Interrupt
      Controller */
   {"FPU", 0xe000ed88, FPU_registers }, /* Floting point unit */
   {"DBGMCU", 0xe0042000, DBGMCU_registers }, /* Debug support */
   {"DES", 0x1ffff7ac, DES_registers }, /* Device electronic signature */
   {NULL, 0, NULL }
};

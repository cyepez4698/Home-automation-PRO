/*!
 * @file LPC845.h
 * @par Author & Doxygen Editor
 * 	Daniel Di Módica ~ <a href = "mailto: danifabriziodmodica@gmail.com">danifabriziodmodica@@gmail.com</a>
 * @date 14/06/2023 20:36:24
 * @brief LPC845 API (Application Programming Interface).
 */

#ifndef LPC845_H_
#define LPC845_H_

#include "utils.h"

#define FREQ_CLOCK_MCU 	(12000000UL)

/*!
 * @addtogroup SYSCON_Peripheral_Access_Layer SYSCON Peripheral Access Layer
 * @{
 */

/** SYSCON - Register Layout Typedef */
typedef struct {
  __IO uint32_t SYSMEMREMAP;                       /**< System Remap register, offset: 0x0 */
       uint8_t RESERVED_0[4];
  __IO uint32_t SYSPLLCTRL;                        /**< PLL control, offset: 0x8 */
  __I  uint32_t SYSPLLSTAT;                        /**< PLL status, offset: 0xC */
       uint8_t RESERVED_1[16];
  __IO uint32_t SYSOSCCTRL;                        /**< system oscillator control, offset: 0x20 */
  __IO uint32_t WDTOSCCTRL;                        /**< Watchdog oscillator control, offset: 0x24 */
  __IO uint32_t FROOSCCTRL;                        /**< FRO oscillator control, offset: 0x28 */
       uint8_t RESERVED_2[4];
  __IO uint32_t FRODIRECTCLKUEN;                   /**< FRO direct clock source update enable register, offset: 0x30 */
       uint8_t RESERVED_3[4];
  __IO uint32_t SYSRSTSTAT;                        /**< System reset status register, offset: 0x38 */
       uint8_t RESERVED_4[4];
  __IO uint32_t SYSPLLCLKSEL;                      /**< System PLL clock source select register, offset: 0x40 */
  __IO uint32_t SYSPLLCLKUEN;                      /**< System PLL clock source update enable register, offset: 0x44 */
  __IO uint32_t MAINCLKPLLSEL;                     /**< Main clock source select register, offset: 0x48 */
  __IO uint32_t MAINCLKPLLUEN;                     /**< Main clock source update enable register, offset: 0x4C */
  __IO uint32_t MAINCLKSEL;                        /**< Main clock source select register, offset: 0x50 */
  __IO uint32_t MAINCLKUEN;                        /**< Main clock source update enable register, offset: 0x54 */
  __IO uint32_t SYSAHBCLKDIV;                      /**< System clock divider register, offset: 0x58 */
       uint8_t RESERVED_5[4];
  __IO uint32_t CAPTCLKSEL;                        /**< CAPT clock source select register, offset: 0x60 */
  __IO uint32_t ADCCLKSEL;                         /**< ADC clock source select register, offset: 0x64 */
  __IO uint32_t ADCCLKDIV;                         /**< ADC clock divider register, offset: 0x68 */
  __IO uint32_t SCTCLKSEL;                         /**< SCT clock source select register, offset: 0x6C */
  __IO uint32_t SCTCLKDIV;                         /**< SCT clock divider register, offset: 0x70 */
  __IO uint32_t EXTCLKSEL;                         /**< external clock source select register, offset: 0x74 */
       uint8_t RESERVED_6[8];
  __IO uint32_t SYSAHBCLKCTRL0;                    /**< System clock group 0 control register, offset: 0x80 */
  __IO uint32_t SYSAHBCLKCTRL1;                    /**< System clock group 1 control register, offset: 0x84 */
  __IO uint32_t PRESETCTRL0;                       /**< Peripheral reset group 0 control register, offset: 0x88 */
  __IO uint32_t PRESETCTRL1;                       /**< Peripheral reset group 1 control register, offset: 0x8C */
  __IO uint32_t FCLKSEL[11];                       /**< peripheral clock source select register. FCLK0SEL~FCLK4SEL are for UART0~UART4 clock source select register. FCLK5SEL~FCLK8SEL are for I2C0~I2C3 clock source select register. FCLK9SEL~FCLK10SEL are for SPI0~SPI1 clock source select register., array offset: 0x90, array step: 0x4 */
       uint8_t RESERVED_7[20];
  struct {                                         /* offset: 0xD0, array step: 0x10 */
    __IO uint32_t FRGDIV;                            /**< fractional generator N divider value register, array offset: 0xD0, array step: 0x10 */
    __IO uint32_t FRGMULT;                           /**< fractional generator N multiplier value register, array offset: 0xD4, array step: 0x10 */
    __IO uint32_t FRGCLKSEL;                         /**< FRG N clock source select register, array offset: 0xD8, array step: 0x10 */
         uint8_t RESERVED_0[4];
  } FRG[2];
  __IO uint32_t CLKOUTSEL;                         /**< CLKOUT clock source select register, offset: 0xF0 */
  __IO uint32_t CLKOUTDIV;                         /**< CLKOUT clock divider registers, offset: 0xF4 */
       uint8_t RESERVED_8[4];
  __IO uint32_t EXTTRACECMD;                       /**< External trace buffer command register, offset: 0xFC */
  __I  uint32_t PIOPORCAP[2];                      /**< POR captured PIO N status register(PIO0 has 32 PIOs, PIO1 has 22 PIOs), array offset: 0x100, array step: 0x4 */
       uint8_t RESERVED_9[44];
  __IO uint32_t IOCONCLKDIV6;                      /**< Peripheral clock 6 to the IOCON block for programmable glitch filter, offset: 0x134 */
  __IO uint32_t IOCONCLKDIV5;                      /**< Peripheral clock 6 to the IOCON block for programmable glitch filter, offset: 0x138 */
  __IO uint32_t IOCONCLKDIV4;                      /**< Peripheral clock 4 to the IOCON block for programmable glitch filter, offset: 0x13C */
  __IO uint32_t IOCONCLKDIV3;                      /**< Peripheral clock 3 to the IOCON block for programmable glitch filter, offset: 0x140 */
  __IO uint32_t IOCONCLKDIV2;                      /**< Peripheral clock 2 to the IOCON block for programmable glitch filter, offset: 0x144 */
  __IO uint32_t IOCONCLKDIV1;                      /**< Peripheral clock 1 to the IOCON block for programmable glitch filter, offset: 0x148 */
  __IO uint32_t IOCONCLKDIV0;                      /**< Peripheral clock 0 to the IOCON block for programmable glitch filter, offset: 0x14C */
  __IO uint32_t BODCTRL;                           /**< BOD control register, offset: 0x150 */
  __IO uint32_t SYSTCKCAL;                         /**< System tick timer calibration register, offset: 0x154 */
       uint8_t RESERVED_10[24];
  __IO uint32_t IRQLATENCY;                        /**< IRQ latency register, offset: 0x170 */
  __IO uint32_t NMISRC;                            /**< NMI source selection register, offset: 0x174 */
  __IO uint32_t PINTSEL[8];                        /**< Pin interrupt select registers N, array offset: 0x178, array step: 0x4 */
       uint8_t RESERVED_11[108];
  __IO uint32_t STARTERP0;                         /**< Start logic 0 pin wake-up enable register 0, offset: 0x204 */
       uint8_t RESERVED_12[12];
  __IO uint32_t STARTERP1;                         /**< Start logic 0 pin wake-up enable register 1, offset: 0x214 */
       uint8_t RESERVED_13[24];
  __IO uint32_t PDSLEEPCFG;                        /**< Deep-sleep configuration register, offset: 0x230 */
  __IO uint32_t PDAWAKECFG;                        /**< Wake-up configuration register, offset: 0x234 */
  __IO uint32_t PDRUNCFG;                          /**< Power configuration register, offset: 0x238 */
       uint8_t RESERVED_14[444];
  __I  uint32_t DEVICE_ID;                         /**< Part ID register, offset: 0x3F8 */
} SYSCON_Type;

/*! @brief FRO clock setting API address in ROM. */
#define CLOCK_FRO_SETTING_API_ROM_ADDRESS (0x0F0026F5U)

/* ----------------------------------------------------------------------------
   -- SYSCON Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SYSCON_Register_Masks SYSCON Register Masks
 * @{
 */

/*! @name SYSMEMREMAP - System Remap register */
/*! @{ */
#define SYSCON_SYSMEMREMAP_MAP_MASK              (0x3U)
#define SYSCON_SYSMEMREMAP_MAP_SHIFT             (0U)
/*! MAP - System memory remap. Value 0x3 is reserved.
 *  0b00..Boot Loader Mode. Interrupt vectors are re-mapped to Boot ROM.
 *  0b01..User RAM Mode. Interrupt vectors are re-mapped to Static RAM.
 *  0b10..User Flash Mode. Interrupt vectors are not re-mapped and reside in Flash.
 */
#define SYSCON_SYSMEMREMAP_MAP(x)                (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSMEMREMAP_MAP_SHIFT)) & SYSCON_SYSMEMREMAP_MAP_MASK)
/*! @} */

/*! @name SYSPLLCTRL - PLL control */
/*! @{ */
#define SYSCON_SYSPLLCTRL_MSEL_MASK              (0x1FU)
#define SYSCON_SYSPLLCTRL_MSEL_SHIFT             (0U)
/*! MSEL - Feedback divider value. The division value M is the programmed MSEL value + 1. 00000:
 *    Division ratio M = 1 to 11111: Division ratio M = 32
 */
#define SYSCON_SYSPLLCTRL_MSEL(x)                (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSPLLCTRL_MSEL_SHIFT)) & SYSCON_SYSPLLCTRL_MSEL_MASK)
#define SYSCON_SYSPLLCTRL_PSEL_MASK              (0x60U)
#define SYSCON_SYSPLLCTRL_PSEL_SHIFT             (5U)
/*! PSEL - Post divider ratio P. The division ratio is 2 x P.
 *  0b00..P = 1
 *  0b01..P = 2
 *  0b10..P = 4
 *  0b11..P = 8
 */
#define SYSCON_SYSPLLCTRL_PSEL(x)                (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSPLLCTRL_PSEL_SHIFT)) & SYSCON_SYSPLLCTRL_PSEL_MASK)
/*! @} */

/*! @name SYSPLLSTAT - PLL status */
/*! @{ */
#define SYSCON_SYSPLLSTAT_LOCK_MASK              (0x1U)
#define SYSCON_SYSPLLSTAT_LOCK_SHIFT             (0U)
/*! LOCK - PLL0 lock indicator
 */
#define SYSCON_SYSPLLSTAT_LOCK(x)                (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSPLLSTAT_LOCK_SHIFT)) & SYSCON_SYSPLLSTAT_LOCK_MASK)
/*! @} */

/*! @name SYSOSCCTRL - system oscillator control */
/*! @{ */
#define SYSCON_SYSOSCCTRL_BYPASS_MASK            (0x1U)
#define SYSCON_SYSOSCCTRL_BYPASS_SHIFT           (0U)
/*! BYPASS - oscillator (Xtal) Test Mode input (Active High)
 */
#define SYSCON_SYSOSCCTRL_BYPASS(x)              (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSOSCCTRL_BYPASS_SHIFT)) & SYSCON_SYSOSCCTRL_BYPASS_MASK)
#define SYSCON_SYSOSCCTRL_FREQRANGE_MASK         (0x2U)
#define SYSCON_SYSOSCCTRL_FREQRANGE_SHIFT        (1U)
/*! FREQRANGE - oscillator low / high transconductance selection input (Active High) 1-20MHz '0' : 15-50MHz '1'
 */
#define SYSCON_SYSOSCCTRL_FREQRANGE(x)           (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSOSCCTRL_FREQRANGE_SHIFT)) & SYSCON_SYSOSCCTRL_FREQRANGE_MASK)
/*! @} */

/*! @name WDTOSCCTRL - Watchdog oscillator control */
/*! @{ */
#define SYSCON_WDTOSCCTRL_DIVSEL_MASK            (0x1FU)
#define SYSCON_WDTOSCCTRL_DIVSEL_SHIFT           (0U)
/*! DIVSEL - Select divider for Fclkana. wdt_osc_clk = Fclkana/ (2 x (1 + DIVSEL)) 00000: 2 x (1 +
 *    DIVSEL) = 2 00001: 2 x (1 + DIVSEL) = 4 to 11111: 2 x (1 + DIVSEL) = 64
 */
#define SYSCON_WDTOSCCTRL_DIVSEL(x)              (((uint32_t)(((uint32_t)(x)) << SYSCON_WDTOSCCTRL_DIVSEL_SHIFT)) & SYSCON_WDTOSCCTRL_DIVSEL_MASK)
#define SYSCON_WDTOSCCTRL_FREQSEL_MASK           (0x1E0U)
#define SYSCON_WDTOSCCTRL_FREQSEL_SHIFT          (5U)
/*! FREQSEL - Frequency select. Selects the frequency of the oscillator. 0x00 = invalid setting when
 *    watchdog oscillator is running 0x1 = 0.6 MHz 0x2 = 1.05 MHz 0x3 = 1.4 MHz 0x4 = 1.75 MHz 0x5
 *    = 2.1 MHz 0x6 = 2.4 MHz 0x7 = 2.7 MHz 0x8 = 3.0 MHz 0x9 = 3.25 MHz 0xA = 3.5 MHz 0xB = 3.75
 *    MHz 0xC = 4.0 MHz 0xD = 4.2 MHz 0xE = 4.4 MHz 0xF = 4.6 MHz
 */
#define SYSCON_WDTOSCCTRL_FREQSEL(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_WDTOSCCTRL_FREQSEL_SHIFT)) & SYSCON_WDTOSCCTRL_FREQSEL_MASK)
/*! @} */

/*! @name FROOSCCTRL - FRO oscillator control */
/*! @{ */
#define SYSCON_FROOSCCTRL_FRO_DIRECT_MASK        (0x20000U)
#define SYSCON_FROOSCCTRL_FRO_DIRECT_SHIFT       (17U)
/*! FRO_DIRECT - fro direct clock select
 *  0b0..fro clock is divider by 2 or 16,depend on FAIM slow boot value
 *  0b1..fro clock is direct from FRO oscillator
 */
#define SYSCON_FROOSCCTRL_FRO_DIRECT(x)          (((uint32_t)(((uint32_t)(x)) << SYSCON_FROOSCCTRL_FRO_DIRECT_SHIFT)) & SYSCON_FROOSCCTRL_FRO_DIRECT_MASK)
/*! @} */

/*! @name FRODIRECTCLKUEN - FRO direct clock source update enable register */
/*! @{ */
#define SYSCON_FRODIRECTCLKUEN_ENA_MASK          (0x1U)
#define SYSCON_FRODIRECTCLKUEN_ENA_SHIFT         (0U)
/*! ENA - Enable fro clock source update
 *  0b0..no change
 *  0b1..update clock source
 */
#define SYSCON_FRODIRECTCLKUEN_ENA(x)            (((uint32_t)(((uint32_t)(x)) << SYSCON_FRODIRECTCLKUEN_ENA_SHIFT)) & SYSCON_FRODIRECTCLKUEN_ENA_MASK)
/*! @} */

/*! @name SYSRSTSTAT - System reset status register */
/*! @{ */
#define SYSCON_SYSRSTSTAT_POR_MASK               (0x1U)
#define SYSCON_SYSRSTSTAT_POR_SHIFT              (0U)
/*! POR - POR reset status
 *  0b0..No POR detected
 *  0b1..POR detected. Writing a one clears this reset.
 */
#define SYSCON_SYSRSTSTAT_POR(x)                 (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSRSTSTAT_POR_SHIFT)) & SYSCON_SYSRSTSTAT_POR_MASK)
#define SYSCON_SYSRSTSTAT_EXTRST_MASK            (0x2U)
#define SYSCON_SYSRSTSTAT_EXTRST_SHIFT           (1U)
/*! EXTRST - Status of the external RESET pin. External reset status.
 *  0b0..No reset event detected.
 *  0b1..Reset detected. Writing a one clears this reset.
 */
#define SYSCON_SYSRSTSTAT_EXTRST(x)              (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSRSTSTAT_EXTRST_SHIFT)) & SYSCON_SYSRSTSTAT_EXTRST_MASK)
#define SYSCON_SYSRSTSTAT_WDT_MASK               (0x4U)
#define SYSCON_SYSRSTSTAT_WDT_SHIFT              (2U)
/*! WDT - Status of the Watchdog reset
 *  0b0..No WDT reset detected
 *  0b1..WDT reset detected. Writing a one clears this reset.
 */
#define SYSCON_SYSRSTSTAT_WDT(x)                 (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSRSTSTAT_WDT_SHIFT)) & SYSCON_SYSRSTSTAT_WDT_MASK)
#define SYSCON_SYSRSTSTAT_BOD_MASK               (0x8U)
#define SYSCON_SYSRSTSTAT_BOD_SHIFT              (3U)
/*! BOD - Status of the Brown-out detect reset
 *  0b0..No BOD reset detected
 *  0b1..BOD reset detected. Writing a one clears this reset.
 */
#define SYSCON_SYSRSTSTAT_BOD(x)                 (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSRSTSTAT_BOD_SHIFT)) & SYSCON_SYSRSTSTAT_BOD_MASK)
#define SYSCON_SYSRSTSTAT_SYSRST_MASK            (0x10U)
#define SYSCON_SYSRSTSTAT_SYSRST_SHIFT           (4U)
/*! SYSRST - Status of the software system reset
 *  0b0..No System reset detected
 *  0b1..System reset detected. Writing a one clears this reset.
 */
#define SYSCON_SYSRSTSTAT_SYSRST(x)              (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSRSTSTAT_SYSRST_SHIFT)) & SYSCON_SYSRSTSTAT_SYSRST_MASK)
/*! @} */

/*! @name SYSPLLCLKSEL - System PLL clock source select register */
/*! @{ */
#define SYSCON_SYSPLLCLKSEL_SEL_MASK             (0x3U)
#define SYSCON_SYSPLLCLKSEL_SEL_SHIFT            (0U)
/*! SEL - System PLL clock source
 *  0b00..FRO
 *  0b01..External clock
 *  0b10..Watchdog oscillator
 *  0b11..FRO DIV
 */
#define SYSCON_SYSPLLCLKSEL_SEL(x)               (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSPLLCLKSEL_SEL_SHIFT)) & SYSCON_SYSPLLCLKSEL_SEL_MASK)
/*! @} */

/*! @name SYSPLLCLKUEN - System PLL clock source update enable register */
/*! @{ */
#define SYSCON_SYSPLLCLKUEN_ENA_MASK             (0x1U)
#define SYSCON_SYSPLLCLKUEN_ENA_SHIFT            (0U)
/*! ENA - Enable system PLL clock source update
 *  0b0..no change
 *  0b1..update clock source
 */
#define SYSCON_SYSPLLCLKUEN_ENA(x)               (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSPLLCLKUEN_ENA_SHIFT)) & SYSCON_SYSPLLCLKUEN_ENA_MASK)
/*! @} */

/*! @name MAINCLKPLLSEL - Main clock source select register */
/*! @{ */
#define SYSCON_MAINCLKPLLSEL_SEL_MASK            (0x3U)
#define SYSCON_MAINCLKPLLSEL_SEL_SHIFT           (0U)
/*! SEL - System PLL clock source
 *  0b00..main_clk_pre_pll
 *  0b01..sys pll
 *  0b10..none
 *  0b11..none
 */
#define SYSCON_MAINCLKPLLSEL_SEL(x)              (((uint32_t)(((uint32_t)(x)) << SYSCON_MAINCLKPLLSEL_SEL_SHIFT)) & SYSCON_MAINCLKPLLSEL_SEL_MASK)
/*! @} */

/*! @name MAINCLKPLLUEN - Main clock source update enable register */
/*! @{ */
#define SYSCON_MAINCLKPLLUEN_ENA_MASK            (0x1U)
#define SYSCON_MAINCLKPLLUEN_ENA_SHIFT           (0U)
/*! ENA - Enable main clock source update
 *  0b0..no change
 *  0b1..update clock source
 */
#define SYSCON_MAINCLKPLLUEN_ENA(x)              (((uint32_t)(((uint32_t)(x)) << SYSCON_MAINCLKPLLUEN_ENA_SHIFT)) & SYSCON_MAINCLKPLLUEN_ENA_MASK)
/*! @} */

/*! @name MAINCLKSEL - Main clock source select register */
/*! @{ */
#define SYSCON_MAINCLKSEL_SEL_MASK               (0x3U)
#define SYSCON_MAINCLKSEL_SEL_SHIFT              (0U)
/*! SEL - System PLL clock source
 *  0b00..FRO
 *  0b01..External clock
 *  0b10..Watchdog oscillator
 *  0b11..FRO_DIV
 */
#define SYSCON_MAINCLKSEL_SEL(x)                 (((uint32_t)(((uint32_t)(x)) << SYSCON_MAINCLKSEL_SEL_SHIFT)) & SYSCON_MAINCLKSEL_SEL_MASK)
/*! @} */

/*! @name MAINCLKUEN - Main clock source update enable register */
/*! @{ */
#define SYSCON_MAINCLKUEN_ENA_MASK               (0x1U)
#define SYSCON_MAINCLKUEN_ENA_SHIFT              (0U)
/*! ENA - Enable main clock source update
 *  0b0..no change
 *  0b1..update clock source
 */
#define SYSCON_MAINCLKUEN_ENA(x)                 (((uint32_t)(((uint32_t)(x)) << SYSCON_MAINCLKUEN_ENA_SHIFT)) & SYSCON_MAINCLKUEN_ENA_MASK)
/*! @} */

/*! @name SYSAHBCLKDIV - System clock divider register */
/*! @{ */
#define SYSCON_SYSAHBCLKDIV_DIV_MASK             (0xFFU)
#define SYSCON_SYSAHBCLKDIV_DIV_SHIFT            (0U)
/*! DIV - System AHB clock divider values 0: System clock disabled. 1: Divide by 1. to 255: Divide by 255.
 */
#define SYSCON_SYSAHBCLKDIV_DIV(x)               (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSAHBCLKDIV_DIV_SHIFT)) & SYSCON_SYSAHBCLKDIV_DIV_MASK)
/*! @} */

/*! @name CAPTCLKSEL - CAPT clock source select register */
/*! @{ */
#define SYSCON_CAPTCLKSEL_SEL_MASK               (0x7U)
#define SYSCON_CAPTCLKSEL_SEL_SHIFT              (0U)
/*! SEL - Clock source for CAPT clock
 *  0b000..FRO
 *  0b001..main clock
 *  0b010..sys pll
 *  0b011..FRO_DIV
 *  0b100..Watchdog oscillator
 *  0b101..None
 *  0b110..None
 *  0b111..None
 */
#define SYSCON_CAPTCLKSEL_SEL(x)                 (((uint32_t)(((uint32_t)(x)) << SYSCON_CAPTCLKSEL_SEL_SHIFT)) & SYSCON_CAPTCLKSEL_SEL_MASK)
/*! @} */

/*! @name ADCCLKSEL - ADC clock source select register */
/*! @{ */
#define SYSCON_ADCCLKSEL_SEL_MASK                (0x3U)
#define SYSCON_ADCCLKSEL_SEL_SHIFT               (0U)
/*! SEL - Clock source for ADC clock
 *  0b00..FRO
 *  0b01..sys pll
 *  0b10..none
 *  0b11..none
 */
#define SYSCON_ADCCLKSEL_SEL(x)                  (((uint32_t)(((uint32_t)(x)) << SYSCON_ADCCLKSEL_SEL_SHIFT)) & SYSCON_ADCCLKSEL_SEL_MASK)
/*! @} */

/*! @name ADCCLKDIV - ADC clock divider register */
/*! @{ */
#define SYSCON_ADCCLKDIV_DIV_MASK                (0xFFU)
#define SYSCON_ADCCLKDIV_DIV_SHIFT               (0U)
/*! DIV - ADC clock divider values 0: ADC clock disabled. 1: Divide by 1. to 255: Divide by 255.
 */
#define SYSCON_ADCCLKDIV_DIV(x)                  (((uint32_t)(((uint32_t)(x)) << SYSCON_ADCCLKDIV_DIV_SHIFT)) & SYSCON_ADCCLKDIV_DIV_MASK)
/*! @} */

/*! @name SCTCLKSEL - SCT clock source select register */
/*! @{ */
#define SYSCON_SCTCLKSEL_SEL_MASK                (0x3U)
#define SYSCON_SCTCLKSEL_SEL_SHIFT               (0U)
/*! SEL - Clock source for SCT clock
 *  0b00..FRO
 *  0b01..main clock
 *  0b10..sys pll
 *  0b11..none
 */
#define SYSCON_SCTCLKSEL_SEL(x)                  (((uint32_t)(((uint32_t)(x)) << SYSCON_SCTCLKSEL_SEL_SHIFT)) & SYSCON_SCTCLKSEL_SEL_MASK)
/*! @} */

/*! @name SCTCLKDIV - SCT clock divider register */
/*! @{ */
#define SYSCON_SCTCLKDIV_DIV_MASK                (0xFFU)
#define SYSCON_SCTCLKDIV_DIV_SHIFT               (0U)
/*! DIV - SCT clock divider values 0: SCT clock disabled. 1: Divide by 1. to 255: Divide by 255.
 */
#define SYSCON_SCTCLKDIV_DIV(x)                  (((uint32_t)(((uint32_t)(x)) << SYSCON_SCTCLKDIV_DIV_SHIFT)) & SYSCON_SCTCLKDIV_DIV_MASK)
/*! @} */

/*! @name EXTCLKSEL - external clock source select register */
/*! @{ */
#define SYSCON_EXTCLKSEL_SEL_MASK                (0x1U)
#define SYSCON_EXTCLKSEL_SEL_SHIFT               (0U)
/*! SEL - Clock source for external clock
 *  0b0..System oscillator
 *  0b1..Clk_in
 */
#define SYSCON_EXTCLKSEL_SEL(x)                  (((uint32_t)(((uint32_t)(x)) << SYSCON_EXTCLKSEL_SEL_SHIFT)) & SYSCON_EXTCLKSEL_SEL_MASK)
/*! @} */

/*! @name SYSAHBCLKCTRL0 - System clock group 0 control register */
/*! @{ */
#define SYSCON_SYSAHBCLKCTRL0_SYS_MASK           (0x1U)
#define SYSCON_SYSAHBCLKCTRL0_SYS_SHIFT          (0U)
/*! SYS - Enables the clock for the AHB, the APB bridge, the Cortex-M0+ core clocks, SYSCON, and the
 *    PMU. This bit is read only and always reads as 1.
 */
#define SYSCON_SYSAHBCLKCTRL0_SYS(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSAHBCLKCTRL0_SYS_SHIFT)) & SYSCON_SYSAHBCLKCTRL0_SYS_MASK)
#define SYSCON_SYSAHBCLKCTRL0_ROM_MASK           (0x2U)
#define SYSCON_SYSAHBCLKCTRL0_ROM_SHIFT          (1U)
/*! ROM - Enables clock for ROM.
 *  0b0..disable
 *  0b1..enable
 */
#define SYSCON_SYSAHBCLKCTRL0_ROM(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSAHBCLKCTRL0_ROM_SHIFT)) & SYSCON_SYSAHBCLKCTRL0_ROM_MASK)
#define SYSCON_SYSAHBCLKCTRL0_RAM0_1_MASK        (0x4U)
#define SYSCON_SYSAHBCLKCTRL0_RAM0_1_SHIFT       (2U)
/*! RAM0_1 - Enables clock for SRAM0 and SRAM1.
 *  0b0..disable
 *  0b1..enable
 */
#define SYSCON_SYSAHBCLKCTRL0_RAM0_1(x)          (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSAHBCLKCTRL0_RAM0_1_SHIFT)) & SYSCON_SYSAHBCLKCTRL0_RAM0_1_MASK)
#define SYSCON_SYSAHBCLKCTRL0_FLASH_MASK         (0x10U)
#define SYSCON_SYSAHBCLKCTRL0_FLASH_SHIFT        (4U)
/*! FLASH - Enables clock for flash.
 *  0b0..disable
 *  0b1..enable
 */
#define SYSCON_SYSAHBCLKCTRL0_FLASH(x)           (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSAHBCLKCTRL0_FLASH_SHIFT)) & SYSCON_SYSAHBCLKCTRL0_FLASH_MASK)
#define SYSCON_SYSAHBCLKCTRL0_I2C0_MASK          (0x20U)
#define SYSCON_SYSAHBCLKCTRL0_I2C0_SHIFT         (5U)
/*! I2C0 - Enables clock for I2C0.
 *  0b0..disable
 *  0b1..enable
 */
#define SYSCON_SYSAHBCLKCTRL0_I2C0(x)            (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSAHBCLKCTRL0_I2C0_SHIFT)) & SYSCON_SYSAHBCLKCTRL0_I2C0_MASK)
#define SYSCON_SYSAHBCLKCTRL0_GPIO0_MASK         (0x40U)
#define SYSCON_SYSAHBCLKCTRL0_GPIO0_SHIFT        (6U)
/*! GPIO0 - Enables clock for GPIO0 port registers.
 *  0b0..disable
 *  0b1..enable
 */
#define SYSCON_SYSAHBCLKCTRL0_GPIO0(x)           (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSAHBCLKCTRL0_GPIO0_SHIFT)) & SYSCON_SYSAHBCLKCTRL0_GPIO0_MASK)
#define SYSCON_SYSAHBCLKCTRL0_SWM_MASK           (0x80U)
#define SYSCON_SYSAHBCLKCTRL0_SWM_SHIFT          (7U)
/*! SWM - Enables clock for switch matrix.
 *  0b0..disable
 *  0b1..enable
 */
#define SYSCON_SYSAHBCLKCTRL0_SWM(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSAHBCLKCTRL0_SWM_SHIFT)) & SYSCON_SYSAHBCLKCTRL0_SWM_MASK)
#define SYSCON_SYSAHBCLKCTRL0_SCT_MASK           (0x100U)
#define SYSCON_SYSAHBCLKCTRL0_SCT_SHIFT          (8U)
/*! SCT - Enables clock for state configurable timer SCTimer/PWM.
 *  0b0..disable
 *  0b1..enable
 */
#define SYSCON_SYSAHBCLKCTRL0_SCT(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSAHBCLKCTRL0_SCT_SHIFT)) & SYSCON_SYSAHBCLKCTRL0_SCT_MASK)
#define SYSCON_SYSAHBCLKCTRL0_WKT_MASK           (0x200U)
#define SYSCON_SYSAHBCLKCTRL0_WKT_SHIFT          (9U)
/*! WKT - Enables clock for self-wake-up timer.
 *  0b0..disable
 *  0b1..enable
 */
#define SYSCON_SYSAHBCLKCTRL0_WKT(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSAHBCLKCTRL0_WKT_SHIFT)) & SYSCON_SYSAHBCLKCTRL0_WKT_MASK)
#define SYSCON_SYSAHBCLKCTRL0_MRT_MASK           (0x400U)
#define SYSCON_SYSAHBCLKCTRL0_MRT_SHIFT          (10U)
/*! MRT - Enables clock for multi-rate timer.
 *  0b0..disable
 *  0b1..enable
 */
#define SYSCON_SYSAHBCLKCTRL0_MRT(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSAHBCLKCTRL0_MRT_SHIFT)) & SYSCON_SYSAHBCLKCTRL0_MRT_MASK)
#define SYSCON_SYSAHBCLKCTRL0_SPI0_MASK          (0x800U)
#define SYSCON_SYSAHBCLKCTRL0_SPI0_SHIFT         (11U)
/*! SPI0 - Enables clock for SPI0.
 *  0b0..disable
 *  0b1..enable
 */
#define SYSCON_SYSAHBCLKCTRL0_SPI0(x)            (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSAHBCLKCTRL0_SPI0_SHIFT)) & SYSCON_SYSAHBCLKCTRL0_SPI0_MASK)
#define SYSCON_SYSAHBCLKCTRL0_SPI1_MASK          (0x1000U)
#define SYSCON_SYSAHBCLKCTRL0_SPI1_SHIFT         (12U)
/*! SPI1 - Enables clock for SPI1.
 *  0b0..disable
 *  0b1..enable
 */
#define SYSCON_SYSAHBCLKCTRL0_SPI1(x)            (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSAHBCLKCTRL0_SPI1_SHIFT)) & SYSCON_SYSAHBCLKCTRL0_SPI1_MASK)
#define SYSCON_SYSAHBCLKCTRL0_CRC_MASK           (0x2000U)
#define SYSCON_SYSAHBCLKCTRL0_CRC_SHIFT          (13U)
/*! CRC - Enables clock for CRC.
 *  0b0..disable
 *  0b1..enable
 */
#define SYSCON_SYSAHBCLKCTRL0_CRC(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSAHBCLKCTRL0_CRC_SHIFT)) & SYSCON_SYSAHBCLKCTRL0_CRC_MASK)
#define SYSCON_SYSAHBCLKCTRL0_UART0_MASK         (0x4000U)
#define SYSCON_SYSAHBCLKCTRL0_UART0_SHIFT        (14U)
/*! UART0 - Enables clock for UART0.
 *  0b0..disable
 *  0b1..enable
 */
#define SYSCON_SYSAHBCLKCTRL0_UART0(x)           (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSAHBCLKCTRL0_UART0_SHIFT)) & SYSCON_SYSAHBCLKCTRL0_UART0_MASK)
#define SYSCON_SYSAHBCLKCTRL0_UART1_MASK         (0x8000U)
#define SYSCON_SYSAHBCLKCTRL0_UART1_SHIFT        (15U)
/*! UART1 - Enables clock for UART1.
 *  0b0..disable
 *  0b1..enable
 */
#define SYSCON_SYSAHBCLKCTRL0_UART1(x)           (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSAHBCLKCTRL0_UART1_SHIFT)) & SYSCON_SYSAHBCLKCTRL0_UART1_MASK)
#define SYSCON_SYSAHBCLKCTRL0_UART2_MASK         (0x10000U)
#define SYSCON_SYSAHBCLKCTRL0_UART2_SHIFT        (16U)
/*! UART2 - Enables clock for UART2.
 *  0b0..disable
 *  0b1..enable
 */
#define SYSCON_SYSAHBCLKCTRL0_UART2(x)           (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSAHBCLKCTRL0_UART2_SHIFT)) & SYSCON_SYSAHBCLKCTRL0_UART2_MASK)
#define SYSCON_SYSAHBCLKCTRL0_WWDT_MASK          (0x20000U)
#define SYSCON_SYSAHBCLKCTRL0_WWDT_SHIFT         (17U)
/*! WWDT - Enables clock for WWDT.
 *  0b0..disable
 *  0b1..enable
 */
#define SYSCON_SYSAHBCLKCTRL0_WWDT(x)            (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSAHBCLKCTRL0_WWDT_SHIFT)) & SYSCON_SYSAHBCLKCTRL0_WWDT_MASK)
#define SYSCON_SYSAHBCLKCTRL0_IOCON_MASK         (0x40000U)
#define SYSCON_SYSAHBCLKCTRL0_IOCON_SHIFT        (18U)
/*! IOCON - Enables clock for IOCON.
 *  0b0..disable
 *  0b1..enable
 */
#define SYSCON_SYSAHBCLKCTRL0_IOCON(x)           (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSAHBCLKCTRL0_IOCON_SHIFT)) & SYSCON_SYSAHBCLKCTRL0_IOCON_MASK)
#define SYSCON_SYSAHBCLKCTRL0_ACMP_MASK          (0x80000U)
#define SYSCON_SYSAHBCLKCTRL0_ACMP_SHIFT         (19U)
/*! ACMP - Enables clock for analog comparator.
 *  0b0..disable
 *  0b1..enable
 */
#define SYSCON_SYSAHBCLKCTRL0_ACMP(x)            (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSAHBCLKCTRL0_ACMP_SHIFT)) & SYSCON_SYSAHBCLKCTRL0_ACMP_MASK)
#define SYSCON_SYSAHBCLKCTRL0_GPIO1_MASK         (0x100000U)
#define SYSCON_SYSAHBCLKCTRL0_GPIO1_SHIFT        (20U)
/*! GPIO1 - Enables clock for GPIO1 port registers.
 *  0b0..disable
 *  0b1..enable
 */
#define SYSCON_SYSAHBCLKCTRL0_GPIO1(x)           (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSAHBCLKCTRL0_GPIO1_SHIFT)) & SYSCON_SYSAHBCLKCTRL0_GPIO1_MASK)
#define SYSCON_SYSAHBCLKCTRL0_I2C1_MASK          (0x200000U)
#define SYSCON_SYSAHBCLKCTRL0_I2C1_SHIFT         (21U)
/*! I2C1 - Enables clock for I2C1.
 *  0b0..disable
 *  0b1..enable
 */
#define SYSCON_SYSAHBCLKCTRL0_I2C1(x)            (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSAHBCLKCTRL0_I2C1_SHIFT)) & SYSCON_SYSAHBCLKCTRL0_I2C1_MASK)
#define SYSCON_SYSAHBCLKCTRL0_I2C2_MASK          (0x400000U)
#define SYSCON_SYSAHBCLKCTRL0_I2C2_SHIFT         (22U)
/*! I2C2 - Enables clock for I2C2.
 *  0b0..disable
 *  0b1..enable
 */
#define SYSCON_SYSAHBCLKCTRL0_I2C2(x)            (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSAHBCLKCTRL0_I2C2_SHIFT)) & SYSCON_SYSAHBCLKCTRL0_I2C2_MASK)
#define SYSCON_SYSAHBCLKCTRL0_I2C3_MASK          (0x800000U)
#define SYSCON_SYSAHBCLKCTRL0_I2C3_SHIFT         (23U)
/*! I2C3 - Enables clock for I2C3.
 *  0b0..disable
 *  0b1..enable
 */
#define SYSCON_SYSAHBCLKCTRL0_I2C3(x)            (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSAHBCLKCTRL0_I2C3_SHIFT)) & SYSCON_SYSAHBCLKCTRL0_I2C3_MASK)
#define SYSCON_SYSAHBCLKCTRL0_ADC_MASK           (0x1000000U)
#define SYSCON_SYSAHBCLKCTRL0_ADC_SHIFT          (24U)
/*! ADC - Enables clock for ADC.
 *  0b0..disable
 *  0b1..enable
 */
#define SYSCON_SYSAHBCLKCTRL0_ADC(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSAHBCLKCTRL0_ADC_SHIFT)) & SYSCON_SYSAHBCLKCTRL0_ADC_MASK)
#define SYSCON_SYSAHBCLKCTRL0_CTIMER_MASK        (0x2000000U)
#define SYSCON_SYSAHBCLKCTRL0_CTIMER_SHIFT       (25U)
/*! CTIMER - Enables clock for CTIMER.
 *  0b0..disable
 *  0b1..enable
 */
#define SYSCON_SYSAHBCLKCTRL0_CTIMER(x)          (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSAHBCLKCTRL0_CTIMER_SHIFT)) & SYSCON_SYSAHBCLKCTRL0_CTIMER_MASK)
#define SYSCON_SYSAHBCLKCTRL0_MTB_MASK           (0x4000000U)
#define SYSCON_SYSAHBCLKCTRL0_MTB_SHIFT          (26U)
/*! MTB - Enables clock to micro-trace buffer control registers. Turn on this clock when using the
 *    micro-trace buffer for debug purposes.
 *  0b0..disable
 *  0b1..enable
 */
#define SYSCON_SYSAHBCLKCTRL0_MTB(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSAHBCLKCTRL0_MTB_SHIFT)) & SYSCON_SYSAHBCLKCTRL0_MTB_MASK)
#define SYSCON_SYSAHBCLKCTRL0_DAC0_MASK          (0x8000000U)
#define SYSCON_SYSAHBCLKCTRL0_DAC0_SHIFT         (27U)
/*! DAC0 - Enables clock for DAC0.
 *  0b0..disable
 *  0b1..enable
 */
#define SYSCON_SYSAHBCLKCTRL0_DAC0(x)            (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSAHBCLKCTRL0_DAC0_SHIFT)) & SYSCON_SYSAHBCLKCTRL0_DAC0_MASK)
#define SYSCON_SYSAHBCLKCTRL0_GPIO_INT_MASK      (0x10000000U)
#define SYSCON_SYSAHBCLKCTRL0_GPIO_INT_SHIFT     (28U)
/*! GPIO_INT - Enable clock for GPIO pin interrupt registers
 *  0b0..disable
 *  0b1..enable
 */
#define SYSCON_SYSAHBCLKCTRL0_GPIO_INT(x)        (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSAHBCLKCTRL0_GPIO_INT_SHIFT)) & SYSCON_SYSAHBCLKCTRL0_GPIO_INT_MASK)
#define SYSCON_SYSAHBCLKCTRL0_DMA_MASK           (0x20000000U)
#define SYSCON_SYSAHBCLKCTRL0_DMA_SHIFT          (29U)
/*! DMA - Enables clock for DMA.
 *  0b0..disable
 *  0b1..enable
 */
#define SYSCON_SYSAHBCLKCTRL0_DMA(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSAHBCLKCTRL0_DMA_SHIFT)) & SYSCON_SYSAHBCLKCTRL0_DMA_MASK)
#define SYSCON_SYSAHBCLKCTRL0_UART3_MASK         (0x40000000U)
#define SYSCON_SYSAHBCLKCTRL0_UART3_SHIFT        (30U)
/*! UART3 - Enables clock for UART3.
 *  0b0..disable
 *  0b1..enable
 */
#define SYSCON_SYSAHBCLKCTRL0_UART3(x)           (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSAHBCLKCTRL0_UART3_SHIFT)) & SYSCON_SYSAHBCLKCTRL0_UART3_MASK)
#define SYSCON_SYSAHBCLKCTRL0_UART4_MASK         (0x80000000U)
#define SYSCON_SYSAHBCLKCTRL0_UART4_SHIFT        (31U)
/*! UART4 - Enables clock for UART4.
 *  0b0..disable
 *  0b1..enable
 */
#define SYSCON_SYSAHBCLKCTRL0_UART4(x)           (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSAHBCLKCTRL0_UART4_SHIFT)) & SYSCON_SYSAHBCLKCTRL0_UART4_MASK)
/*! @} */

/*! @name SYSAHBCLKCTRL1 - System clock group 1 control register */
/*! @{ */
#define SYSCON_SYSAHBCLKCTRL1_CAPT_MASK          (0x1U)
#define SYSCON_SYSAHBCLKCTRL1_CAPT_SHIFT         (0U)
/*! CAPT - Enables clock for CAPT.
 *  0b0..disable
 *  0b1..enable
 */
#define SYSCON_SYSAHBCLKCTRL1_CAPT(x)            (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSAHBCLKCTRL1_CAPT_SHIFT)) & SYSCON_SYSAHBCLKCTRL1_CAPT_MASK)
#define SYSCON_SYSAHBCLKCTRL1_DAC1_MASK          (0x2U)
#define SYSCON_SYSAHBCLKCTRL1_DAC1_SHIFT         (1U)
/*! DAC1 - Enables clock for DAC1.
 *  0b0..disable
 *  0b1..enable
 */
#define SYSCON_SYSAHBCLKCTRL1_DAC1(x)            (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSAHBCLKCTRL1_DAC1_SHIFT)) & SYSCON_SYSAHBCLKCTRL1_DAC1_MASK)
/*! @} */

/*! @name PRESETCTRL0 - Peripheral reset group 0 control register */
/*! @{ */
#define SYSCON_PRESETCTRL0_FLASH_RST_N_MASK      (0x10U)
#define SYSCON_PRESETCTRL0_FLASH_RST_N_SHIFT     (4U)
/*! FLASH_RST_N - flash controller reset control
 *  0b0..Assert the flash controller reset.
 *  0b1..Clear the flash controller reset.
 */
#define SYSCON_PRESETCTRL0_FLASH_RST_N(x)        (((uint32_t)(((uint32_t)(x)) << SYSCON_PRESETCTRL0_FLASH_RST_N_SHIFT)) & SYSCON_PRESETCTRL0_FLASH_RST_N_MASK)
#define SYSCON_PRESETCTRL0_I2C0_RST_N_MASK       (0x20U)
#define SYSCON_PRESETCTRL0_I2C0_RST_N_SHIFT      (5U)
/*! I2C0_RST_N - I2C0 reset control
 *  0b0..Assert the I2C0 reset.
 *  0b1..Clear the I2C0 reset.
 */
#define SYSCON_PRESETCTRL0_I2C0_RST_N(x)         (((uint32_t)(((uint32_t)(x)) << SYSCON_PRESETCTRL0_I2C0_RST_N_SHIFT)) & SYSCON_PRESETCTRL0_I2C0_RST_N_MASK)
#define SYSCON_PRESETCTRL0_GPIO0_RST_N_MASK      (0x40U)
#define SYSCON_PRESETCTRL0_GPIO0_RST_N_SHIFT     (6U)
/*! GPIO0_RST_N - GPIO0 reset control
 *  0b0..Assert the GPIO0 reset.
 *  0b1..Clear the GPIO0 reset.
 */
#define SYSCON_PRESETCTRL0_GPIO0_RST_N(x)        (((uint32_t)(((uint32_t)(x)) << SYSCON_PRESETCTRL0_GPIO0_RST_N_SHIFT)) & SYSCON_PRESETCTRL0_GPIO0_RST_N_MASK)
#define SYSCON_PRESETCTRL0_SWM_RST_N_MASK        (0x80U)
#define SYSCON_PRESETCTRL0_SWM_RST_N_SHIFT       (7U)
/*! SWM_RST_N - SWM reset control
 *  0b0..Assert the SWM reset.
 *  0b1..Clear the SWM reset.
 */
#define SYSCON_PRESETCTRL0_SWM_RST_N(x)          (((uint32_t)(((uint32_t)(x)) << SYSCON_PRESETCTRL0_SWM_RST_N_SHIFT)) & SYSCON_PRESETCTRL0_SWM_RST_N_MASK)
#define SYSCON_PRESETCTRL0_SCT_RST_N_MASK        (0x100U)
#define SYSCON_PRESETCTRL0_SCT_RST_N_SHIFT       (8U)
/*! SCT_RST_N - SCT reset control
 *  0b0..Assert the SCT reset.
 *  0b1..Clear the SCT reset.
 */
#define SYSCON_PRESETCTRL0_SCT_RST_N(x)          (((uint32_t)(((uint32_t)(x)) << SYSCON_PRESETCTRL0_SCT_RST_N_SHIFT)) & SYSCON_PRESETCTRL0_SCT_RST_N_MASK)
#define SYSCON_PRESETCTRL0_WKT_RST_N_MASK        (0x200U)
#define SYSCON_PRESETCTRL0_WKT_RST_N_SHIFT       (9U)
/*! WKT_RST_N - Self-wake-up timer (WKT) reset control
 *  0b0..Assert the WKT reset.
 *  0b1..Clear the WKT reset.
 */
#define SYSCON_PRESETCTRL0_WKT_RST_N(x)          (((uint32_t)(((uint32_t)(x)) << SYSCON_PRESETCTRL0_WKT_RST_N_SHIFT)) & SYSCON_PRESETCTRL0_WKT_RST_N_MASK)
#define SYSCON_PRESETCTRL0_MRT_RST_N_MASK        (0x400U)
#define SYSCON_PRESETCTRL0_MRT_RST_N_SHIFT       (10U)
/*! MRT_RST_N - Multi-rate timer (MRT) reset control
 *  0b0..Assert the MRT reset.
 *  0b1..Clear the MRT reset.
 */
#define SYSCON_PRESETCTRL0_MRT_RST_N(x)          (((uint32_t)(((uint32_t)(x)) << SYSCON_PRESETCTRL0_MRT_RST_N_SHIFT)) & SYSCON_PRESETCTRL0_MRT_RST_N_MASK)
#define SYSCON_PRESETCTRL0_SPI0_RST_N_MASK       (0x800U)
#define SYSCON_PRESETCTRL0_SPI0_RST_N_SHIFT      (11U)
/*! SPI0_RST_N - SPI0 reset control
 *  0b0..Assert the SPI0 reset.
 *  0b1..Clear the SPI0 reset.
 */
#define SYSCON_PRESETCTRL0_SPI0_RST_N(x)         (((uint32_t)(((uint32_t)(x)) << SYSCON_PRESETCTRL0_SPI0_RST_N_SHIFT)) & SYSCON_PRESETCTRL0_SPI0_RST_N_MASK)
#define SYSCON_PRESETCTRL0_SPI1_RST_N_MASK       (0x1000U)
#define SYSCON_PRESETCTRL0_SPI1_RST_N_SHIFT      (12U)
/*! SPI1_RST_N - SPI1 reset control
 *  0b0..Assert the SPI1 reset.
 *  0b1..Clear the SPI1 reset.
 */
#define SYSCON_PRESETCTRL0_SPI1_RST_N(x)         (((uint32_t)(((uint32_t)(x)) << SYSCON_PRESETCTRL0_SPI1_RST_N_SHIFT)) & SYSCON_PRESETCTRL0_SPI1_RST_N_MASK)
#define SYSCON_PRESETCTRL0_CRC_RST_N_MASK        (0x2000U)
#define SYSCON_PRESETCTRL0_CRC_RST_N_SHIFT       (13U)
/*! CRC_RST_N - CRC engine reset control
 *  0b0..Assert the CRC reset.
 *  0b1..Clear the CRC reset.
 */
#define SYSCON_PRESETCTRL0_CRC_RST_N(x)          (((uint32_t)(((uint32_t)(x)) << SYSCON_PRESETCTRL0_CRC_RST_N_SHIFT)) & SYSCON_PRESETCTRL0_CRC_RST_N_MASK)
#define SYSCON_PRESETCTRL0_UART0_RST_N_MASK      (0x4000U)
#define SYSCON_PRESETCTRL0_UART0_RST_N_SHIFT     (14U)
/*! UART0_RST_N - UART0 reset control
 *  0b0..Assert the UART0 reset.
 *  0b1..Clear the UART0 reset.
 */
#define SYSCON_PRESETCTRL0_UART0_RST_N(x)        (((uint32_t)(((uint32_t)(x)) << SYSCON_PRESETCTRL0_UART0_RST_N_SHIFT)) & SYSCON_PRESETCTRL0_UART0_RST_N_MASK)
#define SYSCON_PRESETCTRL0_UART1_RST_N_MASK      (0x8000U)
#define SYSCON_PRESETCTRL0_UART1_RST_N_SHIFT     (15U)
/*! UART1_RST_N - UART1 reset control
 *  0b0..Assert the UART1 reset.
 *  0b1..Clear the UART1 reset.
 */
#define SYSCON_PRESETCTRL0_UART1_RST_N(x)        (((uint32_t)(((uint32_t)(x)) << SYSCON_PRESETCTRL0_UART1_RST_N_SHIFT)) & SYSCON_PRESETCTRL0_UART1_RST_N_MASK)
#define SYSCON_PRESETCTRL0_UART2_RST_N_MASK      (0x10000U)
#define SYSCON_PRESETCTRL0_UART2_RST_N_SHIFT     (16U)
/*! UART2_RST_N - UART2 reset control
 *  0b0..Assert the UART2 reset.
 *  0b1..Clear the UART2 reset.
 */
#define SYSCON_PRESETCTRL0_UART2_RST_N(x)        (((uint32_t)(((uint32_t)(x)) << SYSCON_PRESETCTRL0_UART2_RST_N_SHIFT)) & SYSCON_PRESETCTRL0_UART2_RST_N_MASK)
#define SYSCON_PRESETCTRL0_IOCON_RST_N_MASK      (0x40000U)
#define SYSCON_PRESETCTRL0_IOCON_RST_N_SHIFT     (18U)
/*! IOCON_RST_N - IOCON reset control
 *  0b0..Assert the IOCON reset.
 *  0b1..Clear the IOCON reset.
 */
#define SYSCON_PRESETCTRL0_IOCON_RST_N(x)        (((uint32_t)(((uint32_t)(x)) << SYSCON_PRESETCTRL0_IOCON_RST_N_SHIFT)) & SYSCON_PRESETCTRL0_IOCON_RST_N_MASK)
#define SYSCON_PRESETCTRL0_ACMP_RST_N_MASK       (0x80000U)
#define SYSCON_PRESETCTRL0_ACMP_RST_N_SHIFT      (19U)
/*! ACMP_RST_N - Analog comparator reset control
 *  0b0..Assert the analog comparator reset.
 *  0b1..Clear the analog comparator reset.
 */
#define SYSCON_PRESETCTRL0_ACMP_RST_N(x)         (((uint32_t)(((uint32_t)(x)) << SYSCON_PRESETCTRL0_ACMP_RST_N_SHIFT)) & SYSCON_PRESETCTRL0_ACMP_RST_N_MASK)
#define SYSCON_PRESETCTRL0_GPIO1_RST_N_MASK      (0x100000U)
#define SYSCON_PRESETCTRL0_GPIO1_RST_N_SHIFT     (20U)
/*! GPIO1_RST_N - GPIO1 reset control
 *  0b0..Assert the GPIO1 reset.
 *  0b1..Clear the GPIO1 reset.
 */
#define SYSCON_PRESETCTRL0_GPIO1_RST_N(x)        (((uint32_t)(((uint32_t)(x)) << SYSCON_PRESETCTRL0_GPIO1_RST_N_SHIFT)) & SYSCON_PRESETCTRL0_GPIO1_RST_N_MASK)
#define SYSCON_PRESETCTRL0_I2C1_RST_N_MASK       (0x200000U)
#define SYSCON_PRESETCTRL0_I2C1_RST_N_SHIFT      (21U)
/*! I2C1_RST_N - I2C1 reset control
 *  0b0..Assert the I2C1 reset.
 *  0b1..Clear the I2C1 reset.
 */
#define SYSCON_PRESETCTRL0_I2C1_RST_N(x)         (((uint32_t)(((uint32_t)(x)) << SYSCON_PRESETCTRL0_I2C1_RST_N_SHIFT)) & SYSCON_PRESETCTRL0_I2C1_RST_N_MASK)
#define SYSCON_PRESETCTRL0_I2C2_RST_N_MASK       (0x400000U)
#define SYSCON_PRESETCTRL0_I2C2_RST_N_SHIFT      (22U)
/*! I2C2_RST_N - I2C2 reset control
 *  0b0..Assert the I2C2 reset.
 *  0b1..Clear the I2C2 reset.
 */
#define SYSCON_PRESETCTRL0_I2C2_RST_N(x)         (((uint32_t)(((uint32_t)(x)) << SYSCON_PRESETCTRL0_I2C2_RST_N_SHIFT)) & SYSCON_PRESETCTRL0_I2C2_RST_N_MASK)
#define SYSCON_PRESETCTRL0_I2C3_RST_N_MASK       (0x800000U)
#define SYSCON_PRESETCTRL0_I2C3_RST_N_SHIFT      (23U)
/*! I2C3_RST_N - I2C3 reset control
 *  0b0..Assert the I2C3 reset.
 *  0b1..Clear the I2C3 reset.
 */
#define SYSCON_PRESETCTRL0_I2C3_RST_N(x)         (((uint32_t)(((uint32_t)(x)) << SYSCON_PRESETCTRL0_I2C3_RST_N_SHIFT)) & SYSCON_PRESETCTRL0_I2C3_RST_N_MASK)
#define SYSCON_PRESETCTRL0_ADC_RST_N_MASK        (0x1000000U)
#define SYSCON_PRESETCTRL0_ADC_RST_N_SHIFT       (24U)
/*! ADC_RST_N - ADC reset control
 *  0b0..Assert the ADC reset.
 *  0b1..Clear the ADC reset.
 */
#define SYSCON_PRESETCTRL0_ADC_RST_N(x)          (((uint32_t)(((uint32_t)(x)) << SYSCON_PRESETCTRL0_ADC_RST_N_SHIFT)) & SYSCON_PRESETCTRL0_ADC_RST_N_MASK)
#define SYSCON_PRESETCTRL0_CTIMER_RST_N_MASK     (0x2000000U)
#define SYSCON_PRESETCTRL0_CTIMER_RST_N_SHIFT    (25U)
/*! CTIMER_RST_N - CTIMER reset control
 *  0b0..Assert the CTIMER reset.
 *  0b1..Clear the CTIMER reset.
 */
#define SYSCON_PRESETCTRL0_CTIMER_RST_N(x)       (((uint32_t)(((uint32_t)(x)) << SYSCON_PRESETCTRL0_CTIMER_RST_N_SHIFT)) & SYSCON_PRESETCTRL0_CTIMER_RST_N_MASK)
#define SYSCON_PRESETCTRL0_DAC0_RST_N_MASK       (0x8000000U)
#define SYSCON_PRESETCTRL0_DAC0_RST_N_SHIFT      (27U)
/*! DAC0_RST_N - DAC0 reset control
 *  0b0..Assert the DAC0 reset.
 *  0b1..Clear the DAC0 reset.
 */
#define SYSCON_PRESETCTRL0_DAC0_RST_N(x)         (((uint32_t)(((uint32_t)(x)) << SYSCON_PRESETCTRL0_DAC0_RST_N_SHIFT)) & SYSCON_PRESETCTRL0_DAC0_RST_N_MASK)
#define SYSCON_PRESETCTRL0_GPIOINT_RST_N_MASK    (0x10000000U)
#define SYSCON_PRESETCTRL0_GPIOINT_RST_N_SHIFT   (28U)
/*! GPIOINT_RST_N - GPIOINT reset control
 *  0b0..Assert the GPIOINT reset.
 *  0b1..Clear the GPIOINT reset.
 */
#define SYSCON_PRESETCTRL0_GPIOINT_RST_N(x)      (((uint32_t)(((uint32_t)(x)) << SYSCON_PRESETCTRL0_GPIOINT_RST_N_SHIFT)) & SYSCON_PRESETCTRL0_GPIOINT_RST_N_MASK)
#define SYSCON_PRESETCTRL0_DMA_RST_N_MASK        (0x20000000U)
#define SYSCON_PRESETCTRL0_DMA_RST_N_SHIFT       (29U)
/*! DMA_RST_N - DMA reset control
 *  0b0..Assert the DMA reset.
 *  0b1..Clear the DMA reset.
 */
#define SYSCON_PRESETCTRL0_DMA_RST_N(x)          (((uint32_t)(((uint32_t)(x)) << SYSCON_PRESETCTRL0_DMA_RST_N_SHIFT)) & SYSCON_PRESETCTRL0_DMA_RST_N_MASK)
#define SYSCON_PRESETCTRL0_UART3_RST_N_MASK      (0x40000000U)
#define SYSCON_PRESETCTRL0_UART3_RST_N_SHIFT     (30U)
/*! UART3_RST_N - UART3 reset control
 *  0b0..Assert the UART3 reset.
 *  0b1..Clear the UART3 reset.
 */
#define SYSCON_PRESETCTRL0_UART3_RST_N(x)        (((uint32_t)(((uint32_t)(x)) << SYSCON_PRESETCTRL0_UART3_RST_N_SHIFT)) & SYSCON_PRESETCTRL0_UART3_RST_N_MASK)
#define SYSCON_PRESETCTRL0_UART4_RST_N_MASK      (0x80000000U)
#define SYSCON_PRESETCTRL0_UART4_RST_N_SHIFT     (31U)
/*! UART4_RST_N - UART4 reset control
 *  0b0..Assert the UART4 reset.
 *  0b1..Clear the UART4 reset.
 */
#define SYSCON_PRESETCTRL0_UART4_RST_N(x)        (((uint32_t)(((uint32_t)(x)) << SYSCON_PRESETCTRL0_UART4_RST_N_SHIFT)) & SYSCON_PRESETCTRL0_UART4_RST_N_MASK)
/*! @} */

/*! @name PRESETCTRL1 - Peripheral reset group 1 control register */
/*! @{ */
#define SYSCON_PRESETCTRL1_CAPT_RST_N_MASK       (0x1U)
#define SYSCON_PRESETCTRL1_CAPT_RST_N_SHIFT      (0U)
/*! CAPT_RST_N - Capacitive touch reset control
 *  0b0..Assert the capacitive touch reset.
 *  0b1..Clear the capacitive touch reset.
 */
#define SYSCON_PRESETCTRL1_CAPT_RST_N(x)         (((uint32_t)(((uint32_t)(x)) << SYSCON_PRESETCTRL1_CAPT_RST_N_SHIFT)) & SYSCON_PRESETCTRL1_CAPT_RST_N_MASK)
#define SYSCON_PRESETCTRL1_DAC1_RST_N_MASK       (0x2U)
#define SYSCON_PRESETCTRL1_DAC1_RST_N_SHIFT      (1U)
/*! DAC1_RST_N - DAC1 reset control
 *  0b0..Assert the DAC1 reset.
 *  0b1..Clear the DAC1 reset.
 */
#define SYSCON_PRESETCTRL1_DAC1_RST_N(x)         (((uint32_t)(((uint32_t)(x)) << SYSCON_PRESETCTRL1_DAC1_RST_N_SHIFT)) & SYSCON_PRESETCTRL1_DAC1_RST_N_MASK)
#define SYSCON_PRESETCTRL1_FRG0_RST_N_MASK       (0x8U)
#define SYSCON_PRESETCTRL1_FRG0_RST_N_SHIFT      (3U)
/*! FRG0_RST_N - Fractional baud rate generator 0 reset control
 *  0b0..Assert the FRG0 reset.
 *  0b1..Clear the FRG0 reset.
 */
#define SYSCON_PRESETCTRL1_FRG0_RST_N(x)         (((uint32_t)(((uint32_t)(x)) << SYSCON_PRESETCTRL1_FRG0_RST_N_SHIFT)) & SYSCON_PRESETCTRL1_FRG0_RST_N_MASK)
#define SYSCON_PRESETCTRL1_FRG1_RST_N_MASK       (0x10U)
#define SYSCON_PRESETCTRL1_FRG1_RST_N_SHIFT      (4U)
/*! FRG1_RST_N - Fractional baud rate generator 1 reset control
 *  0b0..Assert the FRG1 reset.
 *  0b1..Clear the FRG1 reset.
 */
#define SYSCON_PRESETCTRL1_FRG1_RST_N(x)         (((uint32_t)(((uint32_t)(x)) << SYSCON_PRESETCTRL1_FRG1_RST_N_SHIFT)) & SYSCON_PRESETCTRL1_FRG1_RST_N_MASK)
/*! @} */

/*! @name FCLKSEL - peripheral clock source select register. FCLK0SEL~FCLK4SEL are for UART0~UART4 clock source select register. FCLK5SEL~FCLK8SEL are for I2C0~I2C3 clock source select register. FCLK9SEL~FCLK10SEL are for SPI0~SPI1 clock source select register. */
/*! @{ */
#define SYSCON_FCLKSEL_SEL_MASK                  (0x7U)
#define SYSCON_FCLKSEL_SEL_SHIFT                 (0U)
/*! SEL - Peripheral clock source
 *  0b000..FRO
 *  0b001..main clock
 *  0b010..Frg0clk
 *  0b011..Frg1clk
 *  0b100..FRO_DIV
 *  0b101..none
 *  0b110..none
 *  0b111..none
 */
#define SYSCON_FCLKSEL_SEL(x)                    (((uint32_t)(((uint32_t)(x)) << SYSCON_FCLKSEL_SEL_SHIFT)) & SYSCON_FCLKSEL_SEL_MASK)
/*! @} */

/* The count of SYSCON_FCLKSEL */
#define SYSCON_FCLKSEL_COUNT                     (11U)

/*! @name FRG_FRGDIV - fractional generator N divider value register */
/*! @{ */
#define SYSCON_FRG_FRGDIV_DIV_MASK               (0xFFU)
#define SYSCON_FRG_FRGDIV_DIV_SHIFT              (0U)
/*! DIV - Denominator of the fractional divider. DIV is equal to the programmed value +1. Always set
 *    to 0xFF to use with the fractional baud rate generator.
 */
#define SYSCON_FRG_FRGDIV_DIV(x)                 (((uint32_t)(((uint32_t)(x)) << SYSCON_FRG_FRGDIV_DIV_SHIFT)) & SYSCON_FRG_FRGDIV_DIV_MASK)
/*! @} */

/* The count of SYSCON_FRG_FRGDIV */
#define SYSCON_FRG_FRGDIV_COUNT                  (2U)

/*! @name FRG_FRGMULT - fractional generator N multiplier value register */
/*! @{ */
#define SYSCON_FRG_FRGMULT_MULT_MASK             (0xFFU)
#define SYSCON_FRG_FRGMULT_MULT_SHIFT            (0U)
/*! MULT - Numerator of the fractional divider. MULT is equal to the programmed value.
 */
#define SYSCON_FRG_FRGMULT_MULT(x)               (((uint32_t)(((uint32_t)(x)) << SYSCON_FRG_FRGMULT_MULT_SHIFT)) & SYSCON_FRG_FRGMULT_MULT_MASK)
/*! @} */

/* The count of SYSCON_FRG_FRGMULT */
#define SYSCON_FRG_FRGMULT_COUNT                 (2U)

/*! @name FRG_FRGCLKSEL - FRG N clock source select register */
/*! @{ */
#define SYSCON_FRG_FRGCLKSEL_SEL_MASK            (0x3U)
#define SYSCON_FRG_FRGCLKSEL_SEL_SHIFT           (0U)
/*! SEL - Clock source for frgN_src clock
 *  0b00..FRO
 *  0b01..main clock
 *  0b10..sys pll
 *  0b11..None
 */
#define SYSCON_FRG_FRGCLKSEL_SEL(x)              (((uint32_t)(((uint32_t)(x)) << SYSCON_FRG_FRGCLKSEL_SEL_SHIFT)) & SYSCON_FRG_FRGCLKSEL_SEL_MASK)
/*! @} */

/* The count of SYSCON_FRG_FRGCLKSEL */
#define SYSCON_FRG_FRGCLKSEL_COUNT               (2U)

/*! @name CLKOUTSEL - CLKOUT clock source select register */
/*! @{ */
#define SYSCON_CLKOUTSEL_SEL_MASK                (0x7U)
#define SYSCON_CLKOUTSEL_SEL_SHIFT               (0U)
/*! SEL - CLKOUT clock source
 *  0b000..FRO
 *  0b001..main clock
 *  0b010..sys pll
 *  0b011..external clock
 *  0b100..Watchdog oscillator
 *  0b101..None
 *  0b110..None
 *  0b111..None
 */
#define SYSCON_CLKOUTSEL_SEL(x)                  (((uint32_t)(((uint32_t)(x)) << SYSCON_CLKOUTSEL_SEL_SHIFT)) & SYSCON_CLKOUTSEL_SEL_MASK)
/*! @} */

/*! @name CLKOUTDIV - CLKOUT clock divider registers */
/*! @{ */
#define SYSCON_CLKOUTDIV_DIV_MASK                (0xFFU)
#define SYSCON_CLKOUTDIV_DIV_SHIFT               (0U)
/*! DIV - CLKOUT clock divider values 0: Disable CLKOUT clock divider. 1: Divide by 1. to 255: Divide by 255.
 */
#define SYSCON_CLKOUTDIV_DIV(x)                  (((uint32_t)(((uint32_t)(x)) << SYSCON_CLKOUTDIV_DIV_SHIFT)) & SYSCON_CLKOUTDIV_DIV_MASK)
/*! @} */

/*! @name EXTTRACECMD - External trace buffer command register */
/*! @{ */
#define SYSCON_EXTTRACECMD_START_MASK            (0x1U)
#define SYSCON_EXTTRACECMD_START_SHIFT           (0U)
/*! START - Trace start command. Writing a one to this bit sets the TSTART signal to the MTB to HIGH
 *    and starts tracing if the TSTARTEN bit in the MTB master register is set to one as well.
 */
#define SYSCON_EXTTRACECMD_START(x)              (((uint32_t)(((uint32_t)(x)) << SYSCON_EXTTRACECMD_START_SHIFT)) & SYSCON_EXTTRACECMD_START_MASK)
#define SYSCON_EXTTRACECMD_STOP_MASK             (0x2U)
#define SYSCON_EXTTRACECMD_STOP_SHIFT            (1U)
/*! STOP - Trace stop command. Writing a one to this bit sets the TSTOP signal in the MTB to HIGH
 *    and stops tracing if the TSTOPEN bit in the MTB master register is set to one as well.
 */
#define SYSCON_EXTTRACECMD_STOP(x)               (((uint32_t)(((uint32_t)(x)) << SYSCON_EXTTRACECMD_STOP_SHIFT)) & SYSCON_EXTTRACECMD_STOP_MASK)
/*! @} */

/*! @name PIOPORCAP - POR captured PIO N status register(PIO0 has 32 PIOs, PIO1 has 22 PIOs) */
/*! @{ */
#define SYSCON_PIOPORCAP_PIOSTAT_MASK            (0xFFFFFFFFU)
#define SYSCON_PIOPORCAP_PIOSTAT_SHIFT           (0U)
/*! PIOSTAT - State of PION_31 through PION_0 at power-on reset
 */
#define SYSCON_PIOPORCAP_PIOSTAT(x)              (((uint32_t)(((uint32_t)(x)) << SYSCON_PIOPORCAP_PIOSTAT_SHIFT)) & SYSCON_PIOPORCAP_PIOSTAT_MASK)
/*! @} */

/* The count of SYSCON_PIOPORCAP */
#define SYSCON_PIOPORCAP_COUNT                   (2U)

/*! @name IOCONCLKDIV6 - Peripheral clock 6 to the IOCON block for programmable glitch filter */
/*! @{ */
#define SYSCON_IOCONCLKDIV6_DIV_MASK             (0xFFU)
#define SYSCON_IOCONCLKDIV6_DIV_SHIFT            (0U)
/*! DIV - IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK. 1: Divide by 1. to 255: Divide by 255.
 */
#define SYSCON_IOCONCLKDIV6_DIV(x)               (((uint32_t)(((uint32_t)(x)) << SYSCON_IOCONCLKDIV6_DIV_SHIFT)) & SYSCON_IOCONCLKDIV6_DIV_MASK)
/*! @} */

/*! @name IOCONCLKDIV5 - Peripheral clock 6 to the IOCON block for programmable glitch filter */
/*! @{ */
#define SYSCON_IOCONCLKDIV5_DIV_MASK             (0xFFU)
#define SYSCON_IOCONCLKDIV5_DIV_SHIFT            (0U)
/*! DIV - IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK. 1: Divide by 1. to 255: Divide by 255.
 */
#define SYSCON_IOCONCLKDIV5_DIV(x)               (((uint32_t)(((uint32_t)(x)) << SYSCON_IOCONCLKDIV5_DIV_SHIFT)) & SYSCON_IOCONCLKDIV5_DIV_MASK)
/*! @} */

/*! @name IOCONCLKDIV4 - Peripheral clock 4 to the IOCON block for programmable glitch filter */
/*! @{ */
#define SYSCON_IOCONCLKDIV4_DIV_MASK             (0xFFU)
#define SYSCON_IOCONCLKDIV4_DIV_SHIFT            (0U)
/*! DIV - IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK. 1: Divide by 1. to 255: Divide by 255.
 */
#define SYSCON_IOCONCLKDIV4_DIV(x)               (((uint32_t)(((uint32_t)(x)) << SYSCON_IOCONCLKDIV4_DIV_SHIFT)) & SYSCON_IOCONCLKDIV4_DIV_MASK)
/*! @} */

/*! @name IOCONCLKDIV3 - Peripheral clock 3 to the IOCON block for programmable glitch filter */
/*! @{ */
#define SYSCON_IOCONCLKDIV3_DIV_MASK             (0xFFU)
#define SYSCON_IOCONCLKDIV3_DIV_SHIFT            (0U)
/*! DIV - IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK. 1: Divide by 1. to 255: Divide by 255.
 */
#define SYSCON_IOCONCLKDIV3_DIV(x)               (((uint32_t)(((uint32_t)(x)) << SYSCON_IOCONCLKDIV3_DIV_SHIFT)) & SYSCON_IOCONCLKDIV3_DIV_MASK)
/*! @} */

/*! @name IOCONCLKDIV2 - Peripheral clock 2 to the IOCON block for programmable glitch filter */
/*! @{ */
#define SYSCON_IOCONCLKDIV2_DIV_MASK             (0xFFU)
#define SYSCON_IOCONCLKDIV2_DIV_SHIFT            (0U)
/*! DIV - IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK. 1: Divide by 1. to 255: Divide by 255.
 */
#define SYSCON_IOCONCLKDIV2_DIV(x)               (((uint32_t)(((uint32_t)(x)) << SYSCON_IOCONCLKDIV2_DIV_SHIFT)) & SYSCON_IOCONCLKDIV2_DIV_MASK)
/*! @} */

/*! @name IOCONCLKDIV1 - Peripheral clock 1 to the IOCON block for programmable glitch filter */
/*! @{ */
#define SYSCON_IOCONCLKDIV1_DIV_MASK             (0xFFU)
#define SYSCON_IOCONCLKDIV1_DIV_SHIFT            (0U)
/*! DIV - IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK. 1: Divide by 1. to 255: Divide by 255.
 */
#define SYSCON_IOCONCLKDIV1_DIV(x)               (((uint32_t)(((uint32_t)(x)) << SYSCON_IOCONCLKDIV1_DIV_SHIFT)) & SYSCON_IOCONCLKDIV1_DIV_MASK)
/*! @} */

/*! @name IOCONCLKDIV0 - Peripheral clock 0 to the IOCON block for programmable glitch filter */
/*! @{ */
#define SYSCON_IOCONCLKDIV0_DIV_MASK             (0xFFU)
#define SYSCON_IOCONCLKDIV0_DIV_SHIFT            (0U)
/*! DIV - IOCON glitch filter clock divider values 0: Disable IOCONFILTR_PCLK. 1: Divide by 1. to 255: Divide by 255.
 */
#define SYSCON_IOCONCLKDIV0_DIV(x)               (((uint32_t)(((uint32_t)(x)) << SYSCON_IOCONCLKDIV0_DIV_SHIFT)) & SYSCON_IOCONCLKDIV0_DIV_MASK)
/*! @} */

/*! @name BODCTRL - BOD control register */
/*! @{ */
#define SYSCON_BODCTRL_BODRSTLEV_MASK            (0x3U)
#define SYSCON_BODCTRL_BODRSTLEV_SHIFT           (0U)
/*! BODRSTLEV - BOD reset level
 *  0b00..Reserved
 *  0b01..Level 1
 *  0b10..Level 2
 *  0b11..Level 3
 */
#define SYSCON_BODCTRL_BODRSTLEV(x)              (((uint32_t)(((uint32_t)(x)) << SYSCON_BODCTRL_BODRSTLEV_SHIFT)) & SYSCON_BODCTRL_BODRSTLEV_MASK)
#define SYSCON_BODCTRL_BODINTVAL_MASK            (0xCU)
#define SYSCON_BODCTRL_BODINTVAL_SHIFT           (2U)
/*! BODINTVAL - BOD interrupt level
 *  0b00..Reserved
 *  0b01..Level 1
 *  0b10..Level 2
 *  0b11..Level 3
 */
#define SYSCON_BODCTRL_BODINTVAL(x)              (((uint32_t)(((uint32_t)(x)) << SYSCON_BODCTRL_BODINTVAL_SHIFT)) & SYSCON_BODCTRL_BODINTVAL_MASK)
#define SYSCON_BODCTRL_BODRSTENA_MASK            (0x10U)
#define SYSCON_BODCTRL_BODRSTENA_SHIFT           (4U)
/*! BODRSTENA - BOD reset enable
 *  0b0..Disable reset function.
 *  0b1..Enable reset function.
 */
#define SYSCON_BODCTRL_BODRSTENA(x)              (((uint32_t)(((uint32_t)(x)) << SYSCON_BODCTRL_BODRSTENA_SHIFT)) & SYSCON_BODCTRL_BODRSTENA_MASK)
/*! @} */

/*! @name SYSTCKCAL - System tick timer calibration register */
/*! @{ */
#define SYSCON_SYSTCKCAL_CAL_MASK                (0x3FFFFFFU)
#define SYSCON_SYSTCKCAL_CAL_SHIFT               (0U)
/*! CAL - System tick timer calibration value.
 */
#define SYSCON_SYSTCKCAL_CAL(x)                  (((uint32_t)(((uint32_t)(x)) << SYSCON_SYSTCKCAL_CAL_SHIFT)) & SYSCON_SYSTCKCAL_CAL_MASK)
/*! @} */

/*! @name IRQLATENCY - IRQ latency register */
/*! @{ */
#define SYSCON_IRQLATENCY_LATENCY_MASK           (0xFFU)
#define SYSCON_IRQLATENCY_LATENCY_SHIFT          (0U)
/*! LATENCY - 8-bit latency value.
 */
#define SYSCON_IRQLATENCY_LATENCY(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_IRQLATENCY_LATENCY_SHIFT)) & SYSCON_IRQLATENCY_LATENCY_MASK)
/*! @} */

/*! @name NMISRC - NMI source selection register */
/*! @{ */
#define SYSCON_NMISRC_IRQN_MASK                  (0x1FU)
#define SYSCON_NMISRC_IRQN_SHIFT                 (0U)
/*! IRQN - The IRQ number of the interrupt that acts as the Non-Maskable Interrupt (NMI) if bit 31 is 1
 */
#define SYSCON_NMISRC_IRQN(x)                    (((uint32_t)(((uint32_t)(x)) << SYSCON_NMISRC_IRQN_SHIFT)) & SYSCON_NMISRC_IRQN_MASK)
#define SYSCON_NMISRC_NMIEN_MASK                 (0x80000000U)
#define SYSCON_NMISRC_NMIEN_SHIFT                (31U)
/*! NMIEN - Write a 1 to this bit to enable the Non-Maskable Interrupt (NMI) source selected by bits 4:0.
 */
#define SYSCON_NMISRC_NMIEN(x)                   (((uint32_t)(((uint32_t)(x)) << SYSCON_NMISRC_NMIEN_SHIFT)) & SYSCON_NMISRC_NMIEN_MASK)
/*! @} */

/*! @name PINTSEL - Pin interrupt select registers N */
/*! @{ */
#define SYSCON_PINTSEL_INTPIN_MASK               (0x3FU)
#define SYSCON_PINTSEL_INTPIN_SHIFT              (0U)
/*! INTPIN - Pin number select for pin interrupt or pattern match engine input. (PIO0_0 to
 *    PIO0_31correspond to numbers 0 to 31 and PIO1_0 to PIO1_31 correspond to numbers 32 to 63).
 */
#define SYSCON_PINTSEL_INTPIN(x)                 (((uint32_t)(((uint32_t)(x)) << SYSCON_PINTSEL_INTPIN_SHIFT)) & SYSCON_PINTSEL_INTPIN_MASK)
/*! @} */

/* The count of SYSCON_PINTSEL */
#define SYSCON_PINTSEL_COUNT                     (8U)

/*! @name STARTERP0 - Start logic 0 pin wake-up enable register 0 */
/*! @{ */
#define SYSCON_STARTERP0_PINT0_MASK              (0x1U)
#define SYSCON_STARTERP0_PINT0_SHIFT             (0U)
/*! PINT0 - GPIO pin interrupt 0 wake-up
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define SYSCON_STARTERP0_PINT0(x)                (((uint32_t)(((uint32_t)(x)) << SYSCON_STARTERP0_PINT0_SHIFT)) & SYSCON_STARTERP0_PINT0_MASK)
#define SYSCON_STARTERP0_PINT1_MASK              (0x2U)
#define SYSCON_STARTERP0_PINT1_SHIFT             (1U)
/*! PINT1 - GPIO pin interrupt 1 wake-up
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define SYSCON_STARTERP0_PINT1(x)                (((uint32_t)(((uint32_t)(x)) << SYSCON_STARTERP0_PINT1_SHIFT)) & SYSCON_STARTERP0_PINT1_MASK)
#define SYSCON_STARTERP0_PINT2_MASK              (0x4U)
#define SYSCON_STARTERP0_PINT2_SHIFT             (2U)
/*! PINT2 - GPIO pin interrupt 2 wake-up
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define SYSCON_STARTERP0_PINT2(x)                (((uint32_t)(((uint32_t)(x)) << SYSCON_STARTERP0_PINT2_SHIFT)) & SYSCON_STARTERP0_PINT2_MASK)
#define SYSCON_STARTERP0_PINT3_MASK              (0x8U)
#define SYSCON_STARTERP0_PINT3_SHIFT             (3U)
/*! PINT3 - GPIO pin interrupt 3 wake-up
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define SYSCON_STARTERP0_PINT3(x)                (((uint32_t)(((uint32_t)(x)) << SYSCON_STARTERP0_PINT3_SHIFT)) & SYSCON_STARTERP0_PINT3_MASK)
#define SYSCON_STARTERP0_PINT4_MASK              (0x10U)
#define SYSCON_STARTERP0_PINT4_SHIFT             (4U)
/*! PINT4 - GPIO pin interrupt 4 wake-up
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define SYSCON_STARTERP0_PINT4(x)                (((uint32_t)(((uint32_t)(x)) << SYSCON_STARTERP0_PINT4_SHIFT)) & SYSCON_STARTERP0_PINT4_MASK)
#define SYSCON_STARTERP0_PINT5_MASK              (0x20U)
#define SYSCON_STARTERP0_PINT5_SHIFT             (5U)
/*! PINT5 - GPIO pin interrupt 5 wake-up
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define SYSCON_STARTERP0_PINT5(x)                (((uint32_t)(((uint32_t)(x)) << SYSCON_STARTERP0_PINT5_SHIFT)) & SYSCON_STARTERP0_PINT5_MASK)
#define SYSCON_STARTERP0_PINT6_MASK              (0x40U)
#define SYSCON_STARTERP0_PINT6_SHIFT             (6U)
/*! PINT6 - GPIO pin interrupt 6 wake-up
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define SYSCON_STARTERP0_PINT6(x)                (((uint32_t)(((uint32_t)(x)) << SYSCON_STARTERP0_PINT6_SHIFT)) & SYSCON_STARTERP0_PINT6_MASK)
#define SYSCON_STARTERP0_PINT7_MASK              (0x80U)
#define SYSCON_STARTERP0_PINT7_SHIFT             (7U)
/*! PINT7 - GPIO pin interrupt 7 wake-up
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define SYSCON_STARTERP0_PINT7(x)                (((uint32_t)(((uint32_t)(x)) << SYSCON_STARTERP0_PINT7_SHIFT)) & SYSCON_STARTERP0_PINT7_MASK)
/*! @} */

/*! @name STARTERP1 - Start logic 0 pin wake-up enable register 1 */
/*! @{ */
#define SYSCON_STARTERP1_SPI0_MASK               (0x1U)
#define SYSCON_STARTERP1_SPI0_SHIFT              (0U)
/*! SPI0 - SPI0 interrupt wake-up
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define SYSCON_STARTERP1_SPI0(x)                 (((uint32_t)(((uint32_t)(x)) << SYSCON_STARTERP1_SPI0_SHIFT)) & SYSCON_STARTERP1_SPI0_MASK)
#define SYSCON_STARTERP1_SPI1_MASK               (0x2U)
#define SYSCON_STARTERP1_SPI1_SHIFT              (1U)
/*! SPI1 - SPI1 interrupt wake-up
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define SYSCON_STARTERP1_SPI1(x)                 (((uint32_t)(((uint32_t)(x)) << SYSCON_STARTERP1_SPI1_SHIFT)) & SYSCON_STARTERP1_SPI1_MASK)
#define SYSCON_STARTERP1_USART0_MASK             (0x8U)
#define SYSCON_STARTERP1_USART0_SHIFT            (3U)
/*! USART0 - USART0 interrupt wake-up. Configure USART in synchronous slave mode.
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define SYSCON_STARTERP1_USART0(x)               (((uint32_t)(((uint32_t)(x)) << SYSCON_STARTERP1_USART0_SHIFT)) & SYSCON_STARTERP1_USART0_MASK)
#define SYSCON_STARTERP1_USART1_MASK             (0x10U)
#define SYSCON_STARTERP1_USART1_SHIFT            (4U)
/*! USART1 - USART1 interrupt wake-up. Configure USART in synchronous slave mode.
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define SYSCON_STARTERP1_USART1(x)               (((uint32_t)(((uint32_t)(x)) << SYSCON_STARTERP1_USART1_SHIFT)) & SYSCON_STARTERP1_USART1_MASK)
#define SYSCON_STARTERP1_USART2_MASK             (0x20U)
#define SYSCON_STARTERP1_USART2_SHIFT            (5U)
/*! USART2 - USART2 interrupt wake-up. Configure USART in synchronous slave mode.
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define SYSCON_STARTERP1_USART2(x)               (((uint32_t)(((uint32_t)(x)) << SYSCON_STARTERP1_USART2_SHIFT)) & SYSCON_STARTERP1_USART2_MASK)
#define SYSCON_STARTERP1_I2C1_MASK               (0x80U)
#define SYSCON_STARTERP1_I2C1_SHIFT              (7U)
/*! I2C1 - I2C1 interrupt wake-up.
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define SYSCON_STARTERP1_I2C1(x)                 (((uint32_t)(((uint32_t)(x)) << SYSCON_STARTERP1_I2C1_SHIFT)) & SYSCON_STARTERP1_I2C1_MASK)
#define SYSCON_STARTERP1_I2C0_MASK               (0x100U)
#define SYSCON_STARTERP1_I2C0_SHIFT              (8U)
/*! I2C0 - I2C0 interrupt wake-up.
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define SYSCON_STARTERP1_I2C0(x)                 (((uint32_t)(((uint32_t)(x)) << SYSCON_STARTERP1_I2C0_SHIFT)) & SYSCON_STARTERP1_I2C0_MASK)
#define SYSCON_STARTERP1_Cap_Touch_MASK          (0x800U)
#define SYSCON_STARTERP1_Cap_Touch_SHIFT         (11U)
/*! Cap_Touch - Cap Touch interrupt wake-up.
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define SYSCON_STARTERP1_Cap_Touch(x)            (((uint32_t)(((uint32_t)(x)) << SYSCON_STARTERP1_Cap_Touch_SHIFT)) & SYSCON_STARTERP1_Cap_Touch_MASK)
#define SYSCON_STARTERP1_WWDT_MASK               (0x1000U)
#define SYSCON_STARTERP1_WWDT_SHIFT              (12U)
/*! WWDT - WWDT interrupt wake-up
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define SYSCON_STARTERP1_WWDT(x)                 (((uint32_t)(((uint32_t)(x)) << SYSCON_STARTERP1_WWDT_SHIFT)) & SYSCON_STARTERP1_WWDT_MASK)
#define SYSCON_STARTERP1_BOD_MASK                (0x2000U)
#define SYSCON_STARTERP1_BOD_SHIFT               (13U)
/*! BOD - BOD interrupt wake-up
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define SYSCON_STARTERP1_BOD(x)                  (((uint32_t)(((uint32_t)(x)) << SYSCON_STARTERP1_BOD_SHIFT)) & SYSCON_STARTERP1_BOD_MASK)
#define SYSCON_STARTERP1_WKT_MASK                (0x8000U)
#define SYSCON_STARTERP1_WKT_SHIFT               (15U)
/*! WKT - Self-wake-up timer interrupt wake-up
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define SYSCON_STARTERP1_WKT(x)                  (((uint32_t)(((uint32_t)(x)) << SYSCON_STARTERP1_WKT_SHIFT)) & SYSCON_STARTERP1_WKT_MASK)
#define SYSCON_STARTERP1_I2C2_MASK               (0x200000U)
#define SYSCON_STARTERP1_I2C2_SHIFT              (21U)
/*! I2C2 - I2C2 interrupt wake-up
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define SYSCON_STARTERP1_I2C2(x)                 (((uint32_t)(((uint32_t)(x)) << SYSCON_STARTERP1_I2C2_SHIFT)) & SYSCON_STARTERP1_I2C2_MASK)
#define SYSCON_STARTERP1_I2C3_MASK               (0x400000U)
#define SYSCON_STARTERP1_I2C3_SHIFT              (22U)
/*! I2C3 - I2C3 interrupt wake-up
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define SYSCON_STARTERP1_I2C3(x)                 (((uint32_t)(((uint32_t)(x)) << SYSCON_STARTERP1_I2C3_SHIFT)) & SYSCON_STARTERP1_I2C3_MASK)
#define SYSCON_STARTERP1_UART3_MASK              (0x40000000U)
#define SYSCON_STARTERP1_UART3_SHIFT             (30U)
/*! UART3 - UART3 interrupt wake-up
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define SYSCON_STARTERP1_UART3(x)                (((uint32_t)(((uint32_t)(x)) << SYSCON_STARTERP1_UART3_SHIFT)) & SYSCON_STARTERP1_UART3_MASK)
#define SYSCON_STARTERP1_UART4_MASK              (0x80000000U)
#define SYSCON_STARTERP1_UART4_SHIFT             (31U)
/*! UART4 - UART4 interrupt wake-up
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define SYSCON_STARTERP1_UART4(x)                (((uint32_t)(((uint32_t)(x)) << SYSCON_STARTERP1_UART4_SHIFT)) & SYSCON_STARTERP1_UART4_MASK)
/*! @} */

/*! @name PDSLEEPCFG - Deep-sleep configuration register */
/*! @{ */
#define SYSCON_PDSLEEPCFG_BOD_PD_MASK            (0x8U)
#define SYSCON_PDSLEEPCFG_BOD_PD_SHIFT           (3U)
/*! BOD_PD - BOD power-down control for Deep-sleep and Power-down mode
 *  0b0..powered
 *  0b1..powered down
 */
#define SYSCON_PDSLEEPCFG_BOD_PD(x)              (((uint32_t)(((uint32_t)(x)) << SYSCON_PDSLEEPCFG_BOD_PD_SHIFT)) & SYSCON_PDSLEEPCFG_BOD_PD_MASK)
#define SYSCON_PDSLEEPCFG_WDTOSC_PD_MASK         (0x40U)
#define SYSCON_PDSLEEPCFG_WDTOSC_PD_SHIFT        (6U)
/*! WDTOSC_PD - Watchdog oscillator power-down control for Deep-sleep and Power-down mode. Changing
 *    this bit to powered-down has no effect when the LOCK bit in the WWDT MOD register is set. In
 *    this case, the watchdog oscillator is always running.
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define SYSCON_PDSLEEPCFG_WDTOSC_PD(x)           (((uint32_t)(((uint32_t)(x)) << SYSCON_PDSLEEPCFG_WDTOSC_PD_SHIFT)) & SYSCON_PDSLEEPCFG_WDTOSC_PD_MASK)
/*! @} */

/*! @name PDAWAKECFG - Wake-up configuration register */
/*! @{ */
#define SYSCON_PDAWAKECFG_FROOUT_PD_MASK         (0x1U)
#define SYSCON_PDAWAKECFG_FROOUT_PD_SHIFT        (0U)
/*! FROOUT_PD - FRO oscillator output wake-up configuration
 *  0b0..powered
 *  0b1..powered down
 */
#define SYSCON_PDAWAKECFG_FROOUT_PD(x)           (((uint32_t)(((uint32_t)(x)) << SYSCON_PDAWAKECFG_FROOUT_PD_SHIFT)) & SYSCON_PDAWAKECFG_FROOUT_PD_MASK)
#define SYSCON_PDAWAKECFG_FRO_PD_MASK            (0x2U)
#define SYSCON_PDAWAKECFG_FRO_PD_SHIFT           (1U)
/*! FRO_PD - FRO oscillator power-down wake-up configuration
 *  0b0..powered
 *  0b1..powered down
 */
#define SYSCON_PDAWAKECFG_FRO_PD(x)              (((uint32_t)(((uint32_t)(x)) << SYSCON_PDAWAKECFG_FRO_PD_SHIFT)) & SYSCON_PDAWAKECFG_FRO_PD_MASK)
#define SYSCON_PDAWAKECFG_FLASH_PD_MASK          (0x4U)
#define SYSCON_PDAWAKECFG_FLASH_PD_SHIFT         (2U)
/*! FLASH_PD - Flash wake-up configuration
 *  0b0..powered
 *  0b1..powered down
 */
#define SYSCON_PDAWAKECFG_FLASH_PD(x)            (((uint32_t)(((uint32_t)(x)) << SYSCON_PDAWAKECFG_FLASH_PD_SHIFT)) & SYSCON_PDAWAKECFG_FLASH_PD_MASK)
#define SYSCON_PDAWAKECFG_BOD_PD_MASK            (0x8U)
#define SYSCON_PDAWAKECFG_BOD_PD_SHIFT           (3U)
/*! BOD_PD - BOD wake-up configuration
 *  0b0..powered
 *  0b1..powered down
 */
#define SYSCON_PDAWAKECFG_BOD_PD(x)              (((uint32_t)(((uint32_t)(x)) << SYSCON_PDAWAKECFG_BOD_PD_SHIFT)) & SYSCON_PDAWAKECFG_BOD_PD_MASK)
#define SYSCON_PDAWAKECFG_ADC_PD_MASK            (0x10U)
#define SYSCON_PDAWAKECFG_ADC_PD_SHIFT           (4U)
/*! ADC_PD - ADC wake-up configuration
 *  0b0..powered
 *  0b1..powered down
 */
#define SYSCON_PDAWAKECFG_ADC_PD(x)              (((uint32_t)(((uint32_t)(x)) << SYSCON_PDAWAKECFG_ADC_PD_SHIFT)) & SYSCON_PDAWAKECFG_ADC_PD_MASK)
#define SYSCON_PDAWAKECFG_SYSOSC_PD_MASK         (0x20U)
#define SYSCON_PDAWAKECFG_SYSOSC_PD_SHIFT        (5U)
/*! SYSOSC_PD - Crystal oscillator wake-up configuration
 *  0b0..powered
 *  0b1..powered down
 */
#define SYSCON_PDAWAKECFG_SYSOSC_PD(x)           (((uint32_t)(((uint32_t)(x)) << SYSCON_PDAWAKECFG_SYSOSC_PD_SHIFT)) & SYSCON_PDAWAKECFG_SYSOSC_PD_MASK)
#define SYSCON_PDAWAKECFG_WDTOSC_PD_MASK         (0x40U)
#define SYSCON_PDAWAKECFG_WDTOSC_PD_SHIFT        (6U)
/*! WDTOSC_PD - Watchdog oscillator wake-up configuration. Changing this bit to powered-down has no
 *    effect when the LOCK bit in the WWDT MOD register is set. In this case, the watchdog
 *    oscillator is always running
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define SYSCON_PDAWAKECFG_WDTOSC_PD(x)           (((uint32_t)(((uint32_t)(x)) << SYSCON_PDAWAKECFG_WDTOSC_PD_SHIFT)) & SYSCON_PDAWAKECFG_WDTOSC_PD_MASK)
#define SYSCON_PDAWAKECFG_SYSPLL_PD_MASK         (0x80U)
#define SYSCON_PDAWAKECFG_SYSPLL_PD_SHIFT        (7U)
/*! SYSPLL_PD - System PLL wake-up configuration
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define SYSCON_PDAWAKECFG_SYSPLL_PD(x)           (((uint32_t)(((uint32_t)(x)) << SYSCON_PDAWAKECFG_SYSPLL_PD_SHIFT)) & SYSCON_PDAWAKECFG_SYSPLL_PD_MASK)
#define SYSCON_PDAWAKECFG_VREF2_PD_MASK          (0x400U)
#define SYSCON_PDAWAKECFG_VREF2_PD_SHIFT         (10U)
/*! VREF2_PD - VREF2 wake-up configuration
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define SYSCON_PDAWAKECFG_VREF2_PD(x)            (((uint32_t)(((uint32_t)(x)) << SYSCON_PDAWAKECFG_VREF2_PD_SHIFT)) & SYSCON_PDAWAKECFG_VREF2_PD_MASK)
#define SYSCON_PDAWAKECFG_DAC0_MASK              (0x2000U)
#define SYSCON_PDAWAKECFG_DAC0_SHIFT             (13U)
/*! DAC0 - DAC0 wake-up configuration
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define SYSCON_PDAWAKECFG_DAC0(x)                (((uint32_t)(((uint32_t)(x)) << SYSCON_PDAWAKECFG_DAC0_SHIFT)) & SYSCON_PDAWAKECFG_DAC0_MASK)
#define SYSCON_PDAWAKECFG_DAC1_MASK              (0x4000U)
#define SYSCON_PDAWAKECFG_DAC1_SHIFT             (14U)
/*! DAC1 - DAC1 wake-up configuration
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define SYSCON_PDAWAKECFG_DAC1(x)                (((uint32_t)(((uint32_t)(x)) << SYSCON_PDAWAKECFG_DAC1_SHIFT)) & SYSCON_PDAWAKECFG_DAC1_MASK)
#define SYSCON_PDAWAKECFG_ACMP_MASK              (0x8000U)
#define SYSCON_PDAWAKECFG_ACMP_SHIFT             (15U)
/*! ACMP - Analog comparator wake-up configuration
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define SYSCON_PDAWAKECFG_ACMP(x)                (((uint32_t)(((uint32_t)(x)) << SYSCON_PDAWAKECFG_ACMP_SHIFT)) & SYSCON_PDAWAKECFG_ACMP_MASK)
/*! @} */

/*! @name PDRUNCFG - Power configuration register */
/*! @{ */
#define SYSCON_PDRUNCFG_FROOUT_PD_MASK           (0x1U)
#define SYSCON_PDRUNCFG_FROOUT_PD_SHIFT          (0U)
/*! FROOUT_PD - FRO oscillator output wake-up configuration
 *  0b0..powered
 *  0b1..powered down
 */
#define SYSCON_PDRUNCFG_FROOUT_PD(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_PDRUNCFG_FROOUT_PD_SHIFT)) & SYSCON_PDRUNCFG_FROOUT_PD_MASK)
#define SYSCON_PDRUNCFG_FRO_PD_MASK              (0x2U)
#define SYSCON_PDRUNCFG_FRO_PD_SHIFT             (1U)
/*! FRO_PD - FRO oscillator power-down wake-up configuration
 *  0b0..powered
 *  0b1..powered down
 */
#define SYSCON_PDRUNCFG_FRO_PD(x)                (((uint32_t)(((uint32_t)(x)) << SYSCON_PDRUNCFG_FRO_PD_SHIFT)) & SYSCON_PDRUNCFG_FRO_PD_MASK)
#define SYSCON_PDRUNCFG_FLASH_PD_MASK            (0x4U)
#define SYSCON_PDRUNCFG_FLASH_PD_SHIFT           (2U)
/*! FLASH_PD - Flash wake-up configuration
 *  0b0..powered
 *  0b1..powered down
 */
#define SYSCON_PDRUNCFG_FLASH_PD(x)              (((uint32_t)(((uint32_t)(x)) << SYSCON_PDRUNCFG_FLASH_PD_SHIFT)) & SYSCON_PDRUNCFG_FLASH_PD_MASK)
#define SYSCON_PDRUNCFG_BOD_PD_MASK              (0x8U)
#define SYSCON_PDRUNCFG_BOD_PD_SHIFT             (3U)
/*! BOD_PD - BOD wake-up configuration
 *  0b0..powered
 *  0b1..powered down
 */
#define SYSCON_PDRUNCFG_BOD_PD(x)                (((uint32_t)(((uint32_t)(x)) << SYSCON_PDRUNCFG_BOD_PD_SHIFT)) & SYSCON_PDRUNCFG_BOD_PD_MASK)
#define SYSCON_PDRUNCFG_ADC_PD_MASK              (0x10U)
#define SYSCON_PDRUNCFG_ADC_PD_SHIFT             (4U)
/*! ADC_PD - ADC wake-up configuration
 *  0b0..powered
 *  0b1..powered down
 */
#define SYSCON_PDRUNCFG_ADC_PD(x)                (((uint32_t)(((uint32_t)(x)) << SYSCON_PDRUNCFG_ADC_PD_SHIFT)) & SYSCON_PDRUNCFG_ADC_PD_MASK)
#define SYSCON_PDRUNCFG_SYSOSC_PD_MASK           (0x20U)
#define SYSCON_PDRUNCFG_SYSOSC_PD_SHIFT          (5U)
/*! SYSOSC_PD - Crystal oscillator wake-up configuration
 *  0b0..powered
 *  0b1..powered down
 */
#define SYSCON_PDRUNCFG_SYSOSC_PD(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_PDRUNCFG_SYSOSC_PD_SHIFT)) & SYSCON_PDRUNCFG_SYSOSC_PD_MASK)
#define SYSCON_PDRUNCFG_WDTOSC_PD_MASK           (0x40U)
#define SYSCON_PDRUNCFG_WDTOSC_PD_SHIFT          (6U)
/*! WDTOSC_PD - Watchdog oscillator wake-up configuration. Changing this bit to powered-down has no
 *    effect when the LOCK bit in the WWDT MOD register is set. In this case, the watchdog
 *    oscillator is always running
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define SYSCON_PDRUNCFG_WDTOSC_PD(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_PDRUNCFG_WDTOSC_PD_SHIFT)) & SYSCON_PDRUNCFG_WDTOSC_PD_MASK)
#define SYSCON_PDRUNCFG_SYSPLL_PD_MASK           (0x80U)
#define SYSCON_PDRUNCFG_SYSPLL_PD_SHIFT          (7U)
/*! SYSPLL_PD - System PLL wake-up configuration
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define SYSCON_PDRUNCFG_SYSPLL_PD(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_PDRUNCFG_SYSPLL_PD_SHIFT)) & SYSCON_PDRUNCFG_SYSPLL_PD_MASK)
#define SYSCON_PDRUNCFG_DAC0_MASK                (0x2000U)
#define SYSCON_PDRUNCFG_DAC0_SHIFT               (13U)
/*! DAC0 - DAC0 wake-up configuration
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define SYSCON_PDRUNCFG_DAC0(x)                  (((uint32_t)(((uint32_t)(x)) << SYSCON_PDRUNCFG_DAC0_SHIFT)) & SYSCON_PDRUNCFG_DAC0_MASK)
#define SYSCON_PDRUNCFG_DAC1_MASK                (0x4000U)
#define SYSCON_PDRUNCFG_DAC1_SHIFT               (14U)
/*! DAC1 - DAC1 wake-up configuration
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define SYSCON_PDRUNCFG_DAC1(x)                  (((uint32_t)(((uint32_t)(x)) << SYSCON_PDRUNCFG_DAC1_SHIFT)) & SYSCON_PDRUNCFG_DAC1_MASK)
#define SYSCON_PDRUNCFG_ACMP_MASK                (0x8000U)
#define SYSCON_PDRUNCFG_ACMP_SHIFT               (15U)
/*! ACMP - Analog comparator wake-up configuration
 *  0b0..Disabled
 *  0b1..Enabled
 */
#define SYSCON_PDRUNCFG_ACMP(x)                  (((uint32_t)(((uint32_t)(x)) << SYSCON_PDRUNCFG_ACMP_SHIFT)) & SYSCON_PDRUNCFG_ACMP_MASK)
/*! @} */

/*! @name DEVICE_ID - Part ID register */
/*! @{ */
#define SYSCON_DEVICE_ID_DEVICEID_MASK           (0xFFFFFFFFU)
#define SYSCON_DEVICE_ID_DEVICEID_SHIFT          (0U)
/*! DEVICEID - Part ID
 */
#define SYSCON_DEVICE_ID_DEVICEID(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_DEVICE_ID_DEVICEID_SHIFT)) & SYSCON_DEVICE_ID_DEVICEID_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group SYSCON_Register_Masks */


/* SYSCON - Peripheral instance base addresses */
/** Peripheral SYSCON base address */
#define SYSCON_BASE                              (0x40048000u)
/** Peripheral SYSCON base pointer */
#define SYSCON                                   ((SYSCON_Type *)SYSCON_BASE)
/** Array initializer of SYSCON peripheral base addresses */
#define SYSCON_BASE_ADDRS                        { SYSCON_BASE }
/** Array initializer of SYSCON peripheral base pointers */
#define SYSCON_BASE_PTRS                         { SYSCON }
/** Interrupt vectors for the SYSCON peripheral type */
#define SYSCON_IRQS                              { BOD_IRQn }

/*!
 * @}
 */ /* end of group SYSCON_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- DAC Peripheral Access Layer
   ---------------------------------------------------------------------------- */
/** Interrupt Number Definitions */
#define NUMBER_OF_INT_VECTORS 	48                 /**< Number of interrupts in the Vector table */

typedef enum IRQn {
  /* Auxiliary constants */
  NotAvail_IRQn                = -128,             /**< Not available device specific interrupt */

  /* Core interrupts */
  NonMaskableInt_IRQn          = -14,              /**< Non Maskable Interrupt */
  HardFault_IRQn               = -13,              /**< Cortex-M0 SV Hard Fault Interrupt */
  SVCall_IRQn                  = -5,               /**< Cortex-M0 SV Call Interrupt */
  PendSV_IRQn                  = -2,               /**< Cortex-M0 Pend SV Interrupt */
  SysTick_IRQn                 = -1,               /**< Cortex-M0 System Tick Interrupt */

  /* Device specific interrupts */
  SPI0_IRQn                    = 0,                /**< SPI0 interrupt */
  SPI1_IRQn                    = 1,                /**< SPI1 interrupt */
  DAC0_IRQn                    = 2,                /**< DAC0 interrupt */
  USART0_IRQn                  = 3,                /**< USART0 interrupt */
  USART1_IRQn                  = 4,                /**< USART1 interrupt */
  USART2_IRQn                  = 5,                /**< USART2 interrupt */
  Reserved22_IRQn              = 6,                /**< Reserved interrupt */
  I2C1_IRQn                    = 7,                /**< I2C1 interrupt */
  I2C0_IRQn                    = 8,                /**< I2C0 interrupt */
  SCT0_IRQn                    = 9,                /**< State configurable timer interrupt */
  MRT0_IRQn                    = 10,               /**< Multi-rate timer interrupt */
  CMP_CAPT_IRQn                = 11,               /**< Analog comparator interrupt or Capacitive Touch interrupt */
  WDT_IRQn                     = 12,               /**< Windowed watchdog timer interrupt */
  BOD_IRQn                     = 13,               /**< BOD interrupts */
  FLASH_IRQn                   = 14,               /**< flash interrupt */
  WKT_IRQn                     = 15,               /**< Self-wake-up timer interrupt */
  ADC0_SEQA_IRQn               = 16,               /**< ADC0 sequence A completion. */
  ADC0_SEQB_IRQn               = 17,               /**< ADC0 sequence B completion. */
  ADC0_THCMP_IRQn              = 18,               /**< ADC0 threshold compare and error. */
  ADC0_OVR_IRQn                = 19,               /**< ADC0 overrun */
  DMA0_IRQn                    = 20,               /**< DMA0 interrupt */
  I2C2_IRQn                    = 21,               /**< I2C2 interrupt */
  I2C3_IRQn                    = 22,               /**< I2C3 interrupt */
  CTIMER0_IRQn                 = 23,               /**< Timer interrupt */
  PIN_INT0_IRQn                = 24,               /**< Pin interrupt 0 or pattern match engine slice 0 interrupt */
  PIN_INT1_IRQn                = 25,               /**< Pin interrupt 1 or pattern match engine slice 1 interrupt */
  PIN_INT2_IRQn                = 26,               /**< Pin interrupt 2 or pattern match engine slice 2 interrupt */
  PIN_INT3_IRQn                = 27,               /**< Pin interrupt 3 or pattern match engine slice 3 interrupt */
  PIN_INT4_IRQn                = 28,               /**< Pin interrupt 4 or pattern match engine slice 4 interrupt */
  PIN_INT5_DAC1_IRQn           = 29,               /**< Pin interrupt 5 or pattern match engine slice 5 interrupt or DAC1 interrupt */
  PIN_INT6_USART3_IRQn         = 30,               /**< Pin interrupt 6 or pattern match engine slice 6 interrupt or UART3 interrupt */
  PIN_INT7_USART4_IRQn         = 31                /**< Pin interrupt 7 or pattern match engine slice 7 interrupt or UART4 interrupt */
} IRQn_Type;

/*!
 * @}
 */ /* end of group Interrupt_vector_numbers */
typedef struct {
  __IO uint8_t B[2][32];
       uint8_t RESERVED_0[4032];
  __IO uint32_t W[2][32];
       uint8_t RESERVED_1[3840];
  __IO uint32_t DIR[2];
       uint8_t RESERVED_2[120];
  __IO uint32_t MASK[2];
       uint8_t RESERVED_3[120];
  __IO uint32_t PIN[2];
       uint8_t RESERVED_4[120];
  __IO uint32_t MPIN[2];
       uint8_t RESERVED_5[120];
  __IO uint32_t SET[2];
       uint8_t RESERVED_6[120];
  __O  uint32_t CLR[2];
       uint8_t RESERVED_7[120];
  __O  uint32_t NOT[2];
       uint8_t RESERVED_8[120];
  __O  uint32_t DIRSET[2];
       uint8_t RESERVED_9[120];
  __O  uint32_t DIRCLR[2];
       uint8_t RESERVED_10[120];
  __O  uint32_t DIRNOT[2];
} GPIO_Type;

#define	GPIO	((GPIO_Type *) 0xA0000000UL)

//! Index for the IOCON Register PORT0
const uint8_t IOCON_INDEX_PIO0[REG_BYTES_SIZE] = {
	17,	11,	6,	5,	4,	3,	16,	15,
	14,	13,	8,	7,	2,	1,	18,	10,
	9,	0,	30,	29,	28,	27,	26,	25,
	24,	23,	22,	21,	20,	50,	51,	35
};

//! Index for the IOCON Register PORT1
const uint8_t IOCON_INDEX_PIO1[REG_BYTES_SIZE] = {
	36,	37,	38,	41,	42,	43,	46,	49,
	31,	32,	55,	54,	33,	34,	39,	40,
	44,	45,	47,	48,	52,	53,	0,	0,
	0,	0,	0,	0,	0,	0,	0,	0
};

/**
  \brief  Structure type to access the System Timer (SysTick).
 */
typedef struct {
  __IO uint32_t CTRL;     /*!< Offset: 0x000 (R/W)  SysTick Control and Status Register */
  __IO uint32_t RELOAD;   /*!< Offset: 0x004 (R/W)  SysTick Reload Value Register */
  __IO uint32_t CURR;     /*!< Offset: 0x008 (R/W)  SysTick Current Value Register */
  __I  uint32_t CALIB;    /*!< Offset: 0x00C (R/ )  SysTick Calibration Register */
} SysTick_Type;

#define SysTick   		((SysTick_Type *) 0xE000E010UL)	/*!< SysTick configuration structure */

#define FREQ_SYSTICK	(1000)							/*!< SysTick CTRL: COUNTFLAG Position */

// #define SysTick_CTRL_COUNTFLAG_Pos     	16U
/*!< COUNTFLAG Mask */
// #define SysTick_CTRL_COUNTFLAG_Msk     	(1UL << SysTick_CTRL_COUNTFLAG_Pos)

/*!< SysTick CTRL: CLKSOURCE Position */
// #define SysTick_CTRL_CLKSOURCE_Pos      	2U
/*!< CLKSOURCE Mask */
// #define SysTick_CTRL_CLKSOURCE_Msk     	(1UL << SysTick_CTRL_CLKSOURCE_Pos)

/*!< SysTick CTRL: TICKINT Position */
// #define SysTick_CTRL_TICKINT_Pos        	1U
/*!< TICKINT Mask */
// #define SysTick_CTRL_TICKINT_Msk       	(1UL << SysTick_CTRL_TICKINT_Pos)

/*!< SysTick CTRL: ENABLE Position */
// #define SysTick_CTRL_ENABLE_Pos         	0U
/*!< ENABLE Mask */
// #define SysTick_CTRL_ENABLE_Msk			(1UL << SysTick_CTRL_ENABLE_Pos)

/*
typedef struct {
 	union {
 		struct {
 			uint32_t	_enable:1;
 			uint32_t	_tickint:1;
 			uint32_t	_clksource :1;
 			uint32_t	reserved1:13;
 			uint32_t	_countflag:1;
 			uint32_t	_reserved2:15;
 		};
 		uint32_t	    _syst_csr;
	};
 	uint32_t	        _syst_rvr;
 	uint32_t	        _syst_cvr;
 	uint32_t	        _syst_calib;
} systick_t;

#define SysTick    ( (systick_t *) 0xE000E010UL)

#define SYS_CSR				SysTick->W_syst_csr
#define SYS_CSR_ENABLE		SysTick->_enable
#define SYS_CSR_TICKINT		SysTick->_tickint
#define SYS_CSR_CLKSOURCE	SysTick->_clksource
#define SYS_CSR_COUNTFLAG	SysTick->_countflag
#define SYST_RVR			SysTick->_syst_rvr
#define SYST_CVR 			SysTick->_syst_cvr
#define SYST_CALIB			SysTick->_syst_calib
*/

/** IOCON - Register Layout Typedef */
typedef struct {
  __IO uint32_t PIO[56];                           /**< Digital I/O control for pins PIO0_17..Digital I/O control for pins PIO1_10, array offset: 0x0, array step: 0x4 */
} IOCON_Type;

/* IOCON - Peripheral instance base addresses */
/** Peripheral IOCON base address */
#define IOCON_BASE                               (0x40044000u)
/** Peripheral IOCON base pointer */
#define IOCON                                    ((IOCON_Type *)IOCON_BASE)
/** Array initializer of IOCON peripheral base addresses */
#define IOCON_BASE_ADDRS                         { IOCON_BASE }
/** Array initializer of IOCON peripheral base pointers */
#define IOCON_BASE_PTRS                          { IOCON }

/* ----------------------------------------------------------------------------
   -- USART Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup USART_Peripheral_Access_Layer USART Peripheral Access Layer
 * @{
 */

/** USART - Register Layout Typedef */
typedef struct {
  __IO uint32_t CFG;                               /**< USART Configuration register. Basic USART configuration settings that typically are not changed during operation., offset: 0x0 */
  __IO uint32_t CTL;                               /**< USART Control register. USART control settings that are more likely to change during operation., offset: 0x4 */
  __IO uint32_t STAT;                              /**< USART Status register. The complete status value can be read here. Writing ones clears some bits in the register. Some bits can be cleared by writing a 1 to them., offset: 0x8 */
  __IO uint32_t INTENSET;                          /**< Interrupt Enable read and Set register. Contains an individual interrupt enable bit for each potential USART interrupt. A complete value may be read from this register. Writing a 1 to any implemented bit position causes that bit to be set., offset: 0xC */
  __O  uint32_t INTENCLR;                          /**< Interrupt Enable Clear register. Allows clearing any combination of bits in the INTENSET register. Writing a 1 to any implemented bit position causes the corresponding bit to be cleared., offset: 0x10 */
  __I  uint32_t RXDAT;                             /**< Receiver Data register. Contains the last character received., offset: 0x14 */
  __I  uint32_t RXDATSTAT;                         /**< Receiver Data with Status register. Combines the last character received with the current USART receive status. Allows DMA or software to recover incoming data and status together., offset: 0x18 */
  __IO uint32_t TXDAT;                             /**< Transmit Data register. Data to be transmitted is written here., offset: 0x1C */
  __IO uint32_t BRG;                               /**< Baud Rate Generator register. 16-bit integer baud rate divisor value., offset: 0x20 */
  __I  uint32_t INTSTAT;                           /**< Interrupt status register. Reflects interrupts that are currently enabled., offset: 0x24 */
  __IO uint32_t OSR;                               /**< Oversample selection register for asynchronous communication., offset: 0x28 */
  __IO uint32_t ADDR;                              /**< Address register for automatic address matching., offset: 0x2C */
} USART_Type;

/* ----------------------------------------------------------------------------
   -- USART Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup USART_Register_Masks USART Register Masks
 * @{
 */

/*! @name CFG - USART Configuration register. Basic USART configuration settings that typically are not changed during operation. */
/*! @{ */
#define USART_CFG_ENABLE_MASK                    (0x1U)
#define USART_CFG_ENABLE_SHIFT                   (0U)
/*! ENABLE - USART Enable.
 *  0b0..Disabled. The USART is disabled and the internal state machine and counters are reset. While Enable = 0,
 *       all USART interrupts and DMA transfers are disabled. When Enable is set again, CFG and most other control
 *       bits remain unchanged. When re-enabled, the USART will immediately be ready to transmit because the
 *       transmitter has been reset and is therefore available.
 *  0b1..Enabled. The USART is enabled for operation.
 */
#define USART_CFG_ENABLE(x)                      (((uint32_t)(((uint32_t)(x)) << USART_CFG_ENABLE_SHIFT)) & USART_CFG_ENABLE_MASK)
#define USART_CFG_DATALEN_MASK                   (0xCU)
#define USART_CFG_DATALEN_SHIFT                  (2U)
/*! DATALEN - Selects the data size for the USART.
 *  0b00..7 bit Data length.
 *  0b01..8 bit Data length.
 *  0b10..9 bit data length. The 9th bit is commonly used for addressing in multidrop mode. See the ADDRDET bit in the CTL register.
 *  0b11..Reserved.
 */
#define USART_CFG_DATALEN(x)                     (((uint32_t)(((uint32_t)(x)) << USART_CFG_DATALEN_SHIFT)) & USART_CFG_DATALEN_MASK)
#define USART_CFG_PARITYSEL_MASK                 (0x30U)
#define USART_CFG_PARITYSEL_SHIFT                (4U)
/*! PARITYSEL - Selects what type of parity is used by the USART.
 *  0b00..No parity.
 *  0b01..Reserved.
 *  0b10..Even parity. Adds a bit to each character such that the number of 1s in a transmitted character is even,
 *        and the number of 1s in a received character is expected to be even.
 *  0b11..Odd parity. Adds a bit to each character such that the number of 1s in a transmitted character is odd,
 *        and the number of 1s in a received character is expected to be odd.
 */
#define USART_CFG_PARITYSEL(x)                   (((uint32_t)(((uint32_t)(x)) << USART_CFG_PARITYSEL_SHIFT)) & USART_CFG_PARITYSEL_MASK)
#define USART_CFG_STOPLEN_MASK                   (0x40U)
#define USART_CFG_STOPLEN_SHIFT                  (6U)
/*! STOPLEN - Number of stop bits appended to transmitted data. Only a single stop bit is required for received data.
 *  0b0..1 stop bit.
 *  0b1..2 stop bits. This setting should only be used for asynchronous communication.
 */
#define USART_CFG_STOPLEN(x)                     (((uint32_t)(((uint32_t)(x)) << USART_CFG_STOPLEN_SHIFT)) & USART_CFG_STOPLEN_MASK)
#define USART_CFG_CTSEN_MASK                     (0x200U)
#define USART_CFG_CTSEN_SHIFT                    (9U)
/*! CTSEN - CTS Enable. Determines whether CTS is used for flow control. CTS can be from the input
 *    pin, or from the USART's own RTS if loopback mode is enabled.
 *  0b0..No flow control. The transmitter does not receive any automatic flow control signal.
 *  0b1..Flow control enabled. The transmitter uses the CTS input (or RTS output in loopback mode) for flow control purposes.
 */
#define USART_CFG_CTSEN(x)                       (((uint32_t)(((uint32_t)(x)) << USART_CFG_CTSEN_SHIFT)) & USART_CFG_CTSEN_MASK)
#define USART_CFG_SYNCEN_MASK                    (0x800U)
#define USART_CFG_SYNCEN_SHIFT                   (11U)
/*! SYNCEN - Selects synchronous or asynchronous operation.
 *  0b0..Asynchronous mode.
 *  0b1..Synchronous mode.
 */
#define USART_CFG_SYNCEN(x)                      (((uint32_t)(((uint32_t)(x)) << USART_CFG_SYNCEN_SHIFT)) & USART_CFG_SYNCEN_MASK)
#define USART_CFG_CLKPOL_MASK                    (0x1000U)
#define USART_CFG_CLKPOL_SHIFT                   (12U)
/*! CLKPOL - Selects the clock polarity and sampling edge of received data in synchronous mode.
 *  0b0..Falling edge. Un_RXD is sampled on the falling edge of SCLK.
 *  0b1..Rising edge. Un_RXD is sampled on the rising edge of SCLK.
 */
#define USART_CFG_CLKPOL(x)                      (((uint32_t)(((uint32_t)(x)) << USART_CFG_CLKPOL_SHIFT)) & USART_CFG_CLKPOL_MASK)
#define USART_CFG_SYNCMST_MASK                   (0x4000U)
#define USART_CFG_SYNCMST_SHIFT                  (14U)
/*! SYNCMST - Synchronous mode Master select.
 *  0b0..Slave. When synchronous mode is enabled, the USART is a slave.
 *  0b1..Master. When synchronous mode is enabled, the USART is a master.
 */
#define USART_CFG_SYNCMST(x)                     (((uint32_t)(((uint32_t)(x)) << USART_CFG_SYNCMST_SHIFT)) & USART_CFG_SYNCMST_MASK)
#define USART_CFG_LOOP_MASK                      (0x8000U)
#define USART_CFG_LOOP_SHIFT                     (15U)
/*! LOOP - Selects data loopback mode.
 *  0b0..Normal operation.
 *  0b1..Loopback mode. This provides a mechanism to perform diagnostic loopback testing for USART data. Serial
 *       data from the transmitter (Un_TXD) is connected internally to serial input of the receive (Un_RXD). Un_TXD
 *       and Un_RTS activity will also appear on external pins if these functions are configured to appear on device
 *       pins. The receiver RTS signal is also looped back to CTS and performs flow control if enabled by CTSEN.
 */
#define USART_CFG_LOOP(x)                        (((uint32_t)(((uint32_t)(x)) << USART_CFG_LOOP_SHIFT)) & USART_CFG_LOOP_MASK)
#define USART_CFG_OETA_MASK                      (0x40000U)
#define USART_CFG_OETA_SHIFT                     (18U)
/*! OETA - Output Enable Turnaround time enable for RS-485 operation.
 *  0b0..Disabled. If selected by OESEL, the Output Enable signal deasserted at the end of the last stop bit of a transmission.
 *  0b1..Enabled. If selected by OESEL, the Output Enable signal remains asserted for one character time after the
 *       end of the last stop bit of a transmission. OE will also remain asserted if another transmit begins
 *       before it is deasserted.
 */
#define USART_CFG_OETA(x)                        (((uint32_t)(((uint32_t)(x)) << USART_CFG_OETA_SHIFT)) & USART_CFG_OETA_MASK)
#define USART_CFG_AUTOADDR_MASK                  (0x80000U)
#define USART_CFG_AUTOADDR_SHIFT                 (19U)
/*! AUTOADDR - Automatic Address matching enable.
 *  0b0..Disabled. When addressing is enabled by ADDRDET, address matching is done by software. This provides the
 *       possibility of versatile addressing (e.g. respond to more than one address).
 *  0b1..Enabled. When addressing is enabled by ADDRDET, address matching is done by hardware, using the value in
 *       the ADDR register as the address to match.
 */
#define USART_CFG_AUTOADDR(x)                    (((uint32_t)(((uint32_t)(x)) << USART_CFG_AUTOADDR_SHIFT)) & USART_CFG_AUTOADDR_MASK)
#define USART_CFG_OESEL_MASK                     (0x100000U)
#define USART_CFG_OESEL_SHIFT                    (20U)
/*! OESEL - Output Enable Select.
 *  0b0..Standard. The RTS signal is used as the standard flow control function.
 *  0b1..RS-485. The RTS signal configured to provide an output enable signal to control an RS-485 transceiver.
 */
#define USART_CFG_OESEL(x)                       (((uint32_t)(((uint32_t)(x)) << USART_CFG_OESEL_SHIFT)) & USART_CFG_OESEL_MASK)
#define USART_CFG_OEPOL_MASK                     (0x200000U)
#define USART_CFG_OEPOL_SHIFT                    (21U)
/*! OEPOL - Output Enable Polarity.
 *  0b0..Low. If selected by OESEL, the output enable is active low.
 *  0b1..High. If selected by OESEL, the output enable is active high.
 */
#define USART_CFG_OEPOL(x)                       (((uint32_t)(((uint32_t)(x)) << USART_CFG_OEPOL_SHIFT)) & USART_CFG_OEPOL_MASK)
#define USART_CFG_RXPOL_MASK                     (0x400000U)
#define USART_CFG_RXPOL_SHIFT                    (22U)
/*! RXPOL - Receive data polarity.
 *  0b0..Standard. The RX signal is used as it arrives from the pin. This means that the RX rest value is 1, start
 *       bit is 0, data is not inverted, and the stop bit is 1.
 *  0b1..Inverted. The RX signal is inverted before being used by the USART. This means that the RX rest value is
 *       0, start bit is 1, data is inverted, and the stop bit is 0.
 */
#define USART_CFG_RXPOL(x)                       (((uint32_t)(((uint32_t)(x)) << USART_CFG_RXPOL_SHIFT)) & USART_CFG_RXPOL_MASK)
#define USART_CFG_TXPOL_MASK                     (0x800000U)
#define USART_CFG_TXPOL_SHIFT                    (23U)
/*! TXPOL - Transmit data polarity.
 *  0b0..Standard. The TX signal is sent out without change. This means that the TX rest value is 1, start bit is
 *       0, data is not inverted, and the stop bit is 1.
 *  0b1..Inverted. The TX signal is inverted by the USART before being sent out. This means that the TX rest value
 *       is 0, start bit is 1, data is inverted, and the stop bit is 0.
 */
#define USART_CFG_TXPOL(x)                       (((uint32_t)(((uint32_t)(x)) << USART_CFG_TXPOL_SHIFT)) & USART_CFG_TXPOL_MASK)
/*! @} */

/*! @name CTL - USART Control register. USART control settings that are more likely to change during operation. */
/*! @{ */
#define USART_CTL_TXBRKEN_MASK                   (0x2U)
#define USART_CTL_TXBRKEN_SHIFT                  (1U)
/*! TXBRKEN - Break Enable.
 *  0b0..Normal operation.
 *  0b1..Continuous break. Continuous break is sent immediately when this bit is set, and remains until this bit
 *       is cleared. A break may be sent without danger of corrupting any currently transmitting character if the
 *       transmitter is first disabled (TXDIS in CTL is set) and then waiting for the transmitter to be disabled
 *       (TXDISINT in STAT = 1) before writing 1 to TXBRKEN.
 */
#define USART_CTL_TXBRKEN(x)                     (((uint32_t)(((uint32_t)(x)) << USART_CTL_TXBRKEN_SHIFT)) & USART_CTL_TXBRKEN_MASK)
#define USART_CTL_ADDRDET_MASK                   (0x4U)
#define USART_CTL_ADDRDET_SHIFT                  (2U)
/*! ADDRDET - Enable address detect mode.
 *  0b0..Disabled. The USART presents all incoming data.
 *  0b1..Enabled. The USART receiver ignores incoming data that does not have the most significant bit of the data
 *       (typically the 9th bit) = 1. When the data MSB bit = 1, the receiver treats the incoming data normally,
 *       generating a received data interrupt. Software can then check the data to see if this is an address that
 *       should be handled. If it is, the ADDRDET bit is cleared by software and further incoming data is handled
 *       normally.
 */
#define USART_CTL_ADDRDET(x)                     (((uint32_t)(((uint32_t)(x)) << USART_CTL_ADDRDET_SHIFT)) & USART_CTL_ADDRDET_MASK)
#define USART_CTL_TXDIS_MASK                     (0x40U)
#define USART_CTL_TXDIS_SHIFT                    (6U)
/*! TXDIS - Transmit Disable.
 *  0b0..Not disabled. USART transmitter is not disabled.
 *  0b1..Disabled. USART transmitter is disabled after any character currently being transmitted is complete. This
 *       feature can be used to facilitate software flow control.
 */
#define USART_CTL_TXDIS(x)                       (((uint32_t)(((uint32_t)(x)) << USART_CTL_TXDIS_SHIFT)) & USART_CTL_TXDIS_MASK)
#define USART_CTL_CC_MASK                        (0x100U)
#define USART_CTL_CC_SHIFT                       (8U)
/*! CC - Continuous Clock generation. By default, SCLK is only output while data is being transmitted in synchronous mode.
 *  0b0..Clock on character. In synchronous mode, SCLK cycles only when characters are being sent on Un_TXD or to
 *       complete a character that is being received.
 *  0b1..Continuous clock. SCLK runs continuously in synchronous mode, allowing characters to be received on
 *       Un_RxD independently from transmission on Un_TXD).
 */
#define USART_CTL_CC(x)                          (((uint32_t)(((uint32_t)(x)) << USART_CTL_CC_SHIFT)) & USART_CTL_CC_MASK)
#define USART_CTL_CLRCCONRX_MASK                 (0x200U)
#define USART_CTL_CLRCCONRX_SHIFT                (9U)
/*! CLRCCONRX - Clear Continuous Clock.
 *  0b0..No effect. No effect on the CC bit.
 *  0b1..Auto-clear. The CC bit is automatically cleared when a complete character has been received. This bit is cleared at the same time.
 */
#define USART_CTL_CLRCCONRX(x)                   (((uint32_t)(((uint32_t)(x)) << USART_CTL_CLRCCONRX_SHIFT)) & USART_CTL_CLRCCONRX_MASK)
#define USART_CTL_AUTOBAUD_MASK                  (0x10000U)
#define USART_CTL_AUTOBAUD_SHIFT                 (16U)
/*! AUTOBAUD - Autobaud enable.
 *  0b0..Disabled. USART is in normal operating mode.
 *  0b1..Enabled. USART is in autobaud mode. This bit should only be set when the USART receiver is idle. The
 *       first start bit of RX is measured and used the update the BRG register to match the received data rate.
 *       AUTOBAUD is cleared once this process is complete, or if there is an AERR.
 */
#define USART_CTL_AUTOBAUD(x)                    (((uint32_t)(((uint32_t)(x)) << USART_CTL_AUTOBAUD_SHIFT)) & USART_CTL_AUTOBAUD_MASK)
/*! @} */

/*! @name STAT - USART Status register. The complete status value can be read here. Writing ones clears some bits in the register. Some bits can be cleared by writing a 1 to them. */
/*! @{ */
#define USART_STAT_RXRDY_MASK                    (0x1U)
#define USART_STAT_RXRDY_SHIFT                   (0U)
/*! RXRDY - Receiver Ready flag. When 1, indicates that data is available to be read from the
 *    receiver buffer. Cleared after a read of the RXDAT or RXDATSTAT registers.
 */
#define USART_STAT_RXRDY(x)                      (((uint32_t)(((uint32_t)(x)) << USART_STAT_RXRDY_SHIFT)) & USART_STAT_RXRDY_MASK)
#define USART_STAT_RXIDLE_MASK                   (0x2U)
#define USART_STAT_RXIDLE_SHIFT                  (1U)
/*! RXIDLE - Receiver Idle. When 0, indicates that the receiver is currently in the process of
 *    receiving data. When 1, indicates that the receiver is not currently in the process of receiving
 *    data.
 */
#define USART_STAT_RXIDLE(x)                     (((uint32_t)(((uint32_t)(x)) << USART_STAT_RXIDLE_SHIFT)) & USART_STAT_RXIDLE_MASK)
#define USART_STAT_TXRDY_MASK                    (0x4U)
#define USART_STAT_TXRDY_SHIFT                   (2U)
/*! TXRDY - Transmitter Ready flag. When 1, this bit indicates that data may be written to the
 *    transmit buffer. Previous data may still be in the process of being transmitted. Cleared when data
 *    is written to TXDAT. Set when the data is moved from the transmit buffer to the transmit shift
 *    register.
 */
#define USART_STAT_TXRDY(x)                      (((uint32_t)(((uint32_t)(x)) << USART_STAT_TXRDY_SHIFT)) & USART_STAT_TXRDY_MASK)
#define USART_STAT_TXIDLE_MASK                   (0x8U)
#define USART_STAT_TXIDLE_SHIFT                  (3U)
/*! TXIDLE - Transmitter Idle. When 0, indicates that the transmitter is currently in the process of
 *    sending data.When 1, indicate that the transmitter is not currently in the process of sending
 *    data.
 */
#define USART_STAT_TXIDLE(x)                     (((uint32_t)(((uint32_t)(x)) << USART_STAT_TXIDLE_SHIFT)) & USART_STAT_TXIDLE_MASK)
#define USART_STAT_CTS_MASK                      (0x10U)
#define USART_STAT_CTS_SHIFT                     (4U)
/*! CTS - This bit reflects the current state of the CTS signal, regardless of the setting of the
 *    CTSEN bit in the CFG register. This will be the value of the CTS input pin unless loopback mode
 *    is enabled.
 */
#define USART_STAT_CTS(x)                        (((uint32_t)(((uint32_t)(x)) << USART_STAT_CTS_SHIFT)) & USART_STAT_CTS_MASK)
#define USART_STAT_DELTACTS_MASK                 (0x20U)
#define USART_STAT_DELTACTS_SHIFT                (5U)
/*! DELTACTS - This bit is set when a change in the state is detected for the CTS flag above. This bit is cleared by software.
 */
#define USART_STAT_DELTACTS(x)                   (((uint32_t)(((uint32_t)(x)) << USART_STAT_DELTACTS_SHIFT)) & USART_STAT_DELTACTS_MASK)
#define USART_STAT_TXDISSTAT_MASK                (0x40U)
#define USART_STAT_TXDISSTAT_SHIFT               (6U)
/*! TXDISSTAT - Transmitter Disabled Interrupt flag. When 1, this bit indicates that the USART
 *    transmitter is fully idle after being disabled via the TXDIS in the CTL register (TXDIS = 1).
 */
#define USART_STAT_TXDISSTAT(x)                  (((uint32_t)(((uint32_t)(x)) << USART_STAT_TXDISSTAT_SHIFT)) & USART_STAT_TXDISSTAT_MASK)
#define USART_STAT_OVERRUNINT_MASK               (0x100U)
#define USART_STAT_OVERRUNINT_SHIFT              (8U)
/*! OVERRUNINT - Overrun Error interrupt flag. This flag is set when a new character is received
 *    while the receiver buffer is still in use. If this occurs, the newly received character in the
 *    shift register is lost.
 */
#define USART_STAT_OVERRUNINT(x)                 (((uint32_t)(((uint32_t)(x)) << USART_STAT_OVERRUNINT_SHIFT)) & USART_STAT_OVERRUNINT_MASK)
#define USART_STAT_RXBRK_MASK                    (0x400U)
#define USART_STAT_RXBRK_SHIFT                   (10U)
/*! RXBRK - Received Break. This bit reflects the current state of the receiver break detection
 *    logic. It is set when the Un_RXD pin remains low for 16 bit times. Note that FRAMERRINT will also
 *    be set when this condition occurs because the stop bit(s) for the character would be missing.
 *    RXBRK is cleared when the Un_RXD pin goes high.
 */
#define USART_STAT_RXBRK(x)                      (((uint32_t)(((uint32_t)(x)) << USART_STAT_RXBRK_SHIFT)) & USART_STAT_RXBRK_MASK)
#define USART_STAT_DELTARXBRK_MASK               (0x800U)
#define USART_STAT_DELTARXBRK_SHIFT              (11U)
/*! DELTARXBRK - This bit is set when a change in the state of receiver break detection occurs.Cleared by software.
 */
#define USART_STAT_DELTARXBRK(x)                 (((uint32_t)(((uint32_t)(x)) << USART_STAT_DELTARXBRK_SHIFT)) & USART_STAT_DELTARXBRK_MASK)
#define USART_STAT_START_MASK                    (0x1000U)
#define USART_STAT_START_SHIFT                   (12U)
/*! START - This bit is set when a start is detected on the receiver input. Its purpose is primarily
 *    to allow wake-up from Deep-sleep or Power-down mode immediately when a start is detected.
 *    Cleared by software.
 */
#define USART_STAT_START(x)                      (((uint32_t)(((uint32_t)(x)) << USART_STAT_START_SHIFT)) & USART_STAT_START_MASK)
#define USART_STAT_FRAMERRINT_MASK               (0x2000U)
#define USART_STAT_FRAMERRINT_SHIFT              (13U)
/*! FRAMERRINT - Framing Error interrupt flag. This flag is set when a character is received with a
 *    missing stop bit at the expected location. This could be an indication of a baud rate or
 *    configuration mismatch with the transmitting source.
 */
#define USART_STAT_FRAMERRINT(x)                 (((uint32_t)(((uint32_t)(x)) << USART_STAT_FRAMERRINT_SHIFT)) & USART_STAT_FRAMERRINT_MASK)
#define USART_STAT_PARITYERRINT_MASK             (0x4000U)
#define USART_STAT_PARITYERRINT_SHIFT            (14U)
/*! PARITYERRINT - Parity Error interrupt flag. This flag is set when a parity error is detected in a received character.
 */
#define USART_STAT_PARITYERRINT(x)               (((uint32_t)(((uint32_t)(x)) << USART_STAT_PARITYERRINT_SHIFT)) & USART_STAT_PARITYERRINT_MASK)
#define USART_STAT_RXNOISEINT_MASK               (0x8000U)
#define USART_STAT_RXNOISEINT_SHIFT              (15U)
/*! RXNOISEINT - Received Noise interrupt flag. Three samples of received data are taken in order to
 *    determine the value of each received data bit, except in synchronous mode. This acts as a
 *    noise filter if one sample disagrees. This flag is set when a received data bit contains one
 *    disagreeing sample. This could indicate line noise, a baud rate or character format mismatch, or
 *    loss of synchronization during data reception.
 */
#define USART_STAT_RXNOISEINT(x)                 (((uint32_t)(((uint32_t)(x)) << USART_STAT_RXNOISEINT_SHIFT)) & USART_STAT_RXNOISEINT_MASK)
#define USART_STAT_ABERR_MASK                    (0x10000U)
#define USART_STAT_ABERR_SHIFT                   (16U)
/*! ABERR - Autobaud Error. An autobaud error can occur if the BRG counts to its limit before the
 *    end of the start bit that is being measured, essentially an autobaud time-out.
 */
#define USART_STAT_ABERR(x)                      (((uint32_t)(((uint32_t)(x)) << USART_STAT_ABERR_SHIFT)) & USART_STAT_ABERR_MASK)
/*! @} */

/*! @name INTENSET - Interrupt Enable read and Set register. Contains an individual interrupt enable bit for each potential USART interrupt. A complete value may be read from this register. Writing a 1 to any implemented bit position causes that bit to be set. */
/*! @{ */
#define USART_INTENSET_RXRDYEN_MASK              (0x1U)
#define USART_INTENSET_RXRDYEN_SHIFT             (0U)
/*! RXRDYEN - When 1, enables an interrupt when there is a received character available to be read from the RXDAT register.
 */
#define USART_INTENSET_RXRDYEN(x)                (((uint32_t)(((uint32_t)(x)) << USART_INTENSET_RXRDYEN_SHIFT)) & USART_INTENSET_RXRDYEN_MASK)
#define USART_INTENSET_TXRDYEN_MASK              (0x4U)
#define USART_INTENSET_TXRDYEN_SHIFT             (2U)
/*! TXRDYEN - When 1, enables an interrupt when the TXDAT register is available to take another character to transmit.
 */
#define USART_INTENSET_TXRDYEN(x)                (((uint32_t)(((uint32_t)(x)) << USART_INTENSET_TXRDYEN_SHIFT)) & USART_INTENSET_TXRDYEN_MASK)
#define USART_INTENSET_TXIDLEEN_MASK             (0x8U)
#define USART_INTENSET_TXIDLEEN_SHIFT            (3U)
/*! TXIDLEEN - When 1, enables an interrupt when the transmitter becomes idle (TXIDLE = 1).
 */
#define USART_INTENSET_TXIDLEEN(x)               (((uint32_t)(((uint32_t)(x)) << USART_INTENSET_TXIDLEEN_SHIFT)) & USART_INTENSET_TXIDLEEN_MASK)
#define USART_INTENSET_DELTACTSEN_MASK           (0x20U)
#define USART_INTENSET_DELTACTSEN_SHIFT          (5U)
/*! DELTACTSEN - When 1, enables an interrupt when there is a change in the state of the CTS input.
 */
#define USART_INTENSET_DELTACTSEN(x)             (((uint32_t)(((uint32_t)(x)) << USART_INTENSET_DELTACTSEN_SHIFT)) & USART_INTENSET_DELTACTSEN_MASK)
#define USART_INTENSET_TXDISEN_MASK              (0x40U)
#define USART_INTENSET_TXDISEN_SHIFT             (6U)
/*! TXDISEN - When 1, enables an interrupt when the transmitter is fully disabled as indicated by
 *    the TXDISINT flag in STAT. See description of the TXDISINT bit for details.
 */
#define USART_INTENSET_TXDISEN(x)                (((uint32_t)(((uint32_t)(x)) << USART_INTENSET_TXDISEN_SHIFT)) & USART_INTENSET_TXDISEN_MASK)
#define USART_INTENSET_OVERRUNEN_MASK            (0x100U)
#define USART_INTENSET_OVERRUNEN_SHIFT           (8U)
/*! OVERRUNEN - When 1, enables an interrupt when an overrun error occurred.
 */
#define USART_INTENSET_OVERRUNEN(x)              (((uint32_t)(((uint32_t)(x)) << USART_INTENSET_OVERRUNEN_SHIFT)) & USART_INTENSET_OVERRUNEN_MASK)
#define USART_INTENSET_DELTARXBRKEN_MASK         (0x800U)
#define USART_INTENSET_DELTARXBRKEN_SHIFT        (11U)
/*! DELTARXBRKEN - When 1, enables an interrupt when a change of state has occurred in the detection
 *    of a received break condition (break condition asserted or deasserted).
 */
#define USART_INTENSET_DELTARXBRKEN(x)           (((uint32_t)(((uint32_t)(x)) << USART_INTENSET_DELTARXBRKEN_SHIFT)) & USART_INTENSET_DELTARXBRKEN_MASK)
#define USART_INTENSET_STARTEN_MASK              (0x1000U)
#define USART_INTENSET_STARTEN_SHIFT             (12U)
/*! STARTEN - When 1, enables an interrupt when a received start bit has been detected.
 */
#define USART_INTENSET_STARTEN(x)                (((uint32_t)(((uint32_t)(x)) << USART_INTENSET_STARTEN_SHIFT)) & USART_INTENSET_STARTEN_MASK)
#define USART_INTENSET_FRAMERREN_MASK            (0x2000U)
#define USART_INTENSET_FRAMERREN_SHIFT           (13U)
/*! FRAMERREN - When 1, enables an interrupt when a framing error has been detected.
 */
#define USART_INTENSET_FRAMERREN(x)              (((uint32_t)(((uint32_t)(x)) << USART_INTENSET_FRAMERREN_SHIFT)) & USART_INTENSET_FRAMERREN_MASK)
#define USART_INTENSET_PARITYERREN_MASK          (0x4000U)
#define USART_INTENSET_PARITYERREN_SHIFT         (14U)
/*! PARITYERREN - When 1, enables an interrupt when a parity error has been detected.
 */
#define USART_INTENSET_PARITYERREN(x)            (((uint32_t)(((uint32_t)(x)) << USART_INTENSET_PARITYERREN_SHIFT)) & USART_INTENSET_PARITYERREN_MASK)
#define USART_INTENSET_RXNOISEEN_MASK            (0x8000U)
#define USART_INTENSET_RXNOISEEN_SHIFT           (15U)
/*! RXNOISEEN - When 1, enables an interrupt when noise is detected.
 */
#define USART_INTENSET_RXNOISEEN(x)              (((uint32_t)(((uint32_t)(x)) << USART_INTENSET_RXNOISEEN_SHIFT)) & USART_INTENSET_RXNOISEEN_MASK)
#define USART_INTENSET_ABERREN_MASK              (0x10000U)
#define USART_INTENSET_ABERREN_SHIFT             (16U)
/*! ABERREN - When 1, enables an interrupt when an autobaud error occurs.
 */
#define USART_INTENSET_ABERREN(x)                (((uint32_t)(((uint32_t)(x)) << USART_INTENSET_ABERREN_SHIFT)) & USART_INTENSET_ABERREN_MASK)
/*! @} */

/*! @name INTENCLR - Interrupt Enable Clear register. Allows clearing any combination of bits in the INTENSET register. Writing a 1 to any implemented bit position causes the corresponding bit to be cleared. */
/*! @{ */
#define USART_INTENCLR_RXRDYCLR_MASK             (0x1U)
#define USART_INTENCLR_RXRDYCLR_SHIFT            (0U)
/*! RXRDYCLR - Writing 1 clears the corresponding bit in the INTENSET register.
 */
#define USART_INTENCLR_RXRDYCLR(x)               (((uint32_t)(((uint32_t)(x)) << USART_INTENCLR_RXRDYCLR_SHIFT)) & USART_INTENCLR_RXRDYCLR_MASK)
#define USART_INTENCLR_TXRDYCLR_MASK             (0x4U)
#define USART_INTENCLR_TXRDYCLR_SHIFT            (2U)
/*! TXRDYCLR - Writing 1 clears the corresponding bit in the INTENSET register.
 */
#define USART_INTENCLR_TXRDYCLR(x)               (((uint32_t)(((uint32_t)(x)) << USART_INTENCLR_TXRDYCLR_SHIFT)) & USART_INTENCLR_TXRDYCLR_MASK)
#define USART_INTENCLR_TXIDLECLR_MASK            (0x8U)
#define USART_INTENCLR_TXIDLECLR_SHIFT           (3U)
/*! TXIDLECLR - Writing 1 clears the corresponding bit in the INTENSET register.
 */
#define USART_INTENCLR_TXIDLECLR(x)              (((uint32_t)(((uint32_t)(x)) << USART_INTENCLR_TXIDLECLR_SHIFT)) & USART_INTENCLR_TXIDLECLR_MASK)
#define USART_INTENCLR_DELTACTSCLR_MASK          (0x20U)
#define USART_INTENCLR_DELTACTSCLR_SHIFT         (5U)
/*! DELTACTSCLR - Writing 1 clears the corresponding bit in the INTENSET register.
 */
#define USART_INTENCLR_DELTACTSCLR(x)            (((uint32_t)(((uint32_t)(x)) << USART_INTENCLR_DELTACTSCLR_SHIFT)) & USART_INTENCLR_DELTACTSCLR_MASK)
#define USART_INTENCLR_TXDISINTCLR_MASK          (0x40U)
#define USART_INTENCLR_TXDISINTCLR_SHIFT         (6U)
/*! TXDISINTCLR - Writing 1 clears the corresponding bit in the INTENSET register.
 */
#define USART_INTENCLR_TXDISINTCLR(x)            (((uint32_t)(((uint32_t)(x)) << USART_INTENCLR_TXDISINTCLR_SHIFT)) & USART_INTENCLR_TXDISINTCLR_MASK)
#define USART_INTENCLR_OVERRUNCLR_MASK           (0x100U)
#define USART_INTENCLR_OVERRUNCLR_SHIFT          (8U)
/*! OVERRUNCLR - Writing 1 clears the corresponding bit in the INTENSET register.
 */
#define USART_INTENCLR_OVERRUNCLR(x)             (((uint32_t)(((uint32_t)(x)) << USART_INTENCLR_OVERRUNCLR_SHIFT)) & USART_INTENCLR_OVERRUNCLR_MASK)
#define USART_INTENCLR_DELTARXBRKCLR_MASK        (0x800U)
#define USART_INTENCLR_DELTARXBRKCLR_SHIFT       (11U)
/*! DELTARXBRKCLR - Writing 1 clears the corresponding bit in the INTENSET register.
 */
#define USART_INTENCLR_DELTARXBRKCLR(x)          (((uint32_t)(((uint32_t)(x)) << USART_INTENCLR_DELTARXBRKCLR_SHIFT)) & USART_INTENCLR_DELTARXBRKCLR_MASK)
#define USART_INTENCLR_STARTCLR_MASK             (0x1000U)
#define USART_INTENCLR_STARTCLR_SHIFT            (12U)
/*! STARTCLR - Writing 1 clears the corresponding bit in the INTENSET register.
 */
#define USART_INTENCLR_STARTCLR(x)               (((uint32_t)(((uint32_t)(x)) << USART_INTENCLR_STARTCLR_SHIFT)) & USART_INTENCLR_STARTCLR_MASK)
#define USART_INTENCLR_FRAMERRCLR_MASK           (0x2000U)
#define USART_INTENCLR_FRAMERRCLR_SHIFT          (13U)
/*! FRAMERRCLR - Writing 1 clears the corresponding bit in the INTENSET register.
 */
#define USART_INTENCLR_FRAMERRCLR(x)             (((uint32_t)(((uint32_t)(x)) << USART_INTENCLR_FRAMERRCLR_SHIFT)) & USART_INTENCLR_FRAMERRCLR_MASK)
#define USART_INTENCLR_PARITYERRCLR_MASK         (0x4000U)
#define USART_INTENCLR_PARITYERRCLR_SHIFT        (14U)
/*! PARITYERRCLR - Writing 1 clears the corresponding bit in the INTENSET register.
 */
#define USART_INTENCLR_PARITYERRCLR(x)           (((uint32_t)(((uint32_t)(x)) << USART_INTENCLR_PARITYERRCLR_SHIFT)) & USART_INTENCLR_PARITYERRCLR_MASK)
#define USART_INTENCLR_RXNOISECLR_MASK           (0x8000U)
#define USART_INTENCLR_RXNOISECLR_SHIFT          (15U)
/*! RXNOISECLR - Writing 1 clears the corresponding bit in the INTENSET register.
 */
#define USART_INTENCLR_RXNOISECLR(x)             (((uint32_t)(((uint32_t)(x)) << USART_INTENCLR_RXNOISECLR_SHIFT)) & USART_INTENCLR_RXNOISECLR_MASK)
#define USART_INTENCLR_ABERRCLR_MASK             (0x10000U)
#define USART_INTENCLR_ABERRCLR_SHIFT            (16U)
/*! ABERRCLR - Writing 1 clears the corresponding bit in the INTENSET register.
 */
#define USART_INTENCLR_ABERRCLR(x)               (((uint32_t)(((uint32_t)(x)) << USART_INTENCLR_ABERRCLR_SHIFT)) & USART_INTENCLR_ABERRCLR_MASK)
/*! @} */

/*! @name RXDAT - Receiver Data register. Contains the last character received. */
/*! @{ */
#define USART_RXDAT_RXDAT_MASK                   (0x1FFU)
#define USART_RXDAT_RXDAT_SHIFT                  (0U)
/*! RXDAT - The USART Receiver Data register contains the next received character. The number of
 *    bits that are relevant depends on the USART configuration settings.
 */
#define USART_RXDAT_RXDAT(x)                     (((uint32_t)(((uint32_t)(x)) << USART_RXDAT_RXDAT_SHIFT)) & USART_RXDAT_RXDAT_MASK)
/*! @} */

/*! @name RXDATSTAT - Receiver Data with Status register. Combines the last character received with the current USART receive status. Allows DMA or software to recover incoming data and status together. */
/*! @{ */
#define USART_RXDATSTAT_RXDAT_MASK               (0x1FFU)
#define USART_RXDATSTAT_RXDAT_SHIFT              (0U)
/*! RXDAT - The USART Receiver Data register contains the next received character. The number of
 *    bits that are relevant depends on the USART configuration settings.
 */
#define USART_RXDATSTAT_RXDAT(x)                 (((uint32_t)(((uint32_t)(x)) << USART_RXDATSTAT_RXDAT_SHIFT)) & USART_RXDATSTAT_RXDAT_MASK)
#define USART_RXDATSTAT_FRAMERR_MASK             (0x2000U)
#define USART_RXDATSTAT_FRAMERR_SHIFT            (13U)
/*! FRAMERR - Framing Error status flag. This bit is valid when there is a character to be read in
 *    the RXDAT register and reflects the status of that character. This bit will set when the
 *    character in RXDAT was received with a missing stop bit at the expected location. This could be an
 *    indication of a baud rate or configuration mismatch with the transmitting source.
 */
#define USART_RXDATSTAT_FRAMERR(x)               (((uint32_t)(((uint32_t)(x)) << USART_RXDATSTAT_FRAMERR_SHIFT)) & USART_RXDATSTAT_FRAMERR_MASK)
#define USART_RXDATSTAT_PARITYERR_MASK           (0x4000U)
#define USART_RXDATSTAT_PARITYERR_SHIFT          (14U)
/*! PARITYERR - Parity Error status flag. This bit is valid when there is a character to be read in
 *    the RXDAT register and reflects the status of that character. This bit will be set when a
 *    parity error is detected in a received character.
 */
#define USART_RXDATSTAT_PARITYERR(x)             (((uint32_t)(((uint32_t)(x)) << USART_RXDATSTAT_PARITYERR_SHIFT)) & USART_RXDATSTAT_PARITYERR_MASK)
#define USART_RXDATSTAT_RXNOISE_MASK             (0x8000U)
#define USART_RXDATSTAT_RXNOISE_SHIFT            (15U)
/*! RXNOISE - Received Noise flag.
 */
#define USART_RXDATSTAT_RXNOISE(x)               (((uint32_t)(((uint32_t)(x)) << USART_RXDATSTAT_RXNOISE_SHIFT)) & USART_RXDATSTAT_RXNOISE_MASK)
/*! @} */

/*! @name TXDAT - Transmit Data register. Data to be transmitted is written here. */
/*! @{ */
#define USART_TXDAT_TXDAT_MASK                   (0x1FFU)
#define USART_TXDAT_TXDAT_SHIFT                  (0U)
/*! TXDAT - Writing to the USART Transmit Data Register causes the data to be transmitted as soon as
 *    the transmit shift register is available and any conditions for transmitting data are met:
 *    CTS low (if CTSEN bit = 1), TXDIS bit = 0.
 */
#define USART_TXDAT_TXDAT(x)                     (((uint32_t)(((uint32_t)(x)) << USART_TXDAT_TXDAT_SHIFT)) & USART_TXDAT_TXDAT_MASK)
/*! @} */

/*! @name BRG - Baud Rate Generator register. 16-bit integer baud rate divisor value. */
/*! @{ */
#define USART_BRG_BRGVAL_MASK                    (0xFFFFU)
#define USART_BRG_BRGVAL_SHIFT                   (0U)
/*! BRGVAL - This value is used to divide the USART input clock to determine the baud rate, based on
 *    the input clock from the FRG. 0 = FCLK is used directly by the USART function. 1 = FCLK is
 *    divided by 2 before use by the USART function. 2 = FCLK is divided by 3 before use by the USART
 *    function. 0xFFFF = FCLK is divided by 65,536 before use by the USART function.
 */
#define USART_BRG_BRGVAL(x)                      (((uint32_t)(((uint32_t)(x)) << USART_BRG_BRGVAL_SHIFT)) & USART_BRG_BRGVAL_MASK)
/*! @} */

/*! @name INTSTAT - Interrupt status register. Reflects interrupts that are currently enabled. */
/*! @{ */
#define USART_INTSTAT_RXRDY_MASK                 (0x1U)
#define USART_INTSTAT_RXRDY_SHIFT                (0U)
/*! RXRDY - Receiver Ready flag.
 */
#define USART_INTSTAT_RXRDY(x)                   (((uint32_t)(((uint32_t)(x)) << USART_INTSTAT_RXRDY_SHIFT)) & USART_INTSTAT_RXRDY_MASK)
#define USART_INTSTAT_TXRDY_MASK                 (0x4U)
#define USART_INTSTAT_TXRDY_SHIFT                (2U)
/*! TXRDY - Transmitter Ready flag.
 */
#define USART_INTSTAT_TXRDY(x)                   (((uint32_t)(((uint32_t)(x)) << USART_INTSTAT_TXRDY_SHIFT)) & USART_INTSTAT_TXRDY_MASK)
#define USART_INTSTAT_TXIDLE_MASK                (0x8U)
#define USART_INTSTAT_TXIDLE_SHIFT               (3U)
/*! TXIDLE - Transmitter idle status.
 */
#define USART_INTSTAT_TXIDLE(x)                  (((uint32_t)(((uint32_t)(x)) << USART_INTSTAT_TXIDLE_SHIFT)) & USART_INTSTAT_TXIDLE_MASK)
#define USART_INTSTAT_DELTACTS_MASK              (0x20U)
#define USART_INTSTAT_DELTACTS_SHIFT             (5U)
/*! DELTACTS - This bit is set when a change in the state of the CTS input is detected.
 */
#define USART_INTSTAT_DELTACTS(x)                (((uint32_t)(((uint32_t)(x)) << USART_INTSTAT_DELTACTS_SHIFT)) & USART_INTSTAT_DELTACTS_MASK)
#define USART_INTSTAT_TXDISINT_MASK              (0x40U)
#define USART_INTSTAT_TXDISINT_SHIFT             (6U)
/*! TXDISINT - Transmitter Disabled Interrupt flag.
 */
#define USART_INTSTAT_TXDISINT(x)                (((uint32_t)(((uint32_t)(x)) << USART_INTSTAT_TXDISINT_SHIFT)) & USART_INTSTAT_TXDISINT_MASK)
#define USART_INTSTAT_OVERRUNINT_MASK            (0x100U)
#define USART_INTSTAT_OVERRUNINT_SHIFT           (8U)
/*! OVERRUNINT - Overrun Error interrupt flag.
 */
#define USART_INTSTAT_OVERRUNINT(x)              (((uint32_t)(((uint32_t)(x)) << USART_INTSTAT_OVERRUNINT_SHIFT)) & USART_INTSTAT_OVERRUNINT_MASK)
#define USART_INTSTAT_DELTARXBRK_MASK            (0x800U)
#define USART_INTSTAT_DELTARXBRK_SHIFT           (11U)
/*! DELTARXBRK - This bit is set when a change in the state of receiver break detection occurs.
 */
#define USART_INTSTAT_DELTARXBRK(x)              (((uint32_t)(((uint32_t)(x)) << USART_INTSTAT_DELTARXBRK_SHIFT)) & USART_INTSTAT_DELTARXBRK_MASK)
#define USART_INTSTAT_START_MASK                 (0x1000U)
#define USART_INTSTAT_START_SHIFT                (12U)
/*! START - This bit is set when a start is detected on the receiver input.
 */
#define USART_INTSTAT_START(x)                   (((uint32_t)(((uint32_t)(x)) << USART_INTSTAT_START_SHIFT)) & USART_INTSTAT_START_MASK)
#define USART_INTSTAT_FRAMERRINT_MASK            (0x2000U)
#define USART_INTSTAT_FRAMERRINT_SHIFT           (13U)
/*! FRAMERRINT - Framing Error interrupt flag.
 */
#define USART_INTSTAT_FRAMERRINT(x)              (((uint32_t)(((uint32_t)(x)) << USART_INTSTAT_FRAMERRINT_SHIFT)) & USART_INTSTAT_FRAMERRINT_MASK)
#define USART_INTSTAT_PARITYERRINT_MASK          (0x4000U)
#define USART_INTSTAT_PARITYERRINT_SHIFT         (14U)
/*! PARITYERRINT - Parity Error interrupt flag.
 */
#define USART_INTSTAT_PARITYERRINT(x)            (((uint32_t)(((uint32_t)(x)) << USART_INTSTAT_PARITYERRINT_SHIFT)) & USART_INTSTAT_PARITYERRINT_MASK)
#define USART_INTSTAT_RXNOISEINT_MASK            (0x8000U)
#define USART_INTSTAT_RXNOISEINT_SHIFT           (15U)
/*! RXNOISEINT - Received Noise interrupt flag.
 */
#define USART_INTSTAT_RXNOISEINT(x)              (((uint32_t)(((uint32_t)(x)) << USART_INTSTAT_RXNOISEINT_SHIFT)) & USART_INTSTAT_RXNOISEINT_MASK)
#define USART_INTSTAT_ABERR_MASK                 (0x10000U)
#define USART_INTSTAT_ABERR_SHIFT                (16U)
/*! ABERR - Autobaud Error flag.
 */
#define USART_INTSTAT_ABERR(x)                   (((uint32_t)(((uint32_t)(x)) << USART_INTSTAT_ABERR_SHIFT)) & USART_INTSTAT_ABERR_MASK)
/*! @} */

/*! @name OSR - Oversample selection register for asynchronous communication. */
/*! @{ */
#define USART_OSR_OSRVAL_MASK                    (0xFU)
#define USART_OSR_OSRVAL_SHIFT                   (0U)
/*! OSRVAL - Oversample Selection Value. 0 to 3 = not supported 0x4 = 5 function clocks are used to
 *    transmit and receive each data bit. 0x5 = 6 function clocks are used to transmit and receive
 *    each data bit. 0xF= 16 function clocks are used to transmit and receive each data bit.
 */
#define USART_OSR_OSRVAL(x)                      (((uint32_t)(((uint32_t)(x)) << USART_OSR_OSRVAL_SHIFT)) & USART_OSR_OSRVAL_MASK)
/*! @} */

/*! @name ADDR - Address register for automatic address matching. */
/*! @{ */
#define USART_ADDR_ADDRESS_MASK                  (0xFFU)
#define USART_ADDR_ADDRESS_SHIFT                 (0U)
/*! ADDRESS - 8-bit address used with automatic address matching. Used when address detection is
 *    enabled (ADDRDET in CTL = 1) and automatic address matching is enabled (AUTOADDR in CFG = 1).
 */
#define USART_ADDR_ADDRESS(x)                    (((uint32_t)(((uint32_t)(x)) << USART_ADDR_ADDRESS_SHIFT)) & USART_ADDR_ADDRESS_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group USART_Register_Masks */


/* USART - Peripheral instance base addresses */
/** Peripheral USART0 base address */
#define USART0_BASE                              (0x40064000u)
/** Peripheral USART0 base pointer */
#define USART0                                   ((USART_Type *)USART0_BASE)
/** Peripheral USART1 base address */
#define USART1_BASE                              (0x40068000u)
/** Peripheral USART1 base pointer */
#define USART1                                   ((USART_Type *)USART1_BASE)
/** Peripheral USART2 base address */
#define USART2_BASE                              (0x4006C000u)
/** Peripheral USART2 base pointer */
#define USART2                                   ((USART_Type *)USART2_BASE)
/** Peripheral USART3 base address */
#define USART3_BASE                              (0x40070000u)
/** Peripheral USART3 base pointer */
#define USART3                                   ((USART_Type *)USART3_BASE)
/** Peripheral USART4 base address */
#define USART4_BASE                              (0x40074000u)
/** Peripheral USART4 base pointer */
#define USART4                                   ((USART_Type *)USART4_BASE)
/** Array initializer of USART peripheral base addresses */
#define USART_BASE_ADDRS                         { USART0_BASE, USART1_BASE, USART2_BASE, USART3_BASE, USART4_BASE }
/** Array initializer of USART peripheral base pointers */
#define USART_BASE_PTRS                          { USART0, USART1, USART2, USART3, USART4 }
/** Interrupt vectors for the USART peripheral type */
#define USART_IRQS                               { USART0_IRQn, USART1_IRQn, USART2_IRQn, PIN_INT6_USART3_IRQn, PIN_INT7_USART4_IRQn }

/*!
 * @}
 */ /* end of group USART_Peripheral_Access_Layer */

/**
  \brief  Structure type to access the Pin Interrupt.
 */
/** PIN_INTERRUPT - Register Layout Typedef */
typedef struct {
	__IO uint32_t ISEL;		/**< ASSIGN LEVEL SENSITIVE OR EDGE SENSITIVE*/

	__IO uint32_t IENR;		/**< Enables rising-edge interrupts.*/
	__O  uint32_t SIENR;	/**< Write to enable rising-edge interrupts*/
	__O  uint32_t CIENR;	/**< Write to disable rising-edge interrupts.*/

	__IO uint32_t IENF;		/**< Enables falling-edge interrupts */
	__O  uint32_t SIENF;	/**< Write to enable falling-edge interrupts.*/
	__O  uint32_t CIENF;	/**< Write to disable falling-edge interrupts*/

	__IO uint32_t RISE;		/**< GIVES WHITCH PORTS HAVE DETECTED A RISING EDGE*/
	__IO uint32_t FALL;		/**< GIVES WHITCH PORTS HAVE DETECTED A FALLING EDGE*/
	__IO uint32_t IST;		/**< GIVES WITCH PINES HAVE A INTERRUPT REQUEST*/

	__IO uint32_t PMCTRL;	/**< Pattern match interrupt control register */
	__IO uint32_t PMSRC;	/**< Pattern match interrupt bit-slice source register*/
	__IO uint32_t PMCFG;	/**< Pattern match interrupt bit slice configuration register*/
} PIN_INTERRUPT_Type;		/** Registers for the PIN_INTERRUPT */

#define PIN_INTERRUPT 	((PIN_INTERRUPT_Type *) 0xA0004000UL)

/* ----------------------------------------------------------------------------
   -- CTIMER Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CTIMER_Peripheral_Access_Layer CTIMER Peripheral Access Layer
 * @{
 */

/** CTIMER - Register Layout Typedef */
typedef struct {
  __IO uint32_t IR;                                /**< Interrupt Register. The IR can be written to clear interrupts. The IR can be read to identify which of eight possible interrupt sources are pending., offset: 0x0 */
  __IO uint32_t TCR;                               /**< Timer Control Register. The TCR is used to control the Timer Counter functions. The Timer Counter can be disabled or reset through the TCR., offset: 0x4 */
  __IO uint32_t TC;                                /**< Timer Counter. The 32 bit TC is incremented every PR+1 cycles of the APB bus clock. The TC is controlled through the TCR., offset: 0x8 */
  __IO uint32_t PR;                                /**< Prescale Register. When the Prescale Counter (PC) is equal to this value, the next clock increments the TC and clears the PC., offset: 0xC */
  __IO uint32_t PC;                                /**< Prescale Counter. The 32 bit PC is a counter which is incremented to the value stored in PR. When the value in PR is reached, the TC is incremented and the PC is cleared. The PC is observable and controllable through the bus interface., offset: 0x10 */
  __IO uint32_t MCR;                               /**< Match Control Register. The MCR is used to control if an interrupt is generated and if the TC is reset when a Match occurs., offset: 0x14 */
  __IO uint32_t MR[4];                             /**< Match Register . MR can be enabled through the MCR to reset the TC, stop both the TC and PC, and/or generate an interrupt every time MR matches the TC., array offset: 0x18, array step: 0x4 */
  __IO uint32_t CCR;                               /**< Capture Control Register. The CCR controls which edges of the capture inputs are used to load the Capture Registers and whether or not an interrupt is generated when a capture takes place., offset: 0x28 */
  __I  uint32_t CR[4];                             /**< Capture Register . CR is loaded with the value of TC when there is an event on the CAPn. input., array offset: 0x2C, array step: 0x4 */
  __IO uint32_t EMR;                               /**< External Match Register. The EMR controls the match function and the external match pins., offset: 0x3C */
       uint8_t RESERVED_0[48];
  __IO uint32_t CTCR;                              /**< Count Control Register. The CTCR selects between Timer and Counter mode, and in Counter mode selects the signal and edge(s) for counting., offset: 0x70 */
  __IO uint32_t PWMC;                              /**< PWM Control Register. The PWMCON enables PWM mode for the external match pins., offset: 0x74 */
  __IO uint32_t MSR[4];                            /**< Match Shadow Register . If enabled, the Match Register will be automatically reloaded with the contents of this register whenever the TC is reset to zero., array offset: 0x78, array step: 0x4 */
} CTIMER_Type;

/* ----------------------------------------------------------------------------
   -- CTIMER Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CTIMER_Register_Masks CTIMER Register Masks
 * @{
 */

/*! @name IR - Interrupt Register. The IR can be written to clear interrupts. The IR can be read to identify which of eight possible interrupt sources are pending. */
/*! @{ */
#define CTIMER_IR_MR0INT_MASK                    (0x1U)
#define CTIMER_IR_MR0INT_SHIFT                   (0U)
/*! MR0INT - Interrupt flag for match channel 0.
 */
#define CTIMER_IR_MR0INT(x)                      (((uint32_t)(((uint32_t)(x)) << CTIMER_IR_MR0INT_SHIFT)) & CTIMER_IR_MR0INT_MASK)
#define CTIMER_IR_MR1INT_MASK                    (0x2U)
#define CTIMER_IR_MR1INT_SHIFT                   (1U)
/*! MR1INT - Interrupt flag for match channel 1.
 */
#define CTIMER_IR_MR1INT(x)                      (((uint32_t)(((uint32_t)(x)) << CTIMER_IR_MR1INT_SHIFT)) & CTIMER_IR_MR1INT_MASK)
#define CTIMER_IR_MR2INT_MASK                    (0x4U)
#define CTIMER_IR_MR2INT_SHIFT                   (2U)
/*! MR2INT - Interrupt flag for match channel 2.
 */
#define CTIMER_IR_MR2INT(x)                      (((uint32_t)(((uint32_t)(x)) << CTIMER_IR_MR2INT_SHIFT)) & CTIMER_IR_MR2INT_MASK)
#define CTIMER_IR_MR3INT_MASK                    (0x8U)
#define CTIMER_IR_MR3INT_SHIFT                   (3U)
/*! MR3INT - Interrupt flag for match channel 3.
 */
#define CTIMER_IR_MR3INT(x)                      (((uint32_t)(((uint32_t)(x)) << CTIMER_IR_MR3INT_SHIFT)) & CTIMER_IR_MR3INT_MASK)
#define CTIMER_IR_CR0INT_MASK                    (0x10U)
#define CTIMER_IR_CR0INT_SHIFT                   (4U)
/*! CR0INT - Interrupt flag for capture channel 0 event.
 */
#define CTIMER_IR_CR0INT(x)                      (((uint32_t)(((uint32_t)(x)) << CTIMER_IR_CR0INT_SHIFT)) & CTIMER_IR_CR0INT_MASK)
#define CTIMER_IR_CR1INT_MASK                    (0x20U)
#define CTIMER_IR_CR1INT_SHIFT                   (5U)
/*! CR1INT - Interrupt flag for capture channel 1 event.
 */
#define CTIMER_IR_CR1INT(x)                      (((uint32_t)(((uint32_t)(x)) << CTIMER_IR_CR1INT_SHIFT)) & CTIMER_IR_CR1INT_MASK)
#define CTIMER_IR_CR2INT_MASK                    (0x40U)
#define CTIMER_IR_CR2INT_SHIFT                   (6U)
/*! CR2INT - Interrupt flag for capture channel 2 event.
 */
#define CTIMER_IR_CR2INT(x)                      (((uint32_t)(((uint32_t)(x)) << CTIMER_IR_CR2INT_SHIFT)) & CTIMER_IR_CR2INT_MASK)
#define CTIMER_IR_CR3INT_MASK                    (0x80U)
#define CTIMER_IR_CR3INT_SHIFT                   (7U)
/*! CR3INT - Interrupt flag for capture channel 3 event.
 */
#define CTIMER_IR_CR3INT(x)                      (((uint32_t)(((uint32_t)(x)) << CTIMER_IR_CR3INT_SHIFT)) & CTIMER_IR_CR3INT_MASK)
/*! @} */

/*! @name TCR - Timer Control Register. The TCR is used to control the Timer Counter functions. The Timer Counter can be disabled or reset through the TCR. */
/*! @{ */
#define CTIMER_TCR_CEN_MASK                      (0x1U)
#define CTIMER_TCR_CEN_SHIFT                     (0U)
/*! CEN - Counter enable.
 *  0b0..Disabled.The counters are disabled.
 *  0b1..Enabled. The Timer Counter and Prescale Counter are enabled.
 */
#define CTIMER_TCR_CEN(x)                        (((uint32_t)(((uint32_t)(x)) << CTIMER_TCR_CEN_SHIFT)) & CTIMER_TCR_CEN_MASK)
#define CTIMER_TCR_CRST_MASK                     (0x2U)
#define CTIMER_TCR_CRST_SHIFT                    (1U)
/*! CRST - Counter reset.
 *  0b0..Disabled. Do nothing.
 *  0b1..Enabled. The Timer Counter and the Prescale Counter are synchronously reset on the next positive edge of
 *       the APB bus clock. The counters remain reset until TCR[1] is returned to zero.
 */
#define CTIMER_TCR_CRST(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_TCR_CRST_SHIFT)) & CTIMER_TCR_CRST_MASK)
/*! @} */

/*! @name TC - Timer Counter. The 32 bit TC is incremented every PR+1 cycles of the APB bus clock. The TC is controlled through the TCR. */
/*! @{ */
#define CTIMER_TC_TCVAL_MASK                     (0xFFFFFFFFU)
#define CTIMER_TC_TCVAL_SHIFT                    (0U)
/*! TCVAL - Timer counter value.
 */
#define CTIMER_TC_TCVAL(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_TC_TCVAL_SHIFT)) & CTIMER_TC_TCVAL_MASK)
/*! @} */

/*! @name PR - Prescale Register. When the Prescale Counter (PC) is equal to this value, the next clock increments the TC and clears the PC. */
/*! @{ */
#define CTIMER_PR_PRVAL_MASK                     (0xFFFFFFFFU)
#define CTIMER_PR_PRVAL_SHIFT                    (0U)
/*! PRVAL - Prescale counter value.
 */
#define CTIMER_PR_PRVAL(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_PR_PRVAL_SHIFT)) & CTIMER_PR_PRVAL_MASK)
/*! @} */

/*! @name PC - Prescale Counter. The 32 bit PC is a counter which is incremented to the value stored in PR. When the value in PR is reached, the TC is incremented and the PC is cleared. The PC is observable and controllable through the bus interface. */
/*! @{ */
#define CTIMER_PC_PCVAL_MASK                     (0xFFFFFFFFU)
#define CTIMER_PC_PCVAL_SHIFT                    (0U)
/*! PCVAL - Prescale counter value.
 */
#define CTIMER_PC_PCVAL(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_PC_PCVAL_SHIFT)) & CTIMER_PC_PCVAL_MASK)
/*! @} */

/*! @name MCR - Match Control Register. The MCR is used to control if an interrupt is generated and if the TC is reset when a Match occurs. */
/*! @{ */
#define CTIMER_MCR_MR0I_MASK                     (0x1U)
#define CTIMER_MCR_MR0I_SHIFT                    (0U)
/*! MR0I - Interrupt on MR0: an interrupt is generated when MR0 matches the value in the TC. 0 = disabled. 1 = enabled.
 */
#define CTIMER_MCR_MR0I(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_MCR_MR0I_SHIFT)) & CTIMER_MCR_MR0I_MASK)
#define CTIMER_MCR_MR0R_MASK                     (0x2U)
#define CTIMER_MCR_MR0R_SHIFT                    (1U)
/*! MR0R - Reset on MR0: the TC will be reset if MR0 matches it. 0 = disabled. 1 = enabled.
 */
#define CTIMER_MCR_MR0R(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_MCR_MR0R_SHIFT)) & CTIMER_MCR_MR0R_MASK)
#define CTIMER_MCR_MR0S_MASK                     (0x4U)
#define CTIMER_MCR_MR0S_SHIFT                    (2U)
/*! MR0S - Stop on MR0: the TC and PC will be stopped and TCR[0] will be set to 0 if MR0 matches the TC. 0 = disabled. 1 = enabled.
 */
#define CTIMER_MCR_MR0S(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_MCR_MR0S_SHIFT)) & CTIMER_MCR_MR0S_MASK)
#define CTIMER_MCR_MR1I_MASK                     (0x8U)
#define CTIMER_MCR_MR1I_SHIFT                    (3U)
/*! MR1I - Interrupt on MR1: an interrupt is generated when MR1 matches the value in the TC. 0 =
 *    disabled. 1 = enabled. 0 = disabled. 1 = enabled.
 */
#define CTIMER_MCR_MR1I(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_MCR_MR1I_SHIFT)) & CTIMER_MCR_MR1I_MASK)
#define CTIMER_MCR_MR1R_MASK                     (0x10U)
#define CTIMER_MCR_MR1R_SHIFT                    (4U)
/*! MR1R - Reset on MR1: the TC will be reset if MR1 matches it. 0 = disabled. 1 = enabled.
 */
#define CTIMER_MCR_MR1R(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_MCR_MR1R_SHIFT)) & CTIMER_MCR_MR1R_MASK)
#define CTIMER_MCR_MR1S_MASK                     (0x20U)
#define CTIMER_MCR_MR1S_SHIFT                    (5U)
/*! MR1S - Stop on MR1: the TC and PC will be stopped and TCR[0] will be set to 0 if MR1 matches the TC. 0 = disabled. 1 = enabled.
 */
#define CTIMER_MCR_MR1S(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_MCR_MR1S_SHIFT)) & CTIMER_MCR_MR1S_MASK)
#define CTIMER_MCR_MR2I_MASK                     (0x40U)
#define CTIMER_MCR_MR2I_SHIFT                    (6U)
/*! MR2I - Interrupt on MR2: an interrupt is generated when MR2 matches the value in the TC. 0 = disabled. 1 = enabled.
 */
#define CTIMER_MCR_MR2I(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_MCR_MR2I_SHIFT)) & CTIMER_MCR_MR2I_MASK)
#define CTIMER_MCR_MR2R_MASK                     (0x80U)
#define CTIMER_MCR_MR2R_SHIFT                    (7U)
/*! MR2R - Reset on MR2: the TC will be reset if MR2 matches it. 0 = disabled. 1 = enabled.
 */
#define CTIMER_MCR_MR2R(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_MCR_MR2R_SHIFT)) & CTIMER_MCR_MR2R_MASK)
#define CTIMER_MCR_MR2S_MASK                     (0x100U)
#define CTIMER_MCR_MR2S_SHIFT                    (8U)
/*! MR2S - Stop on MR2: the TC and PC will be stopped and TCR[0] will be set to 0 if MR2 matches the TC. 0 = disabled. 1 = enabled.
 */
#define CTIMER_MCR_MR2S(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_MCR_MR2S_SHIFT)) & CTIMER_MCR_MR2S_MASK)
#define CTIMER_MCR_MR3I_MASK                     (0x200U)
#define CTIMER_MCR_MR3I_SHIFT                    (9U)
/*! MR3I - Interrupt on MR3: an interrupt is generated when MR3 matches the value in the TC. 0 = disabled. 1 = enabled.
 */
#define CTIMER_MCR_MR3I(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_MCR_MR3I_SHIFT)) & CTIMER_MCR_MR3I_MASK)
#define CTIMER_MCR_MR3R_MASK                     (0x400U)
#define CTIMER_MCR_MR3R_SHIFT                    (10U)
/*! MR3R - Reset on MR3: the TC will be reset if MR3 matches it. 0 = disabled. 1 = enabled.
 */
#define CTIMER_MCR_MR3R(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_MCR_MR3R_SHIFT)) & CTIMER_MCR_MR3R_MASK)
#define CTIMER_MCR_MR3S_MASK                     (0x800U)
#define CTIMER_MCR_MR3S_SHIFT                    (11U)
/*! MR3S - Stop on MR3: the TC and PC will be stopped and TCR[0] will be set to 0 if MR3 matches the TC. 0 = disabled. 1 = enabled.
 */
#define CTIMER_MCR_MR3S(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_MCR_MR3S_SHIFT)) & CTIMER_MCR_MR3S_MASK)
#define CTIMER_MCR_MR0RL_MASK                    (0x1000000U)
#define CTIMER_MCR_MR0RL_SHIFT                   (24U)
/*! MR0RL - Reload MR0 with the contents of the Match 0 Shadow Register when the TC is reset to zero
 *    (either via a match event or a write to bit 1 of the TCR). 0 = disabled. 1 = enabled.
 */
#define CTIMER_MCR_MR0RL(x)                      (((uint32_t)(((uint32_t)(x)) << CTIMER_MCR_MR0RL_SHIFT)) & CTIMER_MCR_MR0RL_MASK)
#define CTIMER_MCR_MR1RL_MASK                    (0x2000000U)
#define CTIMER_MCR_MR1RL_SHIFT                   (25U)
/*! MR1RL - Reload MR1 with the contents of the Match 1 Shadow Register when the TC is reset to zero
 *    (either via a match event or a write to bit 1 of the TCR). 0 = disabled. 1 = enabled.
 */
#define CTIMER_MCR_MR1RL(x)                      (((uint32_t)(((uint32_t)(x)) << CTIMER_MCR_MR1RL_SHIFT)) & CTIMER_MCR_MR1RL_MASK)
#define CTIMER_MCR_MR2RL_MASK                    (0x4000000U)
#define CTIMER_MCR_MR2RL_SHIFT                   (26U)
/*! MR2RL - Reload MR2 with the contents of the Match 2 Shadow Register when the TC is reset to zero
 *    (either via a match event or a write to bit 1 of the TCR). 0 = disabled. 1 = enabled.
 */
#define CTIMER_MCR_MR2RL(x)                      (((uint32_t)(((uint32_t)(x)) << CTIMER_MCR_MR2RL_SHIFT)) & CTIMER_MCR_MR2RL_MASK)
#define CTIMER_MCR_MR3RL_MASK                    (0x8000000U)
#define CTIMER_MCR_MR3RL_SHIFT                   (27U)
/*! MR3RL - Reload MR3 with the contents of the Match 3 Shadow Register when the TC is reset to zero
 *    (either via a match event or a write to bit 1 of the TCR). 0 = disabled. 1 = enabled.
 */
#define CTIMER_MCR_MR3RL(x)                      (((uint32_t)(((uint32_t)(x)) << CTIMER_MCR_MR3RL_SHIFT)) & CTIMER_MCR_MR3RL_MASK)
/*! @} */

/*! @name MR - Match Register . MR can be enabled through the MCR to reset the TC, stop both the TC and PC, and/or generate an interrupt every time MR matches the TC. */
/*! @{ */
#define CTIMER_MR_MATCH_MASK                     (0xFFFFFFFFU)
#define CTIMER_MR_MATCH_SHIFT                    (0U)
/*! MATCH - Timer counter match value.
 */
#define CTIMER_MR_MATCH(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_MR_MATCH_SHIFT)) & CTIMER_MR_MATCH_MASK)
/*! @} */

/* The count of CTIMER_MR */
#define CTIMER_MR_COUNT                          (4U)

/*! @name CCR - Capture Control Register. The CCR controls which edges of the capture inputs are used to load the Capture Registers and whether or not an interrupt is generated when a capture takes place. */
/*! @{ */
#define CTIMER_CCR_CAP0RE_MASK                   (0x1U)
#define CTIMER_CCR_CAP0RE_SHIFT                  (0U)
/*! CAP0RE - Rising edge of capture channel 0: a sequence of 0 then 1 causes CR0 to be loaded with
 *    the contents of TC. 0 = disabled. 1 = enabled.
 */
#define CTIMER_CCR_CAP0RE(x)                     (((uint32_t)(((uint32_t)(x)) << CTIMER_CCR_CAP0RE_SHIFT)) & CTIMER_CCR_CAP0RE_MASK)
#define CTIMER_CCR_CAP0FE_MASK                   (0x2U)
#define CTIMER_CCR_CAP0FE_SHIFT                  (1U)
/*! CAP0FE - Falling edge of capture channel 0: a sequence of 1 then 0 causes CR0 to be loaded with
 *    the contents of TC. 0 = disabled. 1 = enabled.
 */
#define CTIMER_CCR_CAP0FE(x)                     (((uint32_t)(((uint32_t)(x)) << CTIMER_CCR_CAP0FE_SHIFT)) & CTIMER_CCR_CAP0FE_MASK)
#define CTIMER_CCR_CAP0I_MASK                    (0x4U)
#define CTIMER_CCR_CAP0I_SHIFT                   (2U)
/*! CAP0I - Generate interrupt on channel 0 capture event: a CR0 load generates an interrupt.
 */
#define CTIMER_CCR_CAP0I(x)                      (((uint32_t)(((uint32_t)(x)) << CTIMER_CCR_CAP0I_SHIFT)) & CTIMER_CCR_CAP0I_MASK)
#define CTIMER_CCR_CAP1RE_MASK                   (0x8U)
#define CTIMER_CCR_CAP1RE_SHIFT                  (3U)
/*! CAP1RE - Rising edge of capture channel 1: a sequence of 0 then 1 causes CR1 to be loaded with
 *    the contents of TC. 0 = disabled. 1 = enabled.
 */
#define CTIMER_CCR_CAP1RE(x)                     (((uint32_t)(((uint32_t)(x)) << CTIMER_CCR_CAP1RE_SHIFT)) & CTIMER_CCR_CAP1RE_MASK)
#define CTIMER_CCR_CAP1FE_MASK                   (0x10U)
#define CTIMER_CCR_CAP1FE_SHIFT                  (4U)
/*! CAP1FE - Falling edge of capture channel 1: a sequence of 1 then 0 causes CR1 to be loaded with
 *    the contents of TC. 0 = disabled. 1 = enabled.
 */
#define CTIMER_CCR_CAP1FE(x)                     (((uint32_t)(((uint32_t)(x)) << CTIMER_CCR_CAP1FE_SHIFT)) & CTIMER_CCR_CAP1FE_MASK)
#define CTIMER_CCR_CAP1I_MASK                    (0x20U)
#define CTIMER_CCR_CAP1I_SHIFT                   (5U)
/*! CAP1I - Generate interrupt on channel 1 capture event: a CR1 load generates an interrupt.
 */
#define CTIMER_CCR_CAP1I(x)                      (((uint32_t)(((uint32_t)(x)) << CTIMER_CCR_CAP1I_SHIFT)) & CTIMER_CCR_CAP1I_MASK)
#define CTIMER_CCR_CAP2RE_MASK                   (0x40U)
#define CTIMER_CCR_CAP2RE_SHIFT                  (6U)
/*! CAP2RE - Rising edge of capture channel 2: a sequence of 0 then 1 causes CR2 to be loaded with
 *    the contents of TC. 0 = disabled. 1 = enabled.
 */
#define CTIMER_CCR_CAP2RE(x)                     (((uint32_t)(((uint32_t)(x)) << CTIMER_CCR_CAP2RE_SHIFT)) & CTIMER_CCR_CAP2RE_MASK)
#define CTIMER_CCR_CAP2FE_MASK                   (0x80U)
#define CTIMER_CCR_CAP2FE_SHIFT                  (7U)
/*! CAP2FE - Falling edge of capture channel 2: a sequence of 1 then 0 causes CR2 to be loaded with
 *    the contents of TC. 0 = disabled. 1 = enabled.
 */
#define CTIMER_CCR_CAP2FE(x)                     (((uint32_t)(((uint32_t)(x)) << CTIMER_CCR_CAP2FE_SHIFT)) & CTIMER_CCR_CAP2FE_MASK)
#define CTIMER_CCR_CAP2I_MASK                    (0x100U)
#define CTIMER_CCR_CAP2I_SHIFT                   (8U)
/*! CAP2I - Generate interrupt on channel 2 capture event: a CR2 load generates an interrupt.
 */
#define CTIMER_CCR_CAP2I(x)                      (((uint32_t)(((uint32_t)(x)) << CTIMER_CCR_CAP2I_SHIFT)) & CTIMER_CCR_CAP2I_MASK)
#define CTIMER_CCR_CAP3RE_MASK                   (0x200U)
#define CTIMER_CCR_CAP3RE_SHIFT                  (9U)
/*! CAP3RE - Rising edge of capture channel 3: a sequence of 0 then 1 causes CR3 to be loaded with
 *    the contents of TC. 0 = disabled. 1 = enabled.
 */
#define CTIMER_CCR_CAP3RE(x)                     (((uint32_t)(((uint32_t)(x)) << CTIMER_CCR_CAP3RE_SHIFT)) & CTIMER_CCR_CAP3RE_MASK)
#define CTIMER_CCR_CAP3FE_MASK                   (0x400U)
#define CTIMER_CCR_CAP3FE_SHIFT                  (10U)
/*! CAP3FE - Falling edge of capture channel 3: a sequence of 1 then 0 causes CR3 to be loaded with
 *    the contents of TC. 0 = disabled. 1 = enabled.
 */
#define CTIMER_CCR_CAP3FE(x)                     (((uint32_t)(((uint32_t)(x)) << CTIMER_CCR_CAP3FE_SHIFT)) & CTIMER_CCR_CAP3FE_MASK)
#define CTIMER_CCR_CAP3I_MASK                    (0x800U)
#define CTIMER_CCR_CAP3I_SHIFT                   (11U)
/*! CAP3I - Generate interrupt on channel 3 capture event: a CR3 load generates an interrupt.
 */
#define CTIMER_CCR_CAP3I(x)                      (((uint32_t)(((uint32_t)(x)) << CTIMER_CCR_CAP3I_SHIFT)) & CTIMER_CCR_CAP3I_MASK)
/*! @} */

/*! @name CR - Capture Register . CR is loaded with the value of TC when there is an event on the CAPn. input. */
/*! @{ */
#define CTIMER_CR_CAP_MASK                       (0xFFFFFFFFU)
#define CTIMER_CR_CAP_SHIFT                      (0U)
/*! CAP - Timer counter capture value.
 */
#define CTIMER_CR_CAP(x)                         (((uint32_t)(((uint32_t)(x)) << CTIMER_CR_CAP_SHIFT)) & CTIMER_CR_CAP_MASK)
/*! @} */

/* The count of CTIMER_CR */
#define CTIMER_CR_COUNT                          (4U)

/*! @name EMR - External Match Register. The EMR controls the match function and the external match pins. */
/*! @{ */
#define CTIMER_EMR_EM0_MASK                      (0x1U)
#define CTIMER_EMR_EM0_SHIFT                     (0U)
/*! EM0 - External Match 0. This bit reflects the state of output MAT0, whether or not this output
 *    is connected to a pin. When a match occurs between the TC and MR0, this bit can either toggle,
 *    go LOW, go HIGH, or do nothing, as selected by EMR[5:4]. This bit is driven to the MAT pins if
 *    the match function is selected via IOCON. 0 = LOW. 1 = HIGH.
 */
#define CTIMER_EMR_EM0(x)                        (((uint32_t)(((uint32_t)(x)) << CTIMER_EMR_EM0_SHIFT)) & CTIMER_EMR_EM0_MASK)
#define CTIMER_EMR_EM1_MASK                      (0x2U)
#define CTIMER_EMR_EM1_SHIFT                     (1U)
/*! EM1 - External Match 1. This bit reflects the state of output MAT1, whether or not this output
 *    is connected to a pin. When a match occurs between the TC and MR1, this bit can either toggle,
 *    go LOW, go HIGH, or do nothing, as selected by EMR[7:6]. This bit is driven to the MAT pins if
 *    the match function is selected via IOCON. 0 = LOW. 1 = HIGH.
 */
#define CTIMER_EMR_EM1(x)                        (((uint32_t)(((uint32_t)(x)) << CTIMER_EMR_EM1_SHIFT)) & CTIMER_EMR_EM1_MASK)
#define CTIMER_EMR_EM2_MASK                      (0x4U)
#define CTIMER_EMR_EM2_SHIFT                     (2U)
/*! EM2 - External Match 2. This bit reflects the state of output MAT2, whether or not this output
 *    is connected to a pin. When a match occurs between the TC and MR2, this bit can either toggle,
 *    go LOW, go HIGH, or do nothing, as selected by EMR[9:8]. This bit is driven to the MAT pins if
 *    the match function is selected via IOCON. 0 = LOW. 1 = HIGH.
 */
#define CTIMER_EMR_EM2(x)                        (((uint32_t)(((uint32_t)(x)) << CTIMER_EMR_EM2_SHIFT)) & CTIMER_EMR_EM2_MASK)
#define CTIMER_EMR_EM3_MASK                      (0x8U)
#define CTIMER_EMR_EM3_SHIFT                     (3U)
/*! EM3 - External Match 3. This bit reflects the state of output MAT3, whether or not this output
 *    is connected to a pin. When a match occurs between the TC and MR3, this bit can either toggle,
 *    go LOW, go HIGH, or do nothing, as selected by MR[11:10]. This bit is driven to the MAT pins
 *    if the match function is selected via IOCON. 0 = LOW. 1 = HIGH.
 */
#define CTIMER_EMR_EM3(x)                        (((uint32_t)(((uint32_t)(x)) << CTIMER_EMR_EM3_SHIFT)) & CTIMER_EMR_EM3_MASK)
#define CTIMER_EMR_EMC0_MASK                     (0x30U)
#define CTIMER_EMR_EMC0_SHIFT                    (4U)
/*! EMC0 - External Match Control 0. Determines the functionality of External Match 0.
 *  0b00..Do Nothing.
 *  0b01..Clear. Clear the corresponding External Match bit/output to 0 (MAT0 pin is LOW if pinned out).
 *  0b10..Set. Set the corresponding External Match bit/output to 1 (MAT0 pin is HIGH if pinned out).
 *  0b11..Toggle. Toggle the corresponding External Match bit/output.
 */
#define CTIMER_EMR_EMC0(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_EMR_EMC0_SHIFT)) & CTIMER_EMR_EMC0_MASK)
#define CTIMER_EMR_EMC1_MASK                     (0xC0U)
#define CTIMER_EMR_EMC1_SHIFT                    (6U)
/*! EMC1 - External Match Control 1. Determines the functionality of External Match 1.
 *  0b00..Do Nothing.
 *  0b01..Clear. Clear the corresponding External Match bit/output to 0 (MAT1 pin is LOW if pinned out).
 *  0b10..Set. Set the corresponding External Match bit/output to 1 (MAT1 pin is HIGH if pinned out).
 *  0b11..Toggle. Toggle the corresponding External Match bit/output.
 */
#define CTIMER_EMR_EMC1(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_EMR_EMC1_SHIFT)) & CTIMER_EMR_EMC1_MASK)
#define CTIMER_EMR_EMC2_MASK                     (0x300U)
#define CTIMER_EMR_EMC2_SHIFT                    (8U)
/*! EMC2 - External Match Control 2. Determines the functionality of External Match 2.
 *  0b00..Do Nothing.
 *  0b01..Clear. Clear the corresponding External Match bit/output to 0 (MAT2 pin is LOW if pinned out).
 *  0b10..Set. Set the corresponding External Match bit/output to 1 (MAT2 pin is HIGH if pinned out).
 *  0b11..Toggle. Toggle the corresponding External Match bit/output.
 */
#define CTIMER_EMR_EMC2(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_EMR_EMC2_SHIFT)) & CTIMER_EMR_EMC2_MASK)
#define CTIMER_EMR_EMC3_MASK                     (0xC00U)
#define CTIMER_EMR_EMC3_SHIFT                    (10U)
/*! EMC3 - External Match Control 3. Determines the functionality of External Match 3.
 *  0b00..Do Nothing.
 *  0b01..Clear. Clear the corresponding External Match bit/output to 0 (MAT3 pin is LOW if pinned out).
 *  0b10..Set. Set the corresponding External Match bit/output to 1 (MAT3 pin is HIGH if pinned out).
 *  0b11..Toggle. Toggle the corresponding External Match bit/output.
 */
#define CTIMER_EMR_EMC3(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_EMR_EMC3_SHIFT)) & CTIMER_EMR_EMC3_MASK)
/*! @} */

/*! @name CTCR - Count Control Register. The CTCR selects between Timer and Counter mode, and in Counter mode selects the signal and edge(s) for counting. */
/*! @{ */
#define CTIMER_CTCR_CTMODE_MASK                  (0x3U)
#define CTIMER_CTCR_CTMODE_SHIFT                 (0U)
/*! CTMODE - Counter/Timer Mode This field selects which rising APB bus clock edges can increment
 *    Timer's Prescale Counter (PC), or clear PC and increment Timer Counter (TC). Timer Mode: the TC
 *    is incremented when the Prescale Counter matches the Prescale Register.
 *  0b00..Timer Mode. Incremented every rising APB bus clock edge.
 *  0b01..Counter Mode rising edge. TC is incremented on rising edges on the CAP input selected by bits 3:2.
 *  0b10..Counter Mode falling edge. TC is incremented on falling edges on the CAP input selected by bits 3:2.
 *  0b11..Counter Mode dual edge. TC is incremented on both edges on the CAP input selected by bits 3:2.
 */
#define CTIMER_CTCR_CTMODE(x)                    (((uint32_t)(((uint32_t)(x)) << CTIMER_CTCR_CTMODE_SHIFT)) & CTIMER_CTCR_CTMODE_MASK)
#define CTIMER_CTCR_CINSEL_MASK                  (0xCU)
#define CTIMER_CTCR_CINSEL_SHIFT                 (2U)
/*! CINSEL - Count Input Select When bits 1:0 in this register are not 00, these bits select which
 *    CAP pin is sampled for clocking. Note: If Counter mode is selected for a particular CAPn input
 *    in the CTCR, the 3 bits for that input in the Capture Control Register (CCR) must be
 *    programmed as 000. However, capture and/or interrupt can be selected for the other 3 CAPn inputs in the
 *    same timer.
 *  0b00..Channel 0. CAPn.0 for CTIMERn
 *  0b01..Channel 1. CAPn.1 for CTIMERn
 *  0b10..Channel 2. CAPn.2 for CTIMERn
 *  0b11..Channel 3. CAPn.3 for CTIMERn
 */
#define CTIMER_CTCR_CINSEL(x)                    (((uint32_t)(((uint32_t)(x)) << CTIMER_CTCR_CINSEL_SHIFT)) & CTIMER_CTCR_CINSEL_MASK)
#define CTIMER_CTCR_ENCC_MASK                    (0x10U)
#define CTIMER_CTCR_ENCC_SHIFT                   (4U)
/*! ENCC - Setting this bit to 1 enables clearing of the timer and the prescaler when the
 *    capture-edge event specified in bits 7:5 occurs.
 */
#define CTIMER_CTCR_ENCC(x)                      (((uint32_t)(((uint32_t)(x)) << CTIMER_CTCR_ENCC_SHIFT)) & CTIMER_CTCR_ENCC_MASK)
#define CTIMER_CTCR_SELCC_MASK                   (0xE0U)
#define CTIMER_CTCR_SELCC_SHIFT                  (5U)
/*! SELCC - Edge select. When bit 4 is 1, these bits select which capture input edge will cause the
 *    timer and prescaler to be cleared. These bits have no effect when bit 4 is low. Values 0x2 to
 *    0x3 and 0x6 to 0x7 are reserved.
 *  0b000..Channel 0 Rising Edge. Rising edge of the signal on capture channel 0 clears the timer (if bit 4 is set).
 *  0b001..Channel 0 Falling Edge. Falling edge of the signal on capture channel 0 clears the timer (if bit 4 is set).
 *  0b010..Channel 1 Rising Edge. Rising edge of the signal on capture channel 1 clears the timer (if bit 4 is set).
 *  0b011..Channel 1 Falling Edge. Falling edge of the signal on capture channel 1 clears the timer (if bit 4 is set).
 *  0b100..Channel 2 Rising Edge. Rising edge of the signal on capture channel 2 clears the timer (if bit 4 is set).
 *  0b101..Channel 2 Falling Edge. Falling edge of the signal on capture channel 2 clears the timer (if bit 4 is set).
 *  0b110..Channel 2 Rising Edge. Rising edge of the signal on capture channel 2 clears the timer (if bit 4 is set).
 *  0b111..Channel 2 Falling Edge. Falling edge of the signal on capture channel 2 clears the timer (if bit 4 is set).
 */
#define CTIMER_CTCR_SELCC(x)                     (((uint32_t)(((uint32_t)(x)) << CTIMER_CTCR_SELCC_SHIFT)) & CTIMER_CTCR_SELCC_MASK)
/*! @} */

/*! @name PWMC - PWM Control Register. The PWMCON enables PWM mode for the external match pins. */
/*! @{ */
#define CTIMER_PWMC_PWMEN0_MASK                  (0x1U)
#define CTIMER_PWMC_PWMEN0_SHIFT                 (0U)
/*! PWMEN0 - PWM mode enable for channel0.
 *  0b0..Match. CTIMERn_MAT0 is controlled by EM0.
 *  0b1..PWM. PWM mode is enabled for CTIMERn_MAT0.
 */
#define CTIMER_PWMC_PWMEN0(x)                    (((uint32_t)(((uint32_t)(x)) << CTIMER_PWMC_PWMEN0_SHIFT)) & CTIMER_PWMC_PWMEN0_MASK)
#define CTIMER_PWMC_PWMEN1_MASK                  (0x2U)
#define CTIMER_PWMC_PWMEN1_SHIFT                 (1U)
/*! PWMEN1 - PWM mode enable for channel1.
 *  0b0..Match. CTIMERn_MAT01 is controlled by EM1.
 *  0b1..PWM. PWM mode is enabled for CTIMERn_MAT1.
 */
#define CTIMER_PWMC_PWMEN1(x)                    (((uint32_t)(((uint32_t)(x)) << CTIMER_PWMC_PWMEN1_SHIFT)) & CTIMER_PWMC_PWMEN1_MASK)
#define CTIMER_PWMC_PWMEN2_MASK                  (0x4U)
#define CTIMER_PWMC_PWMEN2_SHIFT                 (2U)
/*! PWMEN2 - PWM mode enable for channel2.
 *  0b0..Match. CTIMERn_MAT2 is controlled by EM2.
 *  0b1..PWM. PWM mode is enabled for CTIMERn_MAT2.
 */
#define CTIMER_PWMC_PWMEN2(x)                    (((uint32_t)(((uint32_t)(x)) << CTIMER_PWMC_PWMEN2_SHIFT)) & CTIMER_PWMC_PWMEN2_MASK)
#define CTIMER_PWMC_PWMEN3_MASK                  (0x8U)
#define CTIMER_PWMC_PWMEN3_SHIFT                 (3U)
/*! PWMEN3 - PWM mode enable for channel3. Note: It is recommended to use match channel 3 to set the PWM cycle.
 *  0b0..Match. CTIMERn_MAT3 is controlled by EM3.
 *  0b1..PWM. PWM mode is enabled for CT132Bn_MAT3.
 */
#define CTIMER_PWMC_PWMEN3(x)                    (((uint32_t)(((uint32_t)(x)) << CTIMER_PWMC_PWMEN3_SHIFT)) & CTIMER_PWMC_PWMEN3_MASK)
/*! @} */

/*! @name MSR - Match Shadow Register . If enabled, the Match Register will be automatically reloaded with the contents of this register whenever the TC is reset to zero. */
/*! @{ */
#define CTIMER_MSR_MATCH_SHADOW_MASK             (0xFFFFFFFFU)
#define CTIMER_MSR_MATCH_SHADOW_SHIFT            (0U)
/*! MATCH_SHADOW - Timer counter match value.
 */
#define CTIMER_MSR_MATCH_SHADOW(x)               (((uint32_t)(((uint32_t)(x)) << CTIMER_MSR_MATCH_SHADOW_SHIFT)) & CTIMER_MSR_MATCH_SHADOW_MASK)
/*! @} */

/* The count of CTIMER_MSR */
#define CTIMER_MSR_COUNT                         (4U)


/*!
 * @}
 */ /* end of group CTIMER_Register_Masks */


/* CTIMER - Peripheral instance base addresses */
/** Peripheral CTIMER0 base address */
#define CTIMER0_BASE                             (0x40038000u)
/** Peripheral CTIMER0 base pointer */
#define CTIMER0                                  ((CTIMER_Type *)CTIMER0_BASE)
/** Array initializer of CTIMER peripheral base addresses */
#define CTIMER_BASE_ADDRS                        { CTIMER0_BASE }
/** Array initializer of CTIMER peripheral base pointers */
#define CTIMER_BASE_PTRS                         { CTIMER0 }
/** Interrupt vectors for the CTIMER peripheral type */
#define CTIMER_IRQS                              { CTIMER0_IRQn }

/*!
 * @}
 */ /* end of group CTIMER_Peripheral_Access_Layer */

/* ----------------------------------------------------------------------------
   -- SCT Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SCT_Peripheral_Access_Layer SCT Peripheral Access Layer
 * @{
 */

/** SCT - Register Layout Typedef */
typedef struct {
  __IO uint32_t CONFIG;                            /**< SCT configuration register, offset: 0x0 */
  union {                                          /* offset: 0x4 */
    struct {                                         /* offset: 0x4 */
      __IO uint16_t CTRLL;                             /**< SCT_CTRLL register, offset: 0x4 */
      __IO uint16_t CTRLH;                             /**< SCT_CTRLH register, offset: 0x6 */
    } CTRL_ACCESS16BIT;
    __IO uint32_t CTRL;                              /**< SCT control register, offset: 0x4 */
  };
  union {                                          /* offset: 0x8 */
    struct {                                         /* offset: 0x8 */
      __IO uint16_t LIMITL;                            /**< SCT_LIMITL register, offset: 0x8 */
      __IO uint16_t LIMITH;                            /**< SCT_LIMITH register, offset: 0xA */
    } LIMIT_ACCESS16BIT;
    __IO uint32_t LIMIT;                             /**< SCT limit event select register, offset: 0x8 */
  };
  union {                                          /* offset: 0xC */
    struct {                                         /* offset: 0xC */
      __IO uint16_t HALTL;                             /**< SCT_HALTL register, offset: 0xC */
      __IO uint16_t HALTH;                             /**< SCT_HALTH register, offset: 0xE */
    } HALT_ACCESS16BIT;
    __IO uint32_t HALT;                              /**< SCT halt event select register, offset: 0xC */
  };
  union {                                          /* offset: 0x10 */
    struct {                                         /* offset: 0x10 */
      __IO uint16_t STOPL;                             /**< SCT_STOPL register, offset: 0x10 */
      __IO uint16_t STOPH;                             /**< SCT_STOPH register, offset: 0x12 */
    } STOP_ACCESS16BIT;
    __IO uint32_t STOP;                              /**< SCT stop event select register, offset: 0x10 */
  };
  union {                                          /* offset: 0x14 */
    struct {                                         /* offset: 0x14 */
      __IO uint16_t STARTL;                            /**< SCT_STARTL register, offset: 0x14 */
      __IO uint16_t STARTH;                            /**< SCT_STARTH register, offset: 0x16 */
    } START_ACCESS16BIT;
    __IO uint32_t START;                             /**< SCT start event select register, offset: 0x14 */
  };
       uint8_t RESERVED_0[40];
  union {                                          /* offset: 0x40 */
    struct {                                         /* offset: 0x40 */
      __IO uint16_t COUNTL;                            /**< SCT_COUNTL register, offset: 0x40 */
      __IO uint16_t COUNTH;                            /**< SCT_COUNTH register, offset: 0x42 */
    } COUNT_ACCESS16BIT;
    __IO uint32_t COUNT;                             /**< SCT counter register, offset: 0x40 */
  };
  union {                                          /* offset: 0x44 */
    struct {                                         /* offset: 0x44 */
      __IO uint16_t STATEL;                            /**< SCT_STATEL register, offset: 0x44 */
      __IO uint16_t STATEH;                            /**< SCT_STATEH register, offset: 0x46 */
    } STATE_ACCESS16BIT;
    __IO uint32_t STATE;                             /**< SCT state register, offset: 0x44 */
  };
  __I  uint32_t INPUT;                             /**< SCT input register, offset: 0x48 */
  union {                                          /* offset: 0x4C */
    struct {                                         /* offset: 0x4C */
      __IO uint16_t REGMODEL;                          /**< SCT_REGMODEL register, offset: 0x4C */
      __IO uint16_t REGMODEH;                          /**< SCT_REGMODEH register, offset: 0x4E */
    } REGMODE_ACCESS16BIT;
    __IO uint32_t REGMODE;                           /**< SCT match/capture mode register, offset: 0x4C */
  };
  __IO uint32_t OUTPUT;                            /**< SCT output register, offset: 0x50 */
  __IO uint32_t OUTPUTDIRCTRL;                     /**< SCT output counter direction control register, offset: 0x54 */
  __IO uint32_t RES;                               /**< SCT conflict resolution register, offset: 0x58 */
  __IO uint32_t DMAREQ0;                           /**< SCT DMA request 0 register, offset: 0x5C */
  __IO uint32_t DMAREQ1;                           /**< SCT DMA request 1 register, offset: 0x60 */
       uint8_t RESERVED_1[140];
  __IO uint32_t EVEN;                              /**< SCT event interrupt enable register, offset: 0xF0 */
  __IO uint32_t EVFLAG;                            /**< SCT event flag register, offset: 0xF4 */
  __IO uint32_t CONEN;                             /**< SCT conflict interrupt enable register, offset: 0xF8 */
  __IO uint32_t CONFLAG;                           /**< SCT conflict flag register, offset: 0xFC */
  union {                                          /* offset: 0x100 */
    union {                                          /* offset: 0x100, array step: 0x4 */
      struct {                                         /* offset: 0x100, array step: 0x4 */
        __IO uint16_t CAPL;                              /**< SCT_CAPL register, array offset: 0x100, array step: 0x4 */
        __IO uint16_t CAPH;                              /**< SCT_CAPH register, array offset: 0x102, array step: 0x4 */
      } CAP_ACCESS16BIT[8];
      __IO uint32_t CAP[8];                            /**< SCT capture register of capture channel, array offset: 0x100, array step: 0x4 */
    };
    union {                                          /* offset: 0x100, array step: 0x4 */
      struct {                                         /* offset: 0x100, array step: 0x4 */
        __IO uint16_t MATCHL;                            /**< SCT_MATCHL register, array offset: 0x100, array step: 0x4 */
        __IO uint16_t MATCHH;                            /**< SCT_MATCHH register, array offset: 0x102, array step: 0x4 */
      } MATCH_ACCESS16BIT[8];
      __IO uint32_t MATCH[8];                          /**< SCT match value register of match channels, array offset: 0x100, array step: 0x4 */
    };
  };
       uint8_t RESERVED_2[224];
  union {                                          /* offset: 0x200 */
    union {                                          /* offset: 0x200, array step: 0x4 */
      struct {                                         /* offset: 0x200, array step: 0x4 */
        __IO uint16_t CAPCTRLL;                          /**< SCT_CAPCTRLL register, array offset: 0x200, array step: 0x4 */
        __IO uint16_t CAPCTRLH;                          /**< SCT_CAPCTRLH register, array offset: 0x202, array step: 0x4 */
      } CAPCTRL_ACCESS16BIT[8];
      __IO uint32_t CAPCTRL[8];                        /**< SCT capture control register, array offset: 0x200, array step: 0x4 */
    };
    union {                                          /* offset: 0x200, array step: 0x4 */
      struct {                                         /* offset: 0x200, array step: 0x4 */
        __IO uint16_t MATCHRELL;                         /**< SCT_MATCHRELL register, array offset: 0x200, array step: 0x4 */
        __IO uint16_t MATCHRELH;                         /**< SCT_MATCHRELH register, array offset: 0x202, array step: 0x4 */
      } MATCHREL_ACCESS16BIT[8];
      __IO uint32_t MATCHREL[8];                       /**< SCT match reload value register, array offset: 0x200, array step: 0x4 */
    };
  };
       uint8_t RESERVED_3[224];
  struct {                                         /* offset: 0x300, array step: 0x8 */
    __IO uint32_t STATE;                             /**< SCT event state register 0, array offset: 0x300, array step: 0x8 */
    __IO uint32_t CTRL;                              /**< SCT event control register 0, array offset: 0x304, array step: 0x8 */
  } EV[8];
       uint8_t RESERVED_4[448];
  struct {                                         /* offset: 0x500, array step: 0x8 */
    __IO uint32_t SET;                               /**< SCT output 0 set register, array offset: 0x500, array step: 0x8 */
    __IO uint32_t CLR;                               /**< SCT output 0 clear register, array offset: 0x504, array step: 0x8 */
  } OUT[7];
} SCT_Type;

/* ----------------------------------------------------------------------------
   -- SCT Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SCT_Register_Masks SCT Register Masks
 * @{
 */

/*! @name CONFIG - SCT configuration register */
/*! @{ */
#define SCT_CONFIG_UNIFY_MASK                    (0x1U)
#define SCT_CONFIG_UNIFY_SHIFT                   (0U)
/*! UNIFY - SCT operation
 *  0b0..The SCT operates as two 16-bit counters named COUNTER_L and COUNTER_H.
 *  0b1..The SCT operates as a unified 32-bit counter.
 */
#define SCT_CONFIG_UNIFY(x)                      (((uint32_t)(((uint32_t)(x)) << SCT_CONFIG_UNIFY_SHIFT)) & SCT_CONFIG_UNIFY_MASK)
#define SCT_CONFIG_CLKMODE_MASK                  (0x6U)
#define SCT_CONFIG_CLKMODE_SHIFT                 (1U)
/*! CLKMODE - SCT clock mode
 *  0b00..System Clock Mode. The system clock clocks the entire SCT module including the counter(s) and counter prescalers.
 *  0b01..Sampled System Clock Mode. The system clock clocks the SCT module, but the counter and prescalers are
 *        only enabled to count when the designated edge is detected on the input selected by the CKSEL field. The
 *        minimum pulse width on the selected clock-gate input is 1 bus clock period. This mode is the
 *        high-performance, sampled-clock mode.
 *  0b10..SCT Input Clock Mode. The input/edge selected by the CKSEL field clocks the SCT module, including the
 *        counters and prescalers, after first being synchronized to the system clock. The minimum pulse width on the
 *        clock input is 1 bus clock period. This mode is the low-power, sampled-clock mode.
 *  0b11..Asynchronous Mode. The entire SCT module is clocked directly by the input/edge selected by the CKSEL
 *        field. In this mode, the SCT outputs are switched synchronously to the SCT input clock - not the system
 *        clock. The input clock rate must be at least half the system clock rate and can be the same or faster than
 *        the system clock.
 */
#define SCT_CONFIG_CLKMODE(x)                    (((uint32_t)(((uint32_t)(x)) << SCT_CONFIG_CLKMODE_SHIFT)) & SCT_CONFIG_CLKMODE_MASK)
#define SCT_CONFIG_CKSEL_MASK                    (0x78U)
#define SCT_CONFIG_CKSEL_SHIFT                   (3U)
/*! CKSEL - SCT clock select. The specific functionality of the designated input/edge is dependent
 *    on the CLKMODE bit selection in this register.
 *  0b0000..Rising edges on input 0.
 *  0b0001..Falling edges on input 0.
 *  0b0010..Rising edges on input 1.
 *  0b0011..Falling edges on input 1.
 *  0b0100..Rising edges on input 2.
 *  0b0101..Falling edges on input 2.
 *  0b0110..Rising edges on input 3.
 *  0b0111..Falling edges on input 3.
 */
#define SCT_CONFIG_CKSEL(x)                      (((uint32_t)(((uint32_t)(x)) << SCT_CONFIG_CKSEL_SHIFT)) & SCT_CONFIG_CKSEL_MASK)
#define SCT_CONFIG_NORELOAD_L_MASK               (0x80U)
#define SCT_CONFIG_NORELOAD_L_SHIFT              (7U)
/*! NORELOAD_L - A 1 in this bit prevents the lower match registers from being reloaded from their
 *    respective reload registers. Setting this bit eliminates the need to write to the reload
 *    registers MATCHREL if the match values are fixed. Software can write to set or clear this bit at any
 *    time. This bit applies to both the higher and lower registers when the UNIFY bit is set.
 */
#define SCT_CONFIG_NORELOAD_L(x)                 (((uint32_t)(((uint32_t)(x)) << SCT_CONFIG_NORELOAD_L_SHIFT)) & SCT_CONFIG_NORELOAD_L_MASK)
#define SCT_CONFIG_NORELOAD_H_MASK               (0x100U)
#define SCT_CONFIG_NORELOAD_H_SHIFT              (8U)
/*! NORELOAD_H - A 1 in this bit prevents the higher match registers from being reloaded from their
 *    respective reload registers. Setting this bit eliminates the need to write to the reload
 *    registers MATCHREL if the match values are fixed. Software can write to set or clear this bit at
 *    any time. This bit is not used when the UNIFY bit is set.
 */
#define SCT_CONFIG_NORELOAD_H(x)                 (((uint32_t)(((uint32_t)(x)) << SCT_CONFIG_NORELOAD_H_SHIFT)) & SCT_CONFIG_NORELOAD_H_MASK)
#define SCT_CONFIG_INSYNC_MASK                   (0x1E00U)
#define SCT_CONFIG_INSYNC_SHIFT                  (9U)
/*! INSYNC - Synchronization for input N (bit 9 = input 0, bit 10 = input 1,, bit 12 = input 3); all
 *    other bits are reserved. A 1 in one of these bits subjects the corresponding input to
 *    synchronization to the SCT clock, before it is used to create an event. If an input is known to
 *    already be synchronous to the SCT clock, this bit may be set to 0 for faster input response. (Note:
 *    The SCT clock is the system clock for CKMODEs 0-2. It is the selected, asynchronous SCT input
 *    clock for CKMODE3). Note that the INSYNC field only affects inputs used for event generation.
 *    It does not apply to the clock input specified in the CKSEL field.
 */
#define SCT_CONFIG_INSYNC(x)                     (((uint32_t)(((uint32_t)(x)) << SCT_CONFIG_INSYNC_SHIFT)) & SCT_CONFIG_INSYNC_MASK)
#define SCT_CONFIG_AUTOLIMIT_L_MASK              (0x20000U)
#define SCT_CONFIG_AUTOLIMIT_L_SHIFT             (17U)
/*! AUTOLIMIT_L - A one in this bit causes a match on match register 0 to be treated as a de-facto
 *    LIMIT condition without the need to define an associated event. As with any LIMIT event, this
 *    automatic limit causes the counter to be cleared to zero in unidirectional mode or to change
 *    the direction of count in bi-directional mode. Software can write to set or clear this bit at
 *    any time. This bit applies to both the higher and lower registers when the UNIFY bit is set.
 */
#define SCT_CONFIG_AUTOLIMIT_L(x)                (((uint32_t)(((uint32_t)(x)) << SCT_CONFIG_AUTOLIMIT_L_SHIFT)) & SCT_CONFIG_AUTOLIMIT_L_MASK)
#define SCT_CONFIG_AUTOLIMIT_H_MASK              (0x40000U)
#define SCT_CONFIG_AUTOLIMIT_H_SHIFT             (18U)
/*! AUTOLIMIT_H - A one in this bit will cause a match on match register 0 to be treated as a
 *    de-facto LIMIT condition without the need to define an associated event. As with any LIMIT event,
 *    this automatic limit causes the counter to be cleared to zero in unidirectional mode or to
 *    change the direction of count in bi-directional mode. Software can write to set or clear this bit
 *    at any time. This bit is not used when the UNIFY bit is set.
 */
#define SCT_CONFIG_AUTOLIMIT_H(x)                (((uint32_t)(((uint32_t)(x)) << SCT_CONFIG_AUTOLIMIT_H_SHIFT)) & SCT_CONFIG_AUTOLIMIT_H_MASK)
/*! @} */

/*! @name CTRLL - SCT_CTRLL register */
/*! @{ */
#define SCT_CTRLL_DOWN_L_MASK                    (0x1U)
#define SCT_CTRLL_DOWN_L_SHIFT                   (0U)
/*! DOWN_L - This bit is 1 when the L or unified counter is counting down. Hardware sets this bit
 *    when the counter is counting up, counter limit occurs, and BIDIR = 1.Hardware clears this bit
 *    when the counter is counting down and a limit condition occurs or when the counter reaches 0.
 */
#define SCT_CTRLL_DOWN_L(x)                      (((uint16_t)(((uint16_t)(x)) << SCT_CTRLL_DOWN_L_SHIFT)) & SCT_CTRLL_DOWN_L_MASK)
#define SCT_CTRLL_STOP_L_MASK                    (0x2U)
#define SCT_CTRLL_STOP_L_SHIFT                   (1U)
/*! STOP_L - When this bit is 1 and HALT is 0, the L or unified counter does not run, but I/O events
 *    related to the counter can occur. If a designated start event occurs, this bit is cleared and
 *    counting resumes.
 */
#define SCT_CTRLL_STOP_L(x)                      (((uint16_t)(((uint16_t)(x)) << SCT_CTRLL_STOP_L_SHIFT)) & SCT_CTRLL_STOP_L_MASK)
#define SCT_CTRLL_HALT_L_MASK                    (0x4U)
#define SCT_CTRLL_HALT_L_SHIFT                   (2U)
/*! HALT_L - When this bit is 1, the L or unified counter does not run and no events can occur. A
 *    reset sets this bit. When the HALT_L bit is one, the STOP_L bit is cleared. It is possible to
 *    remove the halt condition while keeping the SCT in the stop condition (not running) with a
 *    single write to this register to simultaneously clear the HALT bit and set the STOP bit. Once set,
 *    only software can clear this bit to restore counter operation. This bit is set on reset.
 */
#define SCT_CTRLL_HALT_L(x)                      (((uint16_t)(((uint16_t)(x)) << SCT_CTRLL_HALT_L_SHIFT)) & SCT_CTRLL_HALT_L_MASK)
#define SCT_CTRLL_CLRCTR_L_MASK                  (0x8U)
#define SCT_CTRLL_CLRCTR_L_SHIFT                 (3U)
/*! CLRCTR_L - Writing a 1 to this bit clears the L or unified counter. This bit always reads as 0.
 */
#define SCT_CTRLL_CLRCTR_L(x)                    (((uint16_t)(((uint16_t)(x)) << SCT_CTRLL_CLRCTR_L_SHIFT)) & SCT_CTRLL_CLRCTR_L_MASK)
#define SCT_CTRLL_BIDIR_L_MASK                   (0x10U)
#define SCT_CTRLL_BIDIR_L_SHIFT                  (4U)
/*! BIDIR_L - L or unified counter direction select
 *  0b0..Up. The counter counts up to a limit condition, then is cleared to zero.
 *  0b1..Up-down. The counter counts up to a limit, then counts down to a limit condition or to 0.
 */
#define SCT_CTRLL_BIDIR_L(x)                     (((uint16_t)(((uint16_t)(x)) << SCT_CTRLL_BIDIR_L_SHIFT)) & SCT_CTRLL_BIDIR_L_MASK)
#define SCT_CTRLL_PRE_L_MASK                     (0x1FE0U)
#define SCT_CTRLL_PRE_L_SHIFT                    (5U)
/*! PRE_L - Specifies the factor by which the SCT clock is prescaled to produce the L or unified
 *    counter clock. The counter clock is clocked at the rate of the SCT clock divided by PRE_L+1.
 *    Clear the counter (by writing a 1 to the CLRCTR bit) whenever changing the PRE value.
 */
#define SCT_CTRLL_PRE_L(x)                       (((uint16_t)(((uint16_t)(x)) << SCT_CTRLL_PRE_L_SHIFT)) & SCT_CTRLL_PRE_L_MASK)
/*! @} */

/*! @name CTRLH - SCT_CTRLH register */
/*! @{ */
#define SCT_CTRLH_DOWN_H_MASK                    (0x1U)
#define SCT_CTRLH_DOWN_H_SHIFT                   (0U)
/*! DOWN_H - This bit is 1 when the H counter is counting down. Hardware sets this bit when the
 *    counter is counting, a counter limit condition occurs, and BIDIR is 1. Hardware clears this bit
 *    when the counter is counting down and a limit condition occurs or when the counter reaches 0.
 */
#define SCT_CTRLH_DOWN_H(x)                      (((uint16_t)(((uint16_t)(x)) << SCT_CTRLH_DOWN_H_SHIFT)) & SCT_CTRLH_DOWN_H_MASK)
#define SCT_CTRLH_STOP_H_MASK                    (0x2U)
#define SCT_CTRLH_STOP_H_SHIFT                   (1U)
/*! STOP_H - When this bit is 1 and HALT is 0, the H counter does not, run but I/O events related to
 *    the counter can occur. If such an event matches the mask in the Start register, this bit is
 *    cleared and counting resumes.
 */
#define SCT_CTRLH_STOP_H(x)                      (((uint16_t)(((uint16_t)(x)) << SCT_CTRLH_STOP_H_SHIFT)) & SCT_CTRLH_STOP_H_MASK)
#define SCT_CTRLH_HALT_H_MASK                    (0x4U)
#define SCT_CTRLH_HALT_H_SHIFT                   (2U)
/*! HALT_H - When this bit is 1, the H counter does not run and no events can occur. A reset sets
 *    this bit. When the HALT_H bit is one, the STOP_H bit is cleared. It is possible to remove the
 *    halt condition while keeping the SCT in the stop condition (not running) with a single write to
 *    this register to simultaneously clear the HALT bit and set the STOP bit. Once set, this bit
 *    can only be cleared by software to restore counter operation. This bit is set on reset.
 */
#define SCT_CTRLH_HALT_H(x)                      (((uint16_t)(((uint16_t)(x)) << SCT_CTRLH_HALT_H_SHIFT)) & SCT_CTRLH_HALT_H_MASK)
#define SCT_CTRLH_CLRCTR_H_MASK                  (0x8U)
#define SCT_CTRLH_CLRCTR_H_SHIFT                 (3U)
/*! CLRCTR_H - Writing a 1 to this bit clears the H counter. This bit always reads as 0.
 */
#define SCT_CTRLH_CLRCTR_H(x)                    (((uint16_t)(((uint16_t)(x)) << SCT_CTRLH_CLRCTR_H_SHIFT)) & SCT_CTRLH_CLRCTR_H_MASK)
#define SCT_CTRLH_BIDIR_H_MASK                   (0x10U)
#define SCT_CTRLH_BIDIR_H_SHIFT                  (4U)
/*! BIDIR_H - Direction select
 *  0b0..The H counter counts up to its limit condition, then is cleared to zero.
 *  0b1..The H counter counts up to its limit, then counts down to a limit condition or to 0.
 */
#define SCT_CTRLH_BIDIR_H(x)                     (((uint16_t)(((uint16_t)(x)) << SCT_CTRLH_BIDIR_H_SHIFT)) & SCT_CTRLH_BIDIR_H_MASK)
#define SCT_CTRLH_PRE_H_MASK                     (0x1FE0U)
#define SCT_CTRLH_PRE_H_SHIFT                    (5U)
/*! PRE_H - Specifies the factor by which the SCT clock is prescaled to produce the H counter clock.
 *    The counter clock is clocked at the rate of the SCT clock divided by PRELH+1. Clear the
 *    counter (by writing a 1 to the CLRCTR bit) whenever changing the PRE value.
 */
#define SCT_CTRLH_PRE_H(x)                       (((uint16_t)(((uint16_t)(x)) << SCT_CTRLH_PRE_H_SHIFT)) & SCT_CTRLH_PRE_H_MASK)
/*! @} */

/*! @name CTRL - SCT control register */
/*! @{ */
#define SCT_CTRL_DOWN_L_MASK                     (0x1U)
#define SCT_CTRL_DOWN_L_SHIFT                    (0U)
/*! DOWN_L - This bit is 1 when the L or unified counter is counting down. Hardware sets this bit
 *    when the counter is counting up, counter limit occurs, and BIDIR = 1.Hardware clears this bit
 *    when the counter is counting down and a limit condition occurs or when the counter reaches 0.
 */
#define SCT_CTRL_DOWN_L(x)                       (((uint32_t)(((uint32_t)(x)) << SCT_CTRL_DOWN_L_SHIFT)) & SCT_CTRL_DOWN_L_MASK)
#define SCT_CTRL_STOP_L_MASK                     (0x2U)
#define SCT_CTRL_STOP_L_SHIFT                    (1U)
/*! STOP_L - When this bit is 1 and HALT is 0, the L or unified counter does not run, but I/O events
 *    related to the counter can occur. If a designated start event occurs, this bit is cleared and
 *    counting resumes.
 */
#define SCT_CTRL_STOP_L(x)                       (((uint32_t)(((uint32_t)(x)) << SCT_CTRL_STOP_L_SHIFT)) & SCT_CTRL_STOP_L_MASK)
#define SCT_CTRL_HALT_L_MASK                     (0x4U)
#define SCT_CTRL_HALT_L_SHIFT                    (2U)
/*! HALT_L - When this bit is 1, the L or unified counter does not run and no events can occur. A
 *    reset sets this bit. When the HALT_L bit is one, the STOP_L bit is cleared. It is possible to
 *    remove the halt condition while keeping the SCT in the stop condition (not running) with a
 *    single write to this register to simultaneously clear the HALT bit and set the STOP bit. Once set,
 *    only software can clear this bit to restore counter operation. This bit is set on reset.
 */
#define SCT_CTRL_HALT_L(x)                       (((uint32_t)(((uint32_t)(x)) << SCT_CTRL_HALT_L_SHIFT)) & SCT_CTRL_HALT_L_MASK)
#define SCT_CTRL_CLRCTR_L_MASK                   (0x8U)
#define SCT_CTRL_CLRCTR_L_SHIFT                  (3U)
/*! CLRCTR_L - Writing a 1 to this bit clears the L or unified counter. This bit always reads as 0.
 */
#define SCT_CTRL_CLRCTR_L(x)                     (((uint32_t)(((uint32_t)(x)) << SCT_CTRL_CLRCTR_L_SHIFT)) & SCT_CTRL_CLRCTR_L_MASK)
#define SCT_CTRL_BIDIR_L_MASK                    (0x10U)
#define SCT_CTRL_BIDIR_L_SHIFT                   (4U)
/*! BIDIR_L - L or unified counter direction select
 *  0b0..Up. The counter counts up to a limit condition, then is cleared to zero.
 *  0b1..Up-down. The counter counts up to a limit, then counts down to a limit condition or to 0.
 */
#define SCT_CTRL_BIDIR_L(x)                      (((uint32_t)(((uint32_t)(x)) << SCT_CTRL_BIDIR_L_SHIFT)) & SCT_CTRL_BIDIR_L_MASK)
#define SCT_CTRL_PRE_L_MASK                      (0x1FE0U)
#define SCT_CTRL_PRE_L_SHIFT                     (5U)
/*! PRE_L - Specifies the factor by which the SCT clock is prescaled to produce the L or unified
 *    counter clock. The counter clock is clocked at the rate of the SCT clock divided by PRE_L+1.
 *    Clear the counter (by writing a 1 to the CLRCTR bit) whenever changing the PRE value.
 */
#define SCT_CTRL_PRE_L(x)                        (((uint32_t)(((uint32_t)(x)) << SCT_CTRL_PRE_L_SHIFT)) & SCT_CTRL_PRE_L_MASK)
#define SCT_CTRL_DOWN_H_MASK                     (0x10000U)
#define SCT_CTRL_DOWN_H_SHIFT                    (16U)
/*! DOWN_H - This bit is 1 when the H counter is counting down. Hardware sets this bit when the
 *    counter is counting, a counter limit condition occurs, and BIDIR is 1. Hardware clears this bit
 *    when the counter is counting down and a limit condition occurs or when the counter reaches 0.
 */
#define SCT_CTRL_DOWN_H(x)                       (((uint32_t)(((uint32_t)(x)) << SCT_CTRL_DOWN_H_SHIFT)) & SCT_CTRL_DOWN_H_MASK)
#define SCT_CTRL_STOP_H_MASK                     (0x20000U)
#define SCT_CTRL_STOP_H_SHIFT                    (17U)
/*! STOP_H - When this bit is 1 and HALT is 0, the H counter does not, run but I/O events related to
 *    the counter can occur. If such an event matches the mask in the Start register, this bit is
 *    cleared and counting resumes.
 */
#define SCT_CTRL_STOP_H(x)                       (((uint32_t)(((uint32_t)(x)) << SCT_CTRL_STOP_H_SHIFT)) & SCT_CTRL_STOP_H_MASK)
#define SCT_CTRL_HALT_H_MASK                     (0x40000U)
#define SCT_CTRL_HALT_H_SHIFT                    (18U)
/*! HALT_H - When this bit is 1, the H counter does not run and no events can occur. A reset sets
 *    this bit. When the HALT_H bit is one, the STOP_H bit is cleared. It is possible to remove the
 *    halt condition while keeping the SCT in the stop condition (not running) with a single write to
 *    this register to simultaneously clear the HALT bit and set the STOP bit. Once set, this bit
 *    can only be cleared by software to restore counter operation. This bit is set on reset.
 */
#define SCT_CTRL_HALT_H(x)                       (((uint32_t)(((uint32_t)(x)) << SCT_CTRL_HALT_H_SHIFT)) & SCT_CTRL_HALT_H_MASK)
#define SCT_CTRL_CLRCTR_H_MASK                   (0x80000U)
#define SCT_CTRL_CLRCTR_H_SHIFT                  (19U)
/*! CLRCTR_H - Writing a 1 to this bit clears the H counter. This bit always reads as 0.
 */
#define SCT_CTRL_CLRCTR_H(x)                     (((uint32_t)(((uint32_t)(x)) << SCT_CTRL_CLRCTR_H_SHIFT)) & SCT_CTRL_CLRCTR_H_MASK)
#define SCT_CTRL_BIDIR_H_MASK                    (0x100000U)
#define SCT_CTRL_BIDIR_H_SHIFT                   (20U)
/*! BIDIR_H - Direction select
 *  0b0..The H counter counts up to its limit condition, then is cleared to zero.
 *  0b1..The H counter counts up to its limit, then counts down to a limit condition or to 0.
 */
#define SCT_CTRL_BIDIR_H(x)                      (((uint32_t)(((uint32_t)(x)) << SCT_CTRL_BIDIR_H_SHIFT)) & SCT_CTRL_BIDIR_H_MASK)
#define SCT_CTRL_PRE_H_MASK                      (0x1FE00000U)
#define SCT_CTRL_PRE_H_SHIFT                     (21U)
/*! PRE_H - Specifies the factor by which the SCT clock is prescaled to produce the H counter clock.
 *    The counter clock is clocked at the rate of the SCT clock divided by PRELH+1. Clear the
 *    counter (by writing a 1 to the CLRCTR bit) whenever changing the PRE value.
 */
#define SCT_CTRL_PRE_H(x)                        (((uint32_t)(((uint32_t)(x)) << SCT_CTRL_PRE_H_SHIFT)) & SCT_CTRL_PRE_H_MASK)
/*! @} */

/*! @name LIMITL - SCT_LIMITL register */
/*! @{ */
#define SCT_LIMITL_LIMITL_MASK                   (0xFFFFU)
#define SCT_LIMITL_LIMITL_SHIFT                  (0U)
#define SCT_LIMITL_LIMITL(x)                     (((uint16_t)(((uint16_t)(x)) << SCT_LIMITL_LIMITL_SHIFT)) & SCT_LIMITL_LIMITL_MASK)
/*! @} */

/*! @name LIMITH - SCT_LIMITH register */
/*! @{ */
#define SCT_LIMITH_LIMITH_MASK                   (0xFFFFU)
#define SCT_LIMITH_LIMITH_SHIFT                  (0U)
#define SCT_LIMITH_LIMITH(x)                     (((uint16_t)(((uint16_t)(x)) << SCT_LIMITH_LIMITH_SHIFT)) & SCT_LIMITH_LIMITH_MASK)
/*! @} */

/*! @name LIMIT - SCT limit event select register */
/*! @{ */
#define SCT_LIMIT_LIMMSK_L_MASK                  (0xFFU)
#define SCT_LIMIT_LIMMSK_L_SHIFT                 (0U)
/*! LIMMSK_L - If bit n is one, event n is used as a counter limit for the L or unified counter
 *    (event 0 = bit 0, event 1 = bit 1, etc.). The number of bits = number of events in this SCT.
 */
#define SCT_LIMIT_LIMMSK_L(x)                    (((uint32_t)(((uint32_t)(x)) << SCT_LIMIT_LIMMSK_L_SHIFT)) & SCT_LIMIT_LIMMSK_L_MASK)
#define SCT_LIMIT_LIMMSK_H_MASK                  (0xFF0000U)
#define SCT_LIMIT_LIMMSK_H_SHIFT                 (16U)
/*! LIMMSK_H - If bit n is one, event n is used as a counter limit for the H counter (event 0 = bit
 *    16, event 1 = bit 17, etc.). The number of bits = number of events in this SCT.
 */
#define SCT_LIMIT_LIMMSK_H(x)                    (((uint32_t)(((uint32_t)(x)) << SCT_LIMIT_LIMMSK_H_SHIFT)) & SCT_LIMIT_LIMMSK_H_MASK)
/*! @} */

/*! @name HALTL - SCT_HALTL register */
/*! @{ */
#define SCT_HALTL_HALTL_MASK                     (0xFFFFU)
#define SCT_HALTL_HALTL_SHIFT                    (0U)
#define SCT_HALTL_HALTL(x)                       (((uint16_t)(((uint16_t)(x)) << SCT_HALTL_HALTL_SHIFT)) & SCT_HALTL_HALTL_MASK)
/*! @} */

/*! @name HALTH - SCT_HALTH register */
/*! @{ */
#define SCT_HALTH_HALTH_MASK                     (0xFFFFU)
#define SCT_HALTH_HALTH_SHIFT                    (0U)
#define SCT_HALTH_HALTH(x)                       (((uint16_t)(((uint16_t)(x)) << SCT_HALTH_HALTH_SHIFT)) & SCT_HALTH_HALTH_MASK)
/*! @} */

/*! @name HALT - SCT halt event select register */
/*! @{ */
#define SCT_HALT_HALTMSK_L_MASK                  (0xFFU)
#define SCT_HALT_HALTMSK_L_SHIFT                 (0U)
/*! HALTMSK_L - If bit n is one, event n sets the HALT_L bit in the CTRL register (event 0 = bit 0,
 *    event 1 = bit 1, etc.). The number of bits = number of events in this SCT.
 */
#define SCT_HALT_HALTMSK_L(x)                    (((uint32_t)(((uint32_t)(x)) << SCT_HALT_HALTMSK_L_SHIFT)) & SCT_HALT_HALTMSK_L_MASK)
#define SCT_HALT_HALTMSK_H_MASK                  (0xFF0000U)
#define SCT_HALT_HALTMSK_H_SHIFT                 (16U)
/*! HALTMSK_H - If bit n is one, event n sets the HALT_H bit in the CTRL register (event 0 = bit 16,
 *    event 1 = bit 17, etc.). The number of bits = number of events in this SCT.
 */
#define SCT_HALT_HALTMSK_H(x)                    (((uint32_t)(((uint32_t)(x)) << SCT_HALT_HALTMSK_H_SHIFT)) & SCT_HALT_HALTMSK_H_MASK)
/*! @} */

/*! @name STOPL - SCT_STOPL register */
/*! @{ */
#define SCT_STOPL_STOPL_MASK                     (0xFFFFU)
#define SCT_STOPL_STOPL_SHIFT                    (0U)
#define SCT_STOPL_STOPL(x)                       (((uint16_t)(((uint16_t)(x)) << SCT_STOPL_STOPL_SHIFT)) & SCT_STOPL_STOPL_MASK)
/*! @} */

/*! @name STOPH - SCT_STOPH register */
/*! @{ */
#define SCT_STOPH_STOPH_MASK                     (0xFFFFU)
#define SCT_STOPH_STOPH_SHIFT                    (0U)
#define SCT_STOPH_STOPH(x)                       (((uint16_t)(((uint16_t)(x)) << SCT_STOPH_STOPH_SHIFT)) & SCT_STOPH_STOPH_MASK)
/*! @} */

/*! @name STOP - SCT stop event select register */
/*! @{ */
#define SCT_STOP_STOPMSK_L_MASK                  (0xFFU)
#define SCT_STOP_STOPMSK_L_SHIFT                 (0U)
/*! STOPMSK_L - If bit n is one, event n sets the STOP_L bit in the CTRL register (event 0 = bit 0,
 *    event 1 = bit 1, etc.). The number of bits = number of events in this SCT.
 */
#define SCT_STOP_STOPMSK_L(x)                    (((uint32_t)(((uint32_t)(x)) << SCT_STOP_STOPMSK_L_SHIFT)) & SCT_STOP_STOPMSK_L_MASK)
#define SCT_STOP_STOPMSK_H_MASK                  (0xFF0000U)
#define SCT_STOP_STOPMSK_H_SHIFT                 (16U)
/*! STOPMSK_H - If bit n is one, event n sets the STOP_H bit in the CTRL register (event 0 = bit 16,
 *    event 1 = bit 17, etc.). The number of bits = number of events in this SCT.
 */
#define SCT_STOP_STOPMSK_H(x)                    (((uint32_t)(((uint32_t)(x)) << SCT_STOP_STOPMSK_H_SHIFT)) & SCT_STOP_STOPMSK_H_MASK)
/*! @} */

/*! @name STARTL - SCT_STARTL register */
/*! @{ */
#define SCT_STARTL_STARTL_MASK                   (0xFFFFU)
#define SCT_STARTL_STARTL_SHIFT                  (0U)
#define SCT_STARTL_STARTL(x)                     (((uint16_t)(((uint16_t)(x)) << SCT_STARTL_STARTL_SHIFT)) & SCT_STARTL_STARTL_MASK)
/*! @} */

/*! @name STARTH - SCT_STARTH register */
/*! @{ */
#define SCT_STARTH_STARTH_MASK                   (0xFFFFU)
#define SCT_STARTH_STARTH_SHIFT                  (0U)
#define SCT_STARTH_STARTH(x)                     (((uint16_t)(((uint16_t)(x)) << SCT_STARTH_STARTH_SHIFT)) & SCT_STARTH_STARTH_MASK)
/*! @} */

/*! @name START - SCT start event select register */
/*! @{ */
#define SCT_START_STARTMSK_L_MASK                (0xFFU)
#define SCT_START_STARTMSK_L_SHIFT               (0U)
/*! STARTMSK_L - If bit n is one, event n clears the STOP_L bit in the CTRL register (event 0 = bit
 *    0, event 1 = bit 1, etc.). The number of bits = number of events in this SCT.
 */
#define SCT_START_STARTMSK_L(x)                  (((uint32_t)(((uint32_t)(x)) << SCT_START_STARTMSK_L_SHIFT)) & SCT_START_STARTMSK_L_MASK)
#define SCT_START_STARTMSK_H_MASK                (0xFF0000U)
#define SCT_START_STARTMSK_H_SHIFT               (16U)
/*! STARTMSK_H - If bit n is one, event n clears the STOP_H bit in the CTRL register (event 0 = bit
 *    16, event 1 = bit 17, etc.). The number of bits = number of events in this SCT.
 */
#define SCT_START_STARTMSK_H(x)                  (((uint32_t)(((uint32_t)(x)) << SCT_START_STARTMSK_H_SHIFT)) & SCT_START_STARTMSK_H_MASK)
/*! @} */

/*! @name COUNTL - SCT_COUNTL register */
/*! @{ */
#define SCT_COUNTL_COUNTL_MASK                   (0xFFFFU)
#define SCT_COUNTL_COUNTL_SHIFT                  (0U)
#define SCT_COUNTL_COUNTL(x)                     (((uint16_t)(((uint16_t)(x)) << SCT_COUNTL_COUNTL_SHIFT)) & SCT_COUNTL_COUNTL_MASK)
/*! @} */

/*! @name COUNTH - SCT_COUNTH register */
/*! @{ */
#define SCT_COUNTH_COUNTH_MASK                   (0xFFFFU)
#define SCT_COUNTH_COUNTH_SHIFT                  (0U)
#define SCT_COUNTH_COUNTH(x)                     (((uint16_t)(((uint16_t)(x)) << SCT_COUNTH_COUNTH_SHIFT)) & SCT_COUNTH_COUNTH_MASK)
/*! @} */

/*! @name COUNT - SCT counter register */
/*! @{ */
#define SCT_COUNT_CTR_L_MASK                     (0xFFFFU)
#define SCT_COUNT_CTR_L_SHIFT                    (0U)
/*! CTR_L - When UNIFY = 0, read or write the 16-bit L counter value. When UNIFY = 1, read or write
 *    the lower 16 bits of the 32-bit unified counter.
 */
#define SCT_COUNT_CTR_L(x)                       (((uint32_t)(((uint32_t)(x)) << SCT_COUNT_CTR_L_SHIFT)) & SCT_COUNT_CTR_L_MASK)
#define SCT_COUNT_CTR_H_MASK                     (0xFFFF0000U)
#define SCT_COUNT_CTR_H_SHIFT                    (16U)
/*! CTR_H - When UNIFY = 0, read or write the 16-bit H counter value. When UNIFY = 1, read or write
 *    the upper 16 bits of the 32-bit unified counter.
 */
#define SCT_COUNT_CTR_H(x)                       (((uint32_t)(((uint32_t)(x)) << SCT_COUNT_CTR_H_SHIFT)) & SCT_COUNT_CTR_H_MASK)
/*! @} */

/*! @name STATEL - SCT_STATEL register */
/*! @{ */
#define SCT_STATEL_STATEL_MASK                   (0xFFFFU)
#define SCT_STATEL_STATEL_SHIFT                  (0U)
#define SCT_STATEL_STATEL(x)                     (((uint16_t)(((uint16_t)(x)) << SCT_STATEL_STATEL_SHIFT)) & SCT_STATEL_STATEL_MASK)
/*! @} */

/*! @name STATEH - SCT_STATEH register */
/*! @{ */
#define SCT_STATEH_STATEH_MASK                   (0xFFFFU)
#define SCT_STATEH_STATEH_SHIFT                  (0U)
#define SCT_STATEH_STATEH(x)                     (((uint16_t)(((uint16_t)(x)) << SCT_STATEH_STATEH_SHIFT)) & SCT_STATEH_STATEH_MASK)
/*! @} */

/*! @name STATE - SCT state register */
/*! @{ */
#define SCT_STATE_STATE_L_MASK                   (0x1FU)
#define SCT_STATE_STATE_L_SHIFT                  (0U)
/*! STATE_L - State variable.
 */
#define SCT_STATE_STATE_L(x)                     (((uint32_t)(((uint32_t)(x)) << SCT_STATE_STATE_L_SHIFT)) & SCT_STATE_STATE_L_MASK)
#define SCT_STATE_STATE_H_MASK                   (0x1F0000U)
#define SCT_STATE_STATE_H_SHIFT                  (16U)
/*! STATE_H - State variable.
 */
#define SCT_STATE_STATE_H(x)                     (((uint32_t)(((uint32_t)(x)) << SCT_STATE_STATE_H_SHIFT)) & SCT_STATE_STATE_H_MASK)
/*! @} */

/*! @name INPUT - SCT input register */
/*! @{ */
#define SCT_INPUT_AIN0_MASK                      (0x1U)
#define SCT_INPUT_AIN0_SHIFT                     (0U)
/*! AIN0 - Input 0 state. Input 0 state on the last SCT clock edge.
 */
#define SCT_INPUT_AIN0(x)                        (((uint32_t)(((uint32_t)(x)) << SCT_INPUT_AIN0_SHIFT)) & SCT_INPUT_AIN0_MASK)
#define SCT_INPUT_AIN1_MASK                      (0x2U)
#define SCT_INPUT_AIN1_SHIFT                     (1U)
/*! AIN1 - Input 1 state. Input 1 state on the last SCT clock edge.
 */
#define SCT_INPUT_AIN1(x)                        (((uint32_t)(((uint32_t)(x)) << SCT_INPUT_AIN1_SHIFT)) & SCT_INPUT_AIN1_MASK)
#define SCT_INPUT_AIN2_MASK                      (0x4U)
#define SCT_INPUT_AIN2_SHIFT                     (2U)
/*! AIN2 - Input 2 state. Input 2 state on the last SCT clock edge.
 */
#define SCT_INPUT_AIN2(x)                        (((uint32_t)(((uint32_t)(x)) << SCT_INPUT_AIN2_SHIFT)) & SCT_INPUT_AIN2_MASK)
#define SCT_INPUT_AIN3_MASK                      (0x8U)
#define SCT_INPUT_AIN3_SHIFT                     (3U)
/*! AIN3 - Input 3 state. Input 3 state on the last SCT clock edge.
 */
#define SCT_INPUT_AIN3(x)                        (((uint32_t)(((uint32_t)(x)) << SCT_INPUT_AIN3_SHIFT)) & SCT_INPUT_AIN3_MASK)
#define SCT_INPUT_AIN4_MASK                      (0x10U)
#define SCT_INPUT_AIN4_SHIFT                     (4U)
/*! AIN4 - Input 4 state. Input 4 state on the last SCT clock edge.
 */
#define SCT_INPUT_AIN4(x)                        (((uint32_t)(((uint32_t)(x)) << SCT_INPUT_AIN4_SHIFT)) & SCT_INPUT_AIN4_MASK)
#define SCT_INPUT_SIN0_MASK                      (0x10000U)
#define SCT_INPUT_SIN0_SHIFT                     (16U)
/*! SIN0 - Input 0 state. Input 0 state following the synchronization specified by INSYNC.
 */
#define SCT_INPUT_SIN0(x)                        (((uint32_t)(((uint32_t)(x)) << SCT_INPUT_SIN0_SHIFT)) & SCT_INPUT_SIN0_MASK)
#define SCT_INPUT_SIN1_MASK                      (0x20000U)
#define SCT_INPUT_SIN1_SHIFT                     (17U)
/*! SIN1 - Input 1 state. Input 1 state following the synchronization specified by INSYNC.
 */
#define SCT_INPUT_SIN1(x)                        (((uint32_t)(((uint32_t)(x)) << SCT_INPUT_SIN1_SHIFT)) & SCT_INPUT_SIN1_MASK)
#define SCT_INPUT_SIN2_MASK                      (0x40000U)
#define SCT_INPUT_SIN2_SHIFT                     (18U)
/*! SIN2 - Input 2 state. Input 2 state following the synchronization specified by INSYNC.
 */
#define SCT_INPUT_SIN2(x)                        (((uint32_t)(((uint32_t)(x)) << SCT_INPUT_SIN2_SHIFT)) & SCT_INPUT_SIN2_MASK)
#define SCT_INPUT_SIN3_MASK                      (0x80000U)
#define SCT_INPUT_SIN3_SHIFT                     (19U)
/*! SIN3 - Input 3 state. Input 3 state following the synchronization specified by INSYNC.
 */
#define SCT_INPUT_SIN3(x)                        (((uint32_t)(((uint32_t)(x)) << SCT_INPUT_SIN3_SHIFT)) & SCT_INPUT_SIN3_MASK)
#define SCT_INPUT_SIN4_MASK                      (0x100000U)
#define SCT_INPUT_SIN4_SHIFT                     (20U)
/*! SIN4 - Input 4 state. Input 4 state following the synchronization specified by INSYNC.
 */
#define SCT_INPUT_SIN4(x)                        (((uint32_t)(((uint32_t)(x)) << SCT_INPUT_SIN4_SHIFT)) & SCT_INPUT_SIN4_MASK)
/*! @} */

/*! @name REGMODEL - SCT_REGMODEL register */
/*! @{ */
#define SCT_REGMODEL_REGMODEL_MASK               (0xFFFFU)
#define SCT_REGMODEL_REGMODEL_SHIFT              (0U)
#define SCT_REGMODEL_REGMODEL(x)                 (((uint16_t)(((uint16_t)(x)) << SCT_REGMODEL_REGMODEL_SHIFT)) & SCT_REGMODEL_REGMODEL_MASK)
/*! @} */

/*! @name REGMODEH - SCT_REGMODEH register */
/*! @{ */
#define SCT_REGMODEH_REGMODEH_MASK               (0xFFFFU)
#define SCT_REGMODEH_REGMODEH_SHIFT              (0U)
#define SCT_REGMODEH_REGMODEH(x)                 (((uint16_t)(((uint16_t)(x)) << SCT_REGMODEH_REGMODEH_SHIFT)) & SCT_REGMODEH_REGMODEH_MASK)
/*! @} */

/*! @name REGMODE - SCT match/capture mode register */
/*! @{ */
#define SCT_REGMODE_REGMOD_L_MASK                (0xFFU)
#define SCT_REGMODE_REGMOD_L_SHIFT               (0U)
/*! REGMOD_L - Each bit controls one match/capture register (register 0 = bit 0, register 1 = bit 1,
 *    etc.). The number of bits = number of match/captures in this SCT. 0 = register operates as
 *    match register. 1 = register operates as capture register.
 */
#define SCT_REGMODE_REGMOD_L(x)                  (((uint32_t)(((uint32_t)(x)) << SCT_REGMODE_REGMOD_L_SHIFT)) & SCT_REGMODE_REGMOD_L_MASK)
#define SCT_REGMODE_REGMOD_H_MASK                (0xFF0000U)
#define SCT_REGMODE_REGMOD_H_SHIFT               (16U)
/*! REGMOD_H - Each bit controls one match/capture register (register 0 = bit 16, register 1 = bit
 *    17, etc.). The number of bits = number of match/captures in this SCT. 0 = register operates as
 *    match registers. 1 = register operates as capture registers.
 */
#define SCT_REGMODE_REGMOD_H(x)                  (((uint32_t)(((uint32_t)(x)) << SCT_REGMODE_REGMOD_H_SHIFT)) & SCT_REGMODE_REGMOD_H_MASK)
/*! @} */

/*! @name OUTPUT - SCT output register */
/*! @{ */
#define SCT_OUTPUT_OUT_MASK                      (0x7FU)
#define SCT_OUTPUT_OUT_SHIFT                     (0U)
/*! OUT - Writing a 1 to bit n forces the corresponding output HIGH. Writing a 0 forces the
 *    corresponding output LOW (output 0 = bit 0, output 1 = bit 1, etc.). The number of bits = number of
 *    outputs in this SCT.
 */
#define SCT_OUTPUT_OUT(x)                        (((uint32_t)(((uint32_t)(x)) << SCT_OUTPUT_OUT_SHIFT)) & SCT_OUTPUT_OUT_MASK)
/*! @} */

/*! @name OUTPUTDIRCTRL - SCT output counter direction control register */
/*! @{ */
#define SCT_OUTPUTDIRCTRL_SETCLR0_MASK           (0x3U)
#define SCT_OUTPUTDIRCTRL_SETCLR0_SHIFT          (0U)
/*! SETCLR0 - Set/clear operation on output 0. Value 0x3 is reserved. Do not program this value.
 *  0b00..Set and clear do not depend on the direction of any counter.
 *  0b01..Set and clear are reversed when counter L or the unified counter is counting down.
 *  0b10..Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
 */
#define SCT_OUTPUTDIRCTRL_SETCLR0(x)             (((uint32_t)(((uint32_t)(x)) << SCT_OUTPUTDIRCTRL_SETCLR0_SHIFT)) & SCT_OUTPUTDIRCTRL_SETCLR0_MASK)
#define SCT_OUTPUTDIRCTRL_SETCLR1_MASK           (0xCU)
#define SCT_OUTPUTDIRCTRL_SETCLR1_SHIFT          (2U)
/*! SETCLR1 - Set/clear operation on output 1. Value 0x3 is reserved. Do not program this value.
 *  0b00..Set and clear do not depend on the direction of any counter.
 *  0b01..Set and clear are reversed when counter L or the unified counter is counting down.
 *  0b10..Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
 */
#define SCT_OUTPUTDIRCTRL_SETCLR1(x)             (((uint32_t)(((uint32_t)(x)) << SCT_OUTPUTDIRCTRL_SETCLR1_SHIFT)) & SCT_OUTPUTDIRCTRL_SETCLR1_MASK)
#define SCT_OUTPUTDIRCTRL_SETCLR2_MASK           (0x30U)
#define SCT_OUTPUTDIRCTRL_SETCLR2_SHIFT          (4U)
/*! SETCLR2 - Set/clear operation on output 2. Value 0x3 is reserved. Do not program this value.
 *  0b00..Set and clear do not depend on the direction of any counter.
 *  0b01..Set and clear are reversed when counter L or the unified counter is counting down.
 *  0b10..Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
 */
#define SCT_OUTPUTDIRCTRL_SETCLR2(x)             (((uint32_t)(((uint32_t)(x)) << SCT_OUTPUTDIRCTRL_SETCLR2_SHIFT)) & SCT_OUTPUTDIRCTRL_SETCLR2_MASK)
#define SCT_OUTPUTDIRCTRL_SETCLR3_MASK           (0xC0U)
#define SCT_OUTPUTDIRCTRL_SETCLR3_SHIFT          (6U)
/*! SETCLR3 - Set/clear operation on output 3. Value 0x3 is reserved. Do not program this value.
 *  0b00..Set and clear do not depend on the direction of any counter.
 *  0b01..Set and clear are reversed when counter L or the unified counter is counting down.
 *  0b10..Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
 */
#define SCT_OUTPUTDIRCTRL_SETCLR3(x)             (((uint32_t)(((uint32_t)(x)) << SCT_OUTPUTDIRCTRL_SETCLR3_SHIFT)) & SCT_OUTPUTDIRCTRL_SETCLR3_MASK)
#define SCT_OUTPUTDIRCTRL_SETCLR4_MASK           (0x300U)
#define SCT_OUTPUTDIRCTRL_SETCLR4_SHIFT          (8U)
/*! SETCLR4 - Set/clear operation on output 4. Value 0x3 is reserved. Do not program this value.
 *  0b00..Set and clear do not depend on the direction of any counter.
 *  0b01..Set and clear are reversed when counter L or the unified counter is counting down.
 *  0b10..Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
 */
#define SCT_OUTPUTDIRCTRL_SETCLR4(x)             (((uint32_t)(((uint32_t)(x)) << SCT_OUTPUTDIRCTRL_SETCLR4_SHIFT)) & SCT_OUTPUTDIRCTRL_SETCLR4_MASK)
#define SCT_OUTPUTDIRCTRL_SETCLR5_MASK           (0xC00U)
#define SCT_OUTPUTDIRCTRL_SETCLR5_SHIFT          (10U)
/*! SETCLR5 - Set/clear operation on output 5. Value 0x3 is reserved. Do not program this value.
 *  0b00..Set and clear do not depend on the direction of any counter.
 *  0b01..Set and clear are reversed when counter L or the unified counter is counting down.
 *  0b10..Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
 */
#define SCT_OUTPUTDIRCTRL_SETCLR5(x)             (((uint32_t)(((uint32_t)(x)) << SCT_OUTPUTDIRCTRL_SETCLR5_SHIFT)) & SCT_OUTPUTDIRCTRL_SETCLR5_MASK)
#define SCT_OUTPUTDIRCTRL_SETCLR6_MASK           (0x3000U)
#define SCT_OUTPUTDIRCTRL_SETCLR6_SHIFT          (12U)
/*! SETCLR6 - Set/clear operation on output 6. Value 0x3 is reserved. Do not program this value.
 *  0b00..Set and clear do not depend on the direction of any counter.
 *  0b01..Set and clear are reversed when counter L or the unified counter is counting down.
 *  0b10..Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
 */
#define SCT_OUTPUTDIRCTRL_SETCLR6(x)             (((uint32_t)(((uint32_t)(x)) << SCT_OUTPUTDIRCTRL_SETCLR6_SHIFT)) & SCT_OUTPUTDIRCTRL_SETCLR6_MASK)
/*! @} */

/*! @name RES - SCT conflict resolution register */
/*! @{ */
#define SCT_RES_O0RES_MASK                       (0x3U)
#define SCT_RES_O0RES_SHIFT                      (0U)
/*! O0RES - Effect of simultaneous set and clear on output 0.
 *  0b00..No change.
 *  0b01..Set output (or clear based on the SETCLR0 field in the OUTPUTDIRCTRL register).
 *  0b10..Clear output (or set based on the SETCLR0 field).
 *  0b11..Toggle output.
 */
#define SCT_RES_O0RES(x)                         (((uint32_t)(((uint32_t)(x)) << SCT_RES_O0RES_SHIFT)) & SCT_RES_O0RES_MASK)
#define SCT_RES_O1RES_MASK                       (0xCU)
#define SCT_RES_O1RES_SHIFT                      (2U)
/*! O1RES - Effect of simultaneous set and clear on output 1.
 *  0b00..No change.
 *  0b01..Set output (or clear based on the SETCLR1 field in the OUTPUTDIRCTRL register).
 *  0b10..Clear output (or set based on the SETCLR1 field).
 *  0b11..Toggle output.
 */
#define SCT_RES_O1RES(x)                         (((uint32_t)(((uint32_t)(x)) << SCT_RES_O1RES_SHIFT)) & SCT_RES_O1RES_MASK)
#define SCT_RES_O2RES_MASK                       (0x30U)
#define SCT_RES_O2RES_SHIFT                      (4U)
/*! O2RES - Effect of simultaneous set and clear on output 2.
 *  0b00..No change.
 *  0b01..Set output (or clear based on the SETCLR2 field in the OUTPUTDIRCTRL register).
 *  0b10..Clear output n (or set based on the SETCLR2 field).
 *  0b11..Toggle output.
 */
#define SCT_RES_O2RES(x)                         (((uint32_t)(((uint32_t)(x)) << SCT_RES_O2RES_SHIFT)) & SCT_RES_O2RES_MASK)
#define SCT_RES_O3RES_MASK                       (0xC0U)
#define SCT_RES_O3RES_SHIFT                      (6U)
/*! O3RES - Effect of simultaneous set and clear on output 3.
 *  0b00..No change.
 *  0b01..Set output (or clear based on the SETCLR3 field in the OUTPUTDIRCTRL register).
 *  0b10..Clear output (or set based on the SETCLR3 field).
 *  0b11..Toggle output.
 */
#define SCT_RES_O3RES(x)                         (((uint32_t)(((uint32_t)(x)) << SCT_RES_O3RES_SHIFT)) & SCT_RES_O3RES_MASK)
#define SCT_RES_O4RES_MASK                       (0x300U)
#define SCT_RES_O4RES_SHIFT                      (8U)
/*! O4RES - Effect of simultaneous set and clear on output 4.
 *  0b00..No change.
 *  0b01..Set output (or clear based on the SETCLR4 field in the OUTPUTDIRCTRL register).
 *  0b10..Clear output (or set based on the SETCLR4 field).
 *  0b11..Toggle output.
 */
#define SCT_RES_O4RES(x)                         (((uint32_t)(((uint32_t)(x)) << SCT_RES_O4RES_SHIFT)) & SCT_RES_O4RES_MASK)
#define SCT_RES_O5RES_MASK                       (0xC00U)
#define SCT_RES_O5RES_SHIFT                      (10U)
/*! O5RES - Effect of simultaneous set and clear on output 5.
 *  0b00..No change.
 *  0b01..Set output (or clear based on the SETCLR5 field in the OUTPUTDIRCTRL register).
 *  0b10..Clear output (or set based on the SETCLR5 field).
 *  0b11..Toggle output.
 */
#define SCT_RES_O5RES(x)                         (((uint32_t)(((uint32_t)(x)) << SCT_RES_O5RES_SHIFT)) & SCT_RES_O5RES_MASK)
#define SCT_RES_O6RES_MASK                       (0x3000U)
#define SCT_RES_O6RES_SHIFT                      (12U)
/*! O6RES - Effect of simultaneous set and clear on output 6.
 *  0b00..No change.
 *  0b01..Set output (or clear based on the SETCLR6 field in the OUTPUTDIRCTRL register).
 *  0b10..Clear output (or set based on the SETCLR6 field).
 *  0b11..Toggle output.
 */
#define SCT_RES_O6RES(x)                         (((uint32_t)(((uint32_t)(x)) << SCT_RES_O6RES_SHIFT)) & SCT_RES_O6RES_MASK)
/*! @} */

/*! @name DMAREQ0 - SCT DMA request 0 register */
/*! @{ */
#define SCT_DMAREQ0_DEV_0_MASK                   (0x3FU)
#define SCT_DMAREQ0_DEV_0_SHIFT                  (0U)
/*! DEV_0 - If bit n is one, event n triggers DMA request 0 (event 0 = bit 0, event 1 = bit 1,
 *    etc.). The number of bits = number of events in this SCT.
 */
#define SCT_DMAREQ0_DEV_0(x)                     (((uint32_t)(((uint32_t)(x)) << SCT_DMAREQ0_DEV_0_SHIFT)) & SCT_DMAREQ0_DEV_0_MASK)
#define SCT_DMAREQ0_DRL0_MASK                    (0x40000000U)
#define SCT_DMAREQ0_DRL0_SHIFT                   (30U)
/*! DRL0 - A 1 in this bit triggers DMA request 0 when it loads the MATCH_L/Unified registers from the RELOAD_L/Unified registers.
 */
#define SCT_DMAREQ0_DRL0(x)                      (((uint32_t)(((uint32_t)(x)) << SCT_DMAREQ0_DRL0_SHIFT)) & SCT_DMAREQ0_DRL0_MASK)
#define SCT_DMAREQ0_DRQ0_MASK                    (0x80000000U)
#define SCT_DMAREQ0_DRQ0_SHIFT                   (31U)
/*! DRQ0 - This read-only bit indicates the state of DMA Request 0. Note that if the related DMA
 *    channel is enabled and properly set up, it is unlikely that software will see this flag, it will
 *    be cleared rapidly by the DMA service. The flag remaining set could point to an issue with DMA
 *    setup.
 */
#define SCT_DMAREQ0_DRQ0(x)                      (((uint32_t)(((uint32_t)(x)) << SCT_DMAREQ0_DRQ0_SHIFT)) & SCT_DMAREQ0_DRQ0_MASK)
/*! @} */

/*! @name DMAREQ1 - SCT DMA request 1 register */
/*! @{ */
#define SCT_DMAREQ1_DEV_1_MASK                   (0x3FU)
#define SCT_DMAREQ1_DEV_1_SHIFT                  (0U)
/*! DEV_1 - If bit n is one, event n triggers DMA request 1 (event 0 = bit 0, event 1 = bit 1,
 *    etc.). The number of bits = number of events in this SCT.
 */
#define SCT_DMAREQ1_DEV_1(x)                     (((uint32_t)(((uint32_t)(x)) << SCT_DMAREQ1_DEV_1_SHIFT)) & SCT_DMAREQ1_DEV_1_MASK)
#define SCT_DMAREQ1_DRL1_MASK                    (0x40000000U)
#define SCT_DMAREQ1_DRL1_SHIFT                   (30U)
/*! DRL1 - A 1 in this bit triggers DMA request 1 when it loads the Match L/Unified registers from the Reload L/Unified registers.
 */
#define SCT_DMAREQ1_DRL1(x)                      (((uint32_t)(((uint32_t)(x)) << SCT_DMAREQ1_DRL1_SHIFT)) & SCT_DMAREQ1_DRL1_MASK)
#define SCT_DMAREQ1_DRQ1_MASK                    (0x80000000U)
#define SCT_DMAREQ1_DRQ1_SHIFT                   (31U)
/*! DRQ1 - This read-only bit indicates the state of DMA Request 1. Note that if the related DMA
 *    channel is enabled and properly set up, it is unlikely that software will see this flag, it will
 *    be cleared rapidly by the DMA service. The flag remaining set could point to an issue with DMA
 *    setup.
 */
#define SCT_DMAREQ1_DRQ1(x)                      (((uint32_t)(((uint32_t)(x)) << SCT_DMAREQ1_DRQ1_SHIFT)) & SCT_DMAREQ1_DRQ1_MASK)
/*! @} */

/*! @name EVEN - SCT event interrupt enable register */
/*! @{ */
#define SCT_EVEN_IEN_MASK                        (0xFFU)
#define SCT_EVEN_IEN_SHIFT                       (0U)
/*! IEN - The SCT requests an interrupt when bit n of this register and the event flag register are
 *    both one (event 0 = bit 0, event 1 = bit 1, etc.). The number of bits = number of events in
 *    this SCT.
 */
#define SCT_EVEN_IEN(x)                          (((uint32_t)(((uint32_t)(x)) << SCT_EVEN_IEN_SHIFT)) & SCT_EVEN_IEN_MASK)
/*! @} */

/*! @name EVFLAG - SCT event flag register */
/*! @{ */
#define SCT_EVFLAG_FLAG_MASK                     (0xFFU)
#define SCT_EVFLAG_FLAG_SHIFT                    (0U)
/*! FLAG - Bit n is one if event n has occurred since reset or a 1 was last written to this bit
 *    (event 0 = bit 0, event 1 = bit 1, etc.). The number of bits = number of events in this SCT.
 */
#define SCT_EVFLAG_FLAG(x)                       (((uint32_t)(((uint32_t)(x)) << SCT_EVFLAG_FLAG_SHIFT)) & SCT_EVFLAG_FLAG_MASK)
/*! @} */

/*! @name CONEN - SCT conflict interrupt enable register */
/*! @{ */
#define SCT_CONEN_NCEN_MASK                      (0x3FU)
#define SCT_CONEN_NCEN_SHIFT                     (0U)
/*! NCEN - The SCT requests an interrupt when bit n of this register and the SCT conflict flag
 *    register are both one (output 0 = bit 0, output 1 = bit 1, etc.). The number of bits = number of
 *    outputs in this SCT.
 */
#define SCT_CONEN_NCEN(x)                        (((uint32_t)(((uint32_t)(x)) << SCT_CONEN_NCEN_SHIFT)) & SCT_CONEN_NCEN_MASK)
/*! @} */

/*! @name CONFLAG - SCT conflict flag register */
/*! @{ */
#define SCT_CONFLAG_NCFLAG_MASK                  (0x3FU)
#define SCT_CONFLAG_NCFLAG_SHIFT                 (0U)
/*! NCFLAG - Bit n is one if a no-change conflict event occurred on output n since reset or a 1 was
 *    last written to this bit (output 0 = bit 0, output 1 = bit 1, etc.). The number of bits =
 *    number of outputs in this SCT.
 */
#define SCT_CONFLAG_NCFLAG(x)                    (((uint32_t)(((uint32_t)(x)) << SCT_CONFLAG_NCFLAG_SHIFT)) & SCT_CONFLAG_NCFLAG_MASK)
#define SCT_CONFLAG_BUSERRL_MASK                 (0x40000000U)
#define SCT_CONFLAG_BUSERRL_SHIFT                (30U)
/*! BUSERRL - The most recent bus error from this SCT involved writing CTR L/Unified, STATE
 *    L/Unified, MATCH L/Unified, or the Output register when the L/U counter was not halted. A word write
 *    to certain L and H registers can be half successful and half unsuccessful.
 */
#define SCT_CONFLAG_BUSERRL(x)                   (((uint32_t)(((uint32_t)(x)) << SCT_CONFLAG_BUSERRL_SHIFT)) & SCT_CONFLAG_BUSERRL_MASK)
#define SCT_CONFLAG_BUSERRH_MASK                 (0x80000000U)
#define SCT_CONFLAG_BUSERRH_SHIFT                (31U)
/*! BUSERRH - The most recent bus error from this SCT involved writing CTR H, STATE H, MATCH H, or
 *    the Output register when the H counter was not halted.
 */
#define SCT_CONFLAG_BUSERRH(x)                   (((uint32_t)(((uint32_t)(x)) << SCT_CONFLAG_BUSERRH_SHIFT)) & SCT_CONFLAG_BUSERRH_MASK)
/*! @} */

/*! @name CAPL - SCT_CAPL register */
/*! @{ */
#define SCT_CAPL_CAPL_MASK                       (0xFFFFU)
#define SCT_CAPL_CAPL_SHIFT                      (0U)
#define SCT_CAPL_CAPL(x)                         (((uint16_t)(((uint16_t)(x)) << SCT_CAPL_CAPL_SHIFT)) & SCT_CAPL_CAPL_MASK)
/*! @} */

/* The count of SCT_CAPL */
#define SCT_CAPL_COUNT                           (8U)

/*! @name CAPH - SCT_CAPH register */
/*! @{ */
#define SCT_CAPH_CAPH_MASK                       (0xFFFFU)
#define SCT_CAPH_CAPH_SHIFT                      (0U)
#define SCT_CAPH_CAPH(x)                         (((uint16_t)(((uint16_t)(x)) << SCT_CAPH_CAPH_SHIFT)) & SCT_CAPH_CAPH_MASK)
/*! @} */

/* The count of SCT_CAPH */
#define SCT_CAPH_COUNT                           (8U)

/*! @name CAP - SCT capture register of capture channel */
/*! @{ */
#define SCT_CAP_CAPn_L_MASK                      (0xFFFFU)
#define SCT_CAP_CAPn_L_SHIFT                     (0U)
/*! CAPn_L - When UNIFY = 0, read the 16-bit counter value at which this register was last captured.
 *    When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last
 *    captured.
 */
#define SCT_CAP_CAPn_L(x)                        (((uint32_t)(((uint32_t)(x)) << SCT_CAP_CAPn_L_SHIFT)) & SCT_CAP_CAPn_L_MASK)
#define SCT_CAP_CAPn_H_MASK                      (0xFFFF0000U)
#define SCT_CAP_CAPn_H_SHIFT                     (16U)
/*! CAPn_H - When UNIFY = 0, read the 16-bit counter value at which this register was last captured.
 *    When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last
 *    captured.
 */
#define SCT_CAP_CAPn_H(x)                        (((uint32_t)(((uint32_t)(x)) << SCT_CAP_CAPn_H_SHIFT)) & SCT_CAP_CAPn_H_MASK)
/*! @} */

/* The count of SCT_CAP */
#define SCT_CAP_COUNT                            (8U)

/*! @name MATCHL - SCT_MATCHL register */
/*! @{ */
#define SCT_MATCHL_MATCHL_MASK                   (0xFFFFU)
#define SCT_MATCHL_MATCHL_SHIFT                  (0U)
#define SCT_MATCHL_MATCHL(x)                     (((uint16_t)(((uint16_t)(x)) << SCT_MATCHL_MATCHL_SHIFT)) & SCT_MATCHL_MATCHL_MASK)
/*! @} */

/* The count of SCT_MATCHL */
#define SCT_MATCHL_COUNT                         (8U)

/*! @name MATCHH - SCT_MATCHH register */
/*! @{ */
#define SCT_MATCHH_MATCHH_MASK                   (0xFFFFU)
#define SCT_MATCHH_MATCHH_SHIFT                  (0U)
#define SCT_MATCHH_MATCHH(x)                     (((uint16_t)(((uint16_t)(x)) << SCT_MATCHH_MATCHH_SHIFT)) & SCT_MATCHH_MATCHH_MASK)
/*! @} */

/* The count of SCT_MATCHH */
#define SCT_MATCHH_COUNT                         (8U)

/*! @name MATCH - SCT match value register of match channels */
/*! @{ */
#define SCT_MATCH_MATCHn_L_MASK                  (0xFFFFU)
#define SCT_MATCH_MATCHn_L_SHIFT                 (0U)
/*! MATCHn_L - When UNIFY = 0, read or write the 16-bit value to be compared to the L counter. When
 *    UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified
 *    counter.
 */
#define SCT_MATCH_MATCHn_L(x)                    (((uint32_t)(((uint32_t)(x)) << SCT_MATCH_MATCHn_L_SHIFT)) & SCT_MATCH_MATCHn_L_MASK)
#define SCT_MATCH_MATCHn_H_MASK                  (0xFFFF0000U)
#define SCT_MATCH_MATCHn_H_SHIFT                 (16U)
/*! MATCHn_H - When UNIFY = 0, read or write the 16-bit value to be compared to the H counter. When
 *    UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified
 *    counter.
 */
#define SCT_MATCH_MATCHn_H(x)                    (((uint32_t)(((uint32_t)(x)) << SCT_MATCH_MATCHn_H_SHIFT)) & SCT_MATCH_MATCHn_H_MASK)
/*! @} */

/* The count of SCT_MATCH */
#define SCT_MATCH_COUNT                          (8U)

/*! @name CAPCTRLL - SCT_CAPCTRLL register */
/*! @{ */
#define SCT_CAPCTRLL_CAPCTRLL_MASK               (0xFFFFU)
#define SCT_CAPCTRLL_CAPCTRLL_SHIFT              (0U)
#define SCT_CAPCTRLL_CAPCTRLL(x)                 (((uint16_t)(((uint16_t)(x)) << SCT_CAPCTRLL_CAPCTRLL_SHIFT)) & SCT_CAPCTRLL_CAPCTRLL_MASK)
/*! @} */

/* The count of SCT_CAPCTRLL */
#define SCT_CAPCTRLL_COUNT                       (8U)

/*! @name CAPCTRLH - SCT_CAPCTRLH register */
/*! @{ */
#define SCT_CAPCTRLH_CAPCTRLH_MASK               (0xFFFFU)
#define SCT_CAPCTRLH_CAPCTRLH_SHIFT              (0U)
#define SCT_CAPCTRLH_CAPCTRLH(x)                 (((uint16_t)(((uint16_t)(x)) << SCT_CAPCTRLH_CAPCTRLH_SHIFT)) & SCT_CAPCTRLH_CAPCTRLH_MASK)
/*! @} */

/* The count of SCT_CAPCTRLH */
#define SCT_CAPCTRLH_COUNT                       (8U)

/*! @name CAPCTRL - SCT capture control register */
/*! @{ */
#define SCT_CAPCTRL_CAPCONn_L_MASK               (0xFFU)
#define SCT_CAPCTRL_CAPCONn_L_SHIFT              (0U)
/*! CAPCONn_L - If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1)
 *    register to be loaded (event 0 = bit 0, event 1 = bit 1, etc.). The number of bits = number of
 *    match/captures in this SCT.
 */
#define SCT_CAPCTRL_CAPCONn_L(x)                 (((uint32_t)(((uint32_t)(x)) << SCT_CAPCTRL_CAPCONn_L_SHIFT)) & SCT_CAPCTRL_CAPCONn_L_MASK)
#define SCT_CAPCTRL_CAPCONn_H_MASK               (0xFF0000U)
#define SCT_CAPCTRL_CAPCONn_H_SHIFT              (16U)
/*! CAPCONn_H - If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event
 *    0 = bit 16, event 1 = bit 17, etc.). The number of bits = number of match/captures in this SCT.
 */
#define SCT_CAPCTRL_CAPCONn_H(x)                 (((uint32_t)(((uint32_t)(x)) << SCT_CAPCTRL_CAPCONn_H_SHIFT)) & SCT_CAPCTRL_CAPCONn_H_MASK)
/*! @} */

/* The count of SCT_CAPCTRL */
#define SCT_CAPCTRL_COUNT                        (8U)

/*! @name MATCHRELL - SCT_MATCHRELL register */
/*! @{ */
#define SCT_MATCHRELL_MATCHRELL_MASK             (0xFFFFU)
#define SCT_MATCHRELL_MATCHRELL_SHIFT            (0U)
#define SCT_MATCHRELL_MATCHRELL(x)               (((uint16_t)(((uint16_t)(x)) << SCT_MATCHRELL_MATCHRELL_SHIFT)) & SCT_MATCHRELL_MATCHRELL_MASK)
/*! @} */

/* The count of SCT_MATCHRELL */
#define SCT_MATCHRELL_COUNT                      (8U)

/*! @name MATCHRELH - SCT_MATCHRELH register */
/*! @{ */
#define SCT_MATCHRELH_MATCHRELH_MASK             (0xFFFFU)
#define SCT_MATCHRELH_MATCHRELH_SHIFT            (0U)
#define SCT_MATCHRELH_MATCHRELH(x)               (((uint16_t)(((uint16_t)(x)) << SCT_MATCHRELH_MATCHRELH_SHIFT)) & SCT_MATCHRELH_MATCHRELH_MASK)
/*! @} */

/* The count of SCT_MATCHRELH */
#define SCT_MATCHRELH_COUNT                      (8U)

/*! @name MATCHREL - SCT match reload value register */
/*! @{ */
#define SCT_MATCHREL_RELOADn_L_MASK              (0xFFFFU)
#define SCT_MATCHREL_RELOADn_L_SHIFT             (0U)
/*! RELOADn_L - When UNIFY = 0, specifies the 16-bit value to be loaded into the MATCHn_L register.
 *    When UNIFY = 1, specifies the lower 16 bits of the 32-bit value to be loaded into the MATCHn
 *    register.
 */
#define SCT_MATCHREL_RELOADn_L(x)                (((uint32_t)(((uint32_t)(x)) << SCT_MATCHREL_RELOADn_L_SHIFT)) & SCT_MATCHREL_RELOADn_L_MASK)
#define SCT_MATCHREL_RELOADn_H_MASK              (0xFFFF0000U)
#define SCT_MATCHREL_RELOADn_H_SHIFT             (16U)
/*! RELOADn_H - When UNIFY = 0, specifies the 16-bit to be loaded into the MATCHn_H register. When
 *    UNIFY = 1, specifies the upper 16 bits of the 32-bit value to be loaded into the MATCHn
 *    register.
 */
#define SCT_MATCHREL_RELOADn_H(x)                (((uint32_t)(((uint32_t)(x)) << SCT_MATCHREL_RELOADn_H_SHIFT)) & SCT_MATCHREL_RELOADn_H_MASK)
/*! @} */

/* The count of SCT_MATCHREL */
#define SCT_MATCHREL_COUNT                       (8U)

/*! @name EV_STATE - SCT event state register 0 */
/*! @{ */
#define SCT_EV_STATE_STATEMSKn_MASK              (0xFFU)
#define SCT_EV_STATE_STATEMSKn_SHIFT             (0U)
/*! STATEMSKn - If bit m is one, event n happens in state m of the counter selected by the HEVENT
 *    bit (n = event number, m = state number; state 0 = bit 0, state 1= bit 1, etc.). The number of
 *    bits = number of states in this SCT.
 */
#define SCT_EV_STATE_STATEMSKn(x)                (((uint32_t)(((uint32_t)(x)) << SCT_EV_STATE_STATEMSKn_SHIFT)) & SCT_EV_STATE_STATEMSKn_MASK)
/*! @} */

/* The count of SCT_EV_STATE */
#define SCT_EV_STATE_COUNT                       (8U)

/*! @name EV_CTRL - SCT event control register 0 */
/*! @{ */
#define SCT_EV_CTRL_MATCHSEL_MASK                (0xFU)
#define SCT_EV_CTRL_MATCHSEL_SHIFT               (0U)
/*! MATCHSEL - Selects the Match register associated with this event (if any). A match can occur
 *    only when the counter selected by the HEVENT bit is running.
 */
#define SCT_EV_CTRL_MATCHSEL(x)                  (((uint32_t)(((uint32_t)(x)) << SCT_EV_CTRL_MATCHSEL_SHIFT)) & SCT_EV_CTRL_MATCHSEL_MASK)
#define SCT_EV_CTRL_HEVENT_MASK                  (0x10U)
#define SCT_EV_CTRL_HEVENT_SHIFT                 (4U)
/*! HEVENT - Select L/H counter. Do not set this bit if UNIFY = 1.
 *  0b0..Selects the L state and the L match register selected by MATCHSEL.
 *  0b1..Selects the H state and the H match register selected by MATCHSEL.
 */
#define SCT_EV_CTRL_HEVENT(x)                    (((uint32_t)(((uint32_t)(x)) << SCT_EV_CTRL_HEVENT_SHIFT)) & SCT_EV_CTRL_HEVENT_MASK)
#define SCT_EV_CTRL_OUTSEL_MASK                  (0x20U)
#define SCT_EV_CTRL_OUTSEL_SHIFT                 (5U)
/*! OUTSEL - Input/output select
 *  0b0..Selects the inputs selected by IOSEL.
 *  0b1..Selects the outputs selected by IOSEL.
 */
#define SCT_EV_CTRL_OUTSEL(x)                    (((uint32_t)(((uint32_t)(x)) << SCT_EV_CTRL_OUTSEL_SHIFT)) & SCT_EV_CTRL_OUTSEL_MASK)
#define SCT_EV_CTRL_IOSEL_MASK                   (0x3C0U)
#define SCT_EV_CTRL_IOSEL_SHIFT                  (6U)
/*! IOSEL - Selects the input or output signal number associated with this event (if any). Do not
 *    select an input in this register if CKMODE is 1x. In this case the clock input is an implicit
 *    ingredient of every event.
 */
#define SCT_EV_CTRL_IOSEL(x)                     (((uint32_t)(((uint32_t)(x)) << SCT_EV_CTRL_IOSEL_SHIFT)) & SCT_EV_CTRL_IOSEL_MASK)
#define SCT_EV_CTRL_IOCOND_MASK                  (0xC00U)
#define SCT_EV_CTRL_IOCOND_SHIFT                 (10U)
/*! IOCOND - Selects the I/O condition for event n. (The detection of edges on outputs lag the
 *    conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state
 *    detection, an input must have a minimum pulse width of at least one SCT clock period .
 *  0b00..LOW
 *  0b01..Rise
 *  0b10..Fall
 *  0b11..HIGH
 */
#define SCT_EV_CTRL_IOCOND(x)                    (((uint32_t)(((uint32_t)(x)) << SCT_EV_CTRL_IOCOND_SHIFT)) & SCT_EV_CTRL_IOCOND_MASK)
#define SCT_EV_CTRL_COMBMODE_MASK                (0x3000U)
#define SCT_EV_CTRL_COMBMODE_SHIFT               (12U)
/*! COMBMODE - Selects how the specified match and I/O condition are used and combined.
 *  0b00..OR. The event occurs when either the specified match or I/O condition occurs.
 *  0b01..MATCH. Uses the specified match only.
 *  0b10..IO. Uses the specified I/O condition only.
 *  0b11..AND. The event occurs when the specified match and I/O condition occur simultaneously.
 */
#define SCT_EV_CTRL_COMBMODE(x)                  (((uint32_t)(((uint32_t)(x)) << SCT_EV_CTRL_COMBMODE_SHIFT)) & SCT_EV_CTRL_COMBMODE_MASK)
#define SCT_EV_CTRL_STATELD_MASK                 (0x4000U)
#define SCT_EV_CTRL_STATELD_SHIFT                (14U)
/*! STATELD - This bit controls how the STATEV value modifies the state selected by HEVENT when this
 *    event is the highest-numbered event occurring for that state.
 *  0b0..STATEV value is added into STATE (the carry-out is ignored).
 *  0b1..STATEV value is loaded into STATE.
 */
#define SCT_EV_CTRL_STATELD(x)                   (((uint32_t)(((uint32_t)(x)) << SCT_EV_CTRL_STATELD_SHIFT)) & SCT_EV_CTRL_STATELD_MASK)
#define SCT_EV_CTRL_STATEV_MASK                  (0xF8000U)
#define SCT_EV_CTRL_STATEV_SHIFT                 (15U)
/*! STATEV - This value is loaded into or added to the state selected by HEVENT, depending on
 *    STATELD, when this event is the highest-numbered event occurring for that state. If STATELD and
 *    STATEV are both zero, there is no change to the STATE value.
 */
#define SCT_EV_CTRL_STATEV(x)                    (((uint32_t)(((uint32_t)(x)) << SCT_EV_CTRL_STATEV_SHIFT)) & SCT_EV_CTRL_STATEV_MASK)
#define SCT_EV_CTRL_MATCHMEM_MASK                (0x100000U)
#define SCT_EV_CTRL_MATCHMEM_SHIFT               (20U)
/*! MATCHMEM - If this bit is one and the COMBMODE field specifies a match component to the
 *    triggering of this event, then a match is considered to be active whenever the counter value is
 *    GREATER THAN OR EQUAL TO the value specified in the match register when counting up, LESS THEN OR
 *    EQUAL TO the match value when counting down. If this bit is zero, a match is only be active
 *    during the cycle when the counter is equal to the match value.
 */
#define SCT_EV_CTRL_MATCHMEM(x)                  (((uint32_t)(((uint32_t)(x)) << SCT_EV_CTRL_MATCHMEM_SHIFT)) & SCT_EV_CTRL_MATCHMEM_MASK)
#define SCT_EV_CTRL_DIRECTION_MASK               (0x600000U)
#define SCT_EV_CTRL_DIRECTION_SHIFT              (21U)
/*! DIRECTION - Direction qualifier for event generation. This field only applies when the counters
 *    are operating in BIDIR mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
 *  0b00..Direction independent. This event is triggered regardless of the count direction.
 *  0b01..Counting up. This event is triggered only during up-counting when BIDIR = 1.
 *  0b10..Counting down. This event is triggered only during down-counting when BIDIR = 1.
 */
#define SCT_EV_CTRL_DIRECTION(x)                 (((uint32_t)(((uint32_t)(x)) << SCT_EV_CTRL_DIRECTION_SHIFT)) & SCT_EV_CTRL_DIRECTION_MASK)
/*! @} */

/* The count of SCT_EV_CTRL */
#define SCT_EV_CTRL_COUNT                        (8U)

/*! @name OUT_SET - SCT output 0 set register */
/*! @{ */
#define SCT_OUT_SET_SET_MASK                     (0xFFU)
#define SCT_OUT_SET_SET_SHIFT                    (0U)
/*! SET - A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) output
 *    0 = bit 0, output 1 = bit 1, etc. The number of bits = number of events in this SCT. When the
 *    counter is used in bi-directional mode, it is possible to reverse the action specified by the
 *    output set and clear registers when counting down, See the OUTPUTCTRL register.
 */
#define SCT_OUT_SET_SET(x)                       (((uint32_t)(((uint32_t)(x)) << SCT_OUT_SET_SET_SHIFT)) & SCT_OUT_SET_SET_MASK)
/*! @} */

/* The count of SCT_OUT_SET */
#define SCT_OUT_SET_COUNT                        (7U)

/*! @name OUT_CLR - SCT output 0 clear register */
/*! @{ */
#define SCT_OUT_CLR_CLR_MASK                     (0xFFU)
#define SCT_OUT_CLR_CLR_SHIFT                    (0U)
/*! CLR - A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0
 *    = bit 0, event 1 = bit 1, etc. The number of bits = number of events in this SCT. When the
 *    counter is used in bi-directional mode, it is possible to reverse the action specified by the
 *    output set and clear registers when counting down, See the OUTPUTCTRL register.
 */
#define SCT_OUT_CLR_CLR(x)                       (((uint32_t)(((uint32_t)(x)) << SCT_OUT_CLR_CLR_SHIFT)) & SCT_OUT_CLR_CLR_MASK)
/*! @} */

/* The count of SCT_OUT_CLR */
#define SCT_OUT_CLR_COUNT                        (7U)


/*!
 * @}
 */ /* end of group SCT_Register_Masks */


/* SCT - Peripheral instance base addresses */
/** Peripheral SCT0 base address */
#define SCT0_BASE                                (0x50004000u)
/** Peripheral SCT0 base pointer */
#define SCT0                                     ((SCT_Type *)SCT0_BASE)
/** Array initializer of SCT peripheral base addresses */
#define SCT_BASE_ADDRS                           { SCT0_BASE }
/** Array initializer of SCT peripheral base pointers */
#define SCT_BASE_PTRS                            { SCT0 }
/** Interrupt vectors for the SCT peripheral type */
#define SCT_IRQS                                 { SCT0_IRQn }

/*!
 * @}
 */ /* end of group SCT_Peripheral_Access_Layer */

/**
  \brief  Structure type to access the Nested Vectored Interrupt Controller (NVIC).
 */
typedef struct {
  __IO uint32_t ISER[1U];               /*!< Offset: 0x000 (R/W)  Interrupt Set Enable Register */
       uint32_t RESERVED0[31U];
  __IO uint32_t ICER[1U];               /*!< Offset: 0x080 (R/W)  Interrupt Clear Enable Register */
       uint32_t RESERVED1[31U];
  __IO uint32_t ISPR[1U];               /*!< Offset: 0x100 (R/W)  Interrupt Set Pending Register */
       uint32_t RESERVED2[31U];
  __IO uint32_t RESERVED3[31U];
       uint32_t RESERVED4[64U];
  __IO uint32_t IP[8U];                 /*!< Offset: 0x300 (R/W)  Interrupt Priority Register */
} NVIC_Type;

/* Memory mapping of Core Hardware */
#define SCS_BASE            (0xE000E000UL)           	/*!< System Control Space Base Address */
#define SysTick_BASE        (SCS_BASE + 0x0010UL)	 	/*!< SysTick Base Address */
#define NVIC_BASE           (SCS_BASE + 0x0100UL) 	 	/*!< NVIC Base Address */
#define SCB_BASE            (SCS_BASE + 0x0D00UL)       /*!< System Control Block Base Address */

#define NVIC                ((NVIC_Type *) NVIC_BASE)   /*!< NVIC configuration struct */

/* ----------------------------------------------------------------------------
   -- SWM Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/** SWM - Register Layout Typedef */
typedef struct {
  union {                                          /* offset: 0x0 */
    struct {                                         /* offset: 0x0 */
      __IO uint32_t PINASSIGN0;                        /**< Pin assign register 0. Assign movable functions U0_TXD, U0_RXD, U0_RTS, U0_CTS., offset: 0x0 */
      __IO uint32_t PINASSIGN1;                        /**< Pin assign register 1. Assign movable functions U0_SCLK, U1_TXD, U1_RXD, U1_RTS., offset: 0x4 */
      __IO uint32_t PINASSIGN2;                        /**< Pin assign register 2. Assign movable functions U1_CTS, U1_SCLK, U2_TXD, U2_RXD., offset: 0x8 */
      __IO uint32_t PINASSIGN3;                        /**< Pin assign register 3. Assign movable function U2_RTS, U2_CTS, U2_SCLK, SPI0_SCK., offset: 0xC */
      __IO uint32_t PINASSIGN4;                        /**< Pin assign register 4. Assign movable functions SPI0_MOSI, SPI0_MISO, SPI0_SSEL0, SPI0_SSEL1., offset: 0x10 */
      __IO uint32_t PINASSIGN5;                        /**< Pin assign register 5. Assign movable functions SPI0_SSEL2, SPI0_SSEL3, SPI1_SCK, SPI1_MOSI, offset: 0x14 */
      __IO uint32_t PINASSIGN6;                        /**< Pin assign register 6. Assign movable functions SPI1_MISO, SPI1_SSEL0, SPI1_SSEL1, SCT0_IN0., offset: 0x18 */
      __IO uint32_t PINASSIGN7;                        /**< Pin assign register 7. Assign movable functions SCT_IN1, SCT_IN2, SCT_IN3, SCT_OUT0., offset: 0x1C */
      __IO uint32_t PINASSIGN8;                        /**< Pin assign register 8. Assign movable functions SCT_OUT1, SCT_OUT2, SCT_OUT3, SCT_OUT4., offset: 0x20 */
      __IO uint32_t PINASSIGN9;                        /**< Pin assign register 9. Assign movable functions SCT_OUT5, SCT_OUT6, I2C1_SDA, I2C1_SCL., offset: 0x24 */
      __IO uint32_t PINASSIGN10;                       /**< Pin assign register 10. Assign movable functions I2C2_SDA, I2C2_SCL, I2C3_SDA, I2C3_SCL., offset: 0x28 */
      __IO uint32_t PINASSIGN11;                       /**< Pin assign register 11. Assign movable functions COMP0_OUT, CLKOUT, GPIOINT_BMATCH, UART3_TXD, offset: 0x2C */
      __IO uint32_t PINASSIGN12;                       /**< Pin assign register 12. Assign movable functions UART3_RXD, UART3_SCLK, UART4_TXD, UART4_RXD., offset: 0x30 */
      __IO uint32_t PINASSIGN13;                       /**< Pin assign register 13. Assign movable functions UART4_SCLK, T0_MAT0, T0_MAT1, T0_MAT2., offset: 0x34 */
      __IO uint32_t PINASSIGN14;                       /**< Pin assign register 14. Assign movable functions T0_MAT3, T0_CAP0, T0_CAP1, T0_CAP2., offset: 0x38 */
    } PINASSIGN;
    __IO uint32_t PINASSIGN_DATA[15];                /**< Pin assign register, array offset: 0x0, array step: 0x4 */
  };
       uint8_t RESERVED_0[388];
  __IO uint32_t PINENABLE0;                        /**< Pin enable register 0. Enables fixed-pin functions ACMP_I0, ACMP_I1, SWCLK, SWDIO, XTALIN, XTALOUT, RESET, CLKIN, VDDCMP and so on., offset: 0x1C0 */
  __IO uint32_t PINENABLE1;                        /**< Pin enable register 1. Enables fixed-pin functions CAPT_X4, CAPT_X5, CAPT_X6, CAPT_X7, CAPT_X8, CAPT_X4, CAPT_YL and CAPT_YH., offset: 0x1C4 */
} SWM_Type;

/** Register for the SWM0 */
#define SWM	((SWM_Type *) 0x4000C000UL)

#define SWM_PINASSIGN0_U0_TXD_O_MASK             (0xFFU)
#define SWM_PINASSIGN0_U0_TXD_O_SHIFT            (0U)
/*! U0_TXD_O - U0_TXD function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0 (=0x20)
 *    to PIO1_21(=0x35) .
 */
#define SWM_PINASSIGN0_U0_TXD_O(x)               (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN0_U0_TXD_O_SHIFT)) & SWM_PINASSIGN0_U0_TXD_O_MASK)
#define SWM_PINASSIGN0_U0_RXD_I_MASK             (0xFF00U)
#define SWM_PINASSIGN0_U0_RXD_I_SHIFT            (8U)
/*! U0_RXD_I - U0_RXD function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0 (=0x20)
 *    to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN0_U0_RXD_I(x)               (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN0_U0_RXD_I_SHIFT)) & SWM_PINASSIGN0_U0_RXD_I_MASK)
#define SWM_PINASSIGN0_U0_RTS_O_MASK             (0xFF0000U)
#define SWM_PINASSIGN0_U0_RTS_O_SHIFT            (16U)
/*! U0_RTS_O - U0_RTS function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0 (=0x20)
 *    to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN0_U0_RTS_O(x)               (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN0_U0_RTS_O_SHIFT)) & SWM_PINASSIGN0_U0_RTS_O_MASK)
#define SWM_PINASSIGN0_U0_CTS_I_MASK             (0xFF000000U)
#define SWM_PINASSIGN0_U0_CTS_I_SHIFT            (24U)
/*! U0_CTS_I - U0_CTS function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0 (=0x20)
 *    to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN0_U0_CTS_I(x)               (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN0_U0_CTS_I_SHIFT)) & SWM_PINASSIGN0_U0_CTS_I_MASK)

#define SWM_PINASSIGN1_U0_SCLK_IO_MASK           (0xFFU)
#define SWM_PINASSIGN1_U0_SCLK_IO_SHIFT          (0U)
/*! U0_SCLK_IO - U0_SCLK function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0
 *    (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN1_U0_SCLK_IO(x)             (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN1_U0_SCLK_IO_SHIFT)) & SWM_PINASSIGN1_U0_SCLK_IO_MASK)
#define SWM_PINASSIGN1_U1_TXD_O_MASK             (0xFF00U)
#define SWM_PINASSIGN1_U1_TXD_O_SHIFT            (8U)
/*! U1_TXD_O - U1_TXD function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0 (=0x20)
 *    to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN1_U1_TXD_O(x)               (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN1_U1_TXD_O_SHIFT)) & SWM_PINASSIGN1_U1_TXD_O_MASK)
#define SWM_PINASSIGN1_U1_RXD_I_MASK             (0xFF0000U)
#define SWM_PINASSIGN1_U1_RXD_I_SHIFT            (16U)
/*! U1_RXD_I - U1_RXD function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0 (=0x20)
 *    to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN1_U1_RXD_I(x)               (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN1_U1_RXD_I_SHIFT)) & SWM_PINASSIGN1_U1_RXD_I_MASK)
#define SWM_PINASSIGN1_U1_RTS_O_MASK             (0xFF000000U)
#define SWM_PINASSIGN1_U1_RTS_O_SHIFT            (24U)
/*! U1_RTS_O - U1_RTS function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0 (=0x20)
 *    to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN1_U1_RTS_O(x)               (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN1_U1_RTS_O_SHIFT)) & SWM_PINASSIGN1_U1_RTS_O_MASK)

#define SWM_PINASSIGN2_U1_CTS_I_MASK             (0xFFU)
#define SWM_PINASSIGN2_U1_CTS_I_SHIFT            (0U)
/*! U1_CTS_I - U1_CTS function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0 (=0x20)
 *    to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN2_U1_CTS_I(x)               (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN2_U1_CTS_I_SHIFT)) & SWM_PINASSIGN2_U1_CTS_I_MASK)
#define SWM_PINASSIGN2_U1_SCLK_IO_MASK           (0xFF00U)
#define SWM_PINASSIGN2_U1_SCLK_IO_SHIFT          (8U)
/*! U1_SCLK_IO - U1_SCLK function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0
 *    (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN2_U1_SCLK_IO(x)             (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN2_U1_SCLK_IO_SHIFT)) & SWM_PINASSIGN2_U1_SCLK_IO_MASK)
#define SWM_PINASSIGN2_U2_TXD_O_MASK             (0xFF0000U)
#define SWM_PINASSIGN2_U2_TXD_O_SHIFT            (16U)
/*! U2_TXD_O - U2_TXD function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0 (=0x20)
 *    to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN2_U2_TXD_O(x)               (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN2_U2_TXD_O_SHIFT)) & SWM_PINASSIGN2_U2_TXD_O_MASK)
#define SWM_PINASSIGN2_U2_RXD_I_MASK             (0xFF000000U)
#define SWM_PINASSIGN2_U2_RXD_I_SHIFT            (24U)
/*! U2_RXD_I - U2_RXD function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0 (=0x20)
 *    to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN2_U2_RXD_I(x)               (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN2_U2_RXD_I_SHIFT)) & SWM_PINASSIGN2_U2_RXD_I_MASK)

#define SWM_PINASSIGN3_U2_RTS_O_MASK             (0xFFU)
#define SWM_PINASSIGN3_U2_RTS_O_SHIFT            (0U)
/*! U2_RTS_O - U2_RTS function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0 (=0x20)
 *    to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN3_U2_RTS_O(x)               (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN3_U2_RTS_O_SHIFT)) & SWM_PINASSIGN3_U2_RTS_O_MASK)
#define SWM_PINASSIGN3_U2_CTS_I_MASK             (0xFF00U)
#define SWM_PINASSIGN3_U2_CTS_I_SHIFT            (8U)
/*! U2_CTS_I - U2_CTS function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0 (=0x20)
 *    to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN3_U2_CTS_I(x)               (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN3_U2_CTS_I_SHIFT)) & SWM_PINASSIGN3_U2_CTS_I_MASK)
#define SWM_PINASSIGN3_U2_SCLK_IO_MASK           (0xFF0000U)
#define SWM_PINASSIGN3_U2_SCLK_IO_SHIFT          (16U)
/*! U2_SCLK_IO - U2_SCLK function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0
 *    (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN3_U2_SCLK_IO(x)             (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN3_U2_SCLK_IO_SHIFT)) & SWM_PINASSIGN3_U2_SCLK_IO_MASK)
#define SWM_PINASSIGN3_SPI0_SCK_IO_MASK          (0xFF000000U)
#define SWM_PINASSIGN3_SPI0_SCK_IO_SHIFT         (24U)
/*! SPI0_SCK_IO - SPI0_SCK function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0
 *    (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN3_SPI0_SCK_IO(x)            (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN3_SPI0_SCK_IO_SHIFT)) & SWM_PINASSIGN3_SPI0_SCK_IO_MASK)

#define SWM_PINASSIGN4_SPI0_MOSI_IO_MASK         (0xFFU)
#define SWM_PINASSIGN4_SPI0_MOSI_IO_SHIFT        (0U)
/*! SPI0_MOSI_IO - SPI0_MOSI function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0
 *    (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN4_SPI0_MOSI_IO(x)           (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN4_SPI0_MOSI_IO_SHIFT)) & SWM_PINASSIGN4_SPI0_MOSI_IO_MASK)
#define SWM_PINASSIGN4_SPI0_MISO_IO_MASK         (0xFF00U)
#define SWM_PINASSIGN4_SPI0_MISO_IO_SHIFT        (8U)
/*! SPI0_MISO_IO - SPI0_MISIO function assignment. The value is the pin number to be assigned to
 *    this function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0
 *    (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN4_SPI0_MISO_IO(x)           (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN4_SPI0_MISO_IO_SHIFT)) & SWM_PINASSIGN4_SPI0_MISO_IO_MASK)
#define SWM_PINASSIGN4_SPI0_SSEL0_IO_MASK        (0xFF0000U)
#define SWM_PINASSIGN4_SPI0_SSEL0_IO_SHIFT       (16U)
/*! SPI0_SSEL0_IO - SPI0_SSEL0 function assignment. The value is the pin number to be assigned to
 *    this function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from
 *    PIO1_0 (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN4_SPI0_SSEL0_IO(x)          (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN4_SPI0_SSEL0_IO_SHIFT)) & SWM_PINASSIGN4_SPI0_SSEL0_IO_MASK)
#define SWM_PINASSIGN4_SPI0_SSEL1_IO_MASK        (0xFF000000U)
#define SWM_PINASSIGN4_SPI0_SSEL1_IO_SHIFT       (24U)
/*! SPI0_SSEL1_IO - SPI0_SSEL1 function assignment. The value is the pin number to be assigned to
 *    this function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from
 *    PIO1_0 (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN4_SPI0_SSEL1_IO(x)          (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN4_SPI0_SSEL1_IO_SHIFT)) & SWM_PINASSIGN4_SPI0_SSEL1_IO_MASK)

#define SWM_PINASSIGN5_SPI0_SSEL2_IO_MASK        (0xFFU)
#define SWM_PINASSIGN5_SPI0_SSEL2_IO_SHIFT       (0U)
/*! SPI0_SSEL2_IO - SPI0_SSEL2 function assignment. The value is the pin number to be assigned to
 *    this function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from
 *    PIO1_0 (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN5_SPI0_SSEL2_IO(x)          (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN5_SPI0_SSEL2_IO_SHIFT)) & SWM_PINASSIGN5_SPI0_SSEL2_IO_MASK)
#define SWM_PINASSIGN5_SPI0_SSEL3_IO_MASK        (0xFF00U)
#define SWM_PINASSIGN5_SPI0_SSEL3_IO_SHIFT       (8U)
/*! SPI0_SSEL3_IO - SPI0_SSEL3 function assignment. The value is the pin number to be assigned to
 *    this function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from
 *    PIO1_0 (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN5_SPI0_SSEL3_IO(x)          (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN5_SPI0_SSEL3_IO_SHIFT)) & SWM_PINASSIGN5_SPI0_SSEL3_IO_MASK)
#define SWM_PINASSIGN5_SPI1_SCK_IO_MASK          (0xFF0000U)
#define SWM_PINASSIGN5_SPI1_SCK_IO_SHIFT         (16U)
/*! SPI1_SCK_IO - SPI1_SCK function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0
 *    (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN5_SPI1_SCK_IO(x)            (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN5_SPI1_SCK_IO_SHIFT)) & SWM_PINASSIGN5_SPI1_SCK_IO_MASK)
#define SWM_PINASSIGN5_SPI1_MOSI_IO_MASK         (0xFF000000U)
#define SWM_PINASSIGN5_SPI1_MOSI_IO_SHIFT        (24U)
/*! SPI1_MOSI_IO - SPI1_MOSI function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0
 *    (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN5_SPI1_MOSI_IO(x)           (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN5_SPI1_MOSI_IO_SHIFT)) & SWM_PINASSIGN5_SPI1_MOSI_IO_MASK)

#define SWM_PINASSIGN6_SPI1_MISO_IO_MASK         (0xFFU)
#define SWM_PINASSIGN6_SPI1_MISO_IO_SHIFT        (0U)
/*! SPI1_MISO_IO - SPI1_MISO function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0
 *    (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN6_SPI1_MISO_IO(x)           (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN6_SPI1_MISO_IO_SHIFT)) & SWM_PINASSIGN6_SPI1_MISO_IO_MASK)
#define SWM_PINASSIGN6_SPI1_SSEL0_IO_MASK        (0xFF00U)
#define SWM_PINASSIGN6_SPI1_SSEL0_IO_SHIFT       (8U)
/*! SPI1_SSEL0_IO - SPI1_SSEL0 function assignment. The value is the pin number to be assigned to
 *    this function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from
 *    PIO1_0 (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN6_SPI1_SSEL0_IO(x)          (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN6_SPI1_SSEL0_IO_SHIFT)) & SWM_PINASSIGN6_SPI1_SSEL0_IO_MASK)
#define SWM_PINASSIGN6_SPI1_SSEL1_IO_MASK        (0xFF0000U)
#define SWM_PINASSIGN6_SPI1_SSEL1_IO_SHIFT       (16U)
/*! SPI1_SSEL1_IO - SPI1_SSEL1 function assignment. The value is the pin number to be assigned to
 *    this function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from
 *    PIO1_0 (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN6_SPI1_SSEL1_IO(x)          (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN6_SPI1_SSEL1_IO_SHIFT)) & SWM_PINASSIGN6_SPI1_SSEL1_IO_MASK)
#define SWM_PINASSIGN6_SCT0_GPIO_IN_A_I_MASK     (0xFF000000U)
#define SWM_PINASSIGN6_SCT0_GPIO_IN_A_I_SHIFT    (24U)
/*! SCT0_GPIO_IN_A_I - SCT0_GPIO_IN_A function assignment. The value is the pin number to be
 *    assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and
 *    from PIO1_0 (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN6_SCT0_GPIO_IN_A_I(x)       (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN6_SCT0_GPIO_IN_A_I_SHIFT)) & SWM_PINASSIGN6_SCT0_GPIO_IN_A_I_MASK)

#define SWM_PINASSIGN7_SCT0_GPIO_IN_B_I_MASK     (0xFFU)
#define SWM_PINASSIGN7_SCT0_GPIO_IN_B_I_SHIFT    (0U)
/*! SCT0_GPIO_IN_B_I - SCT0_GPIO_IN_B function assignment. The value is the pin number to be
 *    assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and
 *    from PIO1_0 (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN7_SCT0_GPIO_IN_B_I(x)       (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN7_SCT0_GPIO_IN_B_I_SHIFT)) & SWM_PINASSIGN7_SCT0_GPIO_IN_B_I_MASK)
#define SWM_PINASSIGN7_SCT0_GPIO_IN_C_I_MASK     (0xFF00U)
#define SWM_PINASSIGN7_SCT0_GPIO_IN_C_I_SHIFT    (8U)
/*! SCT0_GPIO_IN_C_I - SCT0_GPIO_IN_C function assignment. The value is the pin number to be
 *    assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and
 *    from PIO1_0 (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN7_SCT0_GPIO_IN_C_I(x)       (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN7_SCT0_GPIO_IN_C_I_SHIFT)) & SWM_PINASSIGN7_SCT0_GPIO_IN_C_I_MASK)
#define SWM_PINASSIGN7_SCT0_GPIO_IN_D_I_MASK     (0xFF0000U)
#define SWM_PINASSIGN7_SCT0_GPIO_IN_D_I_SHIFT    (16U)
/*! SCT0_GPIO_IN_D_I - SCT0_GPIO_IN_D function assignment. The value is the pin number to be
 *    assigned to this function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and
 *    from PIO1_0 (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN7_SCT0_GPIO_IN_D_I(x)       (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN7_SCT0_GPIO_IN_D_I_SHIFT)) & SWM_PINASSIGN7_SCT0_GPIO_IN_D_I_MASK)
#define SWM_PINASSIGN7_SCT_OUT0_O_MASK           (0xFF000000U)
#define SWM_PINASSIGN7_SCT_OUT0_O_SHIFT          (24U)
/*! SCT_OUT0_O - SCT_OUT0 function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0
 *    (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN7_SCT_OUT0_O(x)             (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN7_SCT_OUT0_O_SHIFT)) & SWM_PINASSIGN7_SCT_OUT0_O_MASK)

#define SWM_PINASSIGN8_SCT_OUT1_O_MASK           (0xFFU)
#define SWM_PINASSIGN8_SCT_OUT1_O_SHIFT          (0U)
/*! SCT_OUT1_O - SCT_OUT1 function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0
 *    (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN8_SCT_OUT1_O(x)             (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN8_SCT_OUT1_O_SHIFT)) & SWM_PINASSIGN8_SCT_OUT1_O_MASK)
#define SWM_PINASSIGN8_SCT_OUT2_O_MASK           (0xFF00U)
#define SWM_PINASSIGN8_SCT_OUT2_O_SHIFT          (8U)
/*! SCT_OUT2_O - SCT_OUT2 function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0
 *    (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN8_SCT_OUT2_O(x)             (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN8_SCT_OUT2_O_SHIFT)) & SWM_PINASSIGN8_SCT_OUT2_O_MASK)
#define SWM_PINASSIGN8_SCT_OUT3_O_MASK           (0xFF0000U)
#define SWM_PINASSIGN8_SCT_OUT3_O_SHIFT          (16U)
/*! SCT_OUT3_O - SCT_OUT3 function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0
 *    (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN8_SCT_OUT3_O(x)             (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN8_SCT_OUT3_O_SHIFT)) & SWM_PINASSIGN8_SCT_OUT3_O_MASK)
#define SWM_PINASSIGN8_SCT_OUT4_O_MASK           (0xFF000000U)
#define SWM_PINASSIGN8_SCT_OUT4_O_SHIFT          (24U)
/*! SCT_OUT4_O - SCT_OUT4 function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0
 *    (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN8_SCT_OUT4_O(x)             (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN8_SCT_OUT4_O_SHIFT)) & SWM_PINASSIGN8_SCT_OUT4_O_MASK)

#define SWM_PINASSIGN9_SCT_OUT5_O_MASK           (0xFFU)
#define SWM_PINASSIGN9_SCT_OUT5_O_SHIFT          (0U)
/*! SCT_OUT5_O - SCT_OUT5 function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0
 *    (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN9_SCT_OUT5_O(x)             (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN9_SCT_OUT5_O_SHIFT)) & SWM_PINASSIGN9_SCT_OUT5_O_MASK)
#define SWM_PINASSIGN9_SCT_OUT6_O_MASK           (0xFF00U)
#define SWM_PINASSIGN9_SCT_OUT6_O_SHIFT          (8U)
/*! SCT_OUT6_O - SCT_OUT6 function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0
 *    (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN9_SCT_OUT6_O(x)             (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN9_SCT_OUT6_O_SHIFT)) & SWM_PINASSIGN9_SCT_OUT6_O_MASK)
#define SWM_PINASSIGN9_I2C1_SDA_IO_MASK          (0xFF0000U)
#define SWM_PINASSIGN9_I2C1_SDA_IO_SHIFT         (16U)
/*! I2C1_SDA_IO - I2C1_SDA function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0
 *    (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN9_I2C1_SDA_IO(x)            (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN9_I2C1_SDA_IO_SHIFT)) & SWM_PINASSIGN9_I2C1_SDA_IO_MASK)
#define SWM_PINASSIGN9_I2C1_SCL_IO_MASK          (0xFF000000U)
#define SWM_PINASSIGN9_I2C1_SCL_IO_SHIFT         (24U)
/*! I2C1_SCL_IO - I2C1_SCL function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0
 *    (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN9_I2C1_SCL_IO(x)            (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN9_I2C1_SCL_IO_SHIFT)) & SWM_PINASSIGN9_I2C1_SCL_IO_MASK)

#define SWM_PINASSIGN10_I2C2_SDA_IO_MASK         (0xFFU)
#define SWM_PINASSIGN10_I2C2_SDA_IO_SHIFT        (0U)
/*! I2C2_SDA_IO - I2C1_SDA function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0
 *    (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN10_I2C2_SDA_IO(x)           (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN10_I2C2_SDA_IO_SHIFT)) & SWM_PINASSIGN10_I2C2_SDA_IO_MASK)
#define SWM_PINASSIGN10_I2C2_SCL_IO_MASK         (0xFF00U)
#define SWM_PINASSIGN10_I2C2_SCL_IO_SHIFT        (8U)
/*! I2C2_SCL_IO - I2C1_SCL function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0
 *    (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN10_I2C2_SCL_IO(x)           (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN10_I2C2_SCL_IO_SHIFT)) & SWM_PINASSIGN10_I2C2_SCL_IO_MASK)
#define SWM_PINASSIGN10_I2C3_SDA_IO_MASK         (0xFF0000U)
#define SWM_PINASSIGN10_I2C3_SDA_IO_SHIFT        (16U)
/*! I2C3_SDA_IO - I2C3_SDA function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0
 *    (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN10_I2C3_SDA_IO(x)           (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN10_I2C3_SDA_IO_SHIFT)) & SWM_PINASSIGN10_I2C3_SDA_IO_MASK)
#define SWM_PINASSIGN10_I2C3_SCL_IO_MASK         (0xFF000000U)
#define SWM_PINASSIGN10_I2C3_SCL_IO_SHIFT        (24U)
/*! I2C3_SCL_IO - I2C3_SCL function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0
 *    (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN10_I2C3_SCL_IO(x)           (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN10_I2C3_SCL_IO_SHIFT)) & SWM_PINASSIGN10_I2C3_SCL_IO_MASK)

#define SWM_PINASSIGN11_COMP0_OUT_O_MASK         (0xFFU)
#define SWM_PINASSIGN11_COMP0_OUT_O_SHIFT        (0U)
/*! COMP0_OUT_O - COMP0_OUT function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0
 *    (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN11_COMP0_OUT_O(x)           (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN11_COMP0_OUT_O_SHIFT)) & SWM_PINASSIGN11_COMP0_OUT_O_MASK)
#define SWM_PINASSIGN11_CLKOUT_O_MASK            (0xFF00U)
#define SWM_PINASSIGN11_CLKOUT_O_SHIFT           (8U)
/*! CLKOUT_O - CLKOUT function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0 (=0x20)
 *    to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN11_CLKOUT_O(x)              (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN11_CLKOUT_O_SHIFT)) & SWM_PINASSIGN11_CLKOUT_O_MASK)
#define SWM_PINASSIGN11_GPIO_INT_BMAT_O_MASK     (0xFF0000U)
#define SWM_PINASSIGN11_GPIO_INT_BMAT_O_SHIFT    (16U)
/*! GPIO_INT_BMAT_O - GPIO_INT_BMAT function assignment. The value is the pin number to be assigned
 *    to this function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from
 *    PIO1_0 (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN11_GPIO_INT_BMAT_O(x)       (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN11_GPIO_INT_BMAT_O_SHIFT)) & SWM_PINASSIGN11_GPIO_INT_BMAT_O_MASK)
#define SWM_PINASSIGN11_UART3_TXD_MASK           (0xFF000000U)
#define SWM_PINASSIGN11_UART3_TXD_SHIFT          (24U)
/*! UART3_TXD - UART3_TXD function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0
 *    (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN11_UART3_TXD(x)             (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN11_UART3_TXD_SHIFT)) & SWM_PINASSIGN11_UART3_TXD_MASK)

#define SWM_PINASSIGN12_UART3_RXD_MASK           (0xFFU)
#define SWM_PINASSIGN12_UART3_RXD_SHIFT          (0U)
/*! UART3_RXD - UART3_RXD function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0
 *    (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN12_UART3_RXD(x)             (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN12_UART3_RXD_SHIFT)) & SWM_PINASSIGN12_UART3_RXD_MASK)
#define SWM_PINASSIGN12_UART3_SCLK_MASK          (0xFF00U)
#define SWM_PINASSIGN12_UART3_SCLK_SHIFT         (8U)
/*! UART3_SCLK - UART3_SCLK function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0
 *    (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN12_UART3_SCLK(x)            (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN12_UART3_SCLK_SHIFT)) & SWM_PINASSIGN12_UART3_SCLK_MASK)
#define SWM_PINASSIGN12_UART4_TXD_MASK           (0xFF0000U)
#define SWM_PINASSIGN12_UART4_TXD_SHIFT          (16U)
/*! UART4_TXD - UART4_TXD function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0
 *    (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN12_UART4_TXD(x)             (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN12_UART4_TXD_SHIFT)) & SWM_PINASSIGN12_UART4_TXD_MASK)
#define SWM_PINASSIGN12_UART4_RXD_MASK           (0xFF000000U)
#define SWM_PINASSIGN12_UART4_RXD_SHIFT          (24U)
/*! UART4_RXD - UART4_TXD function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0
 *    (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN12_UART4_RXD(x)             (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN12_UART4_RXD_SHIFT)) & SWM_PINASSIGN12_UART4_RXD_MASK)

#define SWM_PINASSIGN13_UART4_SCLK_MASK          (0xFFU)
#define SWM_PINASSIGN13_UART4_SCLK_SHIFT         (0U)
/*! UART4_SCLK - UART4_SCLK function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0
 *    (=0x20) to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN13_UART4_SCLK(x)            (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN13_UART4_SCLK_SHIFT)) & SWM_PINASSIGN13_UART4_SCLK_MASK)
#define SWM_PINASSIGN13_T0_MAT0_MASK             (0xFF00U)
#define SWM_PINASSIGN13_T0_MAT0_SHIFT            (8U)
/*! T0_MAT0 - T0_MAT0 function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0 (=0x20)
 *    to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN13_T0_MAT0(x)               (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN13_T0_MAT0_SHIFT)) & SWM_PINASSIGN13_T0_MAT0_MASK)
#define SWM_PINASSIGN13_T0_MAT1_MASK             (0xFF0000U)
#define SWM_PINASSIGN13_T0_MAT1_SHIFT            (16U)
/*! T0_MAT1 - T0_MAT1 function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0 (=0x20)
 *    to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN13_T0_MAT1(x)               (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN13_T0_MAT1_SHIFT)) & SWM_PINASSIGN13_T0_MAT1_MASK)
#define SWM_PINASSIGN13_T0_MAT2_MASK             (0xFF000000U)
#define SWM_PINASSIGN13_T0_MAT2_SHIFT            (24U)
/*! T0_MAT2 - T0_MAT2 function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0 (=0x20)
 *    to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN13_T0_MAT2(x)               (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN13_T0_MAT2_SHIFT)) & SWM_PINASSIGN13_T0_MAT2_MASK)

#define SWM_PINASSIGN14_T0_MAT3_MASK             (0xFFU)
#define SWM_PINASSIGN14_T0_MAT3_SHIFT            (0U)
/*! T0_MAT3 - T0_MAT3 function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0 (=0x20)
 *    to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN14_T0_MAT3(x)               (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN14_T0_MAT3_SHIFT)) & SWM_PINASSIGN14_T0_MAT3_MASK)
#define SWM_PINASSIGN14_T0_CAP0_MASK             (0xFF00U)
#define SWM_PINASSIGN14_T0_CAP0_SHIFT            (8U)
/*! T0_CAP0 - T0_CAP0 function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0 (=0x20)
 *    to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN14_T0_CAP0(x)               (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN14_T0_CAP0_SHIFT)) & SWM_PINASSIGN14_T0_CAP0_MASK)
#define SWM_PINASSIGN14_T0_CAP1_MASK             (0xFF0000U)
#define SWM_PINASSIGN14_T0_CAP1_SHIFT            (16U)
/*! T0_CAP1 - T0_CAP1 function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0 (=0x20)
 *    to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN14_T0_CAP1(x)               (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN14_T0_CAP1_SHIFT)) & SWM_PINASSIGN14_T0_CAP1_MASK)
#define SWM_PINASSIGN14_T0_CAP2_MASK             (0xFF000000U)
#define SWM_PINASSIGN14_T0_CAP2_SHIFT            (24U)
/*! T0_CAP2 - T0_CAP2 function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0 (=0x20)
 *    to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN14_T0_CAP2(x)               (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN14_T0_CAP2_SHIFT)) & SWM_PINASSIGN14_T0_CAP2_MASK)

#define SWM_PINASSIGN_DATA_DATA0_MASK            (0xFFU)
#define SWM_PINASSIGN_DATA_DATA0_SHIFT           (0U)
/*! DATA0 - T0_MAT3 function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0 (=0x20)
 *    to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN_DATA_DATA0(x)              (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN_DATA_DATA0_SHIFT)) & SWM_PINASSIGN_DATA_DATA0_MASK)
#define SWM_PINASSIGN_DATA_DATA1_MASK            (0xFF00U)
#define SWM_PINASSIGN_DATA_DATA1_SHIFT           (8U)
/*! DATA1 - T0_CAP0 function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0 (=0x20)
 *    to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN_DATA_DATA1(x)              (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN_DATA_DATA1_SHIFT)) & SWM_PINASSIGN_DATA_DATA1_MASK)
#define SWM_PINASSIGN_DATA_DATA2_MASK            (0xFF0000U)
#define SWM_PINASSIGN_DATA_DATA2_SHIFT           (16U)
/*! DATA2 - T0_CAP1 function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0 (=0x20)
 *    to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN_DATA_DATA2(x)              (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN_DATA_DATA2_SHIFT)) & SWM_PINASSIGN_DATA_DATA2_MASK)
#define SWM_PINASSIGN_DATA_DATA3_MASK            (0xFF000000U)
#define SWM_PINASSIGN_DATA_DATA3_SHIFT           (24U)
/*! DATA3 - T0_CAP2 function assignment. The value is the pin number to be assigned to this
 *    function. The following pins are available: PIO0_0 (= 0) to PIO0_31 (= 0x1F) and from PIO1_0 (=0x20)
 *    to PIO1_21(=0x35).
 */
#define SWM_PINASSIGN_DATA_DATA3(x)              (((uint32_t)(((uint32_t)(x)) << SWM_PINASSIGN_DATA_DATA3_SHIFT)) & SWM_PINASSIGN_DATA_DATA3_MASK)

/* The count of SWM_PINASSIGN_DATA */
#define SWM_PINASSIGN_DATA_COUNT                 (15U)

/*! @name PINENABLE0 - Pin enable register 0. Enables fixed-pin functions ACMP_I0, ACMP_I1, SWCLK, SWDIO, XTALIN, XTALOUT, RESET, CLKIN, VDDCMP and so on. */
/*! @{ */
#define SWM_PINENABLE0_ACMP_I1_MASK              (0x1U)
#define SWM_PINENABLE0_ACMP_I1_SHIFT             (0U)
/*! ACMP_I1 - ACMP_I1 function select.
 *  0b0..ACMP_I1 enabled on pin PIO0_00.
 *  0b1..ACMP_I1 disabled.
 */
#define SWM_PINENABLE0_ACMP_I1(x)                (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE0_ACMP_I1_SHIFT)) & SWM_PINENABLE0_ACMP_I1_MASK)
#define SWM_PINENABLE0_ACMP_I2_MASK              (0x2U)
#define SWM_PINENABLE0_ACMP_I2_SHIFT             (1U)
/*! ACMP_I2 - ACMP_I2 function select.
 *  0b0..ACMP_I2 enabled on pin PIO0_1.
 *  0b1..ACMP_I2 disabled.
 */
#define SWM_PINENABLE0_ACMP_I2(x)                (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE0_ACMP_I2_SHIFT)) & SWM_PINENABLE0_ACMP_I2_MASK)
#define SWM_PINENABLE0_ACMP_I3_MASK              (0x4U)
#define SWM_PINENABLE0_ACMP_I3_SHIFT             (2U)
/*! ACMP_I3 - ACMP_I3 function select.
 *  0b0..ACMP_I3 enabled on pin PIO0_14.
 *  0b1..ACMP_I3 disabled.
 */
#define SWM_PINENABLE0_ACMP_I3(x)                (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE0_ACMP_I3_SHIFT)) & SWM_PINENABLE0_ACMP_I3_MASK)
#define SWM_PINENABLE0_ACMP_I4_MASK              (0x8U)
#define SWM_PINENABLE0_ACMP_I4_SHIFT             (3U)
/*! ACMP_I4 - ACMP_I4 function select.
 *  0b0..ACMP_I4 enabled on pin PIO0_23.
 *  0b1..ACMP_I4 disabled.
 */
#define SWM_PINENABLE0_ACMP_I4(x)                (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE0_ACMP_I4_SHIFT)) & SWM_PINENABLE0_ACMP_I4_MASK)
#define SWM_PINENABLE0_ACMP_I5_MASK              (0x10U)
#define SWM_PINENABLE0_ACMP_I5_SHIFT             (4U)
/*! ACMP_I5 - ACMP_I5 function select.
 *  0b0..ACMP_I5 enabled on pin PIO0_30.
 *  0b1..ACMP_I5 disabled.
 */
#define SWM_PINENABLE0_ACMP_I5(x)                (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE0_ACMP_I5_SHIFT)) & SWM_PINENABLE0_ACMP_I5_MASK)
#define SWM_PINENABLE0_SWCLK_MASK                (0x20U)
#define SWM_PINENABLE0_SWCLK_SHIFT               (5U)
/*! SWCLK - SWCLK function select.
 *  0b0..SWCLK enabled on pin PIO0_3.
 *  0b1..SWCLK disabled.
 */
#define SWM_PINENABLE0_SWCLK(x)                  (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE0_SWCLK_SHIFT)) & SWM_PINENABLE0_SWCLK_MASK)
#define SWM_PINENABLE0_SWDIO_MASK                (0x40U)
#define SWM_PINENABLE0_SWDIO_SHIFT               (6U)
/*! SWDIO - SWDIO function select.
 *  0b0..SWDIO enabled on pin PIO0_2.
 *  0b1..SWDIO disabled.
 */
#define SWM_PINENABLE0_SWDIO(x)                  (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE0_SWDIO_SHIFT)) & SWM_PINENABLE0_SWDIO_MASK)
#define SWM_PINENABLE0_XTALIN_MASK               (0x80U)
#define SWM_PINENABLE0_XTALIN_SHIFT              (7U)
/*! XTALIN - XTALIN function select.
 *  0b0..XTALIN enabled on pin PIO0_8.
 *  0b1..XTALIN disabled.
 */
#define SWM_PINENABLE0_XTALIN(x)                 (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE0_XTALIN_SHIFT)) & SWM_PINENABLE0_XTALIN_MASK)
#define SWM_PINENABLE0_XTALOUT_MASK              (0x100U)
#define SWM_PINENABLE0_XTALOUT_SHIFT             (8U)
/*! XTALOUT - XTALOUT function select.
 *  0b0..XTALOUT enabled on pin PIO0_9.
 *  0b1..XTALOUT disabled.
 */
#define SWM_PINENABLE0_XTALOUT(x)                (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE0_XTALOUT_SHIFT)) & SWM_PINENABLE0_XTALOUT_MASK)
#define SWM_PINENABLE0_RESETN_MASK               (0x200U)
#define SWM_PINENABLE0_RESETN_SHIFT              (9U)
/*! RESETN - RESETN function select.
 *  0b0..RESETN enabled on pin PIO0_5.
 *  0b1..RESETN disabled.
 */
#define SWM_PINENABLE0_RESETN(x)                 (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE0_RESETN_SHIFT)) & SWM_PINENABLE0_RESETN_MASK)
#define SWM_PINENABLE0_CLKIN_MASK                (0x400U)
#define SWM_PINENABLE0_CLKIN_SHIFT               (10U)
/*! CLKIN - CLKIN function select.
 *  0b0..CLKIN enabled on pin PIO0_1.
 *  0b1..CLKIN disabled.
 */
#define SWM_PINENABLE0_CLKIN(x)                  (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE0_CLKIN_SHIFT)) & SWM_PINENABLE0_CLKIN_MASK)
#define SWM_PINENABLE0_VDDCMP_MASK               (0x800U)
#define SWM_PINENABLE0_VDDCMP_SHIFT              (11U)
/*! VDDCMP - VDDCMP function select.
 *  0b0..VDDCMP enabled on pin PIO0_6.
 *  0b1..VDDCMP disabled.
 */
#define SWM_PINENABLE0_VDDCMP(x)                 (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE0_VDDCMP_SHIFT)) & SWM_PINENABLE0_VDDCMP_MASK)
#define SWM_PINENABLE0_I2C0_SDA_MASK             (0x1000U)
#define SWM_PINENABLE0_I2C0_SDA_SHIFT            (12U)
/*! I2C0_SDA - I2C0_SDA function select.
 *  0b0..I2C0_SDA enabled on pin PIO0_11.
 *  0b1..I2C0_SDA disabled.
 */
#define SWM_PINENABLE0_I2C0_SDA(x)               (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE0_I2C0_SDA_SHIFT)) & SWM_PINENABLE0_I2C0_SDA_MASK)
#define SWM_PINENABLE0_I2C0_SCL_MASK             (0x2000U)
#define SWM_PINENABLE0_I2C0_SCL_SHIFT            (13U)
/*! I2C0_SCL - I2C0_SCL function select.
 *  0b0..I2C0_SCL enabled on pin PIO0_10.
 *  0b1..I2C0_SCL disabled.
 */
#define SWM_PINENABLE0_I2C0_SCL(x)               (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE0_I2C0_SCL_SHIFT)) & SWM_PINENABLE0_I2C0_SCL_MASK)
#define SWM_PINENABLE0_ADC_0_MASK                (0x4000U)
#define SWM_PINENABLE0_ADC_0_SHIFT               (14U)
/*! ADC_0 - ADC_0 function select.
 *  0b0..ADC_0 enabled on pin PIO0_7.
 *  0b1..ADC_0 disabled.
 */
#define SWM_PINENABLE0_ADC_0(x)                  (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE0_ADC_0_SHIFT)) & SWM_PINENABLE0_ADC_0_MASK)
#define SWM_PINENABLE0_ADC_1_MASK                (0x8000U)
#define SWM_PINENABLE0_ADC_1_SHIFT               (15U)
/*! ADC_1 - ADC_1 function select.
 *  0b0..ADC_1 enabled on pin PIO0_6.
 *  0b1..ADC_1 disabled.
 */
#define SWM_PINENABLE0_ADC_1(x)                  (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE0_ADC_1_SHIFT)) & SWM_PINENABLE0_ADC_1_MASK)
#define SWM_PINENABLE0_ADC_2_MASK                (0x10000U)
#define SWM_PINENABLE0_ADC_2_SHIFT               (16U)
/*! ADC_2 - ADC_2 function select.
 *  0b0..ADC_2 enabled on pin PIO0_14.
 *  0b1..ADC_2 disabled.
 */
#define SWM_PINENABLE0_ADC_2(x)                  (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE0_ADC_2_SHIFT)) & SWM_PINENABLE0_ADC_2_MASK)
#define SWM_PINENABLE0_ADC_3_MASK                (0x20000U)
#define SWM_PINENABLE0_ADC_3_SHIFT               (17U)
/*! ADC_3 - ADC_3 function select.
 *  0b0..ADC_3 enabled on pin PIO0_23.
 *  0b1..ADC_3 disabled.
 */
#define SWM_PINENABLE0_ADC_3(x)                  (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE0_ADC_3_SHIFT)) & SWM_PINENABLE0_ADC_3_MASK)
#define SWM_PINENABLE0_ADC_4_MASK                (0x40000U)
#define SWM_PINENABLE0_ADC_4_SHIFT               (18U)
/*! ADC_4 - ADC_4 function select.
 *  0b0..ADC_4 enabled on pin PIO0_22.
 *  0b1..ADC_4 disabled.
 */
#define SWM_PINENABLE0_ADC_4(x)                  (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE0_ADC_4_SHIFT)) & SWM_PINENABLE0_ADC_4_MASK)
#define SWM_PINENABLE0_ADC_5_MASK                (0x80000U)
#define SWM_PINENABLE0_ADC_5_SHIFT               (19U)
/*! ADC_5 - ADC_5 function select.
 *  0b0..ADC_5 enabled on pin PIO0_21.
 *  0b1..ADC_5 disabled.
 */
#define SWM_PINENABLE0_ADC_5(x)                  (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE0_ADC_5_SHIFT)) & SWM_PINENABLE0_ADC_5_MASK)
#define SWM_PINENABLE0_ADC_6_MASK                (0x100000U)
#define SWM_PINENABLE0_ADC_6_SHIFT               (20U)
/*! ADC_6 - ADC_6 function select.
 *  0b0..ADC_6 enabled on pin PIO0_20.
 *  0b1..ADC_6 disabled.
 */
#define SWM_PINENABLE0_ADC_6(x)                  (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE0_ADC_6_SHIFT)) & SWM_PINENABLE0_ADC_6_MASK)
#define SWM_PINENABLE0_ADC_7_MASK                (0x200000U)
#define SWM_PINENABLE0_ADC_7_SHIFT               (21U)
/*! ADC_7 - ADC_7 function select.
 *  0b0..ADC_7 enabled on pin PIO0_19.
 *  0b1..ADC_7 disabled.
 */
#define SWM_PINENABLE0_ADC_7(x)                  (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE0_ADC_7_SHIFT)) & SWM_PINENABLE0_ADC_7_MASK)
#define SWM_PINENABLE0_ADC_8_MASK                (0x400000U)
#define SWM_PINENABLE0_ADC_8_SHIFT               (22U)
/*! ADC_8 - ADC_8 function select.
 *  0b0..ADC_8 enabled on pin PIO0_18.
 *  0b1..ADC_8 disabled.
 */
#define SWM_PINENABLE0_ADC_8(x)                  (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE0_ADC_8_SHIFT)) & SWM_PINENABLE0_ADC_8_MASK)
#define SWM_PINENABLE0_ADC_9_MASK                (0x800000U)
#define SWM_PINENABLE0_ADC_9_SHIFT               (23U)
/*! ADC_9 - ADC_9 function select.
 *  0b0..ADC_9 enabled on pin PIO0_17.
 *  0b1..ADC_9 disabled.
 */
#define SWM_PINENABLE0_ADC_9(x)                  (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE0_ADC_9_SHIFT)) & SWM_PINENABLE0_ADC_9_MASK)
#define SWM_PINENABLE0_ADC_10_MASK               (0x1000000U)
#define SWM_PINENABLE0_ADC_10_SHIFT              (24U)
/*! ADC_10 - ADC_10 function select.
 *  0b0..ADC_10 enabled on pin PIO0_13.
 *  0b1..ADC_10 disabled.
 */
#define SWM_PINENABLE0_ADC_10(x)                 (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE0_ADC_10_SHIFT)) & SWM_PINENABLE0_ADC_10_MASK)
#define SWM_PINENABLE0_ADC_11_MASK               (0x2000000U)
#define SWM_PINENABLE0_ADC_11_SHIFT              (25U)
/*! ADC_11 - ADC_11 function select.
 *  0b0..ADC_11 enabled on pin PIO0_4.
 *  0b1..ADC_11 disabled.
 */
#define SWM_PINENABLE0_ADC_11(x)                 (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE0_ADC_11_SHIFT)) & SWM_PINENABLE0_ADC_11_MASK)
#define SWM_PINENABLE0_DACOUT0_MASK              (0x4000000U)
#define SWM_PINENABLE0_DACOUT0_SHIFT             (26U)
/*! DACOUT0 - DACOUT0 function select.
 *  0b0..DACOUT0 enabled on pin PIO0_17.
 *  0b1..DACOUT0 disabled.
 */
#define SWM_PINENABLE0_DACOUT0(x)                (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE0_DACOUT0_SHIFT)) & SWM_PINENABLE0_DACOUT0_MASK)
#define SWM_PINENABLE0_DACOUT1_MASK              (0x8000000U)
#define SWM_PINENABLE0_DACOUT1_SHIFT             (27U)
/*! DACOUT1 - DACOUT1 function select.
 *  0b0..DACOUT1 enabled on pin PIO0_29.
 *  0b1..DACOUT1 disabled.
 */
#define SWM_PINENABLE0_DACOUT1(x)                (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE0_DACOUT1_SHIFT)) & SWM_PINENABLE0_DACOUT1_MASK)
#define SWM_PINENABLE0_CAPT_X0_MASK              (0x10000000U)
#define SWM_PINENABLE0_CAPT_X0_SHIFT             (28U)
/*! CAPT_X0 - CAPT_X0 function select.
 *  0b0..CAPT_X0 enabled on pin PIO0_31.
 *  0b1..CAPT_X0 disabled.
 */
#define SWM_PINENABLE0_CAPT_X0(x)                (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE0_CAPT_X0_SHIFT)) & SWM_PINENABLE0_CAPT_X0_MASK)
#define SWM_PINENABLE0_CAPT_X1_MASK              (0x20000000U)
#define SWM_PINENABLE0_CAPT_X1_SHIFT             (29U)
/*! CAPT_X1 - CAPT_X1 function select.
 *  0b0..CAPT_X1 enabled on pin PIO1_0.
 *  0b1..CAPT_X1 disabled.
 */
#define SWM_PINENABLE0_CAPT_X1(x)                (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE0_CAPT_X1_SHIFT)) & SWM_PINENABLE0_CAPT_X1_MASK)
#define SWM_PINENABLE0_CAPT_X2_MASK              (0x40000000U)
#define SWM_PINENABLE0_CAPT_X2_SHIFT             (30U)
/*! CAPT_X2 - CAPT_X2 function select.
 *  0b0..CAPT_X2 enabled on pin PIO1_1.
 *  0b1..CAPT_X2 disabled.
 */
#define SWM_PINENABLE0_CAPT_X2(x)                (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE0_CAPT_X2_SHIFT)) & SWM_PINENABLE0_CAPT_X2_MASK)
#define SWM_PINENABLE0_CAPT_X3_MASK              (0x80000000U)
#define SWM_PINENABLE0_CAPT_X3_SHIFT             (31U)
/*! CAPT_X3 - CAPT_X3 function select.
 *  0b0..CAPT_X3 enabled on pin PIO1_2.
 *  0b1..CAPT_X3 disabled.
 */
#define SWM_PINENABLE0_CAPT_X3(x)                (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE0_CAPT_X3_SHIFT)) & SWM_PINENABLE0_CAPT_X3_MASK)

#define SWM_PINENABLE1_CAPT_X4_MASK              (0x1U)
#define SWM_PINENABLE1_CAPT_X4_SHIFT             (0U)
/*! CAPT_X4 - CAPT_X4 function select.
 *  0b0..CAPT_X4 enabled on pin PIO1_3.
 *  0b1..CAPT_X4 disabled.
 */
#define SWM_PINENABLE1_CAPT_X4(x)                (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE1_CAPT_X4_SHIFT)) & SWM_PINENABLE1_CAPT_X4_MASK)
#define SWM_PINENABLE1_CAPT_X5_MASK              (0x2U)
#define SWM_PINENABLE1_CAPT_X5_SHIFT             (1U)
/*! CAPT_X5 - CAPT_X5 function select.
 *  0b0..CAPT_X5 enabled on pin PIO1_4.
 *  0b1..CAPT_X5 disabled.
 */
#define SWM_PINENABLE1_CAPT_X5(x)                (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE1_CAPT_X5_SHIFT)) & SWM_PINENABLE1_CAPT_X5_MASK)
#define SWM_PINENABLE1_CAPT_X6_MASK              (0x4U)
#define SWM_PINENABLE1_CAPT_X6_SHIFT             (2U)
/*! CAPT_X6 - CAPT_X6 function select.
 *  0b0..CAPT_X6 enabled on pin PIO1_5.
 *  0b1..CAPT_X6 disabled.
 */
#define SWM_PINENABLE1_CAPT_X6(x)                (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE1_CAPT_X6_SHIFT)) & SWM_PINENABLE1_CAPT_X6_MASK)
#define SWM_PINENABLE1_CAPT_X7_MASK              (0x8U)
#define SWM_PINENABLE1_CAPT_X7_SHIFT             (3U)
/*! CAPT_X7 - CAPT_X7 function select.
 *  0b0..CAPT_X7 enabled on pin PIO1_6.
 *  0b1..CAPT_X7 disabled.
 */
#define SWM_PINENABLE1_CAPT_X7(x)                (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE1_CAPT_X7_SHIFT)) & SWM_PINENABLE1_CAPT_X7_MASK)
#define SWM_PINENABLE1_CAPT_X8_MASK              (0x10U)
#define SWM_PINENABLE1_CAPT_X8_SHIFT             (4U)
/*! CAPT_X8 - CAPT_X8 function select.
 *  0b0..CAPT_X8 enabled on pin PIO1_7.
 *  0b1..CAPT_X8 disabled.
 */
#define SWM_PINENABLE1_CAPT_X8(x)                (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE1_CAPT_X8_SHIFT)) & SWM_PINENABLE1_CAPT_X8_MASK)
#define SWM_PINENABLE1_CAPT_YL_MASK              (0x20U)
#define SWM_PINENABLE1_CAPT_YL_SHIFT             (5U)
/*! CAPT_YL - CAPT_YL function select.
 *  0b0..CAPT_YL enabled on pin PIO1_8.
 *  0b1..CAPT_YL disabled.
 */
#define SWM_PINENABLE1_CAPT_YL(x)                (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE1_CAPT_YL_SHIFT)) & SWM_PINENABLE1_CAPT_YL_MASK)
#define SWM_PINENABLE1_CAPT_YH_MASK              (0x40U)
#define SWM_PINENABLE1_CAPT_YH_SHIFT             (6U)
/*! CAPT_YH - CAPT_YH function select.
 *  0b0..CAPT_YH enabled on pin PIO1_9.
 *  0b1..CAPT_YH disabled.
 */
#define SWM_PINENABLE1_CAPT_YH(x)                (((uint32_t)(((uint32_t)(x)) << SWM_PINENABLE1_CAPT_YH_SHIFT)) & SWM_PINENABLE1_CAPT_YH_MASK)

/* SWM - Peripheral instance base addresses */
/** Peripheral SWM0 base address */
#define SWM0_BASE                       (0x4000C000u)
/** Peripheral SWM0 base pointer */
#define SWM0                            ((SWM_Type *)SWM0_BASE)
/** Array initializer of SWM peripheral base addresses */
#define SWM_BASE_ADDRS                  { SWM0_BASE }
/** Array initializer of SWM peripheral base pointers */
#define SWM_BASE_PTRS                   { SWM0 }

// La siguiente funcion macro nos permite tener todas las mascaras de canales necesarios en una unica definicion
#define	SWM_PINENABLE0_ADC_MASK(x)		(1 << (14 + x))

/* ----------------------------------------------------------------------------
   -- ADC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/** ADC - Register Layout Typedef */
typedef struct {
  __IO uint32_t CTRL;                              /**< ADC Control register. Contains the clock divide value, resolution selection, sampling time selection, and mode controls., offset: 0x0 */
       uint8_t RESERVED_0[4];
  __IO uint32_t SEQ_CTRL[2];                       /**< ADC Conversion Sequence-n control register: Controls triggering and channel selection for conversion sequence-n. Also specifies interrupt mode for sequence-n., array offset: 0x8, array step: 0x4 */
  __I  uint32_t SEQ_GDAT[2];                       /**< ADC Sequence-n Global Data register. This register contains the result of the most recent ADC conversion performed under sequence-n., array offset: 0x10, array step: 0x4 */
       uint8_t RESERVED_1[8];
  __I  uint32_t DAT[12];                           /**< ADC Channel N Data register. This register contains the result of the most recent conversion completed on channel N., array offset: 0x20, array step: 0x4 */
  __IO uint32_t THR0_LOW;                          /**< ADC Low Compare Threshold register 0: Contains the lower threshold level for automatic threshold comparison for any channels linked to threshold pair 0., offset: 0x50 */
  __IO uint32_t THR1_LOW;                          /**< ADC Low Compare Threshold register 1: Contains the lower threshold level for automatic threshold comparison for any channels linked to threshold pair 1., offset: 0x54 */
  __IO uint32_t THR0_HIGH;                         /**< ADC High Compare Threshold register 0: Contains the upper threshold level for automatic threshold comparison for any channels linked to threshold pair 0., offset: 0x58 */
  __IO uint32_t THR1_HIGH;                         /**< ADC High Compare Threshold register 1: Contains the upper threshold level for automatic threshold comparison for any channels linked to threshold pair 1., offset: 0x5C */
  __IO uint32_t CHAN_THRSEL;                       /**< ADC Channel-Threshold Select register. Specifies which set of threshold compare registers are to be used for each channel, offset: 0x60 */
  __IO uint32_t INTEN;                             /**< ADC Interrupt Enable register. This register contains enable bits that enable the sequence-A, sequence-B, threshold compare and data overrun interrupts to be generated., offset: 0x64 */
  __IO uint32_t FLAGS;                             /**< ADC Flags register. Contains the four interrupt/DMA trigger flags and the individual component overrun and threshold-compare flags. (The overrun bits replicate information stored in the result registers)., offset: 0x68 */
  __IO uint32_t TRM;                               /**< ADC Startup register., offset: 0x6C */
} ADC_Type;

#define ADC_CTRL_CLKDIV_MASK                     (0xFFU)
#define ADC_CTRL_CLKDIV_SHIFT                    (0U)
/*! CLKDIV - In synchronous mode only, the system clock is divided by this value plus one to produce
 *    the clock for the ADC converter, which should be less than or equal to 72 MHz. Typically,
 *    software should program the smallest value in this field that yields this maximum clock rate or
 *    slightly less, but in certain cases (such as a high-impedance analog source) a slower clock may
 *    be desirable. This field is ignored in the asynchronous operating mode.
 */
#define ADC_CTRL_CLKDIV(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_CTRL_CLKDIV_SHIFT)) & ADC_CTRL_CLKDIV_MASK)
#define ADC_CTRL_ASYNMODE_MASK                   (0x100U)
#define ADC_CTRL_ASYNMODE_SHIFT                  (8U)
/*! ASYNMODE - Select clock mode.
 *  0b0..Synchronous mode. The ADC clock is derived from the system clock based on the divide value selected in
 *       the CLKDIV field. The ADC clock will be started in a controlled fashion in response to a trigger to
 *       eliminate any uncertainty in the launching of an ADC conversion in response to any synchronous (on-chip) trigger.
 *       In Synchronous mode with the SYNCBYPASS bit (in a sequence control register) set, sampling of the ADC
 *       input and start of conversion will initiate 2 system clocks after the leading edge of a (synchronous) trigger
 *       pulse.
 *  0b1..Asynchronous mode. The ADC clock is based on the output of the ADC clock divider ADCCLKSEL in the SYSCON block.
 */
#define ADC_CTRL_ASYNMODE(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_CTRL_ASYNMODE_SHIFT)) & ADC_CTRL_ASYNMODE_MASK)
#define ADC_CTRL_LPWRMODE_MASK                   (0x400U)
#define ADC_CTRL_LPWRMODE_SHIFT                  (10U)
/*! LPWRMODE - The low-power ADC mode
 *  0b0..The low-power ADC mode is disabled. The analog circuitry remains activated even when no conversions are requested.
 *  0b1..The low-power ADC mode is enabled. The analog circuitry is automatically powered-down when no conversions
 *       are taking place. When any (hardware or software) triggering event is detected, the analog circuitry is
 *       enabled. After the required start-up time, the requested conversion will be launched. Once the conversion
 *       completes, the analog-circuitry will again be powered-down provided no further conversions are pending.
 *       Using this mode can save an appreciable amount of current (approximately 2.5 mA) when conversions are
 *       required relatively infrequently. The penalty for using this mode is an approximately FIFTEEN ADC CLOCK delay (30
 *       clocks in 10-bit mode), based on the frequency specified in the CLKDIV field, from the time the trigger
 *       event occurs until sampling of the A/D input commences. Note: This mode will NOT power-up the A/D if the
 *       ADC_ENA bit is low.
 */
#define ADC_CTRL_LPWRMODE(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_CTRL_LPWRMODE_SHIFT)) & ADC_CTRL_LPWRMODE_MASK)
#define ADC_CTRL_CALMODE_MASK                    (0x40000000U)
#define ADC_CTRL_CALMODE_SHIFT                   (30U)
/*! CALMODE - Writing a '1' to this bit will initiate a sef-calibration cycle. This bit will be
 *    automatically cleared by hardware after the calibration cycle is complete. Note: Other bits of
 *    this register may be written to concurrently with setting this bit, however once this bit has
 *    been set no further writes to this register are permitted unitl the full calibration cycle has
 *    ended.
 */
#define ADC_CTRL_CALMODE(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_CTRL_CALMODE_SHIFT)) & ADC_CTRL_CALMODE_MASK)

#define ADC_SEQ_CTRL_CHANNELS_MASK               (0xFFFU)
#define ADC_SEQ_CTRL_CHANNELS_SHIFT              (0U)
/*! CHANNELS - Selects which one or more of the ADC channels will be sampled and converted when this
 *    sequence is launched. A 1 in any bit of this field will cause the corresponding channel to be
 *    included in the conversion sequence, where bit 0 corresponds to channel 0, bit 1 to channel 1
 *    and so forth. When this conversion sequence is triggered, either by a hardware trigger or via
 *    software command, ADC conversions will be performed on each enabled channel, in sequence,
 *    beginning with the lowest-ordered channel. This field can ONLY be changed while SEQA_ENA (bit 31)
 *    is LOW. It is allowed to change this field and set bit 31 in the same write.
 */
#define ADC_SEQ_CTRL_CHANNELS(x)                 (((uint32_t)(((uint32_t)(x)) << ADC_SEQ_CTRL_CHANNELS_SHIFT)) & ADC_SEQ_CTRL_CHANNELS_MASK)
#define ADC_SEQ_CTRL_TRIGGER_MASK                (0x7000U)
#define ADC_SEQ_CTRL_TRIGGER_SHIFT               (12U)
/*! TRIGGER - Selects which of the available hardware trigger sources will cause this conversion
 *    sequence to be initiated. Program the trigger input number in this field. See Table 476. In order
 *    to avoid generating a spurious trigger, it is recommended writing to this field only when
 *    SEQA_ENA (bit 31) is low. It is safe to change this field and set bit 31 in the same write.
 */
#define ADC_SEQ_CTRL_TRIGGER(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_SEQ_CTRL_TRIGGER_SHIFT)) & ADC_SEQ_CTRL_TRIGGER_MASK)
#define ADC_SEQ_CTRL_TRIGPOL_MASK                (0x40000U)
#define ADC_SEQ_CTRL_TRIGPOL_SHIFT               (18U)
/*! TRIGPOL - Select the polarity of the selected input trigger for this conversion sequence. In
 *    order to avoid generating a spurious trigger, it is recommended writing to this field only when
 *    SEQA_ENA (bit 31) is low. It is safe to change this field and set bit 31 in the same write.
 *  0b0..Negative edge. A negative edge launches the conversion sequence on the selected trigger input.
 *  0b1..Positive edge. A positive edge launches the conversion sequence on the selected trigger input.
 */
#define ADC_SEQ_CTRL_TRIGPOL(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_SEQ_CTRL_TRIGPOL_SHIFT)) & ADC_SEQ_CTRL_TRIGPOL_MASK)
#define ADC_SEQ_CTRL_SYNCBYPASS_MASK             (0x80000U)
#define ADC_SEQ_CTRL_SYNCBYPASS_SHIFT            (19U)
/*! SYNCBYPASS - Setting this bit allows the hardware trigger input to bypass synchronization
 *    flip-flop stages and therefore shorten the time between the trigger input signal and the start of a
 *    conversion. There are slightly different criteria for whether or not this bit can be set
 *    depending on the clock operating mode: Synchronous mode (the ASYNMODE in the CTRL register = 0):
 *    Synchronization may be bypassed (this bit may be set) if the selected trigger source is already
 *    synchronous with the main system clock (eg. coming from an on-chip, system-clock-based timer).
 *    Whether this bit is set or not, a trigger pulse must be maintained for at least one system
 *    clock period. Asynchronous mode (the ASYNMODE in the CTRL register = 1): Synchronization may be
 *    bypassed (this bit may be set) if it is certain that the duration of a trigger input pulse
 *    will be at least one cycle of the ADC clock (regardless of whether the trigger comes from and
 *    on-chip or off-chip source). If this bit is NOT set, the trigger pulse must at least be
 *    maintained for one system clock period.
 *  0b0..Enable trigger synchronization. The hardware trigger bypass is not enabled.
 *  0b1..Bypass trigger synchronization. The hardware trigger bypass is enabled.
 */
#define ADC_SEQ_CTRL_SYNCBYPASS(x)               (((uint32_t)(((uint32_t)(x)) << ADC_SEQ_CTRL_SYNCBYPASS_SHIFT)) & ADC_SEQ_CTRL_SYNCBYPASS_MASK)
#define ADC_SEQ_CTRL_START_MASK                  (0x4000000U)
#define ADC_SEQ_CTRL_START_SHIFT                 (26U)
/*! START - Writing a 1 to this field will launch one pass through this conversion sequence. The
 *    behavior will be identical to a sequence triggered by a hardware trigger. Do not write 1 to this
 *    bit if the BURST bit is set. This bit is only set to a 1 momentarily when written to launch a
 *    conversion sequence. It will consequently always read back as a zero.
 */
#define ADC_SEQ_CTRL_START(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_SEQ_CTRL_START_SHIFT)) & ADC_SEQ_CTRL_START_MASK)
#define ADC_SEQ_CTRL_BURST_MASK                  (0x8000000U)
#define ADC_SEQ_CTRL_BURST_SHIFT                 (27U)
/*! BURST - Writing a 1 to this bit will cause this conversion sequence to be continuously cycled
 *    through. Other sequence A triggers will be ignored while this bit is set. Repeated conversions
 *    can be halted by clearing this bit. The sequence currently in progress will be completed before
 *    conversions are terminated. Note that a new sequence could begin just before BURST is cleared.
 */
#define ADC_SEQ_CTRL_BURST(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_SEQ_CTRL_BURST_SHIFT)) & ADC_SEQ_CTRL_BURST_MASK)
#define ADC_SEQ_CTRL_SINGLESTEP_MASK             (0x10000000U)
#define ADC_SEQ_CTRL_SINGLESTEP_SHIFT            (28U)
/*! SINGLESTEP - When this bit is set, a hardware trigger or a write to the START bit will launch a
 *    single conversion on the next channel in the sequence instead of the default response of
 *    launching an entire sequence of conversions. Once all of the channels comprising a sequence have
 *    been converted, a subsequent trigger will repeat the sequence beginning with the first enabled
 *    channel. Interrupt generation will still occur either after each individual conversion or at
 *    the end of the entire sequence, depending on the state of the MODE bit.
 */
#define ADC_SEQ_CTRL_SINGLESTEP(x)               (((uint32_t)(((uint32_t)(x)) << ADC_SEQ_CTRL_SINGLESTEP_SHIFT)) & ADC_SEQ_CTRL_SINGLESTEP_MASK)
#define ADC_SEQ_CTRL_LOWPRIO_MASK                (0x20000000U)
#define ADC_SEQ_CTRL_LOWPRIO_SHIFT               (29U)
/*! LOWPRIO - Set priority for sequence A.
 *  0b0..Low priority. Any B trigger which occurs while an A conversion sequence is active will be ignored and lost.
 *  0b1..High priority. Setting this bit to a 1 will permit any enabled B sequence trigger (including a B sequence
 *       software start) to immediately interrupt sequence A and launch a B sequence in it's place. The conversion
 *       currently in progress will be terminated. The A sequence that was interrupted will automatically resume
 *       after the B sequence completes. The channel whose conversion was terminated will be re-sampled and the
 *       conversion sequence will resume from that point.
 */
#define ADC_SEQ_CTRL_LOWPRIO(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_SEQ_CTRL_LOWPRIO_SHIFT)) & ADC_SEQ_CTRL_LOWPRIO_MASK)
#define ADC_SEQ_CTRL_MODE_MASK                   (0x40000000U)
#define ADC_SEQ_CTRL_MODE_SHIFT                  (30U)
/*! MODE - Indicates whether the primary method for retrieving conversion results for this sequence
 *    will be accomplished via reading the global data register (SEQA_GDAT) at the end of each
 *    conversion, or the individual channel result registers at the end of the entire sequence. Impacts
 *    when conversion-complete interrupt/DMA trigger for sequence-A will be generated and which
 *    overrun conditions contribute to an overrun interrupt as described below.
 *  0b0..End of conversion. The sequence A interrupt/DMA trigger will be set at the end of each individual ADC
 *       conversion performed under sequence A. This flag will mirror the DATAVALID bit in the SEQA_GDAT register. The
 *       OVERRUN bit in the SEQA_GDAT register will contribute to generation of an overrun interrupt/DMA trigger
 *       if enabled.
 *  0b1..End of sequence. The sequence A interrupt/DMA trigger will be set when the entire set of sequence-A
 *       conversions completes. This flag will need to be explicitly cleared by software or by the DMA-clear signal in
 *       this mode. The OVERRUN bit in the SEQA_GDAT register will NOT contribute to generation of an overrun
 *       interrupt/DMA trigger since it is assumed this register may not be utilized in this mode.
 */
#define ADC_SEQ_CTRL_MODE(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_SEQ_CTRL_MODE_SHIFT)) & ADC_SEQ_CTRL_MODE_MASK)
#define ADC_SEQ_CTRL_SEQ_ENA_MASK                (0x80000000U)
#define ADC_SEQ_CTRL_SEQ_ENA_SHIFT               (31U)
/*! SEQ_ENA - Sequence Enable. In order to avoid spuriously triggering the sequence, care should be
 *    taken to only set the SEQn_ENA bit when the selected trigger input is in its INACTIVE state
 *    (as defined by the TRIGPOL bit). If this condition is not met, the sequence will be triggered
 *    immediately upon being enabled. In order to avoid spuriously triggering the sequence, care
 *    should be taken to only set the SEQn_ENA bit when the selected trigger input is in its INACTIVE
 *    state (as defined by the TRIGPOL bit). If this condition is not met, the sequence will be
 *    triggered immediately upon being enabled.
 *  0b0..Disabled. Sequence n is disabled. Sequence n triggers are ignored. If this bit is cleared while sequence
 *       n is in progress, the sequence will be halted at the end of the current conversion. After the sequence is
 *       re-enabled, a new trigger will be required to restart the sequence beginning with the next enabled channel.
 *  0b1..Enabled. Sequence n is enabled.
 */
#define ADC_SEQ_CTRL_SEQ_ENA(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_SEQ_CTRL_SEQ_ENA_SHIFT)) & ADC_SEQ_CTRL_SEQ_ENA_MASK)

/* The count of ADC_SEQ_CTRL */
#define ADC_SEQ_CTRL_COUNT                       (2U)

#define ADC_SEQ_GDAT_RESULT_MASK                 (0xFFF0U)
#define ADC_SEQ_GDAT_RESULT_SHIFT                (4U)
/*! RESULT - This field contains the 12-bit ADC conversion result from the most recent conversion
 *    performed under conversion sequence associated with this register. The result is a binary
 *    fraction representing the voltage on the currently-selected input channel as it falls within the
 *    range of VREFP to VREFN. Zero in the field indicates that the voltage on the input pin was less
 *    than, equal to, or close to that on VREFN, while 0xFFF indicates that the voltage on the input
 *    was close to, equal to, or greater than that on VREFP. DATAVALID = 1 indicates that this
 *    result has not yet been read.
 */
#define ADC_SEQ_GDAT_RESULT(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_SEQ_GDAT_RESULT_SHIFT)) & ADC_SEQ_GDAT_RESULT_MASK)
#define ADC_SEQ_GDAT_THCMPRANGE_MASK             (0x30000U)
#define ADC_SEQ_GDAT_THCMPRANGE_SHIFT            (16U)
/*! THCMPRANGE - Indicates whether the result of the last conversion performed was above, below or
 *    within the range established by the designated threshold comparison registers (THRn_LOW and
 *    THRn_HIGH).
 */
#define ADC_SEQ_GDAT_THCMPRANGE(x)               (((uint32_t)(((uint32_t)(x)) << ADC_SEQ_GDAT_THCMPRANGE_SHIFT)) & ADC_SEQ_GDAT_THCMPRANGE_MASK)
#define ADC_SEQ_GDAT_THCMPCROSS_MASK             (0xC0000U)
#define ADC_SEQ_GDAT_THCMPCROSS_SHIFT            (18U)
/*! THCMPCROSS - Indicates whether the result of the last conversion performed represented a
 *    crossing of the threshold level established by the designated LOW threshold comparison register
 *    (THRn_LOW) and, if so, in what direction the crossing occurred.
 */
#define ADC_SEQ_GDAT_THCMPCROSS(x)               (((uint32_t)(((uint32_t)(x)) << ADC_SEQ_GDAT_THCMPCROSS_SHIFT)) & ADC_SEQ_GDAT_THCMPCROSS_MASK)
#define ADC_SEQ_GDAT_CHN_MASK                    (0x3C000000U)
#define ADC_SEQ_GDAT_CHN_SHIFT                   (26U)
/*! CHN - These bits contain the channel from which the RESULT bits were converted (e.g. 0000
 *    identifies channel 0, 0001 channel 1, etc.).
 */
#define ADC_SEQ_GDAT_CHN(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_SEQ_GDAT_CHN_SHIFT)) & ADC_SEQ_GDAT_CHN_MASK)
#define ADC_SEQ_GDAT_OVERRUN_MASK                (0x40000000U)
#define ADC_SEQ_GDAT_OVERRUN_SHIFT               (30U)
/*! OVERRUN - This bit is set if a new conversion result is loaded into the RESULT field before a
 *    previous result has been read - i.e. while the DATAVALID bit is set. This bit is cleared, along
 *    with the DATAVALID bit, whenever this register is read. This bit will contribute to an overrun
 *    interrupt/DMA trigger if the MODE bit (in SEQAA_CTRL) for the corresponding sequence is set
 *    to '0' (and if the overrun interrupt is enabled).
 */
#define ADC_SEQ_GDAT_OVERRUN(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_SEQ_GDAT_OVERRUN_SHIFT)) & ADC_SEQ_GDAT_OVERRUN_MASK)
#define ADC_SEQ_GDAT_DATAVALID_MASK              (0x80000000U)
#define ADC_SEQ_GDAT_DATAVALID_SHIFT             (31U)
/*! DATAVALID - This bit is set to '1' at the end of each conversion when a new result is loaded
 *    into the RESULT field. It is cleared whenever this register is read. This bit will cause a
 *    conversion-complete interrupt for the corresponding sequence if the MODE bit (in SEQA_CTRL) for that
 *    sequence is set to 0 (and if the interrupt is enabled).
 */
#define ADC_SEQ_GDAT_DATAVALID(x)                (((uint32_t)(((uint32_t)(x)) << ADC_SEQ_GDAT_DATAVALID_SHIFT)) & ADC_SEQ_GDAT_DATAVALID_MASK)

/* The count of ADC_SEQ_GDAT */
#define ADC_SEQ_GDAT_COUNT                       (2U)

#define ADC_DAT_RESULT_MASK                      (0xFFF0U)
#define ADC_DAT_RESULT_SHIFT                     (4U)
/*! RESULT - This field contains the 12-bit ADC conversion result from the last conversion performed
 *    on this channel. This will be a binary fraction representing the voltage on the AD0[n] pin,
 *    as it falls within the range of VREFP to VREFN. Zero in the field indicates that the voltage on
 *    the input pin was less than, equal to, or close to that on VREFN, while 0xFFF indicates that
 *    the voltage on the input was close to, equal to, or greater than that on VREFP.
 */
#define ADC_DAT_RESULT(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_DAT_RESULT_SHIFT)) & ADC_DAT_RESULT_MASK)
#define ADC_DAT_THCMPRANGE_MASK                  (0x30000U)
#define ADC_DAT_THCMPRANGE_SHIFT                 (16U)
/*! THCMPRANGE - Threshold Range Comparison result. 0x0 = In Range: The last completed conversion
 *    was greater than or equal to the value programmed into the designated LOW threshold register
 *    (THRn_LOW) but less than or equal to the value programmed into the designated HIGH threshold
 *    register (THRn_HIGH). 0x1 = Below Range: The last completed conversion on was less than the value
 *    programmed into the designated LOW threshold register (THRn_LOW). 0x2 = Above Range: The last
 *    completed conversion was greater than the value programmed into the designated HIGH threshold
 *    register (THRn_HIGH). 0x3 = Reserved.
 */
#define ADC_DAT_THCMPRANGE(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_DAT_THCMPRANGE_SHIFT)) & ADC_DAT_THCMPRANGE_MASK)
#define ADC_DAT_THCMPCROSS_MASK                  (0xC0000U)
#define ADC_DAT_THCMPCROSS_SHIFT                 (18U)
/*! THCMPCROSS - Threshold Crossing Comparison result. 0x0 = No threshold Crossing detected: The
 *    most recent completed conversion on this channel had the same relationship (above or below) to
 *    the threshold value established by the designated LOW threshold register (THRn_LOW) as did the
 *    previous conversion on this channel. 0x1 = Reserved. 0x2 = Downward Threshold Crossing
 *    Detected. Indicates that a threshold crossing in the downward direction has occurred - i.e. the
 *    previous sample on this channel was above the threshold value established by the designated LOW
 *    threshold register (THRn_LOW) and the current sample is below that threshold. 0x3 = Upward
 *    Threshold Crossing Detected. Indicates that a threshold crossing in the upward direction has occurred
 *    - i.e. the previous sample on this channel was below the threshold value established by the
 *    designated LOW threshold register (THRn_LOW) and the current sample is above that threshold.
 */
#define ADC_DAT_THCMPCROSS(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_DAT_THCMPCROSS_SHIFT)) & ADC_DAT_THCMPCROSS_MASK)
#define ADC_DAT_CHANNEL_MASK                     (0x3C000000U)
#define ADC_DAT_CHANNEL_SHIFT                    (26U)
/*! CHANNEL - This field is hard-coded to contain the channel number that this particular register
 *    relates to (i.e. this field will contain 0b0000 for the DAT0 register, 0b0001 for the DAT1
 *    register, etc)
 */
#define ADC_DAT_CHANNEL(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_DAT_CHANNEL_SHIFT)) & ADC_DAT_CHANNEL_MASK)
#define ADC_DAT_OVERRUN_MASK                     (0x40000000U)
#define ADC_DAT_OVERRUN_SHIFT                    (30U)
/*! OVERRUN - This bit will be set to a 1 if a new conversion on this channel completes and
 *    overwrites the previous contents of the RESULT field before it has been read - i.e. while the DONE bit
 *    is set. This bit is cleared, along with the DONE bit, whenever this register is read or when
 *    the data related to this channel is read from either of the global SEQn_GDAT registers. This
 *    bit (in any of the 12 registers) will cause an overrun interrupt/DMA trigger to be asserted if
 *    the overrun interrupt is enabled. While it is allowed to include the same channels in both
 *    conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in the
 *    data registers associated with any of the channels that are shared between the two sequences. Any
 *    erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
 */
#define ADC_DAT_OVERRUN(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_DAT_OVERRUN_SHIFT)) & ADC_DAT_OVERRUN_MASK)
#define ADC_DAT_DATAVALID_MASK                   (0x80000000U)
#define ADC_DAT_DATAVALID_SHIFT                  (31U)
/*! DATAVALID - This bit is set to 1 when an ADC conversion on this channel completes. This bit is
 *    cleared whenever this register is read or when the data related to this channel is read from
 *    either of the global SEQn_GDAT registers. While it is allowed to include the same channels in
 *    both conversion sequences, doing so may cause erratic behavior of the DONE and OVERRUN bits in
 *    the data registers associated with any of the channels that are shared between the two
 *    sequences. Any erratic OVERRUN behavior will also affect overrun interrupt generation, if enabled.
 */
#define ADC_DAT_DATAVALID(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_DAT_DATAVALID_SHIFT)) & ADC_DAT_DATAVALID_MASK)

/* The count of ADC_DAT */
#define ADC_DAT_COUNT                            (12U)

#define ADC_THR0_LOW_THRLOW_MASK                 (0xFFF0U)
#define ADC_THR0_LOW_THRLOW_SHIFT                (4U)
/*! THRLOW - Low threshold value against which ADC results will be compared
 */
#define ADC_THR0_LOW_THRLOW(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_THR0_LOW_THRLOW_SHIFT)) & ADC_THR0_LOW_THRLOW_MASK)

#define ADC_THR1_LOW_THRLOW_MASK                 (0xFFF0U)
#define ADC_THR1_LOW_THRLOW_SHIFT                (4U)
/*! THRLOW - Low threshold value against which ADC results will be compared
 */
#define ADC_THR1_LOW_THRLOW(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_THR1_LOW_THRLOW_SHIFT)) & ADC_THR1_LOW_THRLOW_MASK)

#define ADC_THR0_HIGH_THRHIGH_MASK               (0xFFF0U)
#define ADC_THR0_HIGH_THRHIGH_SHIFT              (4U)
/*! THRHIGH - High threshold value against which ADC results will be compared
 */
#define ADC_THR0_HIGH_THRHIGH(x)                 (((uint32_t)(((uint32_t)(x)) << ADC_THR0_HIGH_THRHIGH_SHIFT)) & ADC_THR0_HIGH_THRHIGH_MASK)

#define ADC_THR1_HIGH_THRHIGH_MASK               (0xFFF0U)
#define ADC_THR1_HIGH_THRHIGH_SHIFT              (4U)
/*! THRHIGH - High threshold value against which ADC results will be compared
 */
#define ADC_THR1_HIGH_THRHIGH(x)                 (((uint32_t)(((uint32_t)(x)) << ADC_THR1_HIGH_THRHIGH_SHIFT)) & ADC_THR1_HIGH_THRHIGH_MASK)

#define ADC_CHAN_THRSEL_CH0_THRSEL_MASK          (0x1U)
#define ADC_CHAN_THRSEL_CH0_THRSEL_SHIFT         (0U)
/*! CH0_THRSEL - Threshold select for channel 0.
 *  0b0..Threshold 0. Results for this channel will be compared against the threshold levels indicated in the THR0_LOW and THR0_HIGH registers.
 *  0b1..Threshold 1. Results for this channel will be compared against the threshold levels indicated in the THR1_LOW and THR1_HIGH registers.
 */
#define ADC_CHAN_THRSEL_CH0_THRSEL(x)            (((uint32_t)(((uint32_t)(x)) << ADC_CHAN_THRSEL_CH0_THRSEL_SHIFT)) & ADC_CHAN_THRSEL_CH0_THRSEL_MASK)
#define ADC_CHAN_THRSEL_CH1_THRSEL_MASK          (0x2U)
#define ADC_CHAN_THRSEL_CH1_THRSEL_SHIFT         (1U)
/*! CH1_THRSEL - Threshold select for channel 1. See description for channel 0.
 */
#define ADC_CHAN_THRSEL_CH1_THRSEL(x)            (((uint32_t)(((uint32_t)(x)) << ADC_CHAN_THRSEL_CH1_THRSEL_SHIFT)) & ADC_CHAN_THRSEL_CH1_THRSEL_MASK)
#define ADC_CHAN_THRSEL_CH2_THRSEL_MASK          (0x4U)
#define ADC_CHAN_THRSEL_CH2_THRSEL_SHIFT         (2U)
/*! CH2_THRSEL - Threshold select for channel 2. See description for channel 0.
 */
#define ADC_CHAN_THRSEL_CH2_THRSEL(x)            (((uint32_t)(((uint32_t)(x)) << ADC_CHAN_THRSEL_CH2_THRSEL_SHIFT)) & ADC_CHAN_THRSEL_CH2_THRSEL_MASK)
#define ADC_CHAN_THRSEL_CH3_THRSEL_MASK          (0x8U)
#define ADC_CHAN_THRSEL_CH3_THRSEL_SHIFT         (3U)
/*! CH3_THRSEL - Threshold select for channel 3. See description for channel 0.
 */
#define ADC_CHAN_THRSEL_CH3_THRSEL(x)            (((uint32_t)(((uint32_t)(x)) << ADC_CHAN_THRSEL_CH3_THRSEL_SHIFT)) & ADC_CHAN_THRSEL_CH3_THRSEL_MASK)
#define ADC_CHAN_THRSEL_CH4_THRSEL_MASK          (0x10U)
#define ADC_CHAN_THRSEL_CH4_THRSEL_SHIFT         (4U)
/*! CH4_THRSEL - Threshold select for channel 4. See description for channel 0.
 */
#define ADC_CHAN_THRSEL_CH4_THRSEL(x)            (((uint32_t)(((uint32_t)(x)) << ADC_CHAN_THRSEL_CH4_THRSEL_SHIFT)) & ADC_CHAN_THRSEL_CH4_THRSEL_MASK)
#define ADC_CHAN_THRSEL_CH5_THRSEL_MASK          (0x20U)
#define ADC_CHAN_THRSEL_CH5_THRSEL_SHIFT         (5U)
/*! CH5_THRSEL - Threshold select for channel 5. See description for channel 0.
 */
#define ADC_CHAN_THRSEL_CH5_THRSEL(x)            (((uint32_t)(((uint32_t)(x)) << ADC_CHAN_THRSEL_CH5_THRSEL_SHIFT)) & ADC_CHAN_THRSEL_CH5_THRSEL_MASK)
#define ADC_CHAN_THRSEL_CH6_THRSEL_MASK          (0x40U)
#define ADC_CHAN_THRSEL_CH6_THRSEL_SHIFT         (6U)
/*! CH6_THRSEL - Threshold select for channel 6. See description for channel 0.
 */
#define ADC_CHAN_THRSEL_CH6_THRSEL(x)            (((uint32_t)(((uint32_t)(x)) << ADC_CHAN_THRSEL_CH6_THRSEL_SHIFT)) & ADC_CHAN_THRSEL_CH6_THRSEL_MASK)
#define ADC_CHAN_THRSEL_CH7_THRSEL_MASK          (0x80U)
#define ADC_CHAN_THRSEL_CH7_THRSEL_SHIFT         (7U)
/*! CH7_THRSEL - Threshold select for channel 7. See description for channel 0.
 */
#define ADC_CHAN_THRSEL_CH7_THRSEL(x)            (((uint32_t)(((uint32_t)(x)) << ADC_CHAN_THRSEL_CH7_THRSEL_SHIFT)) & ADC_CHAN_THRSEL_CH7_THRSEL_MASK)
#define ADC_CHAN_THRSEL_CH8_THRSEL_MASK          (0x100U)
#define ADC_CHAN_THRSEL_CH8_THRSEL_SHIFT         (8U)
/*! CH8_THRSEL - Threshold select for channel 8. See description for channel 0.
 */
#define ADC_CHAN_THRSEL_CH8_THRSEL(x)            (((uint32_t)(((uint32_t)(x)) << ADC_CHAN_THRSEL_CH8_THRSEL_SHIFT)) & ADC_CHAN_THRSEL_CH8_THRSEL_MASK)
#define ADC_CHAN_THRSEL_CH9_THRSEL_MASK          (0x200U)
#define ADC_CHAN_THRSEL_CH9_THRSEL_SHIFT         (9U)
/*! CH9_THRSEL - Threshold select for channel 9. See description for channel 0.
 */
#define ADC_CHAN_THRSEL_CH9_THRSEL(x)            (((uint32_t)(((uint32_t)(x)) << ADC_CHAN_THRSEL_CH9_THRSEL_SHIFT)) & ADC_CHAN_THRSEL_CH9_THRSEL_MASK)
#define ADC_CHAN_THRSEL_CH10_THRSEL_MASK         (0x400U)
#define ADC_CHAN_THRSEL_CH10_THRSEL_SHIFT        (10U)
/*! CH10_THRSEL - Threshold select for channel 10. See description for channel 0.
 */
#define ADC_CHAN_THRSEL_CH10_THRSEL(x)           (((uint32_t)(((uint32_t)(x)) << ADC_CHAN_THRSEL_CH10_THRSEL_SHIFT)) & ADC_CHAN_THRSEL_CH10_THRSEL_MASK)
#define ADC_CHAN_THRSEL_CH11_THRSEL_MASK         (0x800U)
#define ADC_CHAN_THRSEL_CH11_THRSEL_SHIFT        (11U)
/*! CH11_THRSEL - Threshold select for channel 11. See description for channel 0.
 */
#define ADC_CHAN_THRSEL_CH11_THRSEL(x)           (((uint32_t)(((uint32_t)(x)) << ADC_CHAN_THRSEL_CH11_THRSEL_SHIFT)) & ADC_CHAN_THRSEL_CH11_THRSEL_MASK)

#define ADC_INTEN_SEQA_INTEN_MASK                (0x1U)
#define ADC_INTEN_SEQA_INTEN_SHIFT               (0U)
/*! SEQA_INTEN - Sequence A interrupt enable.
 *  0b0..Disabled. The sequence A interrupt/DMA trigger is disabled.
 *  0b1..Enabled. The sequence A interrupt/DMA trigger is enabled and will be asserted either upon completion of
 *       each individual conversion performed as part of sequence A, or upon completion of the entire A sequence of
 *       conversions, depending on the MODE bit in the SEQA_CTRL register.
 */
#define ADC_INTEN_SEQA_INTEN(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_INTEN_SEQA_INTEN_SHIFT)) & ADC_INTEN_SEQA_INTEN_MASK)
#define ADC_INTEN_SEQB_INTEN_MASK                (0x2U)
#define ADC_INTEN_SEQB_INTEN_SHIFT               (1U)
/*! SEQB_INTEN - Sequence B interrupt enable.
 *  0b0..Disabled. The sequence B interrupt/DMA trigger is disabled.
 *  0b1..Enabled. The sequence B interrupt/DMA trigger is enabled and will be asserted either upon completion of
 *       each individual conversion performed as part of sequence B, or upon completion of the entire B sequence of
 *       conversions, depending on the MODE bit in the SEQB_CTRL register.
 */
#define ADC_INTEN_SEQB_INTEN(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_INTEN_SEQB_INTEN_SHIFT)) & ADC_INTEN_SEQB_INTEN_MASK)
#define ADC_INTEN_OVR_INTEN_MASK                 (0x4U)
#define ADC_INTEN_OVR_INTEN_SHIFT                (2U)
/*! OVR_INTEN - Overrun interrupt enable.
 *  0b0..Disabled. The overrun interrupt is disabled.
 *  0b1..Enabled. The overrun interrupt is enabled. Detection of an overrun condition on any of the 12 channel
 *       data registers will cause an overrun interrupt/DMA trigger. In addition, if the MODE bit for a particular
 *       sequence is 0, then an overrun in the global data register for that sequence will also cause this
 *       interrupt/DMA trigger to be asserted.
 */
#define ADC_INTEN_OVR_INTEN(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_INTEN_OVR_INTEN_SHIFT)) & ADC_INTEN_OVR_INTEN_MASK)
#define ADC_INTEN_ADCMPINTEN0_MASK               (0x18U)
#define ADC_INTEN_ADCMPINTEN0_SHIFT              (3U)
/*! ADCMPINTEN0 - Threshold comparison interrupt enable for channel 0.
 *  0b00..Disabled.
 *  0b01..Outside threshold.
 *  0b10..Crossing threshold.
 *  0b11..Reserved
 */
#define ADC_INTEN_ADCMPINTEN0(x)                 (((uint32_t)(((uint32_t)(x)) << ADC_INTEN_ADCMPINTEN0_SHIFT)) & ADC_INTEN_ADCMPINTEN0_MASK)
#define ADC_INTEN_ADCMPINTEN1_MASK               (0x60U)
#define ADC_INTEN_ADCMPINTEN1_SHIFT              (5U)
/*! ADCMPINTEN1 - Channel 1 threshold comparison interrupt enable. See description for channel 0.
 */
#define ADC_INTEN_ADCMPINTEN1(x)                 (((uint32_t)(((uint32_t)(x)) << ADC_INTEN_ADCMPINTEN1_SHIFT)) & ADC_INTEN_ADCMPINTEN1_MASK)
#define ADC_INTEN_ADCMPINTEN2_MASK               (0x180U)
#define ADC_INTEN_ADCMPINTEN2_SHIFT              (7U)
/*! ADCMPINTEN2 - Channel 2 threshold comparison interrupt enable. See description for channel 0.
 */
#define ADC_INTEN_ADCMPINTEN2(x)                 (((uint32_t)(((uint32_t)(x)) << ADC_INTEN_ADCMPINTEN2_SHIFT)) & ADC_INTEN_ADCMPINTEN2_MASK)
#define ADC_INTEN_ADCMPINTEN3_MASK               (0x600U)
#define ADC_INTEN_ADCMPINTEN3_SHIFT              (9U)
/*! ADCMPINTEN3 - Channel 3 threshold comparison interrupt enable. See description for channel 0.
 */
#define ADC_INTEN_ADCMPINTEN3(x)                 (((uint32_t)(((uint32_t)(x)) << ADC_INTEN_ADCMPINTEN3_SHIFT)) & ADC_INTEN_ADCMPINTEN3_MASK)
#define ADC_INTEN_ADCMPINTEN4_MASK               (0x1800U)
#define ADC_INTEN_ADCMPINTEN4_SHIFT              (11U)
/*! ADCMPINTEN4 - Channel 4 threshold comparison interrupt enable. See description for channel 0.
 */
#define ADC_INTEN_ADCMPINTEN4(x)                 (((uint32_t)(((uint32_t)(x)) << ADC_INTEN_ADCMPINTEN4_SHIFT)) & ADC_INTEN_ADCMPINTEN4_MASK)
#define ADC_INTEN_ADCMPINTEN5_MASK               (0x6000U)
#define ADC_INTEN_ADCMPINTEN5_SHIFT              (13U)
/*! ADCMPINTEN5 - Channel 5 threshold comparison interrupt enable. See description for channel 0.
 */
#define ADC_INTEN_ADCMPINTEN5(x)                 (((uint32_t)(((uint32_t)(x)) << ADC_INTEN_ADCMPINTEN5_SHIFT)) & ADC_INTEN_ADCMPINTEN5_MASK)
#define ADC_INTEN_ADCMPINTEN6_MASK               (0x18000U)
#define ADC_INTEN_ADCMPINTEN6_SHIFT              (15U)
/*! ADCMPINTEN6 - Channel 6 threshold comparison interrupt enable. See description for channel 0.
 */
#define ADC_INTEN_ADCMPINTEN6(x)                 (((uint32_t)(((uint32_t)(x)) << ADC_INTEN_ADCMPINTEN6_SHIFT)) & ADC_INTEN_ADCMPINTEN6_MASK)
#define ADC_INTEN_ADCMPINTEN7_MASK               (0x60000U)
#define ADC_INTEN_ADCMPINTEN7_SHIFT              (17U)
/*! ADCMPINTEN7 - Channel 7 threshold comparison interrupt enable. See description for channel 0.
 */
#define ADC_INTEN_ADCMPINTEN7(x)                 (((uint32_t)(((uint32_t)(x)) << ADC_INTEN_ADCMPINTEN7_SHIFT)) & ADC_INTEN_ADCMPINTEN7_MASK)
#define ADC_INTEN_ADCMPINTEN8_MASK               (0x180000U)
#define ADC_INTEN_ADCMPINTEN8_SHIFT              (19U)
/*! ADCMPINTEN8 - Channel 8 threshold comparison interrupt enable. See description for channel 0.
 */
#define ADC_INTEN_ADCMPINTEN8(x)                 (((uint32_t)(((uint32_t)(x)) << ADC_INTEN_ADCMPINTEN8_SHIFT)) & ADC_INTEN_ADCMPINTEN8_MASK)
#define ADC_INTEN_ADCMPINTEN9_MASK               (0x600000U)
#define ADC_INTEN_ADCMPINTEN9_SHIFT              (21U)
/*! ADCMPINTEN9 - Channel 9 threshold comparison interrupt enable. See description for channel 0.
 */
#define ADC_INTEN_ADCMPINTEN9(x)                 (((uint32_t)(((uint32_t)(x)) << ADC_INTEN_ADCMPINTEN9_SHIFT)) & ADC_INTEN_ADCMPINTEN9_MASK)
#define ADC_INTEN_ADCMPINTEN10_MASK              (0x1800000U)
#define ADC_INTEN_ADCMPINTEN10_SHIFT             (23U)
/*! ADCMPINTEN10 - Channel 10 threshold comparison interrupt enable. See description for channel 0.
 */
#define ADC_INTEN_ADCMPINTEN10(x)                (((uint32_t)(((uint32_t)(x)) << ADC_INTEN_ADCMPINTEN10_SHIFT)) & ADC_INTEN_ADCMPINTEN10_MASK)
#define ADC_INTEN_ADCMPINTEN11_MASK              (0x6000000U)
#define ADC_INTEN_ADCMPINTEN11_SHIFT             (25U)
/*! ADCMPINTEN11 - Channel 21 threshold comparison interrupt enable. See description for channel 0.
 */
#define ADC_INTEN_ADCMPINTEN11(x)                (((uint32_t)(((uint32_t)(x)) << ADC_INTEN_ADCMPINTEN11_SHIFT)) & ADC_INTEN_ADCMPINTEN11_MASK)

#define ADC_FLAGS_THCMP0_MASK                    (0x1U)
#define ADC_FLAGS_THCMP0_SHIFT                   (0U)
/*! THCMP0 - Threshold comparison event on Channel 0. Set to 1 upon either an out-of-range result or
 *    a threshold-crossing result if enabled to do so in the INTEN register. This bit is cleared by
 *    writing a 1.
 */
#define ADC_FLAGS_THCMP0(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_FLAGS_THCMP0_SHIFT)) & ADC_FLAGS_THCMP0_MASK)
#define ADC_FLAGS_THCMP1_MASK                    (0x2U)
#define ADC_FLAGS_THCMP1_SHIFT                   (1U)
/*! THCMP1 - Threshold comparison event on Channel 1. See description for channel 0.
 */
#define ADC_FLAGS_THCMP1(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_FLAGS_THCMP1_SHIFT)) & ADC_FLAGS_THCMP1_MASK)
#define ADC_FLAGS_THCMP2_MASK                    (0x4U)
#define ADC_FLAGS_THCMP2_SHIFT                   (2U)
/*! THCMP2 - Threshold comparison event on Channel 2. See description for channel 0.
 */
#define ADC_FLAGS_THCMP2(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_FLAGS_THCMP2_SHIFT)) & ADC_FLAGS_THCMP2_MASK)
#define ADC_FLAGS_THCMP3_MASK                    (0x8U)
#define ADC_FLAGS_THCMP3_SHIFT                   (3U)
/*! THCMP3 - Threshold comparison event on Channel 3. See description for channel 0.
 */
#define ADC_FLAGS_THCMP3(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_FLAGS_THCMP3_SHIFT)) & ADC_FLAGS_THCMP3_MASK)
#define ADC_FLAGS_THCMP4_MASK                    (0x10U)
#define ADC_FLAGS_THCMP4_SHIFT                   (4U)
/*! THCMP4 - Threshold comparison event on Channel 4. See description for channel 0.
 */
#define ADC_FLAGS_THCMP4(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_FLAGS_THCMP4_SHIFT)) & ADC_FLAGS_THCMP4_MASK)
#define ADC_FLAGS_THCMP5_MASK                    (0x20U)
#define ADC_FLAGS_THCMP5_SHIFT                   (5U)
/*! THCMP5 - Threshold comparison event on Channel 5. See description for channel 0.
 */
#define ADC_FLAGS_THCMP5(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_FLAGS_THCMP5_SHIFT)) & ADC_FLAGS_THCMP5_MASK)
#define ADC_FLAGS_THCMP6_MASK                    (0x40U)
#define ADC_FLAGS_THCMP6_SHIFT                   (6U)
/*! THCMP6 - Threshold comparison event on Channel 6. See description for channel 0.
 */
#define ADC_FLAGS_THCMP6(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_FLAGS_THCMP6_SHIFT)) & ADC_FLAGS_THCMP6_MASK)
#define ADC_FLAGS_THCMP7_MASK                    (0x80U)
#define ADC_FLAGS_THCMP7_SHIFT                   (7U)
/*! THCMP7 - Threshold comparison event on Channel 7. See description for channel 0.
 */
#define ADC_FLAGS_THCMP7(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_FLAGS_THCMP7_SHIFT)) & ADC_FLAGS_THCMP7_MASK)
#define ADC_FLAGS_THCMP8_MASK                    (0x100U)
#define ADC_FLAGS_THCMP8_SHIFT                   (8U)
/*! THCMP8 - Threshold comparison event on Channel 8. See description for channel 0.
 */
#define ADC_FLAGS_THCMP8(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_FLAGS_THCMP8_SHIFT)) & ADC_FLAGS_THCMP8_MASK)
#define ADC_FLAGS_THCMP9_MASK                    (0x200U)
#define ADC_FLAGS_THCMP9_SHIFT                   (9U)
/*! THCMP9 - Threshold comparison event on Channel 9. See description for channel 0.
 */
#define ADC_FLAGS_THCMP9(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_FLAGS_THCMP9_SHIFT)) & ADC_FLAGS_THCMP9_MASK)
#define ADC_FLAGS_THCMP10_MASK                   (0x400U)
#define ADC_FLAGS_THCMP10_SHIFT                  (10U)
/*! THCMP10 - Threshold comparison event on Channel 10. See description for channel 0.
 */
#define ADC_FLAGS_THCMP10(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_FLAGS_THCMP10_SHIFT)) & ADC_FLAGS_THCMP10_MASK)
#define ADC_FLAGS_THCMP11_MASK                   (0x800U)
#define ADC_FLAGS_THCMP11_SHIFT                  (11U)
/*! THCMP11 - Threshold comparison event on Channel 11. See description for channel 0.
 */
#define ADC_FLAGS_THCMP11(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_FLAGS_THCMP11_SHIFT)) & ADC_FLAGS_THCMP11_MASK)
#define ADC_FLAGS_OVERRUN0_MASK                  (0x1000U)
#define ADC_FLAGS_OVERRUN0_SHIFT                 (12U)
/*! OVERRUN0 - Mirrors the OVERRRUN status flag from the result register for ADC channel 0
 */
#define ADC_FLAGS_OVERRUN0(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_FLAGS_OVERRUN0_SHIFT)) & ADC_FLAGS_OVERRUN0_MASK)
#define ADC_FLAGS_OVERRUN1_MASK                  (0x2000U)
#define ADC_FLAGS_OVERRUN1_SHIFT                 (13U)
/*! OVERRUN1 - Mirrors the OVERRRUN status flag from the result register for ADC channel 1
 */
#define ADC_FLAGS_OVERRUN1(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_FLAGS_OVERRUN1_SHIFT)) & ADC_FLAGS_OVERRUN1_MASK)
#define ADC_FLAGS_OVERRUN2_MASK                  (0x4000U)
#define ADC_FLAGS_OVERRUN2_SHIFT                 (14U)
/*! OVERRUN2 - Mirrors the OVERRRUN status flag from the result register for ADC channel 2
 */
#define ADC_FLAGS_OVERRUN2(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_FLAGS_OVERRUN2_SHIFT)) & ADC_FLAGS_OVERRUN2_MASK)
#define ADC_FLAGS_OVERRUN3_MASK                  (0x8000U)
#define ADC_FLAGS_OVERRUN3_SHIFT                 (15U)
/*! OVERRUN3 - Mirrors the OVERRRUN status flag from the result register for ADC channel 3
 */
#define ADC_FLAGS_OVERRUN3(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_FLAGS_OVERRUN3_SHIFT)) & ADC_FLAGS_OVERRUN3_MASK)
#define ADC_FLAGS_OVERRUN4_MASK                  (0x10000U)
#define ADC_FLAGS_OVERRUN4_SHIFT                 (16U)
/*! OVERRUN4 - Mirrors the OVERRRUN status flag from the result register for ADC channel 4
 */
#define ADC_FLAGS_OVERRUN4(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_FLAGS_OVERRUN4_SHIFT)) & ADC_FLAGS_OVERRUN4_MASK)
#define ADC_FLAGS_OVERRUN5_MASK                  (0x20000U)
#define ADC_FLAGS_OVERRUN5_SHIFT                 (17U)
/*! OVERRUN5 - Mirrors the OVERRRUN status flag from the result register for ADC channel 5
 */
#define ADC_FLAGS_OVERRUN5(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_FLAGS_OVERRUN5_SHIFT)) & ADC_FLAGS_OVERRUN5_MASK)
#define ADC_FLAGS_OVERRUN6_MASK                  (0x40000U)
#define ADC_FLAGS_OVERRUN6_SHIFT                 (18U)
/*! OVERRUN6 - Mirrors the OVERRRUN status flag from the result register for ADC channel 6
 */
#define ADC_FLAGS_OVERRUN6(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_FLAGS_OVERRUN6_SHIFT)) & ADC_FLAGS_OVERRUN6_MASK)
#define ADC_FLAGS_OVERRUN7_MASK                  (0x80000U)
#define ADC_FLAGS_OVERRUN7_SHIFT                 (19U)
/*! OVERRUN7 - Mirrors the OVERRRUN status flag from the result register for ADC channel 7
 */
#define ADC_FLAGS_OVERRUN7(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_FLAGS_OVERRUN7_SHIFT)) & ADC_FLAGS_OVERRUN7_MASK)
#define ADC_FLAGS_OVERRUN8_MASK                  (0x100000U)
#define ADC_FLAGS_OVERRUN8_SHIFT                 (20U)
/*! OVERRUN8 - Mirrors the OVERRRUN status flag from the result register for ADC channel 8
 */
#define ADC_FLAGS_OVERRUN8(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_FLAGS_OVERRUN8_SHIFT)) & ADC_FLAGS_OVERRUN8_MASK)
#define ADC_FLAGS_OVERRUN9_MASK                  (0x200000U)
#define ADC_FLAGS_OVERRUN9_SHIFT                 (21U)
/*! OVERRUN9 - Mirrors the OVERRRUN status flag from the result register for ADC channel 9
 */
#define ADC_FLAGS_OVERRUN9(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_FLAGS_OVERRUN9_SHIFT)) & ADC_FLAGS_OVERRUN9_MASK)
#define ADC_FLAGS_OVERRUN10_MASK                 (0x400000U)
#define ADC_FLAGS_OVERRUN10_SHIFT                (22U)
/*! OVERRUN10 - Mirrors the OVERRRUN status flag from the result register for ADC channel 10
 */
#define ADC_FLAGS_OVERRUN10(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_FLAGS_OVERRUN10_SHIFT)) & ADC_FLAGS_OVERRUN10_MASK)
#define ADC_FLAGS_OVERRUN11_MASK                 (0x800000U)
#define ADC_FLAGS_OVERRUN11_SHIFT                (23U)
/*! OVERRUN11 - Mirrors the OVERRRUN status flag from the result register for ADC channel 11
 */
#define ADC_FLAGS_OVERRUN11(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_FLAGS_OVERRUN11_SHIFT)) & ADC_FLAGS_OVERRUN11_MASK)
#define ADC_FLAGS_SEQA_OVR_MASK                  (0x1000000U)
#define ADC_FLAGS_SEQA_OVR_SHIFT                 (24U)
/*! SEQA_OVR - Mirrors the global OVERRUN status flag in the SEQA_GDAT register
 */
#define ADC_FLAGS_SEQA_OVR(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_FLAGS_SEQA_OVR_SHIFT)) & ADC_FLAGS_SEQA_OVR_MASK)
#define ADC_FLAGS_SEQB_OVR_MASK                  (0x2000000U)
#define ADC_FLAGS_SEQB_OVR_SHIFT                 (25U)
/*! SEQB_OVR - Mirrors the global OVERRUN status flag in the SEQB_GDAT register
 */
#define ADC_FLAGS_SEQB_OVR(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_FLAGS_SEQB_OVR_SHIFT)) & ADC_FLAGS_SEQB_OVR_MASK)
#define ADC_FLAGS_SEQA_INT_MASK                  (0x10000000U)
#define ADC_FLAGS_SEQA_INT_SHIFT                 (28U)
/*! SEQA_INT - Sequence A interrupt/DMA trigger. If the MODE bit in the SEQA_CTRL register is 0,
 *    this flag will mirror the DATAVALID bit in the sequence A global data register (SEQA_GDAT), which
 *    is set at the end of every ADC conversion performed as part of sequence A. It will be cleared
 *    automatically when the SEQA_GDAT register is read. If the MODE bit in the SEQA_CTRL register
 *    is 1, this flag will be set upon completion of an entire A sequence. In this case it must be
 *    cleared by writing a 1 to this SEQA_INT bit. This interrupt must be enabled in the INTEN
 *    register.
 */
#define ADC_FLAGS_SEQA_INT(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_FLAGS_SEQA_INT_SHIFT)) & ADC_FLAGS_SEQA_INT_MASK)
#define ADC_FLAGS_SEQB_INT_MASK                  (0x20000000U)
#define ADC_FLAGS_SEQB_INT_SHIFT                 (29U)
/*! SEQB_INT - Sequence A interrupt/DMA trigger. If the MODE bit in the SEQB_CTRL register is 0,
 *    this flag will mirror the DATAVALID bit in the sequence A global data register (SEQB_GDAT), which
 *    is set at the end of every ADC conversion performed as part of sequence B. It will be cleared
 *    automatically when the SEQB_GDAT register is read. If the MODE bit in the SEQB_CTRL register
 *    is 1, this flag will be set upon completion of an entire B sequence. In this case it must be
 *    cleared by writing a 1 to this SEQB_INT bit. This interrupt must be enabled in the INTEN
 *    register.
 */
#define ADC_FLAGS_SEQB_INT(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_FLAGS_SEQB_INT_SHIFT)) & ADC_FLAGS_SEQB_INT_MASK)
#define ADC_FLAGS_THCMP_INT_MASK                 (0x40000000U)
#define ADC_FLAGS_THCMP_INT_SHIFT                (30U)
/*! THCMP_INT - Threshold Comparison Interrupt. This bit will be set if any of the THCMP flags in
 *    the lower bits of this register are set to 1 (due to an enabled out-of-range or
 *    threshold-crossing event on any channel). Each type of threshold comparison interrupt on each channel must be
 *    individually enabled in the INTEN register to cause this interrupt. This bit will be cleared
 *    when all of the individual threshold flags are cleared via writing 1s to those bits.
 */
#define ADC_FLAGS_THCMP_INT(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_FLAGS_THCMP_INT_SHIFT)) & ADC_FLAGS_THCMP_INT_MASK)
#define ADC_FLAGS_OVR_INT_MASK                   (0x80000000U)
#define ADC_FLAGS_OVR_INT_SHIFT                  (31U)
/*! OVR_INT - Overrun Interrupt flag. Any overrun bit in any of the individual channel data
 *    registers will cause this interrupt. In addition, if the MODE bit in either of the SEQn_CTRL registers
 *    is 0 then the OVERRUN bit in the corresponding SEQn_GDAT register will also cause this
 *    interrupt. This interrupt must be enabled in the INTEN register. This bit will be cleared when all
 *    of the individual overrun bits have been cleared via reading the corresponding data registers.
 */
#define ADC_FLAGS_OVR_INT(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_FLAGS_OVR_INT_SHIFT)) & ADC_FLAGS_OVR_INT_MASK)

#define ADC_TRM_VRANGE_MASK                      (0x20U)
#define ADC_TRM_VRANGE_SHIFT                     (5U)
/*! VRANGE - 1.8V to 3.6V Vdd range: This bit MUST be set to '1' if operation below 2.7V is to be
 *    used. Failure to set this bit will result in invalid ADC results. Note: This bit will not be
 *    spec'd on parts that do not support operation below 2.7V
 */
#define ADC_TRM_VRANGE(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_TRM_VRANGE_SHIFT)) & ADC_TRM_VRANGE_MASK)

/** Peripheral ADC0 base address */
#define ADC0_BASE                                (0x4001C000u)
/** Peripheral ADC0 base pointer */
#define ADC0                                     ((ADC_Type *)ADC0_BASE)
/** Array initializer of ADC peripheral base addresses */
#define ADC_BASE_ADDRS                           { ADC0_BASE }
/** Array initializer of ADC peripheral base pointers */
#define ADC_BASE_PTRS                            { ADC0 }
/** Interrupt vectors for the ADC peripheral type */
#define ADC_SEQ_IRQS                             { ADC0_SEQA_IRQn, ADC0_SEQB_IRQn }
#define ADC_THCMP_IRQS                           { ADC0_THCMP_IRQn }

/* ----------------------------------------------------------------------------
   -- DAC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/** DAC - Register Layout Typedef */
typedef struct {
  __IO uint32_t CR;                                /**< D/A Converter Register. This register contains the digital value to be converted to analog and a power control bit., offset: 0x0 */
  __IO uint32_t CTRL;                              /**< DAC Control register. This register controls DMA and timer operation., offset: 0x4 */
  __IO uint32_t CNTVAL;                            /**< DAC Counter Value register. This register contains the reload value for the DAC DMA/Interrupt timer., offset: 0x8 */
} DAC_Type;

/*! @name CR - D/A Converter Register. This register contains the digital value to be converted to analog and a power control bit. */
/*! @{ */
#define DAC_CR_VALUE_MASK                        (0xFFC0U)
#define DAC_CR_VALUE_SHIFT                       (6U)
/*! VALUE - After the selected settling time after this field is written with a new VALUE, the
 *    voltage on the DAC_OUT pin (with respect to VSSA) is VALUE (VREFP - VREFN)/1024 + VREFN.
 */
#define DAC_CR_VALUE(x)                          (((uint32_t)(((uint32_t)(x)) << DAC_CR_VALUE_SHIFT)) & DAC_CR_VALUE_MASK)
#define DAC_CR_BIAS_MASK                         (0x10000U)
#define DAC_CR_BIAS_SHIFT                        (16U)
/*! BIAS - The settling time of the DAC
 *  0b0..The settling time of the DAC is 1 us max, and the maximum current is 700 uA. This allows a maximum update rate of 1 MHz.
 *  0b1..The settling time of the DAC is 2.5 us and the maximum current is 350 uA. This allows a maximum update rate of 400 kHz.
 */
#define DAC_CR_BIAS(x)                           (((uint32_t)(((uint32_t)(x)) << DAC_CR_BIAS_SHIFT)) & DAC_CR_BIAS_MASK)
/*! @} */

/*! @name CTRL - DAC Control register. This register controls DMA and timer operation. */
/*! @{ */
#define DAC_CTRL_INT_DMA_REQ_MASK                (0x1U)
#define DAC_CTRL_INT_DMA_REQ_SHIFT               (0U)
/*! INT_DMA_REQ - DMA request
 *  0b0..This bit is cleared on any write to the DACR register.
 *  0b1..This bit is set by hardware when the timer times out.
 */
#define DAC_CTRL_INT_DMA_REQ(x)                  (((uint32_t)(((uint32_t)(x)) << DAC_CTRL_INT_DMA_REQ_SHIFT)) & DAC_CTRL_INT_DMA_REQ_MASK)
#define DAC_CTRL_DBLBUF_ENA_MASK                 (0x2U)
#define DAC_CTRL_DBLBUF_ENA_SHIFT                (1U)
/*! DBLBUF_ENA - dacr double buffer
 *  0b0..DACR double-buffering is disabled.
 *  0b1..When this bit and the CNT_ENA bit are both set, the double-buffering feature in the DACR register will be
 *       enabled. Writes to the DACR register are written to a pre-buffer and then transferred to the DACR on the
 *       next time-out of the counter.
 */
#define DAC_CTRL_DBLBUF_ENA(x)                   (((uint32_t)(((uint32_t)(x)) << DAC_CTRL_DBLBUF_ENA_SHIFT)) & DAC_CTRL_DBLBUF_ENA_MASK)
#define DAC_CTRL_CNT_ENA_MASK                    (0x4U)
#define DAC_CTRL_CNT_ENA_SHIFT                   (2U)
/*! CNT_ENA - time-out counter operation
 *  0b0..Time-out counter operation is disabled.
 *  0b1..Time-out counter operation is enabled.
 */
#define DAC_CTRL_CNT_ENA(x)                      (((uint32_t)(((uint32_t)(x)) << DAC_CTRL_CNT_ENA_SHIFT)) & DAC_CTRL_CNT_ENA_MASK)
#define DAC_CTRL_DMA_ENA_MASK                    (0x8U)
#define DAC_CTRL_DMA_ENA_SHIFT                   (3U)
/*! DMA_ENA - DMA access
 *  0b0..DMA access is disabled.
 *  0b1..DMA Burst Request Input 7 is enabled for the DAC
 */
#define DAC_CTRL_DMA_ENA(x)                      (((uint32_t)(((uint32_t)(x)) << DAC_CTRL_DMA_ENA_SHIFT)) & DAC_CTRL_DMA_ENA_MASK)
/*! @} */

/*! @name CNTVAL - DAC Counter Value register. This register contains the reload value for the DAC DMA/Interrupt timer. */
/*! @{ */
#define DAC_CNTVAL_VALUE_MASK                    (0xFFFFU)
#define DAC_CNTVAL_VALUE_SHIFT                   (0U)
/*! VALUE - 16-bit reload value for the DAC interrupt/DMA timer.
 */
#define DAC_CNTVAL_VALUE(x)                      (((uint32_t)(((uint32_t)(x)) << DAC_CNTVAL_VALUE_SHIFT)) & DAC_CNTVAL_VALUE_MASK)
/*! @} */

/* DAC - Peripheral instance base addresses */
/** Peripheral DAC0 base address */
#define DAC0_BASE                                (0x40014000u)
/** Peripheral DAC0 base pointer */
#define DAC0                                     ((DAC_Type *)DAC0_BASE)
/** Peripheral DAC1 base address */
#define DAC1_BASE                                (0x40018000u)
/** Peripheral DAC1 base pointer */
#define DAC1                                     ((DAC_Type *)DAC1_BASE)
/** Array initializer of DAC peripheral base addresses */
#define DAC_BASE_ADDRS                           { DAC0_BASE, DAC1_BASE }
/** Array initializer of DAC peripheral base pointers */
#define DAC_BASE_PTRS                            { DAC0, DAC1 }

/* ----------------------------------------------------------------------------
   -- I2C Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup I2C_Peripheral_Access_Layer I2C Peripheral Access Layer
 * @{
 */

/** I2C - Register Layout Typedef */
typedef struct {
  __IO uint32_t CFG;                               /**< Configuration for shared functions., offset: 0x0 */
  __IO uint32_t STAT;                              /**< Status register for Master, Slave, and Monitor functions., offset: 0x4 */
  __IO uint32_t INTENSET;                          /**< Interrupt Enable Set and read register., offset: 0x8 */
  __O  uint32_t INTENCLR;                          /**< Interrupt Enable Clear register., offset: 0xC */
  __IO uint32_t TIMEOUT;                           /**< Time-out value register., offset: 0x10 */
  __IO uint32_t CLKDIV;                            /**< Clock pre-divider for the entire I2C interface. This determines what time increments are used for the MSTTIME register, and controls some timing of the Slave function., offset: 0x14 */
  __I  uint32_t INTSTAT;                           /**< Interrupt Status register for Master, Slave, and Monitor functions., offset: 0x18 */
       uint8_t RESERVED_0[4];
  __IO uint32_t MSTCTL;                            /**< Master control register., offset: 0x20 */
  __IO uint32_t MSTTIME;                           /**< Master timing configuration., offset: 0x24 */
  __IO uint32_t MSTDAT;                            /**< Combined Master receiver and transmitter data register., offset: 0x28 */
       uint8_t RESERVED_1[20];
  __IO uint32_t SLVCTL;                            /**< Slave control register., offset: 0x40 */
  __IO uint32_t SLVDAT;                            /**< Combined Slave receiver and transmitter data register., offset: 0x44 */
  __IO uint32_t SLVADR[4];                         /**< Slave address register., array offset: 0x48, array step: 0x4 */
  __IO uint32_t SLVQUAL0;                          /**< Slave Qualification for address 0., offset: 0x58 */
       uint8_t RESERVED_2[36];
  __I  uint32_t MONRXDAT;                          /**< Monitor receiver data register., offset: 0x80 */
} I2C_Type;

/* ----------------------------------------------------------------------------
   -- I2C Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup I2C_Register_Masks I2C Register Masks
 * @{
 */

/*! @name CFG - Configuration for shared functions. */
/*! @{ */
#define I2C_CFG_MSTEN_MASK                       (0x1U)
#define I2C_CFG_MSTEN_SHIFT                      (0U)
/*! MSTEN - Master Enable. When disabled, configurations settings for the Master function are not
 *    changed, but the Master function is internally reset.
 *  0b0..Disabled. The I2C Master function is disabled.
 *  0b1..Enabled. The I2C Master function is enabled.
 */
#define I2C_CFG_MSTEN(x)                         (((uint32_t)(((uint32_t)(x)) << I2C_CFG_MSTEN_SHIFT)) & I2C_CFG_MSTEN_MASK)
#define I2C_CFG_SLVEN_MASK                       (0x2U)
#define I2C_CFG_SLVEN_SHIFT                      (1U)
/*! SLVEN - Slave Enable. When disabled, configurations settings for the Slave function are not
 *    changed, but the Slave function is internally reset.
 *  0b0..Disabled. The I2C slave function is disabled.
 *  0b1..Enabled. The I2C slave function is enabled.
 */
#define I2C_CFG_SLVEN(x)                         (((uint32_t)(((uint32_t)(x)) << I2C_CFG_SLVEN_SHIFT)) & I2C_CFG_SLVEN_MASK)
#define I2C_CFG_MONEN_MASK                       (0x4U)
#define I2C_CFG_MONEN_SHIFT                      (2U)
/*! MONEN - Monitor Enable. When disabled, configurations settings for the Monitor function are not
 *    changed, but the Monitor function is internally reset.
 *  0b0..Disabled. The I2C Monitor function is disabled.
 *  0b1..Enabled. The I2C Monitor function is enabled.
 */
#define I2C_CFG_MONEN(x)                         (((uint32_t)(((uint32_t)(x)) << I2C_CFG_MONEN_SHIFT)) & I2C_CFG_MONEN_MASK)
#define I2C_CFG_TIMEOUTEN_MASK                   (0x8U)
#define I2C_CFG_TIMEOUTEN_SHIFT                  (3U)
/*! TIMEOUTEN - I2C bus Time-out Enable. When disabled, the time-out function is internally reset.
 *  0b0..Disabled. Time-out function is disabled.
 *  0b1..Enabled. Time-out function is enabled. Both types of time-out flags will be generated and will cause
 *       interrupts if they are enabled. Typically, only one time-out will be used in a system.
 */
#define I2C_CFG_TIMEOUTEN(x)                     (((uint32_t)(((uint32_t)(x)) << I2C_CFG_TIMEOUTEN_SHIFT)) & I2C_CFG_TIMEOUTEN_MASK)
#define I2C_CFG_MONCLKSTR_MASK                   (0x10U)
#define I2C_CFG_MONCLKSTR_SHIFT                  (4U)
/*! MONCLKSTR - Monitor function Clock Stretching.
 *  0b0..Disabled. The Monitor function will not perform clock stretching. Software or DMA may not always be able
 *       to read data provided by the Monitor function before it is overwritten. This mode may be used when
 *       non-invasive monitoring is critical.
 *  0b1..Enabled. The Monitor function will perform clock stretching in order to ensure that software or DMA can
 *       read all incoming data supplied by the Monitor function.
 */
#define I2C_CFG_MONCLKSTR(x)                     (((uint32_t)(((uint32_t)(x)) << I2C_CFG_MONCLKSTR_SHIFT)) & I2C_CFG_MONCLKSTR_MASK)
/*! @} */

/*! @name STAT - Status register for Master, Slave, and Monitor functions. */
/*! @{ */
#define I2C_STAT_MSTPENDING_MASK                 (0x1U)
#define I2C_STAT_MSTPENDING_SHIFT                (0U)
/*! MSTPENDING - Master Pending. Indicates that the Master is waiting to continue communication on
 *    the I2C-bus (pending) or is idle. When the master is pending, the MSTSTATE bits indicate what
 *    type of software service if any the master expects. This flag will cause an interrupt when set
 *    if, enabled via the INTENSET register. The MSTPENDING flag is not set when the DMA is handling
 *    an event (if the MSTDMA bit in the MSTCTL register is set). If the master is in the idle
 *    state, and no communication is needed, mask this interrupt.
 *  0b0..In progress. Communication is in progress and the Master function is busy and cannot currently accept a command.
 *  0b1..Pending. The Master function needs software service or is in the idle state. If the master is not in the
 *       idle state, it is waiting to receive or transmit data or the NACK bit.
 */
#define I2C_STAT_MSTPENDING(x)                   (((uint32_t)(((uint32_t)(x)) << I2C_STAT_MSTPENDING_SHIFT)) & I2C_STAT_MSTPENDING_MASK)
#define I2C_STAT_MSTSTATE_MASK                   (0xEU)
#define I2C_STAT_MSTSTATE_SHIFT                  (1U)
/*! MSTSTATE - Master State code. The master state code reflects the master state when the
 *    MSTPENDING bit is set, that is the master is pending or in the idle state. Each value of this field
 *    indicates a specific required service for the Master function. All other values are reserved. See
 *    Table 400 for details of state values and appropriate responses.
 *  0b000..Idle. The Master function is available to be used for a new transaction.
 *  0b001..Receive ready. Received data available (Master Receiver mode). Address plus Read was previously sent and Acknowledged by slave.
 *  0b010..Transmit ready. Data can be transmitted (Master Transmitter mode). Address plus Write was previously sent and Acknowledged by slave.
 *  0b011..NACK Address. Slave NACKed address.
 *  0b100..NACK Data. Slave NACKed transmitted data.
 */
#define I2C_STAT_MSTSTATE(x)                     (((uint32_t)(((uint32_t)(x)) << I2C_STAT_MSTSTATE_SHIFT)) & I2C_STAT_MSTSTATE_MASK)
#define I2C_STAT_MSTARBLOSS_MASK                 (0x10U)
#define I2C_STAT_MSTARBLOSS_SHIFT                (4U)
/*! MSTARBLOSS - Master Arbitration Loss flag. This flag can be cleared by software writing a 1 to
 *    this bit. It is also cleared automatically a 1 is written to MSTCONTINUE.
 *  0b0..No Arbitration Loss has occurred.
 *  0b1..Arbitration loss. The Master function has experienced an Arbitration Loss. At this point, the Master
 *       function has already stopped driving the bus and gone to an idle state. Software can respond by doing nothing,
 *       or by sending a Start in order to attempt to gain control of the bus when it next becomes idle.
 */
#define I2C_STAT_MSTARBLOSS(x)                   (((uint32_t)(((uint32_t)(x)) << I2C_STAT_MSTARBLOSS_SHIFT)) & I2C_STAT_MSTARBLOSS_MASK)
#define I2C_STAT_MSTSTSTPERR_MASK                (0x40U)
#define I2C_STAT_MSTSTSTPERR_SHIFT               (6U)
/*! MSTSTSTPERR - Master Start/Stop Error flag. This flag can be cleared by software writing a 1 to
 *    this bit. It is also cleared automatically a 1 is written to MSTCONTINUE.
 *  0b0..No Start/Stop Error has occurred.
 *  0b1..The Master function has experienced a Start/Stop Error. A Start or Stop was detected at a time when it is
 *       not allowed by the I2C specification. The Master interface has stopped driving the bus and gone to an
 *       idle state, no action is required. A request for a Start could be made, or software could attempt to insure
 *       that the bus has not stalled.
 */
#define I2C_STAT_MSTSTSTPERR(x)                  (((uint32_t)(((uint32_t)(x)) << I2C_STAT_MSTSTSTPERR_SHIFT)) & I2C_STAT_MSTSTSTPERR_MASK)
#define I2C_STAT_SLVPENDING_MASK                 (0x100U)
#define I2C_STAT_SLVPENDING_SHIFT                (8U)
/*! SLVPENDING - Slave Pending. Indicates that the Slave function is waiting to continue
 *    communication on the I2C-bus and needs software service. This flag will cause an interrupt when set if
 *    enabled via INTENSET. The SLVPENDING flag is not set when the DMA is handling an event (if the
 *    SLVDMA bit in the SLVCTL register is set). The SLVPENDING flag is read-only and is
 *    automatically cleared when a 1 is written to the SLVCONTINUE bit in the SLVCTL register. The point in time
 *    when SlvPending is set depends on whether the I2C interface is in HSCAPABLE mode. See Section
 *    25.7.2.2.2. When the I2C interface is configured to be HSCAPABLE, HS master codes are
 *    detected automatically. Due to the requirements of the HS I2C specification, slave addresses must
 *    also be detected automatically, since the address must be acknowledged before the clock can be
 *    stretched.
 *  0b0..In progress. The Slave function does not currently need service.
 *  0b1..Pending. The Slave function needs service. Information on what is needed can be found in the adjacent SLVSTATE field.
 */
#define I2C_STAT_SLVPENDING(x)                   (((uint32_t)(((uint32_t)(x)) << I2C_STAT_SLVPENDING_SHIFT)) & I2C_STAT_SLVPENDING_MASK)
#define I2C_STAT_SLVSTATE_MASK                   (0x600U)
#define I2C_STAT_SLVSTATE_SHIFT                  (9U)
/*! SLVSTATE - Slave State code. Each value of this field indicates a specific required service for
 *    the Slave function. All other values are reserved. See Table 401 for state values and actions.
 *    note that the occurrence of some states and how they are handled are affected by DMA mode and
 *    Automatic Operation modes.
 *  0b00..Slave address. Address plus R/W received. At least one of the four slave addresses has been matched by hardware.
 *  0b01..Slave receive. Received data is available (Slave Receiver mode).
 *  0b10..Slave transmit. Data can be transmitted (Slave Transmitter mode).
 */
#define I2C_STAT_SLVSTATE(x)                     (((uint32_t)(((uint32_t)(x)) << I2C_STAT_SLVSTATE_SHIFT)) & I2C_STAT_SLVSTATE_MASK)
#define I2C_STAT_SLVNOTSTR_MASK                  (0x800U)
#define I2C_STAT_SLVNOTSTR_SHIFT                 (11U)
/*! SLVNOTSTR - Slave Not Stretching. Indicates when the slave function is stretching the I2C clock.
 *    This is needed in order to gracefully invoke Deep Sleep or Power-down modes during slave
 *    operation. This read-only flag reflects the slave function status in real time.
 *  0b0..Stretching. The slave function is currently stretching the I2C bus clock. Deep-Sleep or Power-down mode cannot be entered at this time.
 *  0b1..Not stretching. The slave function is not currently stretching the I 2C bus clock. Deep-sleep or
 *       Power-down mode could be entered at this time.
 */
#define I2C_STAT_SLVNOTSTR(x)                    (((uint32_t)(((uint32_t)(x)) << I2C_STAT_SLVNOTSTR_SHIFT)) & I2C_STAT_SLVNOTSTR_MASK)
#define I2C_STAT_SLVIDX_MASK                     (0x3000U)
#define I2C_STAT_SLVIDX_SHIFT                    (12U)
/*! SLVIDX - Slave address match Index. This field is valid when the I2C slave function has been
 *    selected by receiving an address that matches one of the slave addresses defined by any enabled
 *    slave address registers, and provides an identification of the address that was matched. It is
 *    possible that more than one address could be matched, but only one match can be reported here.
 *  0b00..Address 0. Slave address 0 was matched.
 *  0b01..Address 1. Slave address 1 was matched.
 *  0b10..Address 2. Slave address 2 was matched.
 *  0b11..Address 3. Slave address 3 was matched.
 */
#define I2C_STAT_SLVIDX(x)                       (((uint32_t)(((uint32_t)(x)) << I2C_STAT_SLVIDX_SHIFT)) & I2C_STAT_SLVIDX_MASK)
#define I2C_STAT_SLVSEL_MASK                     (0x4000U)
#define I2C_STAT_SLVSEL_SHIFT                    (14U)
/*! SLVSEL - Slave selected flag. SLVSEL is set after an address match when software tells the Slave
 *    function to acknowledge the address, or when the address has been automatically acknowledged.
 *    It is cleared when another address cycle presents an address that does not match an enabled
 *    address on the Slave function, when slave software decides to NACK a matched address, when
 *    there is a Stop detected on the bus, when the master NACKs slave data, and in some combinations of
 *    Automatic Operation. SLVSEL is not cleared if software NACKs data.
 *  0b0..Not selected. The Slave function is not currently selected.
 *  0b1..Selected. The Slave function is currently selected.
 */
#define I2C_STAT_SLVSEL(x)                       (((uint32_t)(((uint32_t)(x)) << I2C_STAT_SLVSEL_SHIFT)) & I2C_STAT_SLVSEL_MASK)
#define I2C_STAT_SLVDESEL_MASK                   (0x8000U)
#define I2C_STAT_SLVDESEL_SHIFT                  (15U)
/*! SLVDESEL - Slave Deselected flag. This flag will cause an interrupt when set if enabled via
 *    INTENSET. This flag can be cleared by writing a 1 to this bit.
 *  0b0..Not deselected. The Slave function has not become deselected. This does not mean that it is currently
 *       selected. That information can be found in the SLVSEL flag.
 *  0b1..Deselected. The Slave function has become deselected. This is specifically caused by the SLVSEL flag
 *       changing from 1 to 0. See the description of SLVSEL for details on when that event occurs.
 */
#define I2C_STAT_SLVDESEL(x)                     (((uint32_t)(((uint32_t)(x)) << I2C_STAT_SLVDESEL_SHIFT)) & I2C_STAT_SLVDESEL_MASK)
#define I2C_STAT_MONRDY_MASK                     (0x10000U)
#define I2C_STAT_MONRDY_SHIFT                    (16U)
/*! MONRDY - Monitor Ready. This flag is cleared when the MONRXDAT register is read.
 *  0b0..No data. The Monitor function does not currently have data available.
 *  0b1..Data waiting. The Monitor function has data waiting to be read.
 */
#define I2C_STAT_MONRDY(x)                       (((uint32_t)(((uint32_t)(x)) << I2C_STAT_MONRDY_SHIFT)) & I2C_STAT_MONRDY_MASK)
#define I2C_STAT_MONOV_MASK                      (0x20000U)
#define I2C_STAT_MONOV_SHIFT                     (17U)
/*! MONOV - Monitor Overflow flag.
 *  0b0..No overrun. Monitor data has not overrun.
 *  0b1..Overrun. A Monitor data overrun has occurred. This can only happen when Monitor clock stretching not
 *       enabled via the MONCLKSTR bit in the CFG register. Writing 1 to this bit clears the flag.
 */
#define I2C_STAT_MONOV(x)                        (((uint32_t)(((uint32_t)(x)) << I2C_STAT_MONOV_SHIFT)) & I2C_STAT_MONOV_MASK)
#define I2C_STAT_MONACTIVE_MASK                  (0x40000U)
#define I2C_STAT_MONACTIVE_SHIFT                 (18U)
/*! MONACTIVE - Monitor Active flag. Indicates when the Monitor function considers the I 2C bus to
 *    be active. Active is defined here as when some Master is on the bus: a bus Start has occurred
 *    more recently than a bus Stop.
 *  0b0..Inactive. The Monitor function considers the I2C bus to be inactive.
 *  0b1..Active. The Monitor function considers the I2C bus to be active.
 */
#define I2C_STAT_MONACTIVE(x)                    (((uint32_t)(((uint32_t)(x)) << I2C_STAT_MONACTIVE_SHIFT)) & I2C_STAT_MONACTIVE_MASK)
#define I2C_STAT_MONIDLE_MASK                    (0x80000U)
#define I2C_STAT_MONIDLE_SHIFT                   (19U)
/*! MONIDLE - Monitor Idle flag. This flag is set when the Monitor function sees the I2C bus change
 *    from active to inactive. This can be used by software to decide when to process data
 *    accumulated by the Monitor function. This flag will cause an interrupt when set if enabled via the
 *    INTENSET register. The flag can be cleared by writing a 1 to this bit.
 *  0b0..Not idle. The I2C bus is not idle, or this flag has been cleared by software.
 *  0b1..Idle. The I2C bus has gone idle at least once since the last time this flag was cleared by software.
 */
#define I2C_STAT_MONIDLE(x)                      (((uint32_t)(((uint32_t)(x)) << I2C_STAT_MONIDLE_SHIFT)) & I2C_STAT_MONIDLE_MASK)
#define I2C_STAT_EVENTTIMEOUT_MASK               (0x1000000U)
#define I2C_STAT_EVENTTIMEOUT_SHIFT              (24U)
/*! EVENTTIMEOUT - Event Time-out Interrupt flag. Indicates when the time between events has been
 *    longer than the time specified by the TIMEOUT register. Events include Start, Stop, and clock
 *    edges. The flag is cleared by writing a 1 to this bit. No time-out is created when the I2C-bus
 *    is idle.
 *  0b0..No time-out. I2C bus events have not caused a time-out.
 *  0b1..Event time-out. The time between I2C bus events has been longer than the time specified by the TIMEOUT register.
 */
#define I2C_STAT_EVENTTIMEOUT(x)                 (((uint32_t)(((uint32_t)(x)) << I2C_STAT_EVENTTIMEOUT_SHIFT)) & I2C_STAT_EVENTTIMEOUT_MASK)
#define I2C_STAT_SCLTIMEOUT_MASK                 (0x2000000U)
#define I2C_STAT_SCLTIMEOUT_SHIFT                (25U)
/*! SCLTIMEOUT - SCL Time-out Interrupt flag. Indicates when SCL has remained low longer than the
 *    time specific by the TIMEOUT register. The flag is cleared by writing a 1 to this bit.
 *  0b0..No time-out. SCL low time has not caused a time-out.
 *  0b1..Time-out. SCL low time has caused a time-out.
 */
#define I2C_STAT_SCLTIMEOUT(x)                   (((uint32_t)(((uint32_t)(x)) << I2C_STAT_SCLTIMEOUT_SHIFT)) & I2C_STAT_SCLTIMEOUT_MASK)
/*! @} */

/*! @name INTENSET - Interrupt Enable Set and read register. */
/*! @{ */
#define I2C_INTENSET_MSTPENDINGEN_MASK           (0x1U)
#define I2C_INTENSET_MSTPENDINGEN_SHIFT          (0U)
/*! MSTPENDINGEN - Master Pending interrupt Enable.
 *  0b0..Disabled. The MstPending interrupt is disabled.
 *  0b1..Enabled. The MstPending interrupt is enabled.
 */
#define I2C_INTENSET_MSTPENDINGEN(x)             (((uint32_t)(((uint32_t)(x)) << I2C_INTENSET_MSTPENDINGEN_SHIFT)) & I2C_INTENSET_MSTPENDINGEN_MASK)
#define I2C_INTENSET_MSTARBLOSSEN_MASK           (0x10U)
#define I2C_INTENSET_MSTARBLOSSEN_SHIFT          (4U)
/*! MSTARBLOSSEN - Master Arbitration Loss interrupt Enable.
 *  0b0..Disabled. The MstArbLoss interrupt is disabled.
 *  0b1..Enabled. The MstArbLoss interrupt is enabled.
 */
#define I2C_INTENSET_MSTARBLOSSEN(x)             (((uint32_t)(((uint32_t)(x)) << I2C_INTENSET_MSTARBLOSSEN_SHIFT)) & I2C_INTENSET_MSTARBLOSSEN_MASK)
#define I2C_INTENSET_MSTSTSTPERREN_MASK          (0x40U)
#define I2C_INTENSET_MSTSTSTPERREN_SHIFT         (6U)
/*! MSTSTSTPERREN - Master Start/Stop Error interrupt Enable.
 *  0b0..Disabled. The MstStStpErr interrupt is disabled.
 *  0b1..Enabled. The MstStStpErr interrupt is enabled.
 */
#define I2C_INTENSET_MSTSTSTPERREN(x)            (((uint32_t)(((uint32_t)(x)) << I2C_INTENSET_MSTSTSTPERREN_SHIFT)) & I2C_INTENSET_MSTSTSTPERREN_MASK)
#define I2C_INTENSET_SLVPENDINGEN_MASK           (0x100U)
#define I2C_INTENSET_SLVPENDINGEN_SHIFT          (8U)
/*! SLVPENDINGEN - Slave Pending interrupt Enable.
 *  0b0..Disabled. The SlvPending interrupt is disabled.
 *  0b1..Enabled. The SlvPending interrupt is enabled.
 */
#define I2C_INTENSET_SLVPENDINGEN(x)             (((uint32_t)(((uint32_t)(x)) << I2C_INTENSET_SLVPENDINGEN_SHIFT)) & I2C_INTENSET_SLVPENDINGEN_MASK)
#define I2C_INTENSET_SLVNOTSTREN_MASK            (0x800U)
#define I2C_INTENSET_SLVNOTSTREN_SHIFT           (11U)
/*! SLVNOTSTREN - Slave Not Stretching interrupt Enable.
 *  0b0..Disabled. The SlvNotStr interrupt is disabled.
 *  0b1..Enabled. The SlvNotStr interrupt is enabled.
 */
#define I2C_INTENSET_SLVNOTSTREN(x)              (((uint32_t)(((uint32_t)(x)) << I2C_INTENSET_SLVNOTSTREN_SHIFT)) & I2C_INTENSET_SLVNOTSTREN_MASK)
#define I2C_INTENSET_SLVDESELEN_MASK             (0x8000U)
#define I2C_INTENSET_SLVDESELEN_SHIFT            (15U)
/*! SLVDESELEN - Slave Deselect interrupt Enable.
 *  0b0..Disabled. The SlvDeSel interrupt is disabled.
 *  0b1..Enabled. The SlvDeSel interrupt is enabled.
 */
#define I2C_INTENSET_SLVDESELEN(x)               (((uint32_t)(((uint32_t)(x)) << I2C_INTENSET_SLVDESELEN_SHIFT)) & I2C_INTENSET_SLVDESELEN_MASK)
#define I2C_INTENSET_MONRDYEN_MASK               (0x10000U)
#define I2C_INTENSET_MONRDYEN_SHIFT              (16U)
/*! MONRDYEN - Monitor data Ready interrupt Enable.
 *  0b0..Disabled. The MonRdy interrupt is disabled.
 *  0b1..Enabled. The MonRdy interrupt is enabled.
 */
#define I2C_INTENSET_MONRDYEN(x)                 (((uint32_t)(((uint32_t)(x)) << I2C_INTENSET_MONRDYEN_SHIFT)) & I2C_INTENSET_MONRDYEN_MASK)
#define I2C_INTENSET_MONOVEN_MASK                (0x20000U)
#define I2C_INTENSET_MONOVEN_SHIFT               (17U)
/*! MONOVEN - Monitor Overrun interrupt Enable.
 *  0b0..Disabled. The MonOv interrupt is disabled.
 *  0b1..Enabled. The MonOv interrupt is enabled.
 */
#define I2C_INTENSET_MONOVEN(x)                  (((uint32_t)(((uint32_t)(x)) << I2C_INTENSET_MONOVEN_SHIFT)) & I2C_INTENSET_MONOVEN_MASK)
#define I2C_INTENSET_MONIDLEEN_MASK              (0x80000U)
#define I2C_INTENSET_MONIDLEEN_SHIFT             (19U)
/*! MONIDLEEN - Monitor Idle interrupt Enable.
 *  0b0..Disabled. The MonIdle interrupt is disabled.
 *  0b1..Enabled. The MonIdle interrupt is enabled.
 */
#define I2C_INTENSET_MONIDLEEN(x)                (((uint32_t)(((uint32_t)(x)) << I2C_INTENSET_MONIDLEEN_SHIFT)) & I2C_INTENSET_MONIDLEEN_MASK)
#define I2C_INTENSET_EVENTTIMEOUTEN_MASK         (0x1000000U)
#define I2C_INTENSET_EVENTTIMEOUTEN_SHIFT        (24U)
/*! EVENTTIMEOUTEN - Event time-out interrupt Enable.
 *  0b0..Disabled. The Event time-out interrupt is disabled.
 *  0b1..Enabled. The Event time-out interrupt is enabled.
 */
#define I2C_INTENSET_EVENTTIMEOUTEN(x)           (((uint32_t)(((uint32_t)(x)) << I2C_INTENSET_EVENTTIMEOUTEN_SHIFT)) & I2C_INTENSET_EVENTTIMEOUTEN_MASK)
#define I2C_INTENSET_SCLTIMEOUTEN_MASK           (0x2000000U)
#define I2C_INTENSET_SCLTIMEOUTEN_SHIFT          (25U)
/*! SCLTIMEOUTEN - SCL time-out interrupt Enable.
 *  0b0..Disabled. The SCL time-out interrupt is disabled.
 *  0b1..Enabled. The SCL time-out interrupt is enabled.
 */
#define I2C_INTENSET_SCLTIMEOUTEN(x)             (((uint32_t)(((uint32_t)(x)) << I2C_INTENSET_SCLTIMEOUTEN_SHIFT)) & I2C_INTENSET_SCLTIMEOUTEN_MASK)
/*! @} */

/*! @name INTENCLR - Interrupt Enable Clear register. */
/*! @{ */
#define I2C_INTENCLR_MSTPENDINGCLR_MASK          (0x1U)
#define I2C_INTENCLR_MSTPENDINGCLR_SHIFT         (0U)
/*! MSTPENDINGCLR - Master Pending interrupt clear. Writing 1 to this bit clears the corresponding
 *    bit in the INTENSET register if implemented.
 */
#define I2C_INTENCLR_MSTPENDINGCLR(x)            (((uint32_t)(((uint32_t)(x)) << I2C_INTENCLR_MSTPENDINGCLR_SHIFT)) & I2C_INTENCLR_MSTPENDINGCLR_MASK)
#define I2C_INTENCLR_MSTARBLOSSCLR_MASK          (0x10U)
#define I2C_INTENCLR_MSTARBLOSSCLR_SHIFT         (4U)
/*! MSTARBLOSSCLR - Master Arbitration Loss interrupt clear.
 */
#define I2C_INTENCLR_MSTARBLOSSCLR(x)            (((uint32_t)(((uint32_t)(x)) << I2C_INTENCLR_MSTARBLOSSCLR_SHIFT)) & I2C_INTENCLR_MSTARBLOSSCLR_MASK)
#define I2C_INTENCLR_MSTSTSTPERRCLR_MASK         (0x40U)
#define I2C_INTENCLR_MSTSTSTPERRCLR_SHIFT        (6U)
/*! MSTSTSTPERRCLR - Master Start/Stop Error interrupt clear.
 */
#define I2C_INTENCLR_MSTSTSTPERRCLR(x)           (((uint32_t)(((uint32_t)(x)) << I2C_INTENCLR_MSTSTSTPERRCLR_SHIFT)) & I2C_INTENCLR_MSTSTSTPERRCLR_MASK)
#define I2C_INTENCLR_SLVPENDINGCLR_MASK          (0x100U)
#define I2C_INTENCLR_SLVPENDINGCLR_SHIFT         (8U)
/*! SLVPENDINGCLR - Slave Pending interrupt clear.
 */
#define I2C_INTENCLR_SLVPENDINGCLR(x)            (((uint32_t)(((uint32_t)(x)) << I2C_INTENCLR_SLVPENDINGCLR_SHIFT)) & I2C_INTENCLR_SLVPENDINGCLR_MASK)
#define I2C_INTENCLR_SLVNOTSTRCLR_MASK           (0x800U)
#define I2C_INTENCLR_SLVNOTSTRCLR_SHIFT          (11U)
/*! SLVNOTSTRCLR - Slave Not Stretching interrupt clear.
 */
#define I2C_INTENCLR_SLVNOTSTRCLR(x)             (((uint32_t)(((uint32_t)(x)) << I2C_INTENCLR_SLVNOTSTRCLR_SHIFT)) & I2C_INTENCLR_SLVNOTSTRCLR_MASK)
#define I2C_INTENCLR_SLVDESELCLR_MASK            (0x8000U)
#define I2C_INTENCLR_SLVDESELCLR_SHIFT           (15U)
/*! SLVDESELCLR - Slave Deselect interrupt clear.
 */
#define I2C_INTENCLR_SLVDESELCLR(x)              (((uint32_t)(((uint32_t)(x)) << I2C_INTENCLR_SLVDESELCLR_SHIFT)) & I2C_INTENCLR_SLVDESELCLR_MASK)
#define I2C_INTENCLR_MONRDYCLR_MASK              (0x10000U)
#define I2C_INTENCLR_MONRDYCLR_SHIFT             (16U)
/*! MONRDYCLR - Monitor data Ready interrupt clear.
 */
#define I2C_INTENCLR_MONRDYCLR(x)                (((uint32_t)(((uint32_t)(x)) << I2C_INTENCLR_MONRDYCLR_SHIFT)) & I2C_INTENCLR_MONRDYCLR_MASK)
#define I2C_INTENCLR_MONOVCLR_MASK               (0x20000U)
#define I2C_INTENCLR_MONOVCLR_SHIFT              (17U)
/*! MONOVCLR - Monitor Overrun interrupt clear.
 */
#define I2C_INTENCLR_MONOVCLR(x)                 (((uint32_t)(((uint32_t)(x)) << I2C_INTENCLR_MONOVCLR_SHIFT)) & I2C_INTENCLR_MONOVCLR_MASK)
#define I2C_INTENCLR_MONIDLECLR_MASK             (0x80000U)
#define I2C_INTENCLR_MONIDLECLR_SHIFT            (19U)
/*! MONIDLECLR - Monitor Idle interrupt clear.
 */
#define I2C_INTENCLR_MONIDLECLR(x)               (((uint32_t)(((uint32_t)(x)) << I2C_INTENCLR_MONIDLECLR_SHIFT)) & I2C_INTENCLR_MONIDLECLR_MASK)
#define I2C_INTENCLR_EVENTTIMEOUTCLR_MASK        (0x1000000U)
#define I2C_INTENCLR_EVENTTIMEOUTCLR_SHIFT       (24U)
/*! EVENTTIMEOUTCLR - Event time-out interrupt clear.
 */
#define I2C_INTENCLR_EVENTTIMEOUTCLR(x)          (((uint32_t)(((uint32_t)(x)) << I2C_INTENCLR_EVENTTIMEOUTCLR_SHIFT)) & I2C_INTENCLR_EVENTTIMEOUTCLR_MASK)
#define I2C_INTENCLR_SCLTIMEOUTCLR_MASK          (0x2000000U)
#define I2C_INTENCLR_SCLTIMEOUTCLR_SHIFT         (25U)
/*! SCLTIMEOUTCLR - SCL time-out interrupt clear.
 */
#define I2C_INTENCLR_SCLTIMEOUTCLR(x)            (((uint32_t)(((uint32_t)(x)) << I2C_INTENCLR_SCLTIMEOUTCLR_SHIFT)) & I2C_INTENCLR_SCLTIMEOUTCLR_MASK)
/*! @} */

/*! @name TIMEOUT - Time-out value register. */
/*! @{ */
#define I2C_TIMEOUT_TOMIN_MASK                   (0xFU)
#define I2C_TIMEOUT_TOMIN_SHIFT                  (0U)
/*! TOMIN - Time-out time value, bottom four bits. These are hard-wired to 0xF. This gives a minimum
 *    time-out of 16 I2C function clocks and also a time-out resolution of 16 I2C function clocks.
 */
#define I2C_TIMEOUT_TOMIN(x)                     (((uint32_t)(((uint32_t)(x)) << I2C_TIMEOUT_TOMIN_SHIFT)) & I2C_TIMEOUT_TOMIN_MASK)
#define I2C_TIMEOUT_TO_MASK                      (0xFFF0U)
#define I2C_TIMEOUT_TO_SHIFT                     (4U)
/*! TO - Time-out time value. Specifies the time-out interval value in increments of 16 I 2C
 *    function clocks, as defined by the CLKDIV register. To change this value while I2C is in operation,
 *    disable all time-outs, write a new value to TIMEOUT, then re-enable time-outs. 0x000 = A
 *    time-out will occur after 16 counts of the I2C function clock. 0x001 = A time-out will occur after
 *    32 counts of the I2C function clock. 0xFFF = A time-out will occur after 65,536 counts of the
 *    I2C function clock.
 */
#define I2C_TIMEOUT_TO(x)                        (((uint32_t)(((uint32_t)(x)) << I2C_TIMEOUT_TO_SHIFT)) & I2C_TIMEOUT_TO_MASK)
/*! @} */

/*! @name CLKDIV - Clock pre-divider for the entire I2C interface. This determines what time increments are used for the MSTTIME register, and controls some timing of the Slave function. */
/*! @{ */
#define I2C_CLKDIV_DIVVAL_MASK                   (0xFFFFU)
#define I2C_CLKDIV_DIVVAL_SHIFT                  (0U)
/*! DIVVAL - This field controls how the Flexcomm clock (FCLK) is used by the I2C functions that
 *    need an internal clock in order to operate. 0x0000 = FCLK is used directly by the I2C. 0x0001 =
 *    FCLK is divided by 2 before use. 0x0002 = FCLK is divided by 3 before use. 0xFFFF = FCLK is
 *    divided by 65,536 before use.
 */
#define I2C_CLKDIV_DIVVAL(x)                     (((uint32_t)(((uint32_t)(x)) << I2C_CLKDIV_DIVVAL_SHIFT)) & I2C_CLKDIV_DIVVAL_MASK)
/*! @} */

/*! @name INTSTAT - Interrupt Status register for Master, Slave, and Monitor functions. */
/*! @{ */
#define I2C_INTSTAT_MSTPENDING_MASK              (0x1U)
#define I2C_INTSTAT_MSTPENDING_SHIFT             (0U)
/*! MSTPENDING - Master Pending.
 */
#define I2C_INTSTAT_MSTPENDING(x)                (((uint32_t)(((uint32_t)(x)) << I2C_INTSTAT_MSTPENDING_SHIFT)) & I2C_INTSTAT_MSTPENDING_MASK)
#define I2C_INTSTAT_MSTARBLOSS_MASK              (0x10U)
#define I2C_INTSTAT_MSTARBLOSS_SHIFT             (4U)
/*! MSTARBLOSS - Master Arbitration Loss flag.
 */
#define I2C_INTSTAT_MSTARBLOSS(x)                (((uint32_t)(((uint32_t)(x)) << I2C_INTSTAT_MSTARBLOSS_SHIFT)) & I2C_INTSTAT_MSTARBLOSS_MASK)
#define I2C_INTSTAT_MSTSTSTPERR_MASK             (0x40U)
#define I2C_INTSTAT_MSTSTSTPERR_SHIFT            (6U)
/*! MSTSTSTPERR - Master Start/Stop Error flag.
 */
#define I2C_INTSTAT_MSTSTSTPERR(x)               (((uint32_t)(((uint32_t)(x)) << I2C_INTSTAT_MSTSTSTPERR_SHIFT)) & I2C_INTSTAT_MSTSTSTPERR_MASK)
#define I2C_INTSTAT_SLVPENDING_MASK              (0x100U)
#define I2C_INTSTAT_SLVPENDING_SHIFT             (8U)
/*! SLVPENDING - Slave Pending.
 */
#define I2C_INTSTAT_SLVPENDING(x)                (((uint32_t)(((uint32_t)(x)) << I2C_INTSTAT_SLVPENDING_SHIFT)) & I2C_INTSTAT_SLVPENDING_MASK)
#define I2C_INTSTAT_SLVNOTSTR_MASK               (0x800U)
#define I2C_INTSTAT_SLVNOTSTR_SHIFT              (11U)
/*! SLVNOTSTR - Slave Not Stretching status.
 */
#define I2C_INTSTAT_SLVNOTSTR(x)                 (((uint32_t)(((uint32_t)(x)) << I2C_INTSTAT_SLVNOTSTR_SHIFT)) & I2C_INTSTAT_SLVNOTSTR_MASK)
#define I2C_INTSTAT_SLVDESEL_MASK                (0x8000U)
#define I2C_INTSTAT_SLVDESEL_SHIFT               (15U)
/*! SLVDESEL - Slave Deselected flag.
 */
#define I2C_INTSTAT_SLVDESEL(x)                  (((uint32_t)(((uint32_t)(x)) << I2C_INTSTAT_SLVDESEL_SHIFT)) & I2C_INTSTAT_SLVDESEL_MASK)
#define I2C_INTSTAT_MONRDY_MASK                  (0x10000U)
#define I2C_INTSTAT_MONRDY_SHIFT                 (16U)
/*! MONRDY - Monitor Ready.
 */
#define I2C_INTSTAT_MONRDY(x)                    (((uint32_t)(((uint32_t)(x)) << I2C_INTSTAT_MONRDY_SHIFT)) & I2C_INTSTAT_MONRDY_MASK)
#define I2C_INTSTAT_MONOV_MASK                   (0x20000U)
#define I2C_INTSTAT_MONOV_SHIFT                  (17U)
/*! MONOV - Monitor Overflow flag.
 */
#define I2C_INTSTAT_MONOV(x)                     (((uint32_t)(((uint32_t)(x)) << I2C_INTSTAT_MONOV_SHIFT)) & I2C_INTSTAT_MONOV_MASK)
#define I2C_INTSTAT_MONIDLE_MASK                 (0x80000U)
#define I2C_INTSTAT_MONIDLE_SHIFT                (19U)
/*! MONIDLE - Monitor Idle flag.
 */
#define I2C_INTSTAT_MONIDLE(x)                   (((uint32_t)(((uint32_t)(x)) << I2C_INTSTAT_MONIDLE_SHIFT)) & I2C_INTSTAT_MONIDLE_MASK)
#define I2C_INTSTAT_EVENTTIMEOUT_MASK            (0x1000000U)
#define I2C_INTSTAT_EVENTTIMEOUT_SHIFT           (24U)
/*! EVENTTIMEOUT - Event time-out Interrupt flag.
 */
#define I2C_INTSTAT_EVENTTIMEOUT(x)              (((uint32_t)(((uint32_t)(x)) << I2C_INTSTAT_EVENTTIMEOUT_SHIFT)) & I2C_INTSTAT_EVENTTIMEOUT_MASK)
#define I2C_INTSTAT_SCLTIMEOUT_MASK              (0x2000000U)
#define I2C_INTSTAT_SCLTIMEOUT_SHIFT             (25U)
/*! SCLTIMEOUT - SCL time-out Interrupt flag.
 */
#define I2C_INTSTAT_SCLTIMEOUT(x)                (((uint32_t)(((uint32_t)(x)) << I2C_INTSTAT_SCLTIMEOUT_SHIFT)) & I2C_INTSTAT_SCLTIMEOUT_MASK)
/*! @} */

/*! @name MSTCTL - Master control register. */
/*! @{ */
#define I2C_MSTCTL_MSTCONTINUE_MASK              (0x1U)
#define I2C_MSTCTL_MSTCONTINUE_SHIFT             (0U)
/*! MSTCONTINUE - Master Continue.
 *  0b0..No effect.
 *  0b1..Informs the Master function to continue to the next operation.
 */
#define I2C_MSTCTL_MSTCONTINUE(x)                (((uint32_t)(((uint32_t)(x)) << I2C_MSTCTL_MSTCONTINUE_SHIFT)) & I2C_MSTCTL_MSTCONTINUE_MASK)
#define I2C_MSTCTL_MSTSTART_MASK                 (0x2U)
#define I2C_MSTCTL_MSTSTART_SHIFT                (1U)
/*! MSTSTART - Master Start control.
 *  0b0..No effect.
 *  0b1..Start. A Start will be generated on the I2C bus at the next allowed time.
 */
#define I2C_MSTCTL_MSTSTART(x)                   (((uint32_t)(((uint32_t)(x)) << I2C_MSTCTL_MSTSTART_SHIFT)) & I2C_MSTCTL_MSTSTART_MASK)
#define I2C_MSTCTL_MSTSTOP_MASK                  (0x4U)
#define I2C_MSTCTL_MSTSTOP_SHIFT                 (2U)
/*! MSTSTOP - Master Stop control.
 *  0b0..No effect.
 *  0b1..Stop. A Stop will be generated on the I2C bus at the next allowed time, preceded by a NACK to the slave
 *       if the master is receiving data from the slave (Master Receiver mode).
 */
#define I2C_MSTCTL_MSTSTOP(x)                    (((uint32_t)(((uint32_t)(x)) << I2C_MSTCTL_MSTSTOP_SHIFT)) & I2C_MSTCTL_MSTSTOP_MASK)
#define I2C_MSTCTL_MSTDMA_MASK                   (0x8U)
#define I2C_MSTCTL_MSTDMA_SHIFT                  (3U)
/*! MSTDMA - Master DMA enable. Data operations of the I2C can be performed with DMA. Protocol type
 *    operations such as Start, address, Stop, and address match must always be done with software,
 *    typically via an interrupt. Address acknowledgement must also be done by software except when
 *    the I2C is configured to be HSCAPABLE (and address acknowledgement is handled entirely by
 *    hardware) or when Automatic Operation is enabled. When a DMA data transfer is complete, MSTDMA
 *    must be cleared prior to beginning the next operation, typically a Start or Stop.This bit is
 *    read/write.
 *  0b0..Disable. No DMA requests are generated for master operation.
 *  0b1..Enable. A DMA request is generated for I2C master data operations. When this I2C master is generating
 *       Acknowledge bits in Master Receiver mode, the acknowledge is generated automatically.
 */
#define I2C_MSTCTL_MSTDMA(x)                     (((uint32_t)(((uint32_t)(x)) << I2C_MSTCTL_MSTDMA_SHIFT)) & I2C_MSTCTL_MSTDMA_MASK)
/*! @} */

/*! @name MSTTIME - Master timing configuration. */
/*! @{ */
#define I2C_MSTTIME_MSTSCLLOW_MASK               (0x7U)
#define I2C_MSTTIME_MSTSCLLOW_SHIFT              (0U)
/*! MSTSCLLOW - Master SCL Low time. Specifies the minimum low time that will be asserted by this
 *    master on SCL. Other devices on the bus (masters or slaves) could lengthen this time. This
 *    corresponds to the parameter t LOW in the I2C bus specification. I2C bus specification parameters
 *    tBUF and tSU;STA have the same values and are also controlled by MSTSCLLOW.
 *  0b000..2 clocks. Minimum SCL low time is 2 clocks of the I2C clock pre-divider.
 *  0b001..3 clocks. Minimum SCL low time is 3 clocks of the I2C clock pre-divider.
 *  0b010..4 clocks. Minimum SCL low time is 4 clocks of the I2C clock pre-divider.
 *  0b011..5 clocks. Minimum SCL low time is 5 clocks of the I2C clock pre-divider.
 *  0b100..6 clocks. Minimum SCL low time is 6 clocks of the I2C clock pre-divider.
 *  0b101..7 clocks. Minimum SCL low time is 7 clocks of the I2C clock pre-divider.
 *  0b110..8 clocks. Minimum SCL low time is 8 clocks of the I2C clock pre-divider.
 *  0b111..9 clocks. Minimum SCL low time is 9 clocks of the I2C clock pre-divider.
 */
#define I2C_MSTTIME_MSTSCLLOW(x)                 (((uint32_t)(((uint32_t)(x)) << I2C_MSTTIME_MSTSCLLOW_SHIFT)) & I2C_MSTTIME_MSTSCLLOW_MASK)
#define I2C_MSTTIME_MSTSCLHIGH_MASK              (0x70U)
#define I2C_MSTTIME_MSTSCLHIGH_SHIFT             (4U)
/*! MSTSCLHIGH - Master SCL High time. Specifies the minimum high time that will be asserted by this
 *    master on SCL. Other masters in a multi-master system could shorten this time. This
 *    corresponds to the parameter tHIGH in the I2C bus specification. I2C bus specification parameters
 *    tSU;STO and tHD;STA have the same values and are also controlled by MSTSCLHIGH.
 *  0b000..2 clocks. Minimum SCL high time is 2 clock of the I2C clock pre-divider.
 *  0b001..3 clocks. Minimum SCL high time is 3 clocks of the I2C clock pre-divider .
 *  0b010..4 clocks. Minimum SCL high time is 4 clock of the I2C clock pre-divider.
 *  0b011..5 clocks. Minimum SCL high time is 5 clock of the I2C clock pre-divider.
 *  0b100..6 clocks. Minimum SCL high time is 6 clock of the I2C clock pre-divider.
 *  0b101..7 clocks. Minimum SCL high time is 7 clock of the I2C clock pre-divider.
 *  0b110..8 clocks. Minimum SCL high time is 8 clock of the I2C clock pre-divider.
 *  0b111..9 clocks. Minimum SCL high time is 9 clocks of the I2C clock pre-divider.
 */
#define I2C_MSTTIME_MSTSCLHIGH(x)                (((uint32_t)(((uint32_t)(x)) << I2C_MSTTIME_MSTSCLHIGH_SHIFT)) & I2C_MSTTIME_MSTSCLHIGH_MASK)
/*! @} */

/*! @name MSTDAT - Combined Master receiver and transmitter data register. */
/*! @{ */
#define I2C_MSTDAT_DATA_MASK                     (0xFFU)
#define I2C_MSTDAT_DATA_SHIFT                    (0U)
/*! DATA - Master function data register. Read: read the most recently received data for the Master
 *    function. Write: transmit data using the Master function.
 */
#define I2C_MSTDAT_DATA(x)                       (((uint32_t)(((uint32_t)(x)) << I2C_MSTDAT_DATA_SHIFT)) & I2C_MSTDAT_DATA_MASK)
/*! @} */

/*! @name SLVCTL - Slave control register. */
/*! @{ */
#define I2C_SLVCTL_SLVCONTINUE_MASK              (0x1U)
#define I2C_SLVCTL_SLVCONTINUE_SHIFT             (0U)
/*! SLVCONTINUE - Slave Continue.
 *  0b0..No effect.
 *  0b1..Informs the Slave function to continue to the next operation.
 */
#define I2C_SLVCTL_SLVCONTINUE(x)                (((uint32_t)(((uint32_t)(x)) << I2C_SLVCTL_SLVCONTINUE_SHIFT)) & I2C_SLVCTL_SLVCONTINUE_MASK)
#define I2C_SLVCTL_SLVNACK_MASK                  (0x2U)
#define I2C_SLVCTL_SLVNACK_SHIFT                 (1U)
/*! SLVNACK - Slave NACK.
 *  0b0..No effect.
 *  0b1..NACK. Causes the Slave function to NACK the master when the slave is receiving data from the master (Slave Receiver mode).
 */
#define I2C_SLVCTL_SLVNACK(x)                    (((uint32_t)(((uint32_t)(x)) << I2C_SLVCTL_SLVNACK_SHIFT)) & I2C_SLVCTL_SLVNACK_MASK)
#define I2C_SLVCTL_SLVDMA_MASK                   (0x8U)
#define I2C_SLVCTL_SLVDMA_SHIFT                  (3U)
/*! SLVDMA - Slave DMA enable.
 *  0b0..Disabled. No DMA requests are issued for Slave mode operation.
 *  0b1..Enabled. DMA requests are issued for I2C slave data transmission and reception.
 */
#define I2C_SLVCTL_SLVDMA(x)                     (((uint32_t)(((uint32_t)(x)) << I2C_SLVCTL_SLVDMA_SHIFT)) & I2C_SLVCTL_SLVDMA_MASK)
/*! @} */

/*! @name SLVDAT - Combined Slave receiver and transmitter data register. */
/*! @{ */
#define I2C_SLVDAT_DATA_MASK                     (0xFFU)
#define I2C_SLVDAT_DATA_SHIFT                    (0U)
/*! DATA - Slave function data register. Read: read the most recently received data for the Slave
 *    function. Write: transmit data using the Slave function.
 */
#define I2C_SLVDAT_DATA(x)                       (((uint32_t)(((uint32_t)(x)) << I2C_SLVDAT_DATA_SHIFT)) & I2C_SLVDAT_DATA_MASK)
/*! @} */

/*! @name SLVADR - Slave address register. */
/*! @{ */
#define I2C_SLVADR_SADISABLE_MASK                (0x1U)
#define I2C_SLVADR_SADISABLE_SHIFT               (0U)
/*! SADISABLE - Slave Address n Disable.
 *  0b0..Enabled. Slave Address n is enabled.
 *  0b1..Ignored Slave Address n is ignored.
 */
#define I2C_SLVADR_SADISABLE(x)                  (((uint32_t)(((uint32_t)(x)) << I2C_SLVADR_SADISABLE_SHIFT)) & I2C_SLVADR_SADISABLE_MASK)
#define I2C_SLVADR_SLVADR_MASK                   (0xFEU)
#define I2C_SLVADR_SLVADR_SHIFT                  (1U)
/*! SLVADR - Slave Address. Seven bit slave address that is compared to received addresses if enabled.
 */
#define I2C_SLVADR_SLVADR(x)                     (((uint32_t)(((uint32_t)(x)) << I2C_SLVADR_SLVADR_SHIFT)) & I2C_SLVADR_SLVADR_MASK)
/*! @} */

/* The count of I2C_SLVADR */
#define I2C_SLVADR_COUNT                         (4U)

/*! @name SLVQUAL0 - Slave Qualification for address 0. */
/*! @{ */
#define I2C_SLVQUAL0_QUALMODE0_MASK              (0x1U)
#define I2C_SLVQUAL0_QUALMODE0_SHIFT             (0U)
/*! QUALMODE0 - Qualify mode for slave address 0.
 *  0b0..Mask. The SLVQUAL0 field is used as a logical mask for matching address 0.
 *  0b1..Extend. The SLVQUAL0 field is used to extend address 0 matching in a range of addresses.
 */
#define I2C_SLVQUAL0_QUALMODE0(x)                (((uint32_t)(((uint32_t)(x)) << I2C_SLVQUAL0_QUALMODE0_SHIFT)) & I2C_SLVQUAL0_QUALMODE0_MASK)
#define I2C_SLVQUAL0_SLVQUAL0_MASK               (0xFEU)
#define I2C_SLVQUAL0_SLVQUAL0_SHIFT              (1U)
/*! SLVQUAL0 - Slave address Qualifier for address 0. A value of 0 causes the address in SLVADR0 to
 *    be used as-is, assuming that it is enabled. If QUALMODE0 = 0, any bit in this field which is
 *    set to 1 will cause an automatic match of the corresponding bit of the received address when it
 *    is compared to the SLVADR0 register. If QUALMODE0 = 1, an address range is matched for
 *    address 0. This range extends from the value defined by SLVADR0 to the address defined by SLVQUAL0
 *    (address matches when SLVADR0[7:1] <= received address <= SLVQUAL0[7:1]).
 */
#define I2C_SLVQUAL0_SLVQUAL0(x)                 (((uint32_t)(((uint32_t)(x)) << I2C_SLVQUAL0_SLVQUAL0_SHIFT)) & I2C_SLVQUAL0_SLVQUAL0_MASK)
/*! @} */

/*! @name MONRXDAT - Monitor receiver data register. */
/*! @{ */
#define I2C_MONRXDAT_MONRXDAT_MASK               (0xFFU)
#define I2C_MONRXDAT_MONRXDAT_SHIFT              (0U)
/*! MONRXDAT - Monitor function Receiver Data. This reflects every data byte that passes on the I2C pins.
 */
#define I2C_MONRXDAT_MONRXDAT(x)                 (((uint32_t)(((uint32_t)(x)) << I2C_MONRXDAT_MONRXDAT_SHIFT)) & I2C_MONRXDAT_MONRXDAT_MASK)
#define I2C_MONRXDAT_MONSTART_MASK               (0x100U)
#define I2C_MONRXDAT_MONSTART_SHIFT              (8U)
/*! MONSTART - Monitor Received Start.
 *  0b0..No start detected. The Monitor function has not detected a Start event on the I2C bus.
 *  0b1..Start detected. The Monitor function has detected a Start event on the I2C bus.
 */
#define I2C_MONRXDAT_MONSTART(x)                 (((uint32_t)(((uint32_t)(x)) << I2C_MONRXDAT_MONSTART_SHIFT)) & I2C_MONRXDAT_MONSTART_MASK)
#define I2C_MONRXDAT_MONRESTART_MASK             (0x200U)
#define I2C_MONRXDAT_MONRESTART_SHIFT            (9U)
/*! MONRESTART - Monitor Received Repeated Start.
 *  0b0..No repeated start detected. The Monitor function has not detected a Repeated Start event on the I2C bus.
 *  0b1..Repeated start detected. The Monitor function has detected a Repeated Start event on the I2C bus.
 */
#define I2C_MONRXDAT_MONRESTART(x)               (((uint32_t)(((uint32_t)(x)) << I2C_MONRXDAT_MONRESTART_SHIFT)) & I2C_MONRXDAT_MONRESTART_MASK)
#define I2C_MONRXDAT_MONNACK_MASK                (0x400U)
#define I2C_MONRXDAT_MONNACK_SHIFT               (10U)
/*! MONNACK - Monitor Received NACK.
 *  0b0..Acknowledged. The data currently being provided by the Monitor function was acknowledged by at least one master or slave receiver.
 *  0b1..Not acknowledged. The data currently being provided by the Monitor function was not acknowledged by any receiver.
 */
#define I2C_MONRXDAT_MONNACK(x)                  (((uint32_t)(((uint32_t)(x)) << I2C_MONRXDAT_MONNACK_SHIFT)) & I2C_MONRXDAT_MONNACK_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group I2C_Register_Masks */


/* I2C - Peripheral instance base addresses */
/** Peripheral I2C0 base address */
#define I2C0_BASE                                (0x40050000u)
/** Peripheral I2C0 base pointer */
#define I2C0                                     ((I2C_Type *)I2C0_BASE)
/** Peripheral I2C1 base address */
#define I2C1_BASE                                (0x40054000u)
/** Peripheral I2C1 base pointer */
#define I2C1                                     ((I2C_Type *)I2C1_BASE)
/** Peripheral I2C2 base address */
#define I2C2_BASE                                (0x40030000u)
/** Peripheral I2C2 base pointer */
#define I2C2                                     ((I2C_Type *)I2C2_BASE)
/** Peripheral I2C3 base address */
#define I2C3_BASE                                (0x40034000u)
/** Peripheral I2C3 base pointer */
#define I2C3                                     ((I2C_Type *)I2C3_BASE)
/** Array initializer of I2C peripheral base addresses */
#define I2C_BASE_ADDRS                           { I2C0_BASE, I2C1_BASE, I2C2_BASE, I2C3_BASE }
/** Array initializer of I2C peripheral base pointers */
#define I2C_BASE_PTRS                            { I2C0, I2C1, I2C2, I2C3 }
/** Interrupt vectors for the I2C peripheral type */
#define I2C_IRQS                                 { I2C0_IRQn, I2C1_IRQn, I2C2_IRQn, I2C3_IRQn }

/*!
 * @}
 */ /* end of group I2C_Peripheral_Access_Layer */

/* ----------------------------------------------------------------------------
   -- SPI Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/** SPI - Register Layout Typedef */
typedef struct {
  __IO uint32_t CFG;                               /**< SPI Configuration register, offset: 0x0 */
  __IO uint32_t DLY;                               /**< SPI Delay register, offset: 0x4 */
  __IO uint32_t STAT;                              /**< SPI Status. Some status flags can be cleared by writing a 1 to that bit position, offset: 0x8 */
  __IO uint32_t INTENSET;                          /**< SPI Interrupt Enable read and Set. A complete value may be read from this register. Writing a 1 to any implemented bit position causes that bit to be set., offset: 0xC */
  __O  uint32_t INTENCLR;                          /**< SPI Interrupt Enable Clear. Writing a 1 to any implemented bit position causes the corresponding bit in INTENSET to be cleared., offset: 0x10 */
  __I  uint32_t RXDAT;                             /**< SPI Receive Data, offset: 0x14 */
  __IO uint32_t TXDATCTL;                          /**< SPI Transmit Data with Control, offset: 0x18 */
  __IO uint32_t TXDAT;                             /**< SPI Transmit Data., offset: 0x1C */
  __IO uint32_t TXCTL;                             /**< SPI Transmit Control, offset: 0x20 */
  __IO uint32_t DIV;                               /**< SPI clock Divider, offset: 0x24 */
  __I  uint32_t INTSTAT;                           /**< SPI Interrupt Status, offset: 0x28 */
} SPI_Type;

/* ----------------------------------------------------------------------------
   -- SPI Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SPI_Register_Masks SPI Register Masks
 * @{
 */

/*! @name CFG - SPI Configuration register */
/*! @{ */
#define SPI_CFG_ENABLE_MASK                      (0x1U)
#define SPI_CFG_ENABLE_SHIFT                     (0U)
/*! ENABLE - SPI enable.
 *  0b0..Disabled. The SPI is disabled and the internal state machine and counters are reset.
 *  0b1..Enabled. The SPI is enabled for operation.
 */
#define SPI_CFG_ENABLE(x)                        (((uint32_t)(((uint32_t)(x)) << SPI_CFG_ENABLE_SHIFT)) & SPI_CFG_ENABLE_MASK)
#define SPI_CFG_MASTER_MASK                      (0x4U)
#define SPI_CFG_MASTER_SHIFT                     (2U)
/*! MASTER - Master mode select.
 *  0b0..Slave mode. The SPI will operate in slave mode. SCK, MOSI, and the SSEL signals are inputs, MISO is an output.
 *  0b1..Master mode. The SPI will operate in master mode. SCK, MOSI, and the SSEL signals are outputs, MISO is an input.
 */
#define SPI_CFG_MASTER(x)                        (((uint32_t)(((uint32_t)(x)) << SPI_CFG_MASTER_SHIFT)) & SPI_CFG_MASTER_MASK)
#define SPI_CFG_LSBF_MASK                        (0x8U)
#define SPI_CFG_LSBF_SHIFT                       (3U)
/*! LSBF - LSB First mode enable.
 *  0b0..Standard. Data is transmitted and received in standard MSB first order.
 *  0b1..Reverse. Data is transmitted and received in reverse order (LSB first).
 */
#define SPI_CFG_LSBF(x)                          (((uint32_t)(((uint32_t)(x)) << SPI_CFG_LSBF_SHIFT)) & SPI_CFG_LSBF_MASK)
#define SPI_CFG_CPHA_MASK                        (0x10U)
#define SPI_CFG_CPHA_SHIFT                       (4U)
/*! CPHA - Clock Phase select.
 *  0b0..Change. The SPI captures serial data on the first clock transition of the transfer (when the clock
 *       changes away from the rest state). Data is changed on the following edge.
 *  0b1..Capture. The SPI changes serial data on the first clock transition of the transfer (when the clock
 *       changes away from the rest state). Data is captured on the following edge.
 */
#define SPI_CFG_CPHA(x)                          (((uint32_t)(((uint32_t)(x)) << SPI_CFG_CPHA_SHIFT)) & SPI_CFG_CPHA_MASK)
#define SPI_CFG_CPOL_MASK                        (0x20U)
#define SPI_CFG_CPOL_SHIFT                       (5U)
/*! CPOL - Clock Polarity select.
 *  0b0..Low. The rest state of the clock (between transfers) is low.
 *  0b1..High. The rest state of the clock (between transfers) is high.
 */
#define SPI_CFG_CPOL(x)                          (((uint32_t)(((uint32_t)(x)) << SPI_CFG_CPOL_SHIFT)) & SPI_CFG_CPOL_MASK)
#define SPI_CFG_LOOP_MASK                        (0x80U)
#define SPI_CFG_LOOP_SHIFT                       (7U)
/*! LOOP - Loopback mode enable. Loopback mode applies only to Master mode, and connects transmit
 *    and receive data connected together to allow simple software testing.
 *  0b0..Disabled.
 *  0b1..Enabled.
 */
#define SPI_CFG_LOOP(x)                          (((uint32_t)(((uint32_t)(x)) << SPI_CFG_LOOP_SHIFT)) & SPI_CFG_LOOP_MASK)
#define SPI_CFG_SPOL0_MASK                       (0x100U)
#define SPI_CFG_SPOL0_SHIFT                      (8U)
/*! SPOL0 - SSEL0 Polarity select.
 *  0b0..Low. The SSEL0 pin is active low.
 *  0b1..High. The SSEL0 pin is active high.
 */
#define SPI_CFG_SPOL0(x)                         (((uint32_t)(((uint32_t)(x)) << SPI_CFG_SPOL0_SHIFT)) & SPI_CFG_SPOL0_MASK)
#define SPI_CFG_SPOL1_MASK                       (0x200U)
#define SPI_CFG_SPOL1_SHIFT                      (9U)
/*! SPOL1 - SSEL1 Polarity select.
 *  0b0..Low. The SSEL1 pin is active low.
 *  0b1..High. The SSEL1 pin is active high.
 */
#define SPI_CFG_SPOL1(x)                         (((uint32_t)(((uint32_t)(x)) << SPI_CFG_SPOL1_SHIFT)) & SPI_CFG_SPOL1_MASK)
#define SPI_CFG_SPOL2_MASK                       (0x400U)
#define SPI_CFG_SPOL2_SHIFT                      (10U)
/*! SPOL2 - SSEL2 Polarity select.
 *  0b0..Low. The SSEL2 pin is active low.
 *  0b1..High. The SSEL2 pin is active high.
 */
#define SPI_CFG_SPOL2(x)                         (((uint32_t)(((uint32_t)(x)) << SPI_CFG_SPOL2_SHIFT)) & SPI_CFG_SPOL2_MASK)
#define SPI_CFG_SPOL3_MASK                       (0x800U)
#define SPI_CFG_SPOL3_SHIFT                      (11U)
/*! SPOL3 - SSEL3 Polarity select.
 *  0b0..Low. The SSEL3 pin is active low.
 *  0b1..High. The SSEL3 pin is active high.
 */
#define SPI_CFG_SPOL3(x)                         (((uint32_t)(((uint32_t)(x)) << SPI_CFG_SPOL3_SHIFT)) & SPI_CFG_SPOL3_MASK)
/*! @} */

/*! @name DLY - SPI Delay register */
/*! @{ */
#define SPI_DLY_PRE_DELAY_MASK                   (0xFU)
#define SPI_DLY_PRE_DELAY_SHIFT                  (0U)
/*! PRE_DELAY - Controls the amount of time between SSEL assertion and the beginning of a data
 *    transfer. There is always one SPI clock time between SSEL assertion and the first clock edge. This
 *    is not considered part of the pre-delay. 0x0 = No additional time is inserted. 0x1 = 1 SPI
 *    clock time is inserted. 0x2 = 2 SPI clock times are inserted. 0xF = 15 SPI clock times are
 *    inserted.
 */
#define SPI_DLY_PRE_DELAY(x)                     (((uint32_t)(((uint32_t)(x)) << SPI_DLY_PRE_DELAY_SHIFT)) & SPI_DLY_PRE_DELAY_MASK)
#define SPI_DLY_POST_DELAY_MASK                  (0xF0U)
#define SPI_DLY_POST_DELAY_SHIFT                 (4U)
/*! POST_DELAY - Controls the amount of time between the end of a data transfer and SSEL
 *    deassertion. 0x0 = No additional time is inserted. 0x1 = 1 SPI clock time is inserted. 0x2 = 2 SPI clock
 *    times are inserted. 0xF = 15 SPI clock times are inserted.
 */
#define SPI_DLY_POST_DELAY(x)                    (((uint32_t)(((uint32_t)(x)) << SPI_DLY_POST_DELAY_SHIFT)) & SPI_DLY_POST_DELAY_MASK)
#define SPI_DLY_FRAME_DELAY_MASK                 (0xF00U)
#define SPI_DLY_FRAME_DELAY_SHIFT                (8U)
/*! FRAME_DELAY - If the EOF flag is set, controls the minimum amount of time between the current
 *    frame and the next frame (or SSEL deassertion if EOT). 0x0 = No additional time is inserted. 0x1
 *    = 1 SPI clock time is inserted. 0x2 = 2 SPI clock times are inserted. 0xF = 15 SPI clock
 *    times are inserted.
 */
#define SPI_DLY_FRAME_DELAY(x)                   (((uint32_t)(((uint32_t)(x)) << SPI_DLY_FRAME_DELAY_SHIFT)) & SPI_DLY_FRAME_DELAY_MASK)
#define SPI_DLY_TRANSFER_DELAY_MASK              (0xF000U)
#define SPI_DLY_TRANSFER_DELAY_SHIFT             (12U)
/*! TRANSFER_DELAY - Controls the minimum amount of time that the SSEL is deasserted between
 *    transfers. 0x0 = The minimum time that SSEL is deasserted is 1 SPI clock time. (Zero added time.) 0x1
 *    = The minimum time that SSEL is deasserted is 2 SPI clock times. 0x2 = The minimum time that
 *    SSEL is deasserted is 3 SPI clock times. 0xF = The minimum time that SSEL is deasserted is 16
 *    SPI clock times.
 */
#define SPI_DLY_TRANSFER_DELAY(x)                (((uint32_t)(((uint32_t)(x)) << SPI_DLY_TRANSFER_DELAY_SHIFT)) & SPI_DLY_TRANSFER_DELAY_MASK)
/*! @} */

/*! @name STAT - SPI Status. Some status flags can be cleared by writing a 1 to that bit position */
/*! @{ */
#define SPI_STAT_RXRDY_MASK                      (0x1U)
#define SPI_STAT_RXRDY_SHIFT                     (0U)
/*! RXRDY - Receiver Ready flag. When 1, indicates that data is available to be read from the
 *    receiver buffer. Cleared after a read of the RXDAT register.
 */
#define SPI_STAT_RXRDY(x)                        (((uint32_t)(((uint32_t)(x)) << SPI_STAT_RXRDY_SHIFT)) & SPI_STAT_RXRDY_MASK)
#define SPI_STAT_TXRDY_MASK                      (0x2U)
#define SPI_STAT_TXRDY_SHIFT                     (1U)
/*! TXRDY - Transmitter Ready flag. When 1, this bit indicates that data may be written to the
 *    transmit buffer. Previous data may still be in the process of being transmitted. Cleared when data
 *    is written to TXDAT or TXDATCTL until the data is moved to the transmit shift register.
 */
#define SPI_STAT_TXRDY(x)                        (((uint32_t)(((uint32_t)(x)) << SPI_STAT_TXRDY_SHIFT)) & SPI_STAT_TXRDY_MASK)
#define SPI_STAT_RXOV_MASK                       (0x4U)
#define SPI_STAT_RXOV_SHIFT                      (2U)
/*! RXOV - Receiver Overrun interrupt flag. This flag applies only to slave mode (Master = 0). This
 *    flag is set when the beginning of a received character is detected while the receiver buffer
 *    is still in use. If this occurs, the receiver buffer contents are preserved, and the incoming
 *    data is lost. Data received by the SPI should be considered undefined if RxOv is set.
 */
#define SPI_STAT_RXOV(x)                         (((uint32_t)(((uint32_t)(x)) << SPI_STAT_RXOV_SHIFT)) & SPI_STAT_RXOV_MASK)
#define SPI_STAT_TXUR_MASK                       (0x8U)
#define SPI_STAT_TXUR_SHIFT                      (3U)
/*! TXUR - Transmitter Underrun interrupt flag. This flag applies only to slave mode (Master = 0).
 *    In this case, the transmitter must begin sending new data on the next input clock if the
 *    transmitter is idle. If that data is not available in the transmitter holding register at that
 *    point, there is no data to transmit and the TXUR flag is set. Data transmitted by the SPI should be
 *    considered undefined if TXUR is set.
 */
#define SPI_STAT_TXUR(x)                         (((uint32_t)(((uint32_t)(x)) << SPI_STAT_TXUR_SHIFT)) & SPI_STAT_TXUR_MASK)
#define SPI_STAT_SSA_MASK                        (0x10U)
#define SPI_STAT_SSA_SHIFT                       (4U)
/*! SSA - Slave Select Assert. This flag is set whenever any slave select transitions from
 *    deasserted to asserted, in both master and slave modes. This allows determining when the SPI
 *    transmit/receive functions become busy, and allows waking up the device from reduced power modes when a
 *    slave mode access begins. This flag is cleared by software.
 */
#define SPI_STAT_SSA(x)                          (((uint32_t)(((uint32_t)(x)) << SPI_STAT_SSA_SHIFT)) & SPI_STAT_SSA_MASK)
#define SPI_STAT_SSD_MASK                        (0x20U)
#define SPI_STAT_SSD_SHIFT                       (5U)
/*! SSD - Slave Select Deassert. This flag is set whenever any asserted slave selects transition to
 *    deasserted, in both master and slave modes. This allows determining when the SPI
 *    transmit/receive functions become idle. This flag is cleared by software.
 */
#define SPI_STAT_SSD(x)                          (((uint32_t)(((uint32_t)(x)) << SPI_STAT_SSD_SHIFT)) & SPI_STAT_SSD_MASK)
#define SPI_STAT_STALLED_MASK                    (0x40U)
#define SPI_STAT_STALLED_SHIFT                   (6U)
/*! STALLED - Stalled status flag. This indicates whether the SPI is currently in a stall condition.
 */
#define SPI_STAT_STALLED(x)                      (((uint32_t)(((uint32_t)(x)) << SPI_STAT_STALLED_SHIFT)) & SPI_STAT_STALLED_MASK)
#define SPI_STAT_ENDTRANSFER_MASK                (0x80U)
#define SPI_STAT_ENDTRANSFER_SHIFT               (7U)
/*! ENDTRANSFER - End Transfer control bit. Software can set this bit to force an end to the current
 *    transfer when the transmitter finishes any activity already in progress, as if the EOT flag
 *    had been set prior to the last transmission. This capability is included to support cases where
 *    it is not known when transmit data is written that it will be the end of a transfer. The bit
 *    is cleared when the transmitter becomes idle as the transfer comes to an end. Forcing an end
 *    of transfer in this manner causes any specified FRAME_DELAY and TRANSFER_DELAY to be inserted.
 */
#define SPI_STAT_ENDTRANSFER(x)                  (((uint32_t)(((uint32_t)(x)) << SPI_STAT_ENDTRANSFER_SHIFT)) & SPI_STAT_ENDTRANSFER_MASK)
#define SPI_STAT_MSTIDLE_MASK                    (0x100U)
#define SPI_STAT_MSTIDLE_SHIFT                   (8U)
/*! MSTIDLE - Master idle status flag. This bit is 1 whenever the SPI master function is fully idle.
 *    This means that the transmit holding register is empty and the transmitter is not in the
 *    process of sending data.
 */
#define SPI_STAT_MSTIDLE(x)                      (((uint32_t)(((uint32_t)(x)) << SPI_STAT_MSTIDLE_SHIFT)) & SPI_STAT_MSTIDLE_MASK)
/*! @} */

/*! @name INTENSET - SPI Interrupt Enable read and Set. A complete value may be read from this register. Writing a 1 to any implemented bit position causes that bit to be set. */
/*! @{ */
#define SPI_INTENSET_RXRDYEN_MASK                (0x1U)
#define SPI_INTENSET_RXRDYEN_SHIFT               (0U)
/*! RXRDYEN - Determines whether an interrupt occurs when receiver data is available.
 *  0b0..No interrupt will be generated when receiver data is available.
 *  0b1..An interrupt will be generated when receiver data is available in the RXDAT register.
 */
#define SPI_INTENSET_RXRDYEN(x)                  (((uint32_t)(((uint32_t)(x)) << SPI_INTENSET_RXRDYEN_SHIFT)) & SPI_INTENSET_RXRDYEN_MASK)
#define SPI_INTENSET_TXRDYEN_MASK                (0x2U)
#define SPI_INTENSET_TXRDYEN_SHIFT               (1U)
/*! TXRDYEN - Determines whether an interrupt occurs when the transmitter holding register is available.
 *  0b0..No interrupt will be generated when the transmitter holding register is available.
 *  0b1..An interrupt will be generated when data may be written to TXDAT.
 */
#define SPI_INTENSET_TXRDYEN(x)                  (((uint32_t)(((uint32_t)(x)) << SPI_INTENSET_TXRDYEN_SHIFT)) & SPI_INTENSET_TXRDYEN_MASK)
#define SPI_INTENSET_RXOVEN_MASK                 (0x4U)
#define SPI_INTENSET_RXOVEN_SHIFT                (2U)
/*! RXOVEN - Determines whether an interrupt occurs when a receiver overrun occurs. This happens in
 *    slave mode when there is a need for the receiver to move newly received data to the RXDAT
 *    register when it is already in use. The interface prevents receiver overrun in Master mode by not
 *    allowing a new transmission to begin when a receiver overrun would otherwise occur.
 *  0b0..No interrupt will be generated when a receiver overrun occurs.
 *  0b1..An interrupt will be generated if a receiver overrun occurs.
 */
#define SPI_INTENSET_RXOVEN(x)                   (((uint32_t)(((uint32_t)(x)) << SPI_INTENSET_RXOVEN_SHIFT)) & SPI_INTENSET_RXOVEN_MASK)
#define SPI_INTENSET_TXUREN_MASK                 (0x8U)
#define SPI_INTENSET_TXUREN_SHIFT                (3U)
/*! TXUREN - Determines whether an interrupt occurs when a transmitter underrun occurs. This happens
 *    in slave mode when there is a need to transmit data when none is available.
 *  0b0..No interrupt will be generated when the transmitter underruns.
 *  0b1..An interrupt will be generated if the transmitter underruns.
 */
#define SPI_INTENSET_TXUREN(x)                   (((uint32_t)(((uint32_t)(x)) << SPI_INTENSET_TXUREN_SHIFT)) & SPI_INTENSET_TXUREN_MASK)
#define SPI_INTENSET_SSAEN_MASK                  (0x10U)
#define SPI_INTENSET_SSAEN_SHIFT                 (4U)
/*! SSAEN - Determines whether an interrupt occurs when the Slave Select is asserted.
 *  0b0..No interrupt will be generated when any Slave Select transitions from deasserted to asserted.
 *  0b1..An interrupt will be generated when any Slave Select transitions from deasserted to asserted.
 */
#define SPI_INTENSET_SSAEN(x)                    (((uint32_t)(((uint32_t)(x)) << SPI_INTENSET_SSAEN_SHIFT)) & SPI_INTENSET_SSAEN_MASK)
#define SPI_INTENSET_SSDEN_MASK                  (0x20U)
#define SPI_INTENSET_SSDEN_SHIFT                 (5U)
/*! SSDEN - Determines whether an interrupt occurs when the Slave Select is deasserted.
 *  0b0..No interrupt will be generated when all asserted Slave Selects transition to deasserted.
 *  0b1..An interrupt will be generated when all asserted Slave Selects transition to deasserted.
 */
#define SPI_INTENSET_SSDEN(x)                    (((uint32_t)(((uint32_t)(x)) << SPI_INTENSET_SSDEN_SHIFT)) & SPI_INTENSET_SSDEN_MASK)
/*! @} */

/*! @name INTENCLR - SPI Interrupt Enable Clear. Writing a 1 to any implemented bit position causes the corresponding bit in INTENSET to be cleared. */
/*! @{ */
#define SPI_INTENCLR_RXRDYEN_MASK                (0x1U)
#define SPI_INTENCLR_RXRDYEN_SHIFT               (0U)
/*! RXRDYEN - Writing 1 clears the corresponding bits in the INTENSET register.
 */
#define SPI_INTENCLR_RXRDYEN(x)                  (((uint32_t)(((uint32_t)(x)) << SPI_INTENCLR_RXRDYEN_SHIFT)) & SPI_INTENCLR_RXRDYEN_MASK)
#define SPI_INTENCLR_TXRDYEN_MASK                (0x2U)
#define SPI_INTENCLR_TXRDYEN_SHIFT               (1U)
/*! TXRDYEN - Writing 1 clears the corresponding bits in the INTENSET register.
 */
#define SPI_INTENCLR_TXRDYEN(x)                  (((uint32_t)(((uint32_t)(x)) << SPI_INTENCLR_TXRDYEN_SHIFT)) & SPI_INTENCLR_TXRDYEN_MASK)
#define SPI_INTENCLR_RXOVEN_MASK                 (0x4U)
#define SPI_INTENCLR_RXOVEN_SHIFT                (2U)
/*! RXOVEN - Writing 1 clears the corresponding bits in the INTENSET register.
 */
#define SPI_INTENCLR_RXOVEN(x)                   (((uint32_t)(((uint32_t)(x)) << SPI_INTENCLR_RXOVEN_SHIFT)) & SPI_INTENCLR_RXOVEN_MASK)
#define SPI_INTENCLR_TXUREN_MASK                 (0x8U)
#define SPI_INTENCLR_TXUREN_SHIFT                (3U)
/*! TXUREN - Writing 1 clears the corresponding bits in the INTENSET register.
 */
#define SPI_INTENCLR_TXUREN(x)                   (((uint32_t)(((uint32_t)(x)) << SPI_INTENCLR_TXUREN_SHIFT)) & SPI_INTENCLR_TXUREN_MASK)
#define SPI_INTENCLR_SSAEN_MASK                  (0x10U)
#define SPI_INTENCLR_SSAEN_SHIFT                 (4U)
/*! SSAEN - Writing 1 clears the corresponding bits in the INTENSET register.
 */
#define SPI_INTENCLR_SSAEN(x)                    (((uint32_t)(((uint32_t)(x)) << SPI_INTENCLR_SSAEN_SHIFT)) & SPI_INTENCLR_SSAEN_MASK)
#define SPI_INTENCLR_SSDEN_MASK                  (0x20U)
#define SPI_INTENCLR_SSDEN_SHIFT                 (5U)
/*! SSDEN - Writing 1 clears the corresponding bits in the INTENSET register.
 */
#define SPI_INTENCLR_SSDEN(x)                    (((uint32_t)(((uint32_t)(x)) << SPI_INTENCLR_SSDEN_SHIFT)) & SPI_INTENCLR_SSDEN_MASK)
/*! @} */

/*! @name RXDAT - SPI Receive Data */
/*! @{ */
#define SPI_RXDAT_RXDAT_MASK                     (0xFFFFU)
#define SPI_RXDAT_RXDAT_SHIFT                    (0U)
/*! RXDAT - Receiver Data. This contains the next piece of received data. The number of bits that
 *    are used depends on the LEN setting in TXCTL / TXDATCTL.
 */
#define SPI_RXDAT_RXDAT(x)                       (((uint32_t)(((uint32_t)(x)) << SPI_RXDAT_RXDAT_SHIFT)) & SPI_RXDAT_RXDAT_MASK)
#define SPI_RXDAT_RXSSEL0_N_MASK                 (0x10000U)
#define SPI_RXDAT_RXSSEL0_N_SHIFT                (16U)
/*! RXSSEL0_N - Slave Select for receive. This field allows the state of the SSEL0 pin to be saved
 *    along with received data. The value will reflect the SSEL0 pin for both master and slave
 *    operation. A zero indicates that a slave select is active. The actual polarity of each slave select
 *    pin is configured by the related SPOL bit in CFG.
 */
#define SPI_RXDAT_RXSSEL0_N(x)                   (((uint32_t)(((uint32_t)(x)) << SPI_RXDAT_RXSSEL0_N_SHIFT)) & SPI_RXDAT_RXSSEL0_N_MASK)
#define SPI_RXDAT_RXSSEL1_N_MASK                 (0x20000U)
#define SPI_RXDAT_RXSSEL1_N_SHIFT                (17U)
/*! RXSSEL1_N - Slave Select for receive. This field allows the state of the SSEL1 pin to be saved
 *    along with received data. The value will reflect the SSEL1 pin for both master and slave
 *    operation. A zero indicates that a slave select is active. The actual polarity of each slave select
 *    pin is configured by the related SPOL bit in CFG.
 */
#define SPI_RXDAT_RXSSEL1_N(x)                   (((uint32_t)(((uint32_t)(x)) << SPI_RXDAT_RXSSEL1_N_SHIFT)) & SPI_RXDAT_RXSSEL1_N_MASK)
#define SPI_RXDAT_RXSSEL2_N_MASK                 (0x40000U)
#define SPI_RXDAT_RXSSEL2_N_SHIFT                (18U)
/*! RXSSEL2_N - Slave Select for receive. This field allows the state of the SSEL2 pin to be saved
 *    along with received data. The value will reflect the SSEL2 pin for both master and slave
 *    operation. A zero indicates that a slave select is active. The actual polarity of each slave select
 *    pin is configured by the related SPOL bit in CFG.
 */
#define SPI_RXDAT_RXSSEL2_N(x)                   (((uint32_t)(((uint32_t)(x)) << SPI_RXDAT_RXSSEL2_N_SHIFT)) & SPI_RXDAT_RXSSEL2_N_MASK)
#define SPI_RXDAT_RXSSEL3_N_MASK                 (0x80000U)
#define SPI_RXDAT_RXSSEL3_N_SHIFT                (19U)
/*! RXSSEL3_N - Slave Select for receive. This field allows the state of the SSEL3 pin to be saved
 *    along with received data. The value will reflect the SSEL3 pin for both master and slave
 *    operation. A zero indicates that a slave select is active. The actual polarity of each slave select
 *    pin is configured by the related SPOL bit in CFG.
 */
#define SPI_RXDAT_RXSSEL3_N(x)                   (((uint32_t)(((uint32_t)(x)) << SPI_RXDAT_RXSSEL3_N_SHIFT)) & SPI_RXDAT_RXSSEL3_N_MASK)
#define SPI_RXDAT_SOT_MASK                       (0x100000U)
#define SPI_RXDAT_SOT_SHIFT                      (20U)
/*! SOT - Start of Transfer flag. This flag will be 1 if this is the first data after the SSELs went
 *    from deasserted to asserted (i.e., any previous transfer has ended). This information can be
 *    used to identify the first piece of data in cases where the transfer length is greater than 16
 *    bit.
 */
#define SPI_RXDAT_SOT(x)                         (((uint32_t)(((uint32_t)(x)) << SPI_RXDAT_SOT_SHIFT)) & SPI_RXDAT_SOT_MASK)
/*! @} */

/*! @name TXDATCTL - SPI Transmit Data with Control */
/*! @{ */
#define SPI_TXDATCTL_TXDAT_MASK                  (0xFFFFU)
#define SPI_TXDATCTL_TXDAT_SHIFT                 (0U)
/*! TXDAT - Transmit Data. This field provides from 1 to 16 bits of data to be transmitted.
 */
#define SPI_TXDATCTL_TXDAT(x)                    (((uint32_t)(((uint32_t)(x)) << SPI_TXDATCTL_TXDAT_SHIFT)) & SPI_TXDATCTL_TXDAT_MASK)
#define SPI_TXDATCTL_TXSSEL0_N_MASK              (0x10000U)
#define SPI_TXDATCTL_TXSSEL0_N_SHIFT             (16U)
/*! TXSSEL0_N - Transmit Slave Select. This field asserts SSEL0 in master mode. The output on the
 *    pin is active LOW by default. Remark: The active state of the SSEL0 pin is configured by bits in
 *    the CFG register.
 *  0b0..SSEL0 asserted.
 *  0b1..SSEL0 not asserted.
 */
#define SPI_TXDATCTL_TXSSEL0_N(x)                (((uint32_t)(((uint32_t)(x)) << SPI_TXDATCTL_TXSSEL0_N_SHIFT)) & SPI_TXDATCTL_TXSSEL0_N_MASK)
#define SPI_TXDATCTL_TXSSEL1_N_MASK              (0x20000U)
#define SPI_TXDATCTL_TXSSEL1_N_SHIFT             (17U)
/*! TXSSEL1_N - Transmit Slave Select. This field asserts SSEL1 in master mode. The output on the
 *    pin is active LOW by default. Remark: The active state of the SSEL1 pin is configured by bits in
 *    the CFG register.
 *  0b0..SSEL1 asserted.
 *  0b1..SSEL1 not asserted.
 */
#define SPI_TXDATCTL_TXSSEL1_N(x)                (((uint32_t)(((uint32_t)(x)) << SPI_TXDATCTL_TXSSEL1_N_SHIFT)) & SPI_TXDATCTL_TXSSEL1_N_MASK)
#define SPI_TXDATCTL_TXSSEL2_N_MASK              (0x40000U)
#define SPI_TXDATCTL_TXSSEL2_N_SHIFT             (18U)
/*! TXSSEL2_N - Transmit Slave Select. This field asserts SSEL2 in master mode. The output on the
 *    pin is active LOW by default. Remark: The active state of the SSEL2 pin is configured by bits in
 *    the CFG register.
 *  0b0..SSEL2 asserted.
 *  0b1..SSEL2 not asserted.
 */
#define SPI_TXDATCTL_TXSSEL2_N(x)                (((uint32_t)(((uint32_t)(x)) << SPI_TXDATCTL_TXSSEL2_N_SHIFT)) & SPI_TXDATCTL_TXSSEL2_N_MASK)
#define SPI_TXDATCTL_TXSSEL3_N_MASK              (0x80000U)
#define SPI_TXDATCTL_TXSSEL3_N_SHIFT             (19U)
/*! TXSSEL3_N - Transmit Slave Select. This field asserts SSEL3 in master mode. The output on the
 *    pin is active LOW by default. Remark: The active state of the SSEL3 pin is configured by bits in
 *    the CFG register.
 *  0b0..SSEL3 asserted.
 *  0b1..SSEL3 not asserted.
 */
#define SPI_TXDATCTL_TXSSEL3_N(x)                (((uint32_t)(((uint32_t)(x)) << SPI_TXDATCTL_TXSSEL3_N_SHIFT)) & SPI_TXDATCTL_TXSSEL3_N_MASK)
#define SPI_TXDATCTL_EOT_MASK                    (0x100000U)
#define SPI_TXDATCTL_EOT_SHIFT                   (20U)
/*! EOT - End of Transfer. The asserted SSEL will be deasserted at the end of a transfer, and remain
 *    so for at least the time specified by the Transfer_delay value in the DLY register.
 *  0b0..This piece of data is not treated as the end of a transfer. SSEL will not be deasserted at the end of this data.
 *  0b1..This piece of data is treated as the end of a transfer. SSEL will be deasserted at the end of this piece of data.
 */
#define SPI_TXDATCTL_EOT(x)                      (((uint32_t)(((uint32_t)(x)) << SPI_TXDATCTL_EOT_SHIFT)) & SPI_TXDATCTL_EOT_MASK)
#define SPI_TXDATCTL_EOF_MASK                    (0x200000U)
#define SPI_TXDATCTL_EOF_SHIFT                   (21U)
/*! EOF - End of Frame. Between frames, a delay may be inserted, as defined by the FRAME_DELAY value
 *    in the DLY register. The end of a frame may not be particularly meaningful if the FRAME_DELAY
 *    value = 0. This control can be used as part of the support for frame lengths greater than 16
 *    bits.
 *  0b0..This piece of data transmitted is not treated as the end of a frame.
 *  0b1..This piece of data is treated as the end of a frame, causing the FRAME_DELAY time to be inserted before subsequent data is transmitted.
 */
#define SPI_TXDATCTL_EOF(x)                      (((uint32_t)(((uint32_t)(x)) << SPI_TXDATCTL_EOF_SHIFT)) & SPI_TXDATCTL_EOF_MASK)
#define SPI_TXDATCTL_RXIGNORE_MASK               (0x400000U)
#define SPI_TXDATCTL_RXIGNORE_SHIFT              (22U)
/*! RXIGNORE - Receive Ignore. This allows data to be transmitted using the SPI without the need to
 *    read unneeded data from the receiver.Setting this bit simplifies the transmit process and can
 *    be used with the DMA.
 *  0b0..Received data must be read in order to allow transmission to progress. In slave mode, an overrun error
 *       will occur if received data is not read before new data is received.
 *  0b1..Received data is ignored, allowing transmission without reading unneeded received data. No receiver flags are generated.
 */
#define SPI_TXDATCTL_RXIGNORE(x)                 (((uint32_t)(((uint32_t)(x)) << SPI_TXDATCTL_RXIGNORE_SHIFT)) & SPI_TXDATCTL_RXIGNORE_MASK)
#define SPI_TXDATCTL_LEN_MASK                    (0xF000000U)
#define SPI_TXDATCTL_LEN_SHIFT                   (24U)
/*! LEN - Data Length. Specifies the data length from 1 to 16 bits. Note that transfer lengths
 *    greater than 16 bits are supported by implementing multiple sequential transmits. 0x0 = Data
 *    transfer is 1 bit in length. 0x1 = Data transfer is 2 bits in length. 0x2 = Data transfer is 3 bits
 *    in length. ... 0xF = Data transfer is 16 bits in length.
 *  0b0000..
 *  0b0001..Data transfer is 1 bit in length.
 *  0b0010..Data transfer is 2 bit in length.
 *  0b0011..Data transfer is 3 bit in length.
 *  0b0100..Data transfer is 4 bit in length.
 *  0b0101..Data transfer is 5 bit in length.
 *  0b0110..Data transfer is 6 bit in length.
 *  0b0111..Data transfer is 7 bit in length.
 *  0b1000..Data transfer is 8 bit in length.
 *  0b1001..Data transfer is 9 bit in length.
 *  0b1010..Data transfer is 10 bit in length.
 *  0b1011..Data transfer is 11 bit in length.
 *  0b1100..Data transfer is 12 bit in length.
 *  0b1101..Data transfer is 13 bit in length.
 *  0b1110..Data transfer is 14 bit in length.
 *  0b1111..Data transfer is 15 bit in length.
 */
#define SPI_TXDATCTL_LEN(x)                      (((uint32_t)(((uint32_t)(x)) << SPI_TXDATCTL_LEN_SHIFT)) & SPI_TXDATCTL_LEN_MASK)
/*! @} */

/*! @name TXDAT - SPI Transmit Data. */
/*! @{ */
#define SPI_TXDAT_DATA_MASK                      (0xFFFFU)
#define SPI_TXDAT_DATA_SHIFT                     (0U)
/*! DATA - Transmit Data. This field provides from 4 to 16 bits of data to be transmitted.
 */
#define SPI_TXDAT_DATA(x)                        (((uint32_t)(((uint32_t)(x)) << SPI_TXDAT_DATA_SHIFT)) & SPI_TXDAT_DATA_MASK)
/*! @} */

/*! @name TXCTL - SPI Transmit Control */
/*! @{ */
#define SPI_TXCTL_TXSSEL0_N_MASK                 (0x10000U)
#define SPI_TXCTL_TXSSEL0_N_SHIFT                (16U)
/*! TXSSEL0_N - Transmit Slave Select 0.
 */
#define SPI_TXCTL_TXSSEL0_N(x)                   (((uint32_t)(((uint32_t)(x)) << SPI_TXCTL_TXSSEL0_N_SHIFT)) & SPI_TXCTL_TXSSEL0_N_MASK)
#define SPI_TXCTL_TXSSEL1_N_MASK                 (0x20000U)
#define SPI_TXCTL_TXSSEL1_N_SHIFT                (17U)
/*! TXSSEL1_N - Transmit Slave Select 1.
 */
#define SPI_TXCTL_TXSSEL1_N(x)                   (((uint32_t)(((uint32_t)(x)) << SPI_TXCTL_TXSSEL1_N_SHIFT)) & SPI_TXCTL_TXSSEL1_N_MASK)
#define SPI_TXCTL_TXSSEL2_N_MASK                 (0x40000U)
#define SPI_TXCTL_TXSSEL2_N_SHIFT                (18U)
/*! TXSSEL2_N - Transmit Slave Select 2.
 */
#define SPI_TXCTL_TXSSEL2_N(x)                   (((uint32_t)(((uint32_t)(x)) << SPI_TXCTL_TXSSEL2_N_SHIFT)) & SPI_TXCTL_TXSSEL2_N_MASK)
#define SPI_TXCTL_TXSSEL3_N_MASK                 (0x80000U)
#define SPI_TXCTL_TXSSEL3_N_SHIFT                (19U)
/*! TXSSEL3_N - Transmit Slave Select 3.
 */
#define SPI_TXCTL_TXSSEL3_N(x)                   (((uint32_t)(((uint32_t)(x)) << SPI_TXCTL_TXSSEL3_N_SHIFT)) & SPI_TXCTL_TXSSEL3_N_MASK)
#define SPI_TXCTL_EOT_MASK                       (0x100000U)
#define SPI_TXCTL_EOT_SHIFT                      (20U)
/*! EOT - End of Transfer.
 */
#define SPI_TXCTL_EOT(x)                         (((uint32_t)(((uint32_t)(x)) << SPI_TXCTL_EOT_SHIFT)) & SPI_TXCTL_EOT_MASK)
#define SPI_TXCTL_EOF_MASK                       (0x200000U)
#define SPI_TXCTL_EOF_SHIFT                      (21U)
/*! EOF - End of Frame.
 */
#define SPI_TXCTL_EOF(x)                         (((uint32_t)(((uint32_t)(x)) << SPI_TXCTL_EOF_SHIFT)) & SPI_TXCTL_EOF_MASK)
#define SPI_TXCTL_RXIGNORE_MASK                  (0x400000U)
#define SPI_TXCTL_RXIGNORE_SHIFT                 (22U)
/*! RXIGNORE - Receive Ignore.
 */
#define SPI_TXCTL_RXIGNORE(x)                    (((uint32_t)(((uint32_t)(x)) << SPI_TXCTL_RXIGNORE_SHIFT)) & SPI_TXCTL_RXIGNORE_MASK)
#define SPI_TXCTL_LEN_MASK                       (0xF000000U)
#define SPI_TXCTL_LEN_SHIFT                      (24U)
/*! LEN - Data transfer Length.
 */
#define SPI_TXCTL_LEN(x)                         (((uint32_t)(((uint32_t)(x)) << SPI_TXCTL_LEN_SHIFT)) & SPI_TXCTL_LEN_MASK)
/*! @} */

/*! @name DIV - SPI clock Divider */
/*! @{ */
#define SPI_DIV_DIVVAL_MASK                      (0xFFFFU)
#define SPI_DIV_DIVVAL_SHIFT                     (0U)
/*! DIVVAL - Rate divider value. Specifies how the Flexcomm clock (FCLK) is divided to produce the
 *    SPI clock rate in master mode. DIVVAL is -1 encoded such that the value 0 results in FCLK/1,
 *    the value 1 results in FCLK/2, up to the maximum possible divide value of 0xFFFF, which results
 *    in FCLK/65536.
 */
#define SPI_DIV_DIVVAL(x)                        (((uint32_t)(((uint32_t)(x)) << SPI_DIV_DIVVAL_SHIFT)) & SPI_DIV_DIVVAL_MASK)
/*! @} */

/*! @name INTSTAT - SPI Interrupt Status */
/*! @{ */
#define SPI_INTSTAT_RXRDY_MASK                   (0x1U)
#define SPI_INTSTAT_RXRDY_SHIFT                  (0U)
/*! RXRDY - Receiver Ready flag.
 */
#define SPI_INTSTAT_RXRDY(x)                     (((uint32_t)(((uint32_t)(x)) << SPI_INTSTAT_RXRDY_SHIFT)) & SPI_INTSTAT_RXRDY_MASK)
#define SPI_INTSTAT_TXRDY_MASK                   (0x2U)
#define SPI_INTSTAT_TXRDY_SHIFT                  (1U)
/*! TXRDY - Transmitter Ready flag.
 */
#define SPI_INTSTAT_TXRDY(x)                     (((uint32_t)(((uint32_t)(x)) << SPI_INTSTAT_TXRDY_SHIFT)) & SPI_INTSTAT_TXRDY_MASK)
#define SPI_INTSTAT_RXOV_MASK                    (0x4U)
#define SPI_INTSTAT_RXOV_SHIFT                   (2U)
/*! RXOV - Receiver Overrun interrupt flag.
 */
#define SPI_INTSTAT_RXOV(x)                      (((uint32_t)(((uint32_t)(x)) << SPI_INTSTAT_RXOV_SHIFT)) & SPI_INTSTAT_RXOV_MASK)
#define SPI_INTSTAT_TXUR_MASK                    (0x8U)
#define SPI_INTSTAT_TXUR_SHIFT                   (3U)
/*! TXUR - Transmitter Underrun interrupt flag.
 */
#define SPI_INTSTAT_TXUR(x)                      (((uint32_t)(((uint32_t)(x)) << SPI_INTSTAT_TXUR_SHIFT)) & SPI_INTSTAT_TXUR_MASK)
#define SPI_INTSTAT_SSA_MASK                     (0x10U)
#define SPI_INTSTAT_SSA_SHIFT                    (4U)
/*! SSA - Slave Select Assert.
 */
#define SPI_INTSTAT_SSA(x)                       (((uint32_t)(((uint32_t)(x)) << SPI_INTSTAT_SSA_SHIFT)) & SPI_INTSTAT_SSA_MASK)
#define SPI_INTSTAT_SSD_MASK                     (0x20U)
#define SPI_INTSTAT_SSD_SHIFT                    (5U)
/*! SSD - Slave Select Deassert.
 */
#define SPI_INTSTAT_SSD(x)                       (((uint32_t)(((uint32_t)(x)) << SPI_INTSTAT_SSD_SHIFT)) & SPI_INTSTAT_SSD_MASK)
#define SPI_INTSTAT_MSTIDLE_MASK                 (0x100U)
#define SPI_INTSTAT_MSTIDLE_SHIFT                (8U)
/*! MSTIDLE - Master Idle status flag.
 */
#define SPI_INTSTAT_MSTIDLE(x)                   (((uint32_t)(((uint32_t)(x)) << SPI_INTSTAT_MSTIDLE_SHIFT)) & SPI_INTSTAT_MSTIDLE_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group SPI_Register_Masks */


/* SPI - Peripheral instance base addresses */
/** Peripheral SPI0 base address */
#define SPI0_BASE                                (0x40058000u)
/** Peripheral SPI0 base pointer */
#define SPI0                                     ((SPI_Type *)SPI0_BASE)
/** Peripheral SPI1 base address */
#define SPI1_BASE                                (0x4005C000u)
/** Peripheral SPI1 base pointer */
#define SPI1                                     ((SPI_Type *)SPI1_BASE)
/** Array initializer of SPI peripheral base addresses */
#define SPI_BASE_ADDRS                           { SPI0_BASE, SPI1_BASE }
/** Array initializer of SPI peripheral base pointers */
#define SPI_BASE_PTRS                            { SPI0, SPI1 }
/** Interrupt vectors for the SPI peripheral type */
#define SPI_IRQS                                 { SPI0_IRQn, SPI1_IRQn }

/* ----------------------------------------------------------------------------
   -- WKT Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup WKT_Peripheral_Access_Layer WKT Peripheral Access Layer
 * @{
 */

/** WKT - Register Layout Typedef */
typedef struct {
  __IO uint32_t CTRL;                              /**< Self wake-up timer control register., offset: 0x0 */
       uint8_t RESERVED_0[8];
  __IO uint32_t COUNT;                             /**< Counter register., offset: 0xC */
} WKT_Type;

/* ----------------------------------------------------------------------------
   -- WKT Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup WKT_Register_Masks WKT Register Masks
 * @{
 */

/*! @name CTRL - Self wake-up timer control register. */
/*! @{ */
#define WKT_CTRL_CLKSEL_MASK                     (0x1U)
#define WKT_CTRL_CLKSEL_SHIFT                    (0U)
/*! CLKSEL - Select the self wake-up timer clock source. Remark: This bit only has an effect if the SEL_EXTCLK bit is not set.
 *  0b0..Divided FRO clock. This clock runs at 750 kHz and provides time-out periods of up to approximately 95
 *       minutes in 1.33 us increments. Remark: This clock is not available in not available in Deep-sleep,
 *       power-down, deep power-down modes. Do not select this option if the timer is to be used to wake up from one of these
 *       modes.
 *  0b1..This is the (nominally) 10 kHz clock and provides time-out periods of up to approximately 119 hours in
 *       100 us increments. The accuracy of this clock is limited to +/- 40 % over temperature and processing.
 *       Remark: This clock is available in all power modes. Prior to use, the low-power oscillator must be enabled. The
 *       oscillator must also be set to remain active in Deep power-down if needed.
 */
#define WKT_CTRL_CLKSEL(x)                       (((uint32_t)(((uint32_t)(x)) << WKT_CTRL_CLKSEL_SHIFT)) & WKT_CTRL_CLKSEL_MASK)
#define WKT_CTRL_ALARMFLAG_MASK                  (0x2U)
#define WKT_CTRL_ALARMFLAG_SHIFT                 (1U)
/*! ALARMFLAG - Wake-up or alarm timer flag.
 *  0b0..No time-out. The self wake-up timer has not timed out. Writing a 0 to has no effect.
 *  0b1..Time-out. The self wake-up timer has timed out. This flag generates an interrupt request which can wake
 *       up the part from any reduced power mode including Deep power-down if the clock source is the low power
 *       oscillator. Writing a 1 clears this status bit.
 */
#define WKT_CTRL_ALARMFLAG(x)                    (((uint32_t)(((uint32_t)(x)) << WKT_CTRL_ALARMFLAG_SHIFT)) & WKT_CTRL_ALARMFLAG_MASK)
#define WKT_CTRL_CLEARCTR_MASK                   (0x4U)
#define WKT_CTRL_CLEARCTR_SHIFT                  (2U)
/*! CLEARCTR - Clears the self wake-up timer.
 *  0b0..No effect. Reading this bit always returns 0.
 *  0b1..Clear the counter. Counting is halted until a new count value is loaded.
 */
#define WKT_CTRL_CLEARCTR(x)                     (((uint32_t)(((uint32_t)(x)) << WKT_CTRL_CLEARCTR_SHIFT)) & WKT_CTRL_CLEARCTR_MASK)
#define WKT_CTRL_SEL_EXTCLK_MASK                 (0x8U)
#define WKT_CTRL_SEL_EXTCLK_SHIFT                (3U)
/*! SEL_EXTCLK - Select external or internal clock source for the self wake-up timer. The internal
 *    clock source is selected by the CLKSEL bit in this register if SET_EXTCLK is set to internal.
 *  0b0..Internal. The clock source is the internal clock selected by the CLKSEL bit.
 *  0b1..External. The self wake-up timer uses the external WKTCLKIN pin.
 */
#define WKT_CTRL_SEL_EXTCLK(x)                   (((uint32_t)(((uint32_t)(x)) << WKT_CTRL_SEL_EXTCLK_SHIFT)) & WKT_CTRL_SEL_EXTCLK_MASK)
/*! @} */

/*! @name COUNT - Counter register. */
/*! @{ */
#define WKT_COUNT_VALUE_MASK                     (0xFFFFFFFFU)
#define WKT_COUNT_VALUE_SHIFT                    (0U)
/*! VALUE - A write to this register pre-loads start count value into the timer and starts the
 *    count-down sequence. A read reflects the current value of the timer.
 */
#define WKT_COUNT_VALUE(x)                       (((uint32_t)(((uint32_t)(x)) << WKT_COUNT_VALUE_SHIFT)) & WKT_COUNT_VALUE_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group WKT_Register_Masks */


/* WKT - Peripheral instance base addresses */
/** Peripheral WKT base address */
#define WKT_BASE                                 (0x40008000u)
/** Peripheral WKT base pointer */
#define WKT                                      ((WKT_Type *)WKT_BASE)
/** Array initializer of WKT peripheral base addresses */
#define WKT_BASE_ADDRS                           { WKT_BASE }
/** Array initializer of WKT peripheral base pointers */
#define WKT_BASE_PTRS                            { WKT }
/** Interrupt vectors for the WKT peripheral type */
#define WKT_IRQS                                 { WKT_IRQn }

/*!
 * @}
 */ /* end of group WKT_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- WWDT Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup WWDT_Peripheral_Access_Layer WWDT Peripheral Access Layer
 * @{
 */

/** WWDT - Register Layout Typedef */
typedef struct {
  __IO uint32_t MOD;                               /**< Watchdog mode register. This register contains the basic mode and status of the Watchdog Timer., offset: 0x0 */
  __IO uint32_t TC;                                /**< Watchdog timer constant register. This 24-bit register determines the time-out value., offset: 0x4 */
  __O  uint32_t FEED;                              /**< Watchdog feed sequence register. Writing 0xAA followed by 0x55 to this register reloads the Watchdog timer with the value contained in TC., offset: 0x8 */
  __I  uint32_t TV;                                /**< Watchdog timer value register. This 24-bit register reads out the current value of the Watchdog timer., offset: 0xC */
       uint8_t RESERVED_0[4];
  __IO uint32_t WARNINT;                           /**< Watchdog Warning Interrupt compare value., offset: 0x14 */
  __IO uint32_t WINDOW;                            /**< Watchdog Window compare value., offset: 0x18 */
} WWDT_Type;

/* ----------------------------------------------------------------------------
   -- WWDT Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup WWDT_Register_Masks WWDT Register Masks
 * @{
 */

/*! @name MOD - Watchdog mode register. This register contains the basic mode and status of the Watchdog Timer. */
/*! @{ */
#define WWDT_MOD_WDEN_MASK                       (0x1U)
#define WWDT_MOD_WDEN_SHIFT                      (0U)
/*! WDEN - Watchdog enable bit. Once this bit is set to one and a watchdog feed is performed, the
 *    watchdog timer will run permanently.
 *  0b0..Stop. The watchdog timer is stopped.
 *  0b1..Run. The watchdog timer is running.
 */
#define WWDT_MOD_WDEN(x)                         (((uint32_t)(((uint32_t)(x)) << WWDT_MOD_WDEN_SHIFT)) & WWDT_MOD_WDEN_MASK)
#define WWDT_MOD_WDRESET_MASK                    (0x2U)
#define WWDT_MOD_WDRESET_SHIFT                   (1U)
/*! WDRESET - Watchdog reset enable bit. Once this bit has been written with a 1 it cannot be re-written with a 0.
 *  0b0..Interrupt. A watchdog time-out will not cause a chip reset.
 *  0b1..Reset. A watchdog time-out will cause a chip reset.
 */
#define WWDT_MOD_WDRESET(x)                      (((uint32_t)(((uint32_t)(x)) << WWDT_MOD_WDRESET_SHIFT)) & WWDT_MOD_WDRESET_MASK)
#define WWDT_MOD_WDTOF_MASK                      (0x4U)
#define WWDT_MOD_WDTOF_SHIFT                     (2U)
/*! WDTOF - Watchdog time-out flag. Set when the watchdog timer times out, by a feed error, or by
 *    events associated with WDPROTECT. Cleared by software writing a 0 to this bit position. Causes a
 *    chip reset if WDRESET = 1.
 */
#define WWDT_MOD_WDTOF(x)                        (((uint32_t)(((uint32_t)(x)) << WWDT_MOD_WDTOF_SHIFT)) & WWDT_MOD_WDTOF_MASK)
#define WWDT_MOD_WDINT_MASK                      (0x8U)
#define WWDT_MOD_WDINT_SHIFT                     (3U)
/*! WDINT - Warning interrupt flag. Set when the timer is at or below the value in WDWARNINT.
 *    Cleared by software writing a 1 to this bit position. Note that this bit cannot be cleared while the
 *    WARNINT value is equal to the value of the TV register. This can occur if the value of
 *    WARNINT is 0 and the WDRESET bit is 0 when TV decrements to 0.
 */
#define WWDT_MOD_WDINT(x)                        (((uint32_t)(((uint32_t)(x)) << WWDT_MOD_WDINT_SHIFT)) & WWDT_MOD_WDINT_MASK)
#define WWDT_MOD_WDPROTECT_MASK                  (0x10U)
#define WWDT_MOD_WDPROTECT_SHIFT                 (4U)
/*! WDPROTECT - Watchdog update mode. This bit can be set once by software and is only cleared by a reset.
 *  0b0..Flexible. The watchdog time-out value (TC) can be changed at any time.
 *  0b1..Threshold. The watchdog time-out value (TC) can be changed only after the counter is below the value of WDWARNINT and WDWINDOW.
 */
#define WWDT_MOD_WDPROTECT(x)                    (((uint32_t)(((uint32_t)(x)) << WWDT_MOD_WDPROTECT_SHIFT)) & WWDT_MOD_WDPROTECT_MASK)
#define WWDT_MOD_LOCK_MASK                       (0x20U)
#define WWDT_MOD_LOCK_SHIFT                      (5U)
/*! LOCK - Once this bit is set to one and a watchdog feed is performed, disabling or powering down
 *    the watchdog oscillator is prevented by hardware. This bit can be set once by software and is
 *    only cleared by any reset.
 */
#define WWDT_MOD_LOCK(x)                         (((uint32_t)(((uint32_t)(x)) << WWDT_MOD_LOCK_SHIFT)) & WWDT_MOD_LOCK_MASK)
/*! @} */

/*! @name TC - Watchdog timer constant register. This 24-bit register determines the time-out value. */
/*! @{ */
#define WWDT_TC_COUNT_MASK                       (0xFFFFFFU)
#define WWDT_TC_COUNT_SHIFT                      (0U)
/*! COUNT - Watchdog time-out value.
 */
#define WWDT_TC_COUNT(x)                         (((uint32_t)(((uint32_t)(x)) << WWDT_TC_COUNT_SHIFT)) & WWDT_TC_COUNT_MASK)
/*! @} */

/*! @name FEED - Watchdog feed sequence register. Writing 0xAA followed by 0x55 to this register reloads the Watchdog timer with the value contained in TC. */
/*! @{ */
#define WWDT_FEED_FEED_MASK                      (0xFFU)
#define WWDT_FEED_FEED_SHIFT                     (0U)
/*! FEED - Feed value should be 0xAA followed by 0x55.
 */
#define WWDT_FEED_FEED(x)                        (((uint32_t)(((uint32_t)(x)) << WWDT_FEED_FEED_SHIFT)) & WWDT_FEED_FEED_MASK)
/*! @} */

/*! @name TV - Watchdog timer value register. This 24-bit register reads out the current value of the Watchdog timer. */
/*! @{ */
#define WWDT_TV_COUNT_MASK                       (0xFFFFFFU)
#define WWDT_TV_COUNT_SHIFT                      (0U)
/*! COUNT - Counter timer value.
 */
#define WWDT_TV_COUNT(x)                         (((uint32_t)(((uint32_t)(x)) << WWDT_TV_COUNT_SHIFT)) & WWDT_TV_COUNT_MASK)
/*! @} */

/*! @name WARNINT - Watchdog Warning Interrupt compare value. */
/*! @{ */
#define WWDT_WARNINT_WARNINT_MASK                (0x3FFU)
#define WWDT_WARNINT_WARNINT_SHIFT               (0U)
/*! WARNINT - Watchdog warning interrupt compare value.
 */
#define WWDT_WARNINT_WARNINT(x)                  (((uint32_t)(((uint32_t)(x)) << WWDT_WARNINT_WARNINT_SHIFT)) & WWDT_WARNINT_WARNINT_MASK)
/*! @} */

/*! @name WINDOW - Watchdog Window compare value. */
/*! @{ */
#define WWDT_WINDOW_WINDOW_MASK                  (0xFFFFFFU)
#define WWDT_WINDOW_WINDOW_SHIFT                 (0U)
/*! WINDOW - Watchdog window value.
 */
#define WWDT_WINDOW_WINDOW(x)                    (((uint32_t)(((uint32_t)(x)) << WWDT_WINDOW_WINDOW_SHIFT)) & WWDT_WINDOW_WINDOW_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group WWDT_Register_Masks */


/* WWDT - Peripheral instance base addresses */
/** Peripheral WWDT base address */
#define WWDT_BASE                                (0x40000000u)
/** Peripheral WWDT base pointer */
#define WWDT                                     ((WWDT_Type *)WWDT_BASE)
/** Array initializer of WWDT peripheral base addresses */
#define WWDT_BASE_ADDRS                          { WWDT_BASE }
/** Array initializer of WWDT peripheral base pointers */
#define WWDT_BASE_PTRS                           { WWDT }
/** Interrupt vectors for the WWDT peripheral type */
#define WWDT_IRQS                                { WDT_IRQn }

/*!
 * @}
 */ /* end of group WWDT_Peripheral_Access_Layer */


/*
** End of section using anonymous unions
*/

#if defined(__ARMCC_VERSION)
  #if (__ARMCC_VERSION >= 6010050)
    #pragma clang diagnostic pop
  #else
    #pragma pop
  #endif
#elif defined(__GNUC__)
  /* leave anonymous unions enabled */
#elif defined(__IAR_SYSTEMS_ICC__)
  #pragma language=default
#else
  #error Not supported compiler type
#endif

/*!
 * @}
 */ /* end of group Peripheral_access_layer */


/* ----------------------------------------------------------------------------
   -- Macros for use with bit field definitions (xxx_SHIFT, xxx_MASK).
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Bit_Field_Generic_Macros Macros for use with bit field definitions (xxx_SHIFT, xxx_MASK).
 * @{
 */

#if defined(__ARMCC_VERSION)
  #if (__ARMCC_VERSION >= 6010050)
    #pragma clang system_header
  #endif
#elif defined(__IAR_SYSTEMS_ICC__)
  #pragma system_include
#endif

/**
 * @brief Mask and left-shift a bit field value for use in a register bit range.
 * @param field Name of the register bit field.
 * @param value Value of the bit field.
 * @return Masked and shifted value.
 */
#define NXP_VAL2FLD(field, value)    (((value) << (field ## _SHIFT)) & (field ## _MASK))
/**
 * @brief Mask and right-shift a register value to extract a bit field value.
 * @param field Name of the register bit field.
 * @param value Value of the register.
 * @return Masked and shifted bit field value.
 */
#define NXP_FLD2VAL(field, value)    (((value) & (field ## _MASK)) >> (field ## _SHIFT))

/*!
 * @}
 */ /* end of group Bit_Field_Generic_Macros */

#endif /* LPC845_H_ */


#define NETDUINO_PLUS_2

#define MICROPY_HW_BOARD_NAME       "NetduinoPlus2"

#define MICROPY_HW_HAS_SWITCH       (1)

// On the netuino, the sdcard appears to be wired up as a 1-bit
// SPI, so the driver needs to be converted to support that before
// we can turn this on.
#define MICROPY_HW_HAS_SDCARD       (0)
#define MICROPY_HW_HAS_MMA7660      (0)
#define MICROPY_HW_HAS_LIS3DSH      (0)
#define MICROPY_HW_HAS_LCD          (0)
#define MICROPY_HW_HAS_WLAN         (0)
#define MICROPY_HW_ENABLE_RNG       (1)
#define MICROPY_HW_ENABLE_RTC       (0)
#define MICROPY_HW_ENABLE_TIMER     (1)
#define MICROPY_HW_ENABLE_SERVO     (1)
#define MICROPY_HW_ENABLE_AUDIO     (0)

// USRSW is pulled low. Pressing the button makes the input go high.
#define USRSW_PIN           (pin_B11)
#define USRSW_PUPD          (GPIO_PuPd_NOPULL)
#define USRSW_EXTI_EDGE     (EXTI_Trigger_Rising)
#define USRSW_PRESSED       (1)

/* LED */
#define PYB_LED1        (pin_A10)   // Blue LED
#define PYB_LED2        (pin_C13)   // White LED (aka Power)
#define PYB_LED3        (pin_A10)   // Same as Led(1)
#define PYB_LED4        (pin_C13)   // Same as Led(2)

#define PYB_OTYPE       (GPIO_OType_PP)

#define PYB_LED_ON(pin)  (pin->gpio->BSRRL = pin->pin_mask)
#define PYB_LED_OFF(pin) (pin->gpio->BSRRH = pin->pin_mask)

#define HSE_VALUE (25000000)

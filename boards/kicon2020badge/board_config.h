#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define __SAMD51G18A__ 1

#define VENDOR_NAME "@TomKeddie"
#define PRODUCT_NAME "KiCon 2020 Unofficial Badge (from @gregdavill)"
#define VOLUME_LABEL "KICON2020"
#define INDEX_URL "https://github.com/TomKeddie/kicon-2020-virtual-badge"

#define USB_VID 0x03EB   // Atmel
#define USB_PID 0x2402   // Generic HID device

#define BOARD_ID "SAMD51G18A-KiCon2020-Unofficial-Badge"

#define LED_PIN PIN_PB08

#define BOOT_USART_MODULE                 SERCOM0
#define BOOT_USART_MASK                   APBAMASK
#define BOOT_USART_BUS_CLOCK_INDEX        MCLK_APBBMASK_SERCOM3
#define BOOT_USART_PAD_SETTINGS           UART_RX_PAD1_TX_PAD0
#define BOOT_USART_PAD3                   PINMUX_UNUSED
#define BOOT_USART_PAD2                   PINMUX_UNUSED
#define BOOT_USART_PAD1                   PINMUX_PA05D_SERCOM0_PAD1
#define BOOT_USART_PAD0                   PINMUX_PA04D_SERCOM0_PAD0
#define BOOT_GCLK_ID_CORE                 SERCOM3_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW                 SERCOM3_GCLK_ID_SLOW

#endif

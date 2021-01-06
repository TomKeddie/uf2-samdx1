#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define __SAMD51G18A__ 1

#define VENDOR_NAME "@TomKeddie"
#define PRODUCT_NAME "KiCon 2020 Unofficial Badge"
#define VOLUME_LABEL "KICON2020"
#define INDEX_URL "https://github.com/gregdavill/kicon-2020-virtual-badge"

#define USB_VID 0x03EB   // Atmel
#define USB_PID 0x2402   // Generic HID device

#define BOARD_ID "SAMD51G18A-KiCon2020-Unofficial-Badge"

#define LED_PIN PIN_PB08

#define BOOT_GCLK_ID_CORE                 SERCOM3_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW                 SERCOM3_GCLK_ID_SLOW

#define USE_UART 0
#define USE_CDC_TERMINAL 1


#endif

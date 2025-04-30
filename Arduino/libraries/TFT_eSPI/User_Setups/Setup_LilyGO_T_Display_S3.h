#define TFT_DRIVER 0x7789

// Setup for LilyGO T-Display-S3 (ESP32-S3 + ST7789 1.9" 320x170)

#define USER_SETUP_ID 420

#define ST7789_DRIVER

#define TFT_WIDTH  320
#define TFT_HEIGHT 170

#define CGRAM_OFFSET
#define TFT_INVERSION_ON

#define TFT_MOSI  35
#define TFT_SCLK  36
#define TFT_CS    -1  // Not connected
#define TFT_DC     4
#define TFT_RST    5
#define TFT_BL    38

#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF
#define SMOOTH_FONT

#define SPI_FREQUENCY  40000000
#define SPI_READ_FREQUENCY  20000000
#define SPI_TOUCH_FREQUENCY  2500000
#include <TFT_Drivers/ST7789_Defines.h>

#include <U8glib.h>

U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_DEV_0 | U8G_I2C_OPT_NO_ACK | U8G_I2C_OPT_FAST);

// 'cm_unit', 16x12px
const unsigned char bitmap_cm_unit [] PROGMEM = {
	0x00, 0x00, 0x7f, 0x80, 0x40, 0x04, 0x5d, 0x14, 0x51, 0xb4, 0x51, 0x54, 0x51, 0x14, 0x51, 0x14, 
	0x5d, 0x14, 0x00, 0x04, 0x07, 0xfc, 0x00, 0x00
};
// 'no_sound', 16x10px
const unsigned char bitmap_no_sound [] PROGMEM = {
	0x01, 0xfe, 0x20, 0x02, 0x28, 0x0a, 0x24, 0x12, 0x23, 0x62, 0x20, 0x82, 0x27, 0x72, 0x28, 0x0a, 
	0x20, 0x00, 0x3f, 0xe0
};
// 'senzor_centru1_off', 32x14px
const unsigned char bitmap_senzor_centru1_off [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x02, 0xaa, 0xaa, 0x80, 0x55, 0x55, 0x55, 0x55, 0xaa, 0xaa, 0xaa, 0xaa, 
	0x55, 0x55, 0x55, 0x55, 0xaa, 0xaa, 0xaa, 0xaa, 0x55, 0x55, 0x55, 0x55, 0xaa, 0xaa, 0xaa, 0xaa, 
	0x55, 0x55, 0x55, 0x54, 0x2a, 0xaa, 0xaa, 0xaa, 0x55, 0x55, 0x55, 0x54, 0x28, 0x00, 0x00, 0x2a, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'senzor_centru1_on', 32x14px
const unsigned char bitmap_senzor_centru1_on [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0x7f, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xfe, 0x7c, 0x00, 0x00, 0x3e, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'senzor_centru2_off', 32x15px
const unsigned char bitmap_senzor_centru2_off [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x55, 0x55, 0x00, 0xaa, 0xaa, 0xaa, 0xaa, 
	0x55, 0x55, 0x55, 0x54, 0x2a, 0xaa, 0xaa, 0xa8, 0x15, 0x55, 0x55, 0x54, 0x2a, 0xaa, 0xaa, 0xa8, 
	0x15, 0x55, 0x55, 0x54, 0x2a, 0xaa, 0xaa, 0xa8, 0x15, 0x55, 0x55, 0x54, 0x2a, 0xaa, 0xaa, 0xa8, 
	0x14, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'senzor_centru2_on', 32x15px
const unsigned char bitmap_senzor_centru2_on [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0xff, 
	0x7f, 0xff, 0xff, 0xfe, 0x3f, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xfc, 
	0x3f, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xfc, 
	0x3e, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'senzor_centru3_off', 32x13px
const unsigned char bitmap_senzor_centru3_off [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0xaa, 0xaa, 0x80, 0x15, 0x55, 0x55, 0x50, 0x0a, 0xaa, 0xaa, 0xa8, 
	0x15, 0x55, 0x55, 0x50, 0x0a, 0xaa, 0xaa, 0xa8, 0x15, 0x55, 0x55, 0x50, 0x0a, 0xaa, 0xaa, 0xa0, 
	0x05, 0x55, 0x55, 0x50, 0x0a, 0xaa, 0xaa, 0xa0, 0x05, 0x55, 0x55, 0x50, 0x0a, 0x00, 0x00, 0xa0, 
	0x00, 0x00, 0x00, 0x00
};
// 'senzor_centru3_on', 32x13px
const unsigned char bitmap_senzor_centru3_on [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0x80, 0x1f, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xf8, 
	0x1f, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xf8, 0x0f, 0xff, 0xff, 0xf0, 
	0x0f, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xf0, 0x0e, 0x00, 0x00, 0xf0, 
	0x00, 0x00, 0x00, 0x00
};
// 'senzor_centru4_off', 32x13px
const unsigned char bitmap_senzor_centru4_off [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x2a, 0xaa, 0x80, 0x05, 0x55, 0x55, 0x50, 0x02, 0xaa, 0xaa, 0xa0, 
	0x01, 0x55, 0x55, 0x50, 0x02, 0xaa, 0xaa, 0xa0, 0x01, 0x55, 0x55, 0x50, 0x02, 0xaa, 0xaa, 0xa0, 
	0x01, 0x55, 0x55, 0x50, 0x02, 0xaa, 0xaa, 0xa0, 0x01, 0x55, 0x55, 0x40, 0x00, 0x80, 0x00, 0x20, 
	0x00, 0x00, 0x00, 0x00
};
// 'senzor_centru4_on', 32x13px
const unsigned char bitmap_senzor_centru4_on [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0x80, 0x07, 0xff, 0xff, 0xf8, 0x03, 0xff, 0xff, 0xf0, 
	0x03, 0xff, 0xff, 0xf0, 0x03, 0xff, 0xff, 0xf0, 0x03, 0xff, 0xff, 0xf0, 0x03, 0xff, 0xff, 0xf0, 
	0x03, 0xff, 0xff, 0xf0, 0x03, 0xff, 0xff, 0xf0, 0x01, 0xff, 0xff, 0xe0, 0x01, 0x80, 0x00, 0x60, 
	0x00, 0x00, 0x00, 0x00
};
// 'senzor_dreapta1_off', 32x22px
const unsigned char bitmap_senzor_dreapta1_off [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 
	0x15, 0x50, 0x00, 0x00, 0x2a, 0xaa, 0x00, 0x00, 0x55, 0x55, 0x40, 0x00, 0x2a, 0xaa, 0xa8, 0x00, 
	0x55, 0x55, 0x55, 0x00, 0xaa, 0xaa, 0xaa, 0xa0, 0x55, 0x55, 0x55, 0x50, 0xaa, 0xaa, 0xaa, 0xa8, 
	0x55, 0x55, 0x55, 0x54, 0x00, 0xaa, 0xaa, 0xaa, 0x00, 0x15, 0x55, 0x55, 0x00, 0x02, 0xaa, 0xaa, 
	0x00, 0x00, 0x55, 0x54, 0x00, 0x00, 0x0a, 0xaa, 0x00, 0x00, 0x01, 0x54, 0x00, 0x00, 0x00, 0x28, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'senzor_dreapta1_on', 32x22px
const unsigned char bitmap_senzor_dreapta1_on [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 
	0x3f, 0xf0, 0x00, 0x00, 0x7f, 0xff, 0x00, 0x00, 0x7f, 0xff, 0xe0, 0x00, 0x7f, 0xff, 0xfc, 0x00, 
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0xe0, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xff, 0xfc, 
	0x7f, 0xff, 0xff, 0xfe, 0x01, 0xff, 0xff, 0xfe, 0x00, 0x1f, 0xff, 0xff, 0x00, 0x03, 0xff, 0xff, 
	0x00, 0x00, 0x7f, 0xfe, 0x00, 0x00, 0x0f, 0xfe, 0x00, 0x00, 0x01, 0xfc, 0x00, 0x00, 0x00, 0x7c, 
	0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00
};
// 'senzor_dreapta2_on', 32x19px
const unsigned char bitmap_senzor_dreapta2_on [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x7f, 0xff, 0x00, 0x00, 
	0x7f, 0xff, 0xe0, 0x00, 0x7f, 0xff, 0xfc, 0x00, 0x7f, 0xff, 0xff, 0x80, 0x7f, 0xff, 0xff, 0xe0, 
	0x7f, 0xff, 0xff, 0xf8, 0x7f, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xfc, 0x01, 0xff, 0xff, 0xf8, 
	0x00, 0x1f, 0xff, 0xf8, 0x00, 0x01, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x0f, 0xf0, 
	0x00, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00
};
// 'senzor_dreapta2_off', 32x19px
const unsigned char bitmap_senzor_dreapta2_off [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x2a, 0xa8, 0x00, 0x00, 0x55, 0x55, 0x00, 0x00, 
	0x2a, 0xaa, 0xa0, 0x00, 0x55, 0x55, 0x54, 0x00, 0x2a, 0xaa, 0xaa, 0x80, 0x55, 0x55, 0x55, 0x40, 
	0x2a, 0xaa, 0xaa, 0xa8, 0x55, 0x55, 0x55, 0x54, 0x2a, 0xaa, 0xaa, 0xa8, 0x01, 0x55, 0x55, 0x50, 
	0x00, 0x0a, 0xaa, 0xa8, 0x00, 0x01, 0x55, 0x50, 0x00, 0x00, 0x2a, 0xa0, 0x00, 0x00, 0x05, 0x50, 
	0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00
};
// 'senzor_dreapta3_off', 32x21px
const unsigned char bitmap_senzor_dreapta3_off [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x15, 0x40, 0x00, 0x00, 
	0x0a, 0xa8, 0x00, 0x00, 0x15, 0x55, 0x00, 0x00, 0x0a, 0xaa, 0xa0, 0x00, 0x15, 0x55, 0x54, 0x00, 
	0x0a, 0xaa, 0xaa, 0x80, 0x15, 0x55, 0x55, 0x50, 0x2a, 0xaa, 0xaa, 0xa8, 0x15, 0x55, 0x55, 0x50, 
	0x0a, 0xaa, 0xaa, 0xa0, 0x00, 0x55, 0x55, 0x40, 0x00, 0x02, 0xaa, 0xa0, 0x00, 0x00, 0x55, 0x40, 
	0x00, 0x00, 0x0a, 0x80, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00
};
// 'senzor_dreapta3_on', 32x21px
const unsigned char bitmap_senzor_dreapta3_on [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x1f, 0xc0, 0x00, 0x00, 
	0x1f, 0xfc, 0x00, 0x00, 0x1f, 0xff, 0x80, 0x00, 0x1f, 0xff, 0xf0, 0x00, 0x1f, 0xff, 0xfe, 0x00, 
	0x1f, 0xff, 0xff, 0xc0, 0x3f, 0xff, 0xff, 0xf0, 0x3f, 0xff, 0xff, 0xf8, 0x3f, 0xff, 0xff, 0xf0, 
	0x0f, 0xff, 0xff, 0xf0, 0x00, 0x7f, 0xff, 0xe0, 0x00, 0x07, 0xff, 0xe0, 0x00, 0x00, 0xff, 0xc0, 
	0x00, 0x00, 0x1f, 0xc0, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00
};
// 'senzor_dreapta4_off', 32x16px
const unsigned char bitmap_senzor_dreapta4_off [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x05, 0x50, 0x00, 0x00, 0x0a, 0xaa, 0x00, 0x00, 
	0x05, 0x55, 0x40, 0x00, 0x0a, 0xaa, 0xa8, 0x00, 0x05, 0x55, 0x55, 0x00, 0x0a, 0xaa, 0xaa, 0x80, 
	0x05, 0x55, 0x55, 0x40, 0x0a, 0xaa, 0xaa, 0xa0, 0x15, 0x55, 0x55, 0x40, 0x02, 0xaa, 0xaa, 0x80, 
	0x00, 0x15, 0x55, 0x00, 0x00, 0x02, 0xaa, 0x80, 0x00, 0x00, 0x55, 0x00, 0x00, 0x00, 0x08, 0x00
};
// 'senzor_dreapta4_on', 32x16px
const unsigned char bitmap_senzor_dreapta4_on [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0xf0, 0x00, 0x00, 0x0f, 0xff, 0x00, 0x00, 
	0x0f, 0xff, 0xe0, 0x00, 0x0f, 0xff, 0xf8, 0x00, 0x0f, 0xff, 0xff, 0x00, 0x0f, 0xff, 0xff, 0xc0, 
	0x0f, 0xff, 0xff, 0xe0, 0x1f, 0xff, 0xff, 0xe0, 0x1f, 0xff, 0xff, 0xc0, 0x03, 0xff, 0xff, 0xc0, 
	0x00, 0x1f, 0xff, 0x80, 0x00, 0x03, 0xff, 0x80, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x08, 0x00
};
// 'senzor_stanga1_off', 32x20px
const unsigned char bitmap_senzor_stanga1_off [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x05, 0x54, 0x00, 0x00, 0xaa, 0xaa, 
	0x00, 0x05, 0x55, 0x54, 0x00, 0x2a, 0xaa, 0xaa, 0x01, 0x55, 0x55, 0x55, 0x02, 0xaa, 0xaa, 0xaa, 
	0x15, 0x55, 0x55, 0x55, 0x2a, 0xaa, 0xaa, 0xaa, 0x55, 0x55, 0x55, 0x54, 0x2a, 0xaa, 0xaa, 0x80, 
	0x55, 0x55, 0x50, 0x00, 0xaa, 0xaa, 0x80, 0x00, 0x55, 0x54, 0x00, 0x00, 0x2a, 0xa0, 0x00, 0x00, 
	0x15, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'senzor_stanga1_on', 32x20px
const unsigned char bitmap_senzor_stanga1_on [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x0f, 0xfc, 0x00, 0x00, 0xff, 0xfe, 
	0x00, 0x07, 0xff, 0xfe, 0x00, 0x3f, 0xff, 0xfe, 0x01, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 
	0x1f, 0xff, 0xff, 0xff, 0x3f, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0x80, 
	0xff, 0xff, 0xf8, 0x00, 0xff, 0xff, 0xc0, 0x00, 0x7f, 0xfe, 0x00, 0x00, 0x7f, 0xf0, 0x00, 0x00, 
	0x3f, 0x80, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'senzor_stanga2_off', 32x19px
const unsigned char bitmap_senzor_stanga2_off [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x50, 0x00, 0x00, 0x2a, 0xa0, 0x00, 0x01, 0x55, 0x50, 
	0x00, 0x0a, 0xaa, 0xa8, 0x00, 0x55, 0x55, 0x50, 0x02, 0xaa, 0xaa, 0xa8, 0x15, 0x55, 0x55, 0x50, 
	0x2a, 0xaa, 0xaa, 0xa8, 0x55, 0x55, 0x55, 0x50, 0xaa, 0xaa, 0xaa, 0xa0, 0x55, 0x55, 0x54, 0x00, 
	0x2a, 0xaa, 0xa0, 0x00, 0x55, 0x54, 0x00, 0x00, 0x2a, 0xa0, 0x00, 0x00, 0x15, 0x40, 0x00, 0x00, 
	0x0a, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'senzor_stanga2_on', 32x19px
const unsigned char bitmap_senzor_stanga2_on [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x7f, 0xf0, 0x00, 0x03, 0xff, 0xf8, 
	0x00, 0x1f, 0xff, 0xf8, 0x00, 0xff, 0xff, 0xf8, 0x07, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xf8, 
	0x7f, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xff, 0xf0, 0x7f, 0xff, 0xfe, 0x00, 
	0x7f, 0xff, 0xe0, 0x00, 0x7f, 0xfe, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 
	0x1e, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'senzor_stanga3_off', 32x19px
const unsigned char bitmap_senzor_stanga3_off [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x02, 0xa0, 0x00, 0x00, 0x55, 0x50, 
	0x00, 0x02, 0xaa, 0xa0, 0x00, 0x15, 0x55, 0x50, 0x00, 0xaa, 0xaa, 0xa0, 0x05, 0x55, 0x55, 0x50, 
	0x0a, 0xaa, 0xaa, 0xa8, 0x15, 0x55, 0x55, 0x50, 0x0a, 0xaa, 0xaa, 0xa8, 0x15, 0x55, 0x55, 0x40, 
	0x0a, 0xaa, 0xa8, 0x00, 0x05, 0x55, 0x40, 0x00, 0x02, 0xaa, 0x00, 0x00, 0x05, 0x50, 0x00, 0x00, 
	0x02, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'senzor_stanga3_on', 32x19px
const unsigned char bitmap_senzor_stanga3_on [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x07, 0xf0, 0x00, 0x00, 0x7f, 0xf0, 
	0x00, 0x03, 0xff, 0xf0, 0x00, 0x1f, 0xff, 0xf0, 0x00, 0xff, 0xff, 0xf0, 0x07, 0xff, 0xff, 0xf0, 
	0x1f, 0xff, 0xff, 0xf8, 0x3f, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xe0, 
	0x0f, 0xff, 0xfc, 0x00, 0x0f, 0xff, 0xc0, 0x00, 0x07, 0xfe, 0x00, 0x00, 0x07, 0xf0, 0x00, 0x00, 
	0x03, 0xc0, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'senzor_stanga4_off', 32x17px
const unsigned char bitmap_senzor_stanga4_off [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2a, 0x00, 
	0x00, 0x05, 0x55, 0x00, 0x00, 0x2a, 0xaa, 0x80, 0x00, 0x55, 0x55, 0x00, 0x02, 0xaa, 0xaa, 0x80, 
	0x15, 0x55, 0x55, 0x00, 0x2a, 0xaa, 0xaa, 0x80, 0x15, 0x55, 0x55, 0x40, 0x0a, 0xaa, 0xaa, 0x80, 
	0x15, 0x55, 0x54, 0x00, 0x0a, 0xaa, 0x80, 0x00, 0x05, 0x54, 0x00, 0x00, 0x02, 0xa0, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00
};
// 'senzor_stanga4_on', 32x17px
const unsigned char bitmap_senzor_stanga4_on [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x7f, 0x00, 
	0x00, 0x07, 0xff, 0x80, 0x00, 0x3f, 0xff, 0x80, 0x00, 0xff, 0xff, 0x80, 0x07, 0xff, 0xff, 0x80, 
	0x1f, 0xff, 0xff, 0x80, 0x3f, 0xff, 0xff, 0x80, 0x3f, 0xff, 0xff, 0xc0, 0x1f, 0xff, 0xff, 0xc0, 
	0x1f, 0xff, 0xfe, 0x00, 0x0f, 0xff, 0xc0, 0x00, 0x0f, 0xfe, 0x00, 0x00, 0x07, 0xf0, 0x00, 0x00, 
	0x00, 0x80, 0x00, 0x00
};
// 'sound', 16x11px
const unsigned char bitmap_sound [] PROGMEM = {
	0x00, 0x00, 0x03, 0xfc, 0x40, 0x04, 0x44, 0x44, 0x4e, 0x24, 0x5e, 0x94, 0x5e, 0x94, 0x4e, 0x24, 
	0x44, 0x44, 0x40, 0x00, 0x7f, 0xc0
};
//define the pins of trigger and echo pins of the HC-SR04's
#define PIN_TRIG_DREAPTA 3
#define PIN_ECHO_DREAPTA 2
#define PIN_TRIG_CENTRU 5
#define PIN_ECHO_CENTRU 4
#define PIN_TRIG_STANGA 7
#define PIN_ECHO_STANGA 6
//define the number of sensors
#define NUMBER_OF_SENSORS 3

//grouping variables of the sensors in one structure
struct sensor_data{
  int echo_pin;
  int trig_pin;
  int distanta_cm;
};

//addding an array the size of the number of sensors
struct sensor_data sensor[NUMBER_OF_SENSORS];

int min_dist = 2; //minimum distance where the sensors are printing labels on the oled
int max_dist = 50; //maximum distance where the sensors are printing labels on the oled

//creating variables for calculating the labels printed on the oled
int dist_step_01;
int dist_step_02;
int dist_step_03;
int dist_step_04;

void setup(){
  //attributing pins to the sensors
  sensor[0].trig_pin = PIN_TRIG_DREAPTA;
	sensor[0].echo_pin = PIN_ECHO_DREAPTA;

	sensor[1].trig_pin = PIN_TRIG_CENTRU;
	sensor[1].echo_pin = PIN_ECHO_CENTRU;

	sensor[2].trig_pin = PIN_TRIG_STANGA;
	sensor[2].echo_pin = PIN_ECHO_STANGA;

  pinMode(sensor[0].trig_pin, OUTPUT);
  pinMode(sensor[0].echo_pin, INPUT);		
  pinMode(sensor[1].trig_pin, OUTPUT);
  pinMode(sensor[1].echo_pin, INPUT);		
  pinMode(sensor[2].trig_pin, OUTPUT);
  pinMode(sensor[2].echo_pin, INPUT);	

  //calculating the distance where the labels are switching between on and off
  dist_step_01 = min_dist + round((max_dist - min_dist)/4.0*4.0);
  dist_step_02 = min_dist + round((max_dist - min_dist)/4.0*3.0);
  dist_step_03 = min_dist + round((max_dist - min_dist)/4.0*2.0);
  dist_step_04 = min_dist + round((max_dist - min_dist)/4.0*1.0);

  u8g.setFont(u8g_font_tpssb);
  u8g.setColorIndex(1);

  Serial.begin(115200);
}

void loop(){
  //starting the sensors,acquiring data and calculating the distance in centimeters
  for(int i = 0; i<NUMBER_OF_SENSORS; i++){
    digitalWrite(sensor[i].trig_pin, HIGH);
    delayMicroseconds(10);
    digitalWrite(sensor[i].trig_pin, LOW);

    sensor[i].distanta_cm = pulseIn(sensor[i].echo_pin, HIGH);
    sensor[i].distanta_cm = sensor[i].distanta_cm / 58;
  
  //printing the values on serial port
 		Serial.print("Sensor ");
		Serial.print(i);		
		Serial.print("  ");				
		Serial.println(sensor[i].distanta_cm);		
  }
  
	delay(500);

  u8g.firstPage();
  do{
  u8g.drawBitmapP(29 ,0 ,16/8 ,12 ,bitmap_cm_unit);
  u8g.drawBitmapP(85 ,0 ,16/8 ,11 ,bitmap_sound);

  u8g.drawBitmapP(16 ,15 ,32/8 ,20 ,sensor[0].distanta_cm > dist_step_01 ? bitmap_senzor_stanga1_on : bitmap_senzor_stanga1_off);  
  u8g.drawBitmapP(20 ,26 ,32/8 ,19 ,sensor[0].distanta_cm > dist_step_02 ? bitmap_senzor_stanga2_on : bitmap_senzor_stanga2_off);
  u8g.drawBitmapP(22 ,36 ,32/8 ,19 ,sensor[0].distanta_cm > dist_step_03 ? bitmap_senzor_stanga3_on : bitmap_senzor_stanga3_off);
  u8g.drawBitmapP(27 ,46 ,32/8 ,17 ,sensor[0].distanta_cm > dist_step_04 ? bitmap_senzor_stanga4_on : bitmap_senzor_stanga4_off);

  u8g.drawBitmapP(48 ,13 ,32/8 ,14 ,sensor[1].distanta_cm > dist_step_01 ? bitmap_senzor_centru1_on : bitmap_senzor_centru1_off);
  u8g.drawBitmapP(48 ,23 ,32/8 ,15 ,sensor[1].distanta_cm > dist_step_02 ? bitmap_senzor_centru2_on : bitmap_senzor_centru2_off);
  u8g.drawBitmapP(48 ,35 ,32/8 ,13 ,sensor[1].distanta_cm > dist_step_03 ? bitmap_senzor_centru3_on : bitmap_senzor_centru3_off);
  u8g.drawBitmapP(47 ,46 ,32/8 ,13 ,sensor[1].distanta_cm > dist_step_04 ? bitmap_senzor_centru4_on : bitmap_senzor_centru4_off);

  u8g.drawBitmapP(80 ,13 ,32/8 ,22 ,sensor[2].distanta_cm > dist_step_01 ? bitmap_senzor_dreapta1_on : bitmap_senzor_dreapta1_off);
  u8g.drawBitmapP(78 ,26 ,32/8 ,19 ,sensor[2].distanta_cm > dist_step_02 ? bitmap_senzor_dreapta2_on : bitmap_senzor_dreapta2_off);
  u8g.drawBitmapP(75 ,35 ,32/8 ,21 ,sensor[2].distanta_cm > dist_step_03 ? bitmap_senzor_dreapta3_on : bitmap_senzor_dreapta3_off);
  u8g.drawBitmapP(72 ,47 ,32/8 ,16 ,sensor[2].distanta_cm > dist_step_04 ? bitmap_senzor_dreapta4_on : bitmap_senzor_dreapta4_off);

  }while(u8g.nextPage() );
}
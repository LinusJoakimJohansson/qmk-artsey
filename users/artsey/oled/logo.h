// Copyright (c) 2021 Mike "KemoNine" Crosson
// SPDX-License-Identifier: Apache-2.0

// Image generator (use a pixel art gif)
// https://joric.github.io/qle/#nav-logo

static const char PROGMEM icon_badslime_1[] = {
    0,  0,128,240,248, 28, 12, 12, 28,252,252, 12, 12, 28,248,240, 56, 28, 12,252,252, 12,236,252, 28, 12, 12, 12, 28,120,112,  0,  0,240,255, 63, 12, 12, 12, 12, 12,255,255,  6, 14, 31,123,241,192,  0,  0,255,255,  0,241,243,199,134,134,134,206,252,248,  0,  0,241,249,156,140,140,140, 12, 12, 29,121,224,128,128,224,121, 29, 12,252,253, 13, 12, 12,253,253, 29, 13, 13, 29,249,240,  0,  0,127,127, 97, 97, 97, 97, 96, 96,  0,  0,  1,127,127,  1,  0, 96, 96,127,127, 96, 96,  0, 31, 63,112, 96, 96,112, 63, 31,  0,
};

static const char PROGMEM icon_badslime_2[] = {
    252,  2,242, 10, 10,242,  2,252,  2,250, 10, 10, 10,242,  2,252,  2, 10, 10,250, 10, 10,  2,252,  2,242, 10, 10, 18,  2,252,  0,255,  0,127,  1,  1,127,  0,255,  0,127,  1,  1,  1,126,  0,255,  0,  0,  0,127,  0,  0,  0,255,  0, 48, 65, 65, 62,  0,255,  0,254,  1,253,133,133,  5,  1,254,  1, 29, 97,129, 97, 29,  1,254,  1,  5,  5,253,  5,  5,  1,254,  1,249,  5,  5,249,  1,254,  0,127,128,191,160,160,160,128,127,128,128,128,191,128,128,128,127,128,160,160,191,160,160,128,127,128,159,160,160,159,128,127,  0,
};

static const char PROGMEM boot_abullet[] = {
    128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,255,255,  3,  3,115,115, 51, 19, 19,  3,  3,  3,  3,  3,  3,  3,  1,  1,  1,  0,  0,  0,  0,  0,  1,  1,  1, 19,  3,  3,127,255,255,  0,  0,  0,  0,  0,224, 56, 12,  6,  6,140,152,240,  0,  0,  0, 48,120,200,134,  2,  0,128,192, 96,  0,  0,  0,  0,  0,  3,  1,  0,  0,  0,  0,  0,127, 14,  6,  3,  1,  1,  0, 63,  0,  0,  0,  0,  0,  0,  1,  3,  3,  7, 12, 24, 48, 24, 12,  6,  2,  0,
    0,  0,  0,  0,  0, 60,230,130,  2,  2,198, 60,  0,  0,  0,  0,  0,  0,  0, 48, 96,192,128,  0,  0,  0,128, 96, 48,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1, 15, 57,  1,131,130,134,  4, 12,  8,  0,  0,  0,  0,  0,128,225, 59, 14,  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  4,  2,  2,  3,  1, 31,241,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,240,  0,  0,  0,128,  0,  0,  0,  0,  1,  7,192, 96, 48, 16, 16, 48, 96,192,  0,  0,  1,  1,227, 30,  2,  2,  2,  2,  0,  0,
    0,255,  0,  0,  0,255,127, 30,  0,128,  0,  0,  7, 12, 24,240,  0,  0,  2, 19, 16, 16, 16, 28, 23, 16, 16,  0,  0,  0,  0,  0,  0, 31,  0,  0,  0,  0,  0,  0,  0,  1,  3,  2,  2,  2,  3,  1,  0,  0,224, 48, 24, 12,  6,  2,  2,  6,  4,236, 56,  0,  0,  0,  0,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  7, 12, 24, 16, 16, 24,  8, 12,  6,  3,  0,  0,  0,  0,  0,255,254,  0,  0,252,248,248,240,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,192,224,255,255,  0,  0,227,227,227,227,227, 99, 34,128,192,224,224,224,224,224,224,112,112, 32,  2,130,  2, 34,227,227,  0,  0,255,255,255,255,  0,  0,255,255,255,255,255,254,248,225,131, 19,115,243,241,249,248,252,252,254,255,255,255,252,248,225,192,  0, 63,255,255,255,252,252,252,252,252,252,252,252,252,252,252,252,252,225,195,143, 31, 31, 63, 63, 63, 63, 63, 63,159,143,199,224,248,255,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  2,  2,  3,  3,  3,  3,  3,  3,
    3,  3,  3,
};

static const char PROGMEM icon_caps_lock_abullet[] = {
    252,252,  3,  3,  3,  3,  3,  3,255,255,  0,  0,152,152,155,155,155,155,155,155,152,152,155,155,
};

static const char PROGMEM icon_mouse_abullet[] = {
    194, 34, 17, 17,217, 22, 16, 32,192,127,130,  2,  2,  2,  2,  2,130,127,
};

static const char PROGMEM icon_navigation_abullet[] = {
    255,255, 30, 60,120,240,224,255,255, 19, 51, 96,192,128,192, 97, 51, 19,
};

static const char PROGMEM icon_scroll_lock_abullet[] = {
    48, 24, 12,  6,227,  6, 12, 24, 48,128,  0,  0, 31,255, 31,  0,  0,128,
};

static const char PROGMEM icon_settings_abullet[] = {
    6, 31, 31,248,240,240,248, 31, 31,  6,192,240,240, 63, 31, 31, 63,240,240,192,
};

static const char PROGMEM artsey_logo[] = {
    0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
    0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
    0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
    };

    // 'Flareon', 32x32px
static const char PROGMEM flareon_logo[] = {
    0x00, 0x1f, 0x38, 0x00, 0x00, 0x67, 0x70, 0x00, 0x06, 0x8e, 0xc0, 0x08, 0x06, 0x9f, 0xe0, 0x0f, 
    0x0f, 0x93, 0x90, 0xbb, 0x3d, 0x2f, 0x31, 0xf2, 0x3d, 0x2c, 0xf3, 0x82, 0x3d, 0x17, 0xc6, 0x0c, 
    0x7d, 0x0f, 0xd4, 0x0c, 0x7e, 0x0f, 0xc8, 0x38, 0x7e, 0x0f, 0xd8, 0x70, 0x7e, 0x36, 0x18, 0xe0, 
    0x3e, 0x78, 0x01, 0x80, 0x3e, 0x7c, 0xc3, 0x00, 0x4c, 0xdf, 0x00, 0x40, 0xf8, 0x9e, 0x00, 0x60, 
    0xfa, 0xfd, 0x00, 0x38, 0xf7, 0x7c, 0x06, 0x1c, 0x37, 0xef, 0x0f, 0x9c, 0x37, 0x9c, 0x1f, 0x9c, 
    0x07, 0xe0, 0x3f, 0xb8, 0x03, 0xff, 0xff, 0xf0, 0x03, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xfe, 0x78, 
    0x0e, 0xff, 0xfe, 0x7c, 0x3e, 0x3f, 0xf0, 0x7c, 0x7e, 0x1f, 0x00, 0xf8, 0xff, 0x00, 0xc0, 0xf0, 
    0x68, 0x01, 0xe4, 0x00, 0x00, 0x03, 0xf4, 0x00, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x02, 0x80, 0x00
    };
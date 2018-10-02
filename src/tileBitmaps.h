#ifndef tileBitmaps_h
#define tileBitmaps_h

const uint8_t PROGMEM bossLock_tiles[] = {
    // width, height,
    16, 16,
    // frame 0
    0xff,0x01,0x80,0xc6,0xe7,0xf7,0x3b,0x3d,0x3d,0x3b,0xf7,0xe7,0xc6,0x80,0x01,0xff,0xff,0xfc,0xfb,0xf7,0xef,0xdf,0xb6,0x70,0x70,0xbe,0xdf,0xef,0xf7,0xfb,0xfc,0xff,
};

const uint8_t PROGMEM chest_tiles[] = {
    // width, height,
    12, 8,
    // frame 0
    0xe1,0x8e,0x08,0x08,0x38,0x48,0x48,0x38,0x08,0x08,0x8e,0xe1,
    // frame 1
    0xc0,0x9e,0x12,0x12,0x72,0x72,0x72,0x72,0x12,0x12,0x9e,0xc0,
};

const uint8_t PROGMEM explosion_tiles[] = {
    // width, height,
    14, 16,
    // frame 0
    0xf1,0xed,0x9d,0x7b,0xf7,0xf7,0xef,0xef,0xf7,0xf7,0x7b,0x9d,0x6d,0xf1,0x8f,0xb7,0xb9,0xde,0xef,0xaf,0x37,0xb7,0xef,0xef,0xde,0xb9,0xb6,0x8e,
};

const uint8_t PROGMEM heartDot_tiles[] = {
    // width, height,
    3, 8,
    // frame 0
    0x03,0x06,0x03,
    // frame 1
    0x04,0x04,0x04,
};

const uint8_t PROGMEM horizontalTriggerDoor_tiles[] = {
    // width, height,
    16, 8,
    // frame 0
    0x00,0x7e,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x7e,0x00,
};

const uint8_t PROGMEM hudBFrame_tiles[] = {
    // width, height,
    5, 8,
    // frame 0
    0xff,0xc1,0xd5,0xeb,0xff,
};

const uint8_t PROGMEM lock_tiles[] = {
    // width, height,
    16, 16,
    // frame 0
    0xff,0xff,0x07,0x03,0x13,0x03,0xc3,0xc3,0xc3,0xc3,0x03,0x13,0x03,0x07,0xff,0xff,0xff,0xff,0xe0,0xc0,0xc8,0xc0,0xc2,0xc3,0xc3,0xc0,0xc0,0xc8,0xc0,0xe0,0xff,0xff,
};

const uint8_t PROGMEM logo_tiles[] = {
    // width, height,
    16, 8,
    // frame 0
    0xff,0xd5,0xab,0xd5,0xff,0x00,0x1f,0x1f,0x18,0x18,0xff,0xff,0x00,0x03,0xff,0xff,
};

const uint8_t PROGMEM map_tiles[] = {
    // width, height,
    16, 16,
    // frame 0
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    // frame 1
    0x00,0xfc,0xa2,0x42,0x82,0x42,0xc2,0x42,0x42,0x3c,0x00,0x3c,0x72,0x42,0x3c,0x80,0x00,0x31,0x6a,0xeb,0x8a,0x8a,0x73,0x80,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    // frame 2
    0x00,0xfc,0xa2,0x52,0xa2,0xc2,0xfc,0x01,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x31,0x5a,0x6b,0x59,0x68,0x70,0x86,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    // frame 3
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x7c,0x6a,0x52,0x6a,0x52,0x62,0x44,0x44,0x7c,0x01,0x7c,0x62,0x42,0x64,0x3d,
    // frame 4
    0x8e,0xb1,0xb1,0x29,0x3e,0x80,0xbf,0xa8,0x34,0x79,0x3e,0x00,0xff,0xd1,0x3e,0x80,0x03,0x79,0x54,0x2a,0x56,0x29,0x90,0xc8,0xd3,0x9c,0x00,0x3e,0x52,0x64,0x78,0x03,
    // frame 5
    0x00,0xee,0xaa,0xee,0xee,0xee,0xee,0xee,0xee,0xee,0xee,0xee,0xee,0xaa,0xee,0x00,0x00,0x77,0x55,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x55,0x77,0x00,
    // frame 6
    0x40,0x00,0x10,0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x04,0x04,0x00,0x00,0x40,0x80,0x08,0x08,0x40,0x40,0x02,0x02,0x00,0x10,0x10,0x00,0x00,0x04,0x04,0x00,0x80,
    // frame 7
    0x0a,0xee,0xee,0x0e,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x0e,0xee,0xee,0x0a,0x20,0xbf,0xbf,0xe0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xe0,0xbf,0xbf,0x20,
    // frame 8
    0xff,0xff,0xff,0xff,0xfd,0xfb,0xfd,0xff,0xff,0xff,0x7f,0xbf,0x7f,0xff,0xff,0xff,0xff,0xff,0xf7,0xeb,0xf7,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0xdf,0xff,
};

const uint8_t PROGMEM pot_tiles[] = {
    // width, height,
    8, 8,
    // frame 0
    0xe3,0xcd,0x90,0x96,0x96,0x90,0xcd,0xe3,
};

const uint8_t PROGMEM projectile_tiles[] = {
    // width, height,
    8, 8,
    // frame 0
    0xc3,0xbd,0x66,0x42,0x42,0x66,0xbd,0xc3,
};

const uint8_t PROGMEM secretWall_tiles[] = {
    // width, height,
    16, 16,
    // frame 0
    0x01,0x3e,0xb2,0x2a,0x9c,0x00,0x9e,0x3c,0x30,0x02,0x06,0xe0,0x9c,0xc2,0x3c,0x81,0x80,0x7f,0x53,0x6c,0x30,0x01,0x02,0x05,0x00,0x00,0x00,0x3c,0x56,0x6a,0x7c,0x81,
};

const uint8_t PROGMEM spike_tiles[] = {
    // width, height,
    8, 8,
    // frame 0
    0x24,0x66,0xdb,0x24,0x24,0xdb,0x66,0x24,
};

const uint8_t PROGMEM squareIcon_tiles[] = {
    // width, height,
    3, 8,
    // frame 0
    0x00,0x00,0x00,
    // frame 1
    0x07,0x05,0x07,
    // frame 2
    0x07,0x07,0x07,
};

const uint8_t PROGMEM switch_tiles[] = {
    // width, height,
    8, 8,
    // frame 0
    0xe0,0x0e,0x2e,0x20,0x3d,0x01,0x01,0x01,
};

const uint8_t PROGMEM tinyFont_tiles[] = {
    // width, height,
    4, 8,
    // frame 0
    0xf0,0x50,0x50,0xf0,
    // frame 1
    0xff,0x9b,0x9b,0x9e,
    // frame 2
    0xff,0xb9,0xb9,0x96,
    // frame 3
    0xff,0x95,0x95,0xd1,
    // frame 4
    0x9f,0xf4,0x94,0x0f,
    // frame 5
    0xfc,0x29,0x5f,0x91,
    // frame 6
    0xff,0x18,0x38,0xf8,
    // frame 7
    0xff,0x92,0x94,0xff,
    // frame 8
    0xff,0x95,0xd5,0xf7,
    // frame 9
    0xbf,0xb5,0xdd,0xd7,
    // frame 10
    0xf1,0x8f,0x81,0xf1,
    // frame 11
    0xf7,0x88,0xc8,0xf7,
    // frame 12
    0x79,0xc6,0x46,0x79,
    // frame 13
    0x09,0xad,0x0b,0x09,
};

const uint8_t PROGMEM titleKey_tiles[] = {
    // width, height,
    9, 24,
    // frame 0
    0x38,0x7c,0xee,0xc7,0x83,0xc7,0xee,0x7c,0x38,0xfc,0x00,0x00,0xff,0x01,0xff,0x00,0x00,0xfc,0xd8,0xf8,0x70,0xff,0xac,0xff,0x00,0x00,0x03,
};

const uint8_t PROGMEM titleText_tiles[] = {
    // width, height,
    55, 16,
    // frame 0
    0xf8,0x0c,0x0c,0xfc,0xfc,0xf0,0x00,0xfc,0xfc,0x0c,0x0c,0xfc,0xfc,0xf8,0xf0,0x00,0xfc,0xfc,0x0c,0x0c,0xfc,0xfc,0xf8,0xf0,0x00,0x3c,0xfc,0x80,0x80,0xfc,0xfc,0xfc,0x3c,0x00,0xfc,0xfc,0xfc,0xf8,0xe0,0x80,0xe0,0xc3,0x07,0x0e,0xfc,0x18,0xfc,0x0e,0x07,0xc3,0x00,0x0c,0xfc,0xfc,0xf0,0x3f,0x06,0x06,0x3f,0x3f,0x3f,0x00,0x3f,0x3f,0x06,0x06,0x3f,0x3f,0x3f,0x3d,0x00,0x3f,0x3f,0x30,0x30,0x3f,0x3f,0x1f,0x0f,0x00,0x00,0x01,0x3f,0x3f,0x3f,0x3f,0x01,0x00,0x00,0x3f,0x3f,0x3f,0x00,0x03,0x0f,0x1f,0x8f,0x00,0x00,0xff,0xc0,0xff,0x00,0x00,0x3f,0x06,0x06,0x3f,0x3f,0x3f,
};

const uint8_t PROGMEM torch_tiles[] = {
    // width, height,
    8, 8,
    // frame 0
    0xe3,0x8d,0x12,0x12,0x12,0x12,0x8d,0xe3,
    // frame 1
    0xe3,0x8d,0x1e,0x1e,0x1e,0x1e,0x8d,0xe3,
};

const uint8_t PROGMEM verticalTriggerDoor_tiles[] = {
    // width, height,
    8, 16,
    // frame 0
    0x00,0xfe,0x02,0x02,0x02,0x02,0xfe,0x00,0x00,0x7f,0x40,0x40,0x40,0x40,0x7f,0x00,
};

#endif
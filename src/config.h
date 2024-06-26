/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#define USB_SUSPEND_WAKEUP_DELAY 0
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 40

#define FIRMWARE_VERSION u8"gdQQ7/vWG5l"
#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61
#define LAYER_STATE_16BIT
#define COMBO_COUNT 1

#define TAPPING_TERM_PER_KEY
#define RGB_MATRIX_STARTUP_SPD 60


#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_0_0_255,
  HSV_38_226_214,
  HSV_58_218_204,
  HSV_173_227_226,
  HSV_201_223_226,
  HSV_159_81_181,
  HSV_0_255_255,
  HSV_84_197_199,
  HSV_147_255_255,
  HSV_194_212_205,
  HSV_18_206_121,
  HSV_24_195_230,
  HSV_81_88_147,
  HSV_115_159_201,
  HSV_223_96_217,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
  DANCE_10,
  DANCE_11,
  DANCE_12,
  DANCE_13,
  DANCE_14,
  DANCE_15,
  DANCE_16,
  DANCE_17,
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    TD(DANCE_0),    KC_7,           KC_5,           KC_3,           KC_1,           KC_9,           TD(DANCE_1),                                    TD(DANCE_9),    KC_8,           KC_0,           KC_2,           KC_4,           KC_6,           TD(DANCE_10),   
    KC_ESCAPE,      CSA_APOS,       KC_COMMA,       KC_DOT,         KC_P,           KC_Y,           TD(DANCE_2),                                    TD(DANCE_11),   KC_F,           KC_G,           KC_C,           KC_R,           KC_L,           CSA_MOMEG,      
    KC_BSPC,        MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_O),MT(MOD_LSFT, KC_E),MT(MOD_LCTL, KC_U),KC_I,           TD(DANCE_3),                                                                    TD(DANCE_12),   KC_D,           MT(MOD_LCTL, KC_H),MT(MOD_LSFT, KC_T),MT(MOD_LALT, KC_N),MT(MOD_LGUI, KC_S),KC_ENTER,       
    KC_DELETE,      KC_SCLN,        KC_Q,           KC_J,           KC_K,           KC_X,                                           KC_B,           KC_M,           KC_W,           KC_V,           KC_Z,           KC_TAB,         
    TD(DANCE_4),    TD(DANCE_5),    TD(DANCE_6),    TD(DANCE_7),    TD(DANCE_8),    TO(1),                                                                                                          TO(2),          TD(DANCE_13),   TD(DANCE_14),   TD(DANCE_15),   TD(DANCE_16),   TD(DANCE_17),   
    LT(7,KC_SPACE), MO(6),          MO(8),                          MO(9),          MO(5),          MO(4)
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,                                           KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT, 
    KC_ESCAPE,      KC_LEFT_ALT,    KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_TRANSPARENT, KC_B,           CSA_CCED,       KC_UP,          KC_I,           KC_RIGHT_ALT,   KC_J,           
    KC_Y,           KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_TRANSPARENT, KC_K,           KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_RIGHT_SHIFT, KC_L,           
    KC_H,           KC_LEFT_CTRL,   KC_Z,           KC_X,           KC_C,           KC_V,                                           KC_M,           KC_N,           KC_O,           KC_P,           KC_RIGHT_CTRL,  KC_U,           
    KC_TRANSPARENT, ST_MACRO_0,     ST_MACRO_1,     ST_MACRO_2,     ST_MACRO_3,     TO(0),                                                                                                          TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_SPACE,       KC_TAB,         KC_ENTER,                       MO(9),          KC_DELETE,      KC_BSPC
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,                                           KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_ESCAPE,      KC_A,           KC_B,           KC_C,           KC_D,           KC_E,           KC_F,                                           KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_G,           KC_H,           KC_I,           KC_J,           KC_K,           KC_L,           KC_M,                                                                           KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_N,           KC_O,           KC_P,           KC_Q,           KC_R,           KC_S,                                           KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_SHIFT,  KC_LEFT_CTRL,   TO(0),                                                                                                          TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_SPACE,       KC_TAB,         KC_ENTER,                       MO(9),          KC_DELETE,      KC_BSPC
  ),
  [3] = LAYOUT_moonlander(
    QK_BOOT,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          MOON_LED_LEVEL, 
    KC_NO,          RGB_SPI,        RGB_SAI,        RGB_VAI,        RGB_HUI,        QK_DYNAMIC_TAPPING_TERM_UP,KC_NO,                                          KC_NO,          HSV_0_0_255,    HSV_38_226_214, HSV_58_218_204, HSV_173_227_226,HSV_201_223_226,KC_NO,          
    KC_NO,          RGB_SPD,        RGB_SAD,        RGB_VAD,        RGB_HUD,        QK_DYNAMIC_TAPPING_TERM_DOWN,KC_NO,                                                                          KC_NO,          HSV_159_81_181, HSV_0_255_255,  HSV_84_197_199, HSV_147_255_255,HSV_194_212_205,KC_NO,          
    KC_NO,          RGB_MODE_FORWARD,RGB_SLD,        TOGGLE_LAYER_COLOR,RGB_TOG,        QK_DYNAMIC_TAPPING_TERM_PRINT,                                HSV_18_206_121, HSV_24_195_230, HSV_81_88_147,  HSV_115_159_201,HSV_223_96_217, KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          TO(0),                                                                                                          TO(0),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_UNDS,        KC_EXLM,        CSA_QEST,       LSFT(KC_P),     LSFT(KC_Y),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LSFT(KC_F),     LSFT(KC_G),     LSFT(KC_C),     LSFT(KC_R),     LSFT(KC_L),     CSA_SECT,       
    KC_TRANSPARENT, LSFT(KC_A),     LSFT(KC_O),     LSFT(KC_E),     LSFT(KC_U),     LSFT(KC_I),     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, LSFT(KC_D),     LSFT(KC_H),     LSFT(KC_T),     LSFT(KC_N),     LSFT(KC_S),     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_COLN,        LSFT(KC_Q),     LSFT(KC_J),     LSFT(KC_K),     LSFT(KC_X),                                     LSFT(KC_B),     LSFT(KC_M),     LSFT(KC_W),     LSFT(KC_V),     LSFT(KC_Z),     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_4,     KC_PERC,        KC_PLUS,        ST_MACRO_5,     CSA_DCRC,       KC_TRANSPARENT,                                 KC_TRANSPARENT, CSA_DACT,       CSA_BSLS,       CSA_LBRC,       CSA_RBRC,       CSA_DTRM,       CSA_PARG,       
    KC_TRANSPARENT, KC_MINUS,       CSA_LCBR,       CSA_RCBR,       KC_EQUAL,       KC_AT,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, RCTL(CSA_CCED), KC_LPRN,        CSA_LESS,       CSA_GRTR,       KC_RPRN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, CSA_DQOT,       KC_AMPR,        CSA_PIPE,       KC_ASTR,        CSA_DCED,                                       CSA_DGRV,       CSA_SLASH,      KC_HASH,        ST_MACRO_6,     KC_DLR,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_Y),     KC_F2,          LCTL(LSFT(KC_N)),LCTL(KC_S),     KC_ENTER,       KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_INSERT,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          CSA_CURR,       
    KC_TRANSPARENT, LCTL(KC_A),     LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_V),     LCTL(KC_F),     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_NUM,         KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_Z),     LCTL(KC_W),     LCTL(KC_MINUS), LCTL(KC_EQUAL), LCTL(LSFT(KC_I)),                                KC_CAPS,        KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MS_WH_UP,    KC_MS_WH_LEFT,  KC_MS_UP,       KC_MS_WH_RIGHT, LGUI(KC_1),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LGUI(KC_4),     KC_HOME,        KC_UP,          KC_END,         KC_PAGE_UP,     CSA_8NOT,       
    KC_TRANSPARENT, KC_MS_WH_DOWN,  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    LGUI(KC_2),     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, LGUI(KC_5),     KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_PGDN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, LGUI(KC_LEFT),  LGUI(KC_DOWN),  LGUI(KC_UP),    LGUI(KC_RIGHT), LGUI(KC_3),                                     LGUI(KC_6),     KC_MS_BTN1,     KC_MS_BTN2,     KC_MS_BTN3,     KC_MS_BTN4,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_HASH,        KC_EXLM,        KC_DLR,         KC_1,           KC_9,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_N,           KC_K,           KC_J,           KC_Q,           KC_T,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_5,           KC_8,           KC_0,           KC_7,           KC_3,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, LSFT(KC_A),     LSFT(KC_Y),     LSFT(KC_U),     LSFT(KC_E),     LSFT(KC_I),     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LPRN,        KC_6,           KC_4,           KC_2,           KC_UNDS,                                        KC_R,           KC_X,           KC_G,           KC_F,           KC_H,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                                                                                          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_NO,          KC_TRANSPARENT,                 KC_NO,          KC_NO,          KC_NO
  ),
  [9] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_7,           KC_5,           KC_3,           KC_1,           KC_9,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_8,           KC_0,           KC_2,           KC_4,           KC_6,           KC_TRANSPARENT, 
    KC_ESCAPE,      CSA_APOS,       KC_COMMA,       KC_DOT,         KC_P,           KC_Y,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F,           KC_G,           KC_C,           KC_R,           KC_L,           CSA_QEST,       
    KC_BSPC,        KC_A,           KC_O,           KC_E,           KC_U,           KC_I,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_D,           KC_H,           KC_T,           KC_N,           KC_S,           KC_ENTER,       
    KC_DELETE,      KC_EXLM,        KC_Q,           KC_J,           KC_K,           KC_X,                                           KC_B,           KC_M,           KC_W,           KC_V,           KC_Z,           KC_TAB,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                                                                                          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_SPACE,       KC_LEFT_SHIFT,  KC_NO,                          KC_TRANSPARENT, KC_NO,          KC_NO
  ),
};
const uint16_t PROGMEM combo0[] = { TO(2), TO(1), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TO(3)),
};
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case TD(DANCE_0):
            return g_tapping_term + 200;
        case KC_BSPC:
            return g_tapping_term -35;
        case KC_DELETE:
            return g_tapping_term -35;
        case TD(DANCE_10):
            return g_tapping_term + 400;
        case LCTL(KC_A):
            return g_tapping_term + 800;
        case LCTL(KC_X):
            return g_tapping_term + 800;
        case LCTL(KC_C):
            return g_tapping_term + 800;
        case LCTL(KC_V):
            return g_tapping_term + 800;
        default:
            return g_tapping_term;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [3] = { {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,218,204}, {0,218,204}, {0,0,255}, {0,0,0}, {0,0,0}, {86,218,204}, {0,218,204}, {0,0,255}, {0,0,0}, {0,0,0}, {86,218,204}, {0,218,204}, {208,255,255}, {0,0,0}, {0,0,0}, {86,218,204}, {0,218,204}, {0,0,255}, {0,0,0}, {0,0,0}, {86,218,204}, {0,218,204}, {152,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,125,215}, {0,0,150}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {201,223,226}, {194,204,203}, {223,96,217}, {0,0,0}, {0,0,0}, {173,227,226}, {139,220,210}, {115,159,201}, {0,0,0}, {0,0,0}, {58,218,204}, {84,197,199}, {81,88,147}, {0,0,0}, {0,0,0}, {38,226,214}, {0,255,255}, {21,195,230}, {0,0,0}, {0,0,0}, {0,0,255}, {159,81,181}, {18,206,121}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,125,217} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [7] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [8] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [9] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );   
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
    case 8:
      set_layer_color(8);
      break;
    case 9:
      set_layer_color(9);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_RCTL(SS_TAP(X_I)) SS_DELAY(100) SS_TAP(X_1));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_RCTL(SS_TAP(X_I)) SS_DELAY(100) SS_TAP(X_2));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_RCTL(SS_TAP(X_I)) SS_DELAY(100) SS_TAP(X_3));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_RCTL(SS_TAP(X_I)) SS_DELAY(100) SS_TAP(X_4));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_Z)) SS_DELAY(100) SS_RALT(SS_TAP(X_X)) SS_DELAY(100) SS_TAP(X_LEFT));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_LBRC)) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LBRC) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
    case HSV_0_0_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(0,0,255);
        }
        return false;
    case HSV_38_226_214:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(38,226,214);
        }
        return false;
    case HSV_58_218_204:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(58,218,204);
        }
        return false;
    case HSV_173_227_226:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(173,227,226);
        }
        return false;
    case HSV_201_223_226:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(201,223,226);
        }
        return false;
    case HSV_159_81_181:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(159,81,181);
        }
        return false;
    case HSV_0_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(0,255,255);
        }
        return false;
    case HSV_84_197_199:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(84,197,199);
        }
        return false;
    case HSV_147_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(147,255,255);
        }
        return false;
    case HSV_194_212_205:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(194,212,205);
        }
        return false;
    case HSV_18_206_121:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(18,206,121);
        }
        return false;
    case HSV_24_195_230:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(24,195,230);
        }
        return false;
    case HSV_81_88_147:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(81,88,147);
        }
        return false;
    case HSV_115_159_201:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(115,159,201);
        }
        return false;
    case HSV_223_96_217:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(223,96,217);
        }
        return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[18];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(LSFT(KC_S)));
        tap_code16(LGUI(LSFT(KC_S)));
        tap_code16(LGUI(LSFT(KC_S)));
    }
    if(state->count > 3) {
        tap_code16(LGUI(LSFT(KC_S)));
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(LGUI(LSFT(KC_S))); break;
        case SINGLE_HOLD: register_code16(LGUI(KC_D)); break;
        case DOUBLE_TAP: register_code16(LGUI(LSFT(KC_S))); register_code16(LGUI(LSFT(KC_S))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(LSFT(KC_S))); register_code16(LGUI(LSFT(KC_S)));
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(LGUI(LSFT(KC_S))); break;
        case SINGLE_HOLD: unregister_code16(LGUI(KC_D)); break;
        case DOUBLE_TAP: unregister_code16(LGUI(LSFT(KC_S))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(LSFT(KC_S))); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MEDIA_PLAY_PAUSE);
        tap_code16(KC_MEDIA_PLAY_PAUSE);
        tap_code16(KC_MEDIA_PLAY_PAUSE);
    }
    if(state->count > 3) {
        tap_code16(KC_MEDIA_PLAY_PAUSE);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_MEDIA_PLAY_PAUSE); break;
        case SINGLE_HOLD: register_code16(KC_F8); break;
        case DOUBLE_TAP: register_code16(KC_MEDIA_PLAY_PAUSE); register_code16(KC_MEDIA_PLAY_PAUSE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MEDIA_PLAY_PAUSE); register_code16(KC_MEDIA_PLAY_PAUSE);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_MEDIA_PLAY_PAUSE); break;
        case SINGLE_HOLD: unregister_code16(KC_F8); break;
        case DOUBLE_TAP: unregister_code16(KC_MEDIA_PLAY_PAUSE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MEDIA_PLAY_PAUSE); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_CALCULATOR);
        tap_code16(KC_CALCULATOR);
        tap_code16(KC_CALCULATOR);
    }
    if(state->count > 3) {
        tap_code16(KC_CALCULATOR);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_CALCULATOR); break;
        case SINGLE_HOLD: register_code16(KC_F7); break;
        case DOUBLE_TAP: register_code16(KC_CALCULATOR); register_code16(KC_CALCULATOR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_CALCULATOR); register_code16(KC_CALCULATOR);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_CALCULATOR); break;
        case SINGLE_HOLD: unregister_code16(KC_F7); break;
        case DOUBLE_TAP: unregister_code16(KC_CALCULATOR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_CALCULATOR); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MY_COMPUTER);
        tap_code16(KC_MY_COMPUTER);
        tap_code16(KC_MY_COMPUTER);
    }
    if(state->count > 3) {
        tap_code16(KC_MY_COMPUTER);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_MY_COMPUTER); break;
        case SINGLE_HOLD: register_code16(KC_F6); break;
        case DOUBLE_TAP: register_code16(KC_MY_COMPUTER); register_code16(KC_MY_COMPUTER); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MY_COMPUTER); register_code16(KC_MY_COMPUTER);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_MY_COMPUTER); break;
        case SINGLE_HOLD: unregister_code16(KC_F6); break;
        case DOUBLE_TAP: unregister_code16(KC_MY_COMPUTER); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MY_COMPUTER); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_TAB));
        tap_code16(LGUI(KC_TAB));
        tap_code16(LGUI(KC_TAB));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_TAB));
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_TAB)); break;
        case SINGLE_HOLD: register_code16(KC_F1); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_TAB)); register_code16(LGUI(KC_TAB)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_TAB)); register_code16(LGUI(KC_TAB));
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_TAB)); break;
        case SINGLE_HOLD: unregister_code16(KC_F1); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_TAB)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_TAB)); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(LSFT(KC_TAB))));
        tap_code16(LALT(LCTL(LSFT(KC_TAB))));
        tap_code16(LALT(LCTL(LSFT(KC_TAB))));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(LSFT(KC_TAB))));
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(LSFT(KC_TAB)))); break;
        case SINGLE_HOLD: register_code16(KC_F2); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(LSFT(KC_TAB)))); register_code16(LALT(LCTL(LSFT(KC_TAB)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(LSFT(KC_TAB)))); register_code16(LALT(LCTL(LSFT(KC_TAB))));
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_TAB)))); break;
        case SINGLE_HOLD: unregister_code16(KC_F2); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_TAB)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_TAB)))); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(LSFT(KC_TAB)));
        tap_code16(LCTL(LSFT(KC_TAB)));
        tap_code16(LCTL(LSFT(KC_TAB)));
    }
    if(state->count > 3) {
        tap_code16(LCTL(LSFT(KC_TAB)));
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(LCTL(LSFT(KC_TAB))); break;
        case SINGLE_HOLD: register_code16(KC_F3); break;
        case DOUBLE_TAP: register_code16(LCTL(LSFT(KC_TAB))); register_code16(LCTL(LSFT(KC_TAB))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(LSFT(KC_TAB))); register_code16(LCTL(LSFT(KC_TAB)));
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(LCTL(LSFT(KC_TAB))); break;
        case SINGLE_HOLD: unregister_code16(KC_F3); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LSFT(KC_TAB))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(LSFT(KC_TAB))); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_TAB));
        tap_code16(LCTL(KC_TAB));
        tap_code16(LCTL(KC_TAB));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_TAB));
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_TAB)); break;
        case SINGLE_HOLD: register_code16(KC_F4); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_TAB)); register_code16(LCTL(KC_TAB)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_TAB)); register_code16(LCTL(KC_TAB));
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_TAB)); break;
        case SINGLE_HOLD: unregister_code16(KC_F4); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_TAB)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_TAB)); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(tap_dance_state_t *state, void *user_data);
void dance_8_finished(tap_dance_state_t *state, void *user_data);
void dance_8_reset(tap_dance_state_t *state, void *user_data);

void on_dance_8(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(KC_TAB)));
        tap_code16(LALT(LCTL(KC_TAB)));
        tap_code16(LALT(LCTL(KC_TAB)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(KC_TAB)));
    }
}

void dance_8_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(KC_TAB))); break;
        case SINGLE_HOLD: register_code16(KC_F5); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(KC_TAB))); register_code16(LALT(LCTL(KC_TAB))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(KC_TAB))); register_code16(LALT(LCTL(KC_TAB)));
    }
}

void dance_8_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(KC_TAB))); break;
        case SINGLE_HOLD: unregister_code16(KC_F5); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(KC_TAB))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(KC_TAB))); break;
    }
    dance_state[8].step = 0;
}
void on_dance_9(tap_dance_state_t *state, void *user_data);
void dance_9_finished(tap_dance_state_t *state, void *user_data);
void dance_9_reset(tap_dance_state_t *state, void *user_data);

void on_dance_9(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_AUDIO_VOL_UP);
        tap_code16(KC_AUDIO_VOL_UP);
        tap_code16(KC_AUDIO_VOL_UP);
    }
    if(state->count > 3) {
        tap_code16(KC_AUDIO_VOL_UP);
    }
}

void dance_9_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP: register_code16(KC_AUDIO_VOL_UP); break;
        case SINGLE_HOLD: register_code16(KC_F9); break;
        case DOUBLE_TAP: register_code16(KC_AUDIO_VOL_UP); register_code16(KC_AUDIO_VOL_UP); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_AUDIO_VOL_UP); register_code16(KC_AUDIO_VOL_UP);
    }
}

void dance_9_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
        case SINGLE_TAP: unregister_code16(KC_AUDIO_VOL_UP); break;
        case SINGLE_HOLD: unregister_code16(KC_F9); break;
        case DOUBLE_TAP: unregister_code16(KC_AUDIO_VOL_UP); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_AUDIO_VOL_UP); break;
    }
    dance_state[9].step = 0;
}
void on_dance_10(tap_dance_state_t *state, void *user_data);
void dance_10_finished(tap_dance_state_t *state, void *user_data);
void dance_10_reset(tap_dance_state_t *state, void *user_data);

void on_dance_10(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(KC_DELETE)));
        tap_code16(LALT(LCTL(KC_DELETE)));
        tap_code16(LALT(LCTL(KC_DELETE)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(KC_DELETE)));
    }
}

void dance_10_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(KC_DELETE))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_F4)); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(KC_DELETE))); register_code16(LALT(LCTL(KC_DELETE))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(KC_DELETE))); register_code16(LALT(LCTL(KC_DELETE)));
    }
}

void dance_10_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(KC_DELETE))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_F4)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(KC_DELETE))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(KC_DELETE))); break;
    }
    dance_state[10].step = 0;
}
void on_dance_11(tap_dance_state_t *state, void *user_data);
void dance_11_finished(tap_dance_state_t *state, void *user_data);
void dance_11_reset(tap_dance_state_t *state, void *user_data);

void on_dance_11(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_AUDIO_VOL_DOWN);
        tap_code16(KC_AUDIO_VOL_DOWN);
        tap_code16(KC_AUDIO_VOL_DOWN);
    }
    if(state->count > 3) {
        tap_code16(KC_AUDIO_VOL_DOWN);
    }
}

void dance_11_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[11].step = dance_step(state);
    switch (dance_state[11].step) {
        case SINGLE_TAP: register_code16(KC_AUDIO_VOL_DOWN); break;
        case SINGLE_HOLD: register_code16(KC_F10); break;
        case DOUBLE_TAP: register_code16(KC_AUDIO_VOL_DOWN); register_code16(KC_AUDIO_VOL_DOWN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_AUDIO_VOL_DOWN); register_code16(KC_AUDIO_VOL_DOWN);
    }
}

void dance_11_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[11].step) {
        case SINGLE_TAP: unregister_code16(KC_AUDIO_VOL_DOWN); break;
        case SINGLE_HOLD: unregister_code16(KC_F10); break;
        case DOUBLE_TAP: unregister_code16(KC_AUDIO_VOL_DOWN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_AUDIO_VOL_DOWN); break;
    }
    dance_state[11].step = 0;
}
void on_dance_12(tap_dance_state_t *state, void *user_data);
void dance_12_finished(tap_dance_state_t *state, void *user_data);
void dance_12_reset(tap_dance_state_t *state, void *user_data);

void on_dance_12(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_AUDIO_MUTE);
        tap_code16(KC_AUDIO_MUTE);
        tap_code16(KC_AUDIO_MUTE);
    }
    if(state->count > 3) {
        tap_code16(KC_AUDIO_MUTE);
    }
}

void dance_12_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[12].step = dance_step(state);
    switch (dance_state[12].step) {
        case SINGLE_TAP: register_code16(KC_AUDIO_MUTE); break;
        case SINGLE_HOLD: register_code16(KC_F11); break;
        case DOUBLE_TAP: register_code16(KC_AUDIO_MUTE); register_code16(KC_AUDIO_MUTE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_AUDIO_MUTE); register_code16(KC_AUDIO_MUTE);
    }
}

void dance_12_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[12].step) {
        case SINGLE_TAP: unregister_code16(KC_AUDIO_MUTE); break;
        case SINGLE_HOLD: unregister_code16(KC_F11); break;
        case DOUBLE_TAP: unregister_code16(KC_AUDIO_MUTE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_AUDIO_MUTE); break;
    }
    dance_state[12].step = 0;
}
void on_dance_13(tap_dance_state_t *state, void *user_data);
void dance_13_finished(tap_dance_state_t *state, void *user_data);
void dance_13_reset(tap_dance_state_t *state, void *user_data);

void on_dance_13(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(LSFT(KC_X))));
        tap_code16(LALT(LCTL(LSFT(KC_X))));
        tap_code16(LALT(LCTL(LSFT(KC_X))));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(LSFT(KC_X))));
    }
}

void dance_13_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[13].step = dance_step(state);
    switch (dance_state[13].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(LSFT(KC_X)))); break;
        case SINGLE_HOLD: register_code16(KC_F12); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(LSFT(KC_X)))); register_code16(LALT(LCTL(LSFT(KC_X)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(LSFT(KC_X)))); register_code16(LALT(LCTL(LSFT(KC_X))));
    }
}

void dance_13_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[13].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_X)))); break;
        case SINGLE_HOLD: unregister_code16(KC_F12); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_X)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_X)))); break;
    }
    dance_state[13].step = 0;
}
void on_dance_14(tap_dance_state_t *state, void *user_data);
void dance_14_finished(tap_dance_state_t *state, void *user_data);
void dance_14_reset(tap_dance_state_t *state, void *user_data);

void on_dance_14(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(LSFT(KC_B))));
        tap_code16(LALT(LCTL(LSFT(KC_B))));
        tap_code16(LALT(LCTL(LSFT(KC_B))));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(LSFT(KC_B))));
    }
}

void dance_14_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[14].step = dance_step(state);
    switch (dance_state[14].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(LSFT(KC_B)))); break;
        case SINGLE_HOLD: register_code16(KC_F13); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(LSFT(KC_B)))); register_code16(LALT(LCTL(LSFT(KC_B)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(LSFT(KC_B)))); register_code16(LALT(LCTL(LSFT(KC_B))));
    }
}

void dance_14_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[14].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_B)))); break;
        case SINGLE_HOLD: unregister_code16(KC_F13); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_B)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_B)))); break;
    }
    dance_state[14].step = 0;
}
void on_dance_15(tap_dance_state_t *state, void *user_data);
void dance_15_finished(tap_dance_state_t *state, void *user_data);
void dance_15_reset(tap_dance_state_t *state, void *user_data);

void on_dance_15(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(LGUI(LSFT(KC_COMMA)))));
        tap_code16(LALT(LCTL(LGUI(LSFT(KC_COMMA)))));
        tap_code16(LALT(LCTL(LGUI(LSFT(KC_COMMA)))));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(LGUI(LSFT(KC_COMMA)))));
    }
}

void dance_15_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[15].step = dance_step(state);
    switch (dance_state[15].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(LGUI(LSFT(KC_COMMA))))); break;
        case SINGLE_HOLD: register_code16(KC_F14); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(LGUI(LSFT(KC_COMMA))))); register_code16(LALT(LCTL(LGUI(LSFT(KC_COMMA))))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(LGUI(LSFT(KC_COMMA))))); register_code16(LALT(LCTL(LGUI(LSFT(KC_COMMA)))));
    }
}

void dance_15_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[15].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(LGUI(LSFT(KC_COMMA))))); break;
        case SINGLE_HOLD: unregister_code16(KC_F14); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(LGUI(LSFT(KC_COMMA))))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(LGUI(LSFT(KC_COMMA))))); break;
    }
    dance_state[15].step = 0;
}
void on_dance_16(tap_dance_state_t *state, void *user_data);
void dance_16_finished(tap_dance_state_t *state, void *user_data);
void dance_16_reset(tap_dance_state_t *state, void *user_data);

void on_dance_16(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(LGUI(LSFT(KC_DOT)))));
        tap_code16(LALT(LCTL(LGUI(LSFT(KC_DOT)))));
        tap_code16(LALT(LCTL(LGUI(LSFT(KC_DOT)))));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(LGUI(LSFT(KC_DOT)))));
    }
}

void dance_16_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[16].step = dance_step(state);
    switch (dance_state[16].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(LGUI(LSFT(KC_DOT))))); break;
        case SINGLE_HOLD: register_code16(KC_F15); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(LGUI(LSFT(KC_DOT))))); register_code16(LALT(LCTL(LGUI(LSFT(KC_DOT))))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(LGUI(LSFT(KC_DOT))))); register_code16(LALT(LCTL(LGUI(LSFT(KC_DOT)))));
    }
}

void dance_16_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[16].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(LGUI(LSFT(KC_DOT))))); break;
        case SINGLE_HOLD: unregister_code16(KC_F15); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(LGUI(LSFT(KC_DOT))))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(LGUI(LSFT(KC_DOT))))); break;
    }
    dance_state[16].step = 0;
}
void on_dance_17(tap_dance_state_t *state, void *user_data);
void dance_17_finished(tap_dance_state_t *state, void *user_data);
void dance_17_reset(tap_dance_state_t *state, void *user_data);

void on_dance_17(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(LGUI(LSFT(KC_COMMA)))));
        tap_code16(LALT(LCTL(LGUI(LSFT(KC_COMMA)))));
        tap_code16(LALT(LCTL(LGUI(LSFT(KC_COMMA)))));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(LGUI(LSFT(KC_COMMA)))));
    }
}

void dance_17_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[17].step = dance_step(state);
    switch (dance_state[17].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(LGUI(LSFT(KC_COMMA))))); break;
        case SINGLE_HOLD: register_code16(KC_F16); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(LGUI(LSFT(KC_COMMA))))); register_code16(LALT(LCTL(LGUI(LSFT(KC_COMMA))))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(LGUI(LSFT(KC_COMMA))))); register_code16(LALT(LCTL(LGUI(LSFT(KC_COMMA)))));
    }
}

void dance_17_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[17].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(LGUI(LSFT(KC_COMMA))))); break;
        case SINGLE_HOLD: unregister_code16(KC_F16); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(LGUI(LSFT(KC_COMMA))))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(LGUI(LSFT(KC_COMMA))))); break;
    }
    dance_state[17].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_8, dance_8_finished, dance_8_reset),
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_9, dance_9_finished, dance_9_reset),
        [DANCE_10] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_10, dance_10_finished, dance_10_reset),
        [DANCE_11] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_11, dance_11_finished, dance_11_reset),
        [DANCE_12] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_12, dance_12_finished, dance_12_reset),
        [DANCE_13] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_13, dance_13_finished, dance_13_reset),
        [DANCE_14] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_14, dance_14_finished, dance_14_reset),
        [DANCE_15] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_15, dance_15_finished, dance_15_reset),
        [DANCE_16] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_16, dance_16_finished, dance_16_reset),
        [DANCE_17] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_17, dance_17_finished, dance_17_reset),
};

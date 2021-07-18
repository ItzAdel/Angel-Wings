#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#ifdef RGBLIGHT_DISABLE
extern rgblight_config_t rgblight_config;
#endif
extern uint8_t is_master;

enum layer_number {
  _QWERTY = 0,
  _LOWER,
  _RAISE,
};

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
  BACKLIT,
  RGBRST,
  KC_SAMPLEMACRO,
  PLOVER,
  EXT_PLV
};

#define KC______ KC_TRNS
#define KC_XXXXX KC_NO
#define KC_LOWER LOWER
#define KC_RAISE RAISE
#define KC_RST   RESET
#define KC_CTLTB CTL_T(KC_TAB)
#define KC_GUIEI GUI_T(KC_LANG2)
#define KC_ALTKN ALT_T(KC_LANG1)


#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

#define TG_ISO  TG(_ISO)
#define TG_THMB TG(_THUMB_ALT)

#define RBR_RGU MT(MOD_RGUI, KC_RBRC)
#define PLS_LCT MT(MOD_LCTL, KC_PPLS)
#define EQL_LCT MT(MOD_LCTL, KC_PEQL)
#define APP_LCT MT(MOD_LCTL, KC_APP)
#define EQL_RCT MT(MOD_RCTL, KC_PEQL)
#define QUO_RCT MT(MOD_RCTL, KC_QUOT)
#define APP_RCT MT(MOD_RCTL, KC_APP)
#define MIN_RCT MT(MOD_RCTL, KC_MINS)
#define EQL_LAL MT(MOD_LALT, KC_EQL)
#define BSL_RAL MT(MOD_RALT, KC_BSLS)

#define NBS_LCT MT(MOD_LCTL, KC_NUBS)
#define BSH_LAL MT(MOD_LALT, KC_BSLS)
#define APP_RAL MT(MOD_RALT, KC_APP)

#define BSP_LSH MT(MOD_LSFT, KC_BSPC)
#define SPC_LSH MT(MOD_LSFT, KC_SPC)
#define DEL_RSE LT(_RAISE, KC_DEL)
#define TAB_RSE LT(_RAISE, KC_TAB)
#define ENT_LWR LT(_LOWER, KC_ENT)
#define GUI_LWR LT(_LOWER, KC_LGUI)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT(\
    KC_ESC,  KC_GRV,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,   KC_LBRC,        KC_RBRC, \
    KC_PGUP, KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,         KC_H,    KC_J,    KC_K,    KC_L,   KC_SCLN, RCTL_T(KC_QUOT), KC_PGDN,\
            KC_LALT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,         KC_N,    KC_M,    KC_COMM, KC_DOT, KC_SLSH, BSL_RAL, \
                                        DEL_RSE, BSP_LSH, GUI_LWR,      ENT_LWR, KC_SPC,  TAB_RSE \
    ),

    [_LOWER] = LAYOUT(\
    KC_MUTE, KC_UNDS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, \
    _______, KC_PPLS, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_EQL,  _______,\
            KC_PMNS, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______, \
                                        _______, _______, _______,      _______, _______, _______\
    ),

    [_RAISE] = LAYOUT(\
    _______, KC_NLCK, KC_PSLS, KC_P7,   KC_P8,   KC_P9,   KC_PMNS,      KC_END,  KC_HOME, KC_UP, KC_PSCR, KC_SLCK, KC_CAPS, _______, \
    KC_VOLU, KC_PEQL, KC_PAST, KC_P4,   KC_P5,   KC_P6,   KC_PPLS,      _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_INS,  KC_APP, KC_VOLD,\
            _______, KC_P0,   KC_P1,   KC_P2,   KC_P3,   KC_PCMM,      _______, KC_END,  _______, KC_PGDN, KC_PAUS, _______, \
                                        _______, _______, _______,      _______, _______, _______\
    ),
};
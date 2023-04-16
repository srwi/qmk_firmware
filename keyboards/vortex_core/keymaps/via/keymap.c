#include QMK_KEYBOARD_H

#define ___x___ KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_RBRC, KC_BSPC,
    MO(2),   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_NUHS,          KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,
    KC_LCTL, KC_LWIN, KC_LALT, MO(3),     LT(1, KC_SPC),           KC_SPC,           KC_RALT, MO(2),   KC_MENU, KC_RCTL
  ),
  [1] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, KC_LBRC, _______, KC_SCLN, _______, _______, _______,
    _______, KC_QUOT, KC_MINS, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
    _______, _______, _______, _______,          _______,          _______,          _______, _______, _______, _______
  ),
  [2] = LAYOUT(
    KC_ESC,  KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______, KC_PGUP, KC_UP,   KC_PGDN, _______, _______, KC_DEL,
    ___x___, _______, KC_VOLD, KC_VOLU, KC_MUTE, _______, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_INS,           _______,
    _______, _______, _______, _______, _______, _______, KC_END,  _______, _______, _______, _______,          _______,
    _______, _______, _______, ___x___,          ___x___,          _______,          _______, ___x___, _______, _______
  ),
  [3] = LAYOUT(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,           KC_F12,
    _______, KC_NUBS, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___,          _______,
    _______, _______, _______, ___x___,          ___x___,          _______,          _______, ___x___, _______, _______
  )
};
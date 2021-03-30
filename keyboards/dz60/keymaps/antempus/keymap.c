#include QMK_KEYBOARD_H

#define _DEFAULT 0
#define _FN 1
#define _SFX 2

// Fillers to make layering more clear
#define ______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------------.
 * | ` ~ |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |   Bkspc   |
 * |-----------------------------------------------------------------------------------------+
 * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |    \   |
 * |-----------------------------------------------------------------------------------------+
 * | Caps    |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
 * |-----------------------------------------------------------------------------------------+
 * | Shift     |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |     Shift       |
 * |-----------------------------------------------------------------------------------------+
 * | Ctrl|  Alt  | Cmd |              Space                    |Layer|  L  |  D  |  U  |  R  |
 * `-----------------------------------------------------------------------------------------'
 */

  LAYOUT_SOMETHING_5U(
      KC_GRV,  KC_1,    KC_2,    KC_3,   KC_4,   KC_5,    KC_6,    KC_7,   KC_8,   KC_9,    KC_0,   KC_MINS, KC_EQL,   ______,  KC_BSPC,
      KC_TAB,  ______,  KC_Q,    KC_W,   KC_E,   KC_R,    KC_T,    KC_Y,   KC_U,   KC_I,    KC_O,   KC_P,    KC_LBRC,  KC_RBRC, KC_BSLS,
      KC_CAPS, ______,  KC_A,    KC_S,   KC_D,   KC_F,    KC_G,    KC_H,   KC_J,   KC_K,    KC_L,   KC_SCLN, KC_QUOT,  KC_ENT,  ______,
      KC_LSFT, ______,  KC_Z,    KC_X,   KC_C,   KC_V,    KC_B,    KC_N,   KC_M,   KC_COMM, KC_DOT, KC_SLSH, ______,   ______,  KC_RSFT,
      KC_LCTL, KC_LALT, KC_LGUI, ______, ______, ______,  ______,  KC_SPC, ______,  ______, KC_NO,  KC_LEFT, KC_DOWN,  KC_UP,   KC_RIGHT
      ),
};

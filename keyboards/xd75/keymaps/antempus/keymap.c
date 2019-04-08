/* Copyright 2018 darm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

// Layer shorthand
#define _BASE_WIN 0
#define _BASE_MAC 1
#define _LOWER 2
#define _RAISE 3
#define _FN 4
#define _EMOJIFY 5

enum emoji_map
{
  UNAM, // unamused 😒
  HEYE, // smiling face with heart shaped eyes 😍
  OK,   // ok hand sign 👌
  SMIR, // smirk 😏
  PRAY, // pray 🙏
  CELE, // celebration 🙌
  COOL, // smile with sunglasses 😎
  EYES, // eyes
  THNK, // BIG THONK
  NAIL, // Nailcare 💅
};
const uint16_t PROGMEM fn_actions[] = {};

const uint32_t PROGMEM unicode_map[] = {
    [UNAM] = 0x1F612,
    [HEYE] = 0x1f60d,
    [OK] = 0x1F44C,
    [SMIR] = 0x1F60F,
    [PRAY] = 0x1F64F,
    [CELE] = 0x1F64C,
    [COOL] = 0x1F60E,
    [EYES] = 0x1F440,
    [THNK] = 0x1F914,
    [NAIL] = 0x1F485,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* QWERTY-Mac
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * |   `    | 1      | 2      | 3      | 4      | 5`     | 6      | 7      | 8      | 9      | 0      | -      | =      | Cut    | BACKSP |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * |  ESC   | Q      | W      | E      | R      | T      | Y      | U      | I      | O      | P      | {      | }      | Copy   | Paste  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
 * |  TAB   | A      | S      | D      | F      | G      | H      | J      | K      | L      | ;      | ENTER  |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
 * | LSHIFT | Z      | X      | C      | V      | B      | N      | M      | ,      | .      | /      | \      | RSHIFT | UP     | SAVE   |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
 * |   FN   | LCTL   |  LALT 	|	 LGUI  | _LOWER | SPACE  | SPACE  | _RAISE | LEFT   |  DOWN  |   UP   | RIGHT  | LEFT  | DOWN    | RIGHT   |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */
    /* QWERTY MAC*/
    [_BASE_MAC] = KEYMAP(
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_DEL, _______, _______, _______,
        KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, _______, _______, _______,
        KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, _______, _______, _______,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ENT, _______, _______, _______, _______,
        KC_LCTL, KC_LALT, KC_LGUI, _LOWER, KC_SPC, KC_SPC, _RAISE, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, _______, _______, _______),

    /* QWERTY-Win
  * .--------------------------------------------------------------------------------------------------------------------------------------.
  * | ESC    | 1      | 2      | 3      | 4      | %      | 6     | 7      | 8      | 9      | 0       | -       | =     |         |       |
  * |--------+--------+--------+--------+--------+--------+-------+--------+--------+--------+---------+--------+--------+-----------------|
  * | TAB    | Q      | W      | E      | R      | T      | Y     | U      | I      | O      | P       | {      | }      |        |        |
  * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
  * | CAP LK | A      | S      | D      | F      | G      | H     | J      | K      | L      | ;       | '      |        |        |        |
  * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
  * | LSHIFT | Z      | X      | C      | V      | B      | N     | M      | ,      | .      | /       | \      |  ENTER |        |        |
  * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-------+---------+--------+--------|
  * |        | LGUI   | LALT   |  LCTL  |  LOWER |      SPACE      |  RAISE | LEFT  | DOWN   | UP   |  RIGHT   |        |        |         |
  * '--------------------------------------------------------------------------------------------------------------------------------------'
  */
    /*QWERTY WIN */
    [_BASE_WIN] = KEYMAP(
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_DEL, _______, _______, _______,
        KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, _______, _______, _______,
        KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, _______, _______, _______,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ENT, _______, _______, _______,
        _______, KC_LGUI, KC_LALT, KC_LCTL, _LOWER, KC_SPC, KC_SPC, _RAISE, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, _______, _______, _______),

    /* LOWER
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * |        | F1     | F2     | F3     | F4     | F5     | F11    |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * |        | PREV   | NEXT   | VOLUP  |        |        | RGBTOG |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
 * |        | PLAY   | STOP   | VOLDWN |        |        | RGBMOD |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
 * |        |        |        | MUTE   |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

    [_LOWER] = KEYMAP(
        KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC, _______, _______, _______,
        _______, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL, _______, _______, _______,
        _______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, _______, _______, _______,
        _______, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, S(KC_NUHS), S(KC_NUBS), KC_HOME, KC_END, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______),
    /* RAISED
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * |        |        |        |        |        |        |        |        | F12    | F6     | F7     | F8     | F9     | F10    | DELETE |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * |        |        |        |        |        |        |        |        | PRTSCR |        | [      | ]      | -      | =      | \      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
 * |        |        |        |        |        |        |        |        | BACKL+ |        | LEFT   | DOWN   | UP     | RIGHT  |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
 * |        |        |        |        |        |        |        |        | BACKL- |        | HOME   | PGDN   | PGUP   | END    |        |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

    [_RAISE] = KEYMAP(_______, _______, _______, _______, _______, _______, _______, _______, KC_F12, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_DEL, _______, _______, _______, _______, _______, _______, _______, _______, KC_PSCR, _______, KC_LBRC, KC_RBRC, KC_MINS, KC_EQL, KC_BSLS, _______, _______, _______, _______, _______, _______, _______, _______, BL_INC, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, _______, _______, _______, _______, _______, _______, _______, _______, _______, BL_DEC, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______),

    /* FUNCTION
* .--------------------------------------------------------------------------------------------------------------------------------------.
* | ESC    | F1     | F2     | F3     | F4     | F5     | F6    | F7     | F8     | F9     | F10    | VOLDN   | VOLUP  | MUTE   | DEL    |
* |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
* | TAB    | -      | WIN    | -      | -      | RGB_TOG| -     | -      | OPTION  | RESET  | -     | [       | ]      | -      | -      |
* |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
* | CAP LK | MAC    | RAINBOW| PLAIN  | -      | -      | -     | -      | -      | -      | ;      | '       | ENTER  |  ENTER | REF    |
* |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
* | LSHIFT | INC    | DEC    | HUE I  | HUE D  | SAT I  | SAT D | -      | -      | .      | /      | \       | RSHIFT|  HOME   | SAVE   |
* |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
* | LALT   | LGUI   | LALT   |  FIND  | CMD T	 | SPACE | SPACE  | ALFRED | FN-MO  | RALT   | RGUI   |  RCTRL  | PGUP   | END    | PGDN   |
* '--------------------------------------------------------------------------------------------------------------------------------------'
*/
    /* OSLAYOUT + NUMPAD + MEDIA + LIGHTING */
    [_FN] = KEYMAP(
        KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_VOLD, KC_VOLU, KC_MUTE, KC_DEL, KC_TRNS, KC_NO, _______, KC_NO, KC_NO, RGB_TOG, KC_NO, KC_NO, KC_RALT, RESET, KC_NO, KC_LBRC, KC_RBRC, KC_TRNS, KC_TRNS, KC_TRNS, _______, RGB_MODE_RAINBOW, RGB_MODE_PLAIN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_VAI, RGB_VAD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, KC_NO, KC_NO, KC_DOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_END, KC_PGDN)};

void matrix_init_user(void)
{
  _delay_ms(20); // Gets rid of tick
  set_unicode_input_mode(UC_LNX);
}

/* Template for future layers
 [_LAYER_NAME] = {
  { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______},
  { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______},
  { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______},
  { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______},
  { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______},
 }
};
*/

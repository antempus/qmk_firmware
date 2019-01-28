/* Copyright 2018 Jack Humbert
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
enum layers
{
  _QWERTY,
  _RAISE,
  _LOWER
};
#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO
#define SFT_TAB FUNC(0) // Tap for Enter, hold for Shift

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Qwerty
 * |----------------------------------------------------------------------------------------------------------|
 * | Esc  |  F1  |  F2  |  F3  |  F4  |  F5  |   1  |   2  |   3  |  F7  |  F8  |  F9  |  F10 |  F11  |  F12  |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+-------+-------+
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   4  |   5  |   6  |   Y  |   U  |   I  |   O  |   P   |  TAB  |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+-------+-------+
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   4  |   5  |   6  |   Y  |   U  |   I  |   O  |   P   |  TAB  |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+-------+-------+
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   4  |   5  |   6  |   Y  |   U  |   I  |   O  |   P   |  TAB  |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+-------+-------+
 * */
    [_QWERTY] = KEYMAP(
        KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_1, KC_2, KC_3, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_4, KC_5, KC_6, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_TAB,
        KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6,
        KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_TAB, KC_0, KC_RSHIFT, KC_Z, KC_1, KC_2, KC_3, KC_4, KC_5,
        KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_X, KC_Y, KC_Z, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6),
    /* Qwerty
 * |----------------------------------------------------------------------------------------------------------|
 * | Esc  |  F1  |  F2  |  F3  |  F4  |  F5  |   1  |   2  |   3  |  F7  |  F8  |  F9  |  F10 |  F11  |  F12  |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+-------+-------+
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   4  |   5  |   6  |   Y  |   U  |   I  |   O  |   P   |  TAB  |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+-------+-------+
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   4  |   5  |   6  |   Y  |   U  |   I  |   O  |   P   |  TAB  |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+-------+-------+
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   4  |   5  |   6  |   Y  |   U  |   I  |   O  |   P   |  TAB  |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+-------+-------+
 * */
    [_LOWER] = KEYMAP(
        KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_1, KC_2, KC_3, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_4, KC_5, KC_6, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_TAB,
        KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6,
        KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_TAB, KC_0, KC_RSHIFT, KC_Z, KC_1, KC_2, KC_3, KC_4, KC_5,
        KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_X, KC_Y, KC_Z, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6),

    /* Lower
 * |----------------------------------------------------------------------------------------------------------|
 * | Esc  |  F1  |  F2  |  F3  |  F4  |  F5  |   1  |   2  |   3  |  F7  |  F8  |  F9  |  F10 |  F11  |  F12  |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+-------+-------+
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   4  |   5  |   6  |   Y  |   U  |   I  |   O  |   P   |  TAB  |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+-------+-------+
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   4  |   5  |   6  |   Y  |   U  |   I  |   O  |   P   |  TAB  |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+-------+-------+
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   4  |   5  |   6  |   Y  |   U  |   I  |   O  |   P   |  TAB  |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+-------+-------+
 * */
    [_RAISE] = KEYMAP(
        KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_1, KC_2, KC_3, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_4, KC_5, KC_6, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_TAB,
        KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6,
        KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_TAB, KC_0, KC_RSHIFT, KC_Z, KC_1, KC_2, KC_3, KC_4, KC_5,
        KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_X, KC_Y, KC_Z, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6)};

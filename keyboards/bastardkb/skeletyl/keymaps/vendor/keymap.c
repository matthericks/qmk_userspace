/* 
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
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

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 
   [0] = LAYOUT_split_3x5_3(
     //|--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------|
         KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                KC_J,    KC_L,    KC_U,    KC_Y,   KC_SCLN,
     //|--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------|
         KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                KC_M,    KC_N,    KC_E,    KC_I,    KC_O,
     //|--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------|
         KC_Z,    KC_X,    KC_C,   KC_D,     KC_V,                KC_K,    KC_H,   KC_COMM,  KC_DOT, KC_SLSH, 
     //|--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------|
                           MO(2),   KC_SPC, XXXXXXX,              XXXXXXX, KC_RSFT , MO(1)
 
   ),
 
   [1] = LAYOUT_split_3x5_3(
     //|--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------|
         KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
     //|--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------|
         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,                XXXXXXX, KC_RSFT, KC_RGUI, KC_RALT, KC_RCTL,
     //|--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------|
         KC_BSLS, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC,              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     //|--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------|
                         MO(3), KC_QUOTE,  KC_GRAVE,              XXXXXXX, XXXXXXX, _______
   ),
 
 [2] = LAYOUT_split_3x5_3(
     //|--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------|
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,             KC_PGUP, KC_DEL,  KC_UP,   KC_BSPC, KC_ESC,
     //|--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------|
         KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, XXXXXXX,             KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_TAB,
     //|--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------|
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     //|--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------|
                         _______,  KC_SPC,  XXXXXXX,              XXXXXXX, KC_ENT, MO(3)
   ),
     //|--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------|
         KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,               KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
     //|--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------|
         KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, XXXXXXX,             KC_F12,  KC_RSFT, KC_RGUI, KC_RALT, KC_RCTL,
     //|--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------|
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     //|--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------|
                          _______,  XXXXXXX, XXXXXXX,             XXXXXXX, XXXXXXX, _______
   )
 };
 
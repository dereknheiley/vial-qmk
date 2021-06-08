/* 
 * Copyright 2021 Derek Nheiley <derek.nheiley@gmail.com>
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

#define _QWERTY_LAYER 0
#define _FN_LAYER 1
#define _RGB_LAYER 2
#define _DUMMY_LAYER 3

const uint16_t PROGMEM AQ_COMBO[]  = {KC_A   , KC_Q, COMBO_END};
const uint16_t PROGMEM SW_COMBO[]  = {KC_S   , KC_W, COMBO_END};
const uint16_t PROGMEM DE_COMBO[]  = {KC_D   , KC_E, COMBO_END};
const uint16_t PROGMEM FR_COMBO[]  = {KC_F   , KC_R, COMBO_END};
const uint16_t PROGMEM GT_COMBO[]  = {KC_G   , KC_T, COMBO_END};
const uint16_t PROGMEM HY_COMBO[]  = {KC_H   , KC_Y, COMBO_END};
const uint16_t PROGMEM JU_COMBO[]  = {KC_J   , KC_U, COMBO_END};
const uint16_t PROGMEM KI_COMBO[]  = {KC_K   , KC_I, COMBO_END};
const uint16_t PROGMEM LO_COMBO[]  = {KC_L   , KC_O, COMBO_END};
const uint16_t PROGMEM SCP_COMBO[] = {KC_SCLN, KC_P, COMBO_END};

const uint16_t PROGMEM SD_COMBO[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM DF_COMBO[] = {KC_D, KC_F, COMBO_END};

const uint16_t PROGMEM JK_COMBO[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM KL_COMBO[] = {KC_K, KC_L, COMBO_END};

const uint16_t PROGMEM XC_COMBO[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM CV_COMBO[] = {KC_C, KC_V, COMBO_END};

const uint16_t PROGMEM   MCOMM_COMBO[] = {   KC_M, KC_COMM, COMBO_END};
const uint16_t PROGMEM COMMDOT_COMBO[] = {KC_COMM,  KC_DOT, COMBO_END};

/* Declare the combos you will use here, and DON'T FORGET TO UPDATE config.h to set #define COMBO_COUNT number_of_combos_herez */
enum combos {
  AQ_1,
  SW_2,
  DE_3,
  FR_4,
  GT_5,
  HY_6,
  JU_7,
  KI_8,
  LO_9,
  SCP_0,

  SD_LBRC,
  DF_RBRC,

  JK_LPRN,
  KL_RPRN,

  XC_BSPC,
  CV_ESC,

  MCOMM_MINS,
  COMMDOT_EQL
};

/* DON'T FORGET TO UPDATE config.h to set #define COMBO_COUNT number_of_combos_herez */
combo_t key_combos[COMBO_COUNT] = {
  [ AQ_1] = COMBO( AQ_COMBO, KC_1),
  [ SW_2] = COMBO( SW_COMBO, KC_2),
  [ DE_3] = COMBO( DE_COMBO, KC_3),
  [ FR_4] = COMBO( FR_COMBO, KC_4),
  [ GT_5] = COMBO( GT_COMBO, KC_5),
  [ HY_6] = COMBO( HY_COMBO, KC_6),
  [ JU_7] = COMBO( JU_COMBO, KC_7),
  [ KI_8] = COMBO( KI_COMBO, KC_8),
  [ LO_9] = COMBO( LO_COMBO, KC_9),
  [SCP_0] = COMBO(SCP_COMBO, KC_0),

  [SD_LBRC] = COMBO(SD_COMBO, KC_LBRC),
  [DF_RBRC] = COMBO(DF_COMBO, KC_RBRC),

  [JK_LPRN] = COMBO(JK_COMBO, KC_LPRN),
  [KL_RPRN] = COMBO(KL_COMBO, KC_RPRN),

  [XC_BSPC] = COMBO(XC_COMBO, KC_BSPC),
  [CV_ESC]  = COMBO(CV_COMBO, KC_ESC),

  [ MCOMM_MINS] = COMBO(  MCOMM_COMBO, KC_MINS),
  [COMMDOT_EQL] = COMBO(COMMDOT_COMBO, KC_EQL)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY_LAYER] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSLS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
LSFT_T(KC_CAPS),  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, RSFT_T(KC_QUOT),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
 KC_LCPO, LALT_T(KC_Z),    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RCPC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                              LGUI_T(KC_BSPC), LT(1,KC_SPC), KC_ENT,   LALT_T(KC_ESC), LT(1,KC_BSPC) , LT(2,KC_DEL)
                                      //`--------------------------'  `--------------------------'

  ),

  [_FN_LAYER] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______,  KC_GRV, KC_PGUP,   KC_UP, KC_PGDN, KC_VOLU,                      KC_VOLU, KC_PGUP,   KC_UP, KC_PGDN, KC_BRIU, KC_PIPE,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, KC_TILD, KC_LEFT, KC_DOWN, KC_RGHT, KC_VOLD,                      KC_VOLD, KC_LEFT, KC_DOWN, KC_RGHT, KC_BRID, RSFT_T(KC_DQUO),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,   KC_F5,   KC_F6,   KC_F7,   KC_F8,  KC_F10,                      KC_MUTE,  KC_END,   KC_P2,   KC_P3, KC_QUES, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [_RGB_LAYER] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_F12,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, KC_F11 ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, _______,                      _______, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, _______,                      _______, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,      RESET, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [_DUMMY_LAYER] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  )
};

#include QMK_KEYBOARD_H
// #include "bit-c_led.h"

/**** How to change the keyboard ****
Make smaller changes directly in vial
    https://get.vial.today/download/

-OR-

0. setup qmk
1. make larger changes in this file
2. run this command in qmk_firmware folder
    make handwired/dactyl_manuform/5x6:via
3. press reset button on left half
4. completely reset and flash the left half
    dfu-programmer atmega32u4 erase && dfu-programmer atmega32u4 flash-eeprom quantum/split_common/eeprom-lefthand.eep  && dfu-programmer atmega32u4 flash handwired_dactyl_manuform_5x6_via.hex
5. press reset button on right half
    avrdude -p atmega32u4 -c avr109 -P /dev/ttyACM0 -U flash:w:handwired_dactyl_manuform_5x6_via.hex -U eeprom:w:quantum/split_common/eeprom-righthand.eep

# diff the output of ls -l /dev/ before and after plugging in the pro micro to find comport for -P option below
# if it moves around you might be able to use /dev/serial/by-id or something like that
# or use a udev rule to symlink it to something human readable https://unix.stackexchange.com/questions/81754/how-to-match-a-ttyusbx-device-to-a-usb-serial-device
*/

#define _QWERTY_LAYER 0
#define _FN_LAYER 1
#define _RGB_LAYER 2
// #define _DUMMY_VIA_LAYER 3

// const uint16_t PROGMEM SD_COMBO[] = {KC_S, KC_D, COMBO_END};
// const uint16_t PROGMEM DF_COMBO[] = {KC_D, KC_F, COMBO_END};

// const uint16_t PROGMEM JK_COMBO[] = {KC_J, KC_K, COMBO_END};
// const uint16_t PROGMEM KL_COMBO[] = {KC_K, KC_L, COMBO_END};

// const uint16_t PROGMEM XC_COMBO[] = {KC_X, KC_C, COMBO_END};
// const uint16_t PROGMEM CV_COMBO[] = {KC_C, KC_V, COMBO_END};

// const uint16_t PROGMEM   MCOMM_COMBO[] = {   KC_M, KC_COMM, COMBO_END};
// const uint16_t PROGMEM COMMDOT_COMBO[] = {KC_COMM,  KC_DOT, COMBO_END};

// /* Declare the combos you will use here, and DON'T FORGET TO UPDATE config.h to set #define VIAL_COMBO_ENTRIES number_of_combos_herez */
// enum combos {
//   SD_LBRC,
//   DF_RBRC,

//   JK_LPRN,
//   KL_RPRN,

//   XC_DEL,
//   CV_ESC,

//   MCOMM_MINS,
//   COMMDOT_EQL
// };

// /* DON'T FORGET TO UPDATE config.h to set #define VIAL_COMBO_ENTRIES number_of_combos_herez */
// combo_t key_combos[VIAL_COMBO_ENTRIES] = {
//   [SD_LBRC] = COMBO(SD_COMBO, KC_LBRC),
//   [DF_RBRC] = COMBO(DF_COMBO, KC_RBRC),

//   [JK_LPRN] = COMBO(JK_COMBO, KC_LPRN),
//   [KL_RPRN] = COMBO(KL_COMBO, KC_RPRN),

//   [XC_DEL] = COMBO(XC_COMBO, KC_DEL),
//   [CV_ESC]  = COMBO(CV_COMBO, KC_ESC),

//   [ MCOMM_MINS] = COMBO(  MCOMM_COMBO, KC_MINS),
//   [COMMDOT_EQL] = COMBO(COMMDOT_COMBO, KC_EQL)
// };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY_LAYER] = LAYOUT_5x6(
         KC_GRV, KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_MINS,
         KC_TAB, KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_BSLS,
LSFT_T(KC_CAPS), KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,RSFT_T(KC_QUOT),
        KC_LCPO, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_RCPC,
                 LCTL_T(KC_DEL),LALT_T(KC_ESC),                                                  KC_MINS, KC_EQL,

//6-thumb
//                           LGUI_T(KC_BSPC), LT(1,KC_SPC),                   LT(1,KC_BSPC), KC_DEL,
//                                                  KC_ENT, KC_ESC,  KC_HOME, KC_ENT,
//                                                 KC_BSPC, KC_DEL,  MO(2) , KC_RALT

//5-thumb
//                                 KC_NO, LGUI_T(KC_BSPC),                        KC_DEL, KC_NO,
//                                             LT(1,KC_SPC),KC_ENT,   KC_ENT , LT(1,KC_BSPC),
//                                                 KC_BSPC, KC_ESC,   KC_HOME, MO(2)

//3-thumb
                               LGUI_T(KC_BSPC),LT(1,KC_SPC),                 LT(1,KC_BSPC), LT(3,KC_DEL),
                                               KC_NO, LT(2,KC_ENT),   LT(2,KC_ESC), KC_NO,
                                                      KC_NO, KC_NO,   KC_NO  , KC_NO
  ),

    [_FN_LAYER] = LAYOUT_5x6(
       KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
       _______,KC_BRIU,KC_PGUP,KC_UP  ,KC_PGDN,KC_VOLU,                        KC_VOLU,KC_PGUP,KC_UP  ,KC_PGDN,KC_NO  ,KC_PIPE,
       KC_LSFT,KC_BRID,KC_LEFT,KC_DOWN,KC_RGHT,KC_VOLD,                        KC_VOLD,KC_LEFT,KC_DOWN,KC_RGHT,KC_MINS,RSFT_T(KC_DQUO),
       _______,KC_F5  ,KC_F6  ,KC_F7  ,KC_F8  ,KC_F10 ,                        KC_MUTE,KC_END  , KC_P2 , KC_P3 ,KC_QUES,_______,
                       _______,_______,                                                        _______, _______,
                                               _______,_______,            _______,_______,
                                               _______,_______,            _______,_______,
                                               _______,_______,            _______,_______
  ),

    [_RGB_LAYER] = LAYOUT_5x6(
      KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
      _______,RGB_SAD,RGB_HUD,RGB_HUI,RGB_SAI,RGB_M_P,                        RGB_M_P,RGB_SAD,RGB_HUD,RGB_HUI,RGB_SAI,_______,
      _______,_______,RGB_VAD,RGB_VAI,_______,RGB_M_G,                        RGB_M_G,_______,RGB_VAD,RGB_VAI,_______,_______,
      _______,RGB_SPD,RGB_RMOD,RGB_MOD,RGB_SPI,RGB_TOG,                        RGB_TOG,RGB_SPD,RGB_RMOD,RGB_MOD,RGB_SPI,_______,
                    _______,_______,                                                        _______, _______,
                                              _______,_______,            _______,_______,
                                              _______,_______,            _______,_______,
                                              _______,_______,            _______,_______
  ),

  //   [_DUMMY_VIA_LAYER] = LAYOUT_5x6(
  //      KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,                        KC_NO  , KC_NO , KC_NO , KC_NO ,KC_NO ,KC_NO ,
  //      KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,                        KC_NO  , KC_NO , KC_NO , KC_NO ,KC_NO ,KC_NO ,
  //      KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,                        KC_NO  , KC_NO , KC_NO , KC_NO ,KC_NO ,KC_NO ,
  //      KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,                        KC_NO  , KC_NO , KC_NO , KC_NO ,KC_NO ,KC_NO ,
  //                      KC_NO , KC_NO ,                                                         KC_NO , KC_NO,
  //                                                  KC_NO,KC_NO,            KC_NO,KC_NO,
  //                                                  KC_NO,KC_NO,            KC_NO,KC_NO,
  //                                                  KC_NO,KC_NO,            KC_NO,KC_NO
  // ),
};

// https://beta.docs.qmk.fm/using-qmk/hardware-features/lighting/feature_rgblight#lighting-layers
// https://beta.docs.qmk.fm/using-qmk/hardware-features/lighting/feature_rgblight#colors

// const rgblight_segment_t PROGMEM _DEFAULT_LED_LAYER[] = RGBLIGHT_LAYER_SEGMENTS(
//     {0 , 3, HSV_WHITE}
// );

// const rgblight_segment_t PROGMEM _CAPS_LOCK_LED_LAYER[] = RGBLIGHT_LAYER_SEGMENTS(
//     // change all three LEDS as caps lock LED indicator
//     {0 , 3, HSV_CYAN}
// );

// const rgblight_segment_t PROGMEM _LED_LAYER_1[] = RGBLIGHT_LAYER_SEGMENTS(
//     // Light ESDF arrow keys when layer 1 is active
//     {0, 1, HSV_WHITE}
// );

// const rgblight_segment_t PROGMEM _LED_LAYER_2[] = RGBLIGHT_LAYER_SEGMENTS(
//     // Light ESDF arrow keys when layer 1 is active
//     {0, 1, HSV_RED}
//     ,{1, 1, HSV_GREEN}
//     ,{2, 1, HSV_BLUE}
// );

// const rgblight_segment_t PROGMEM _LED_LAYER_3[] = RGBLIGHT_LAYER_SEGMENTS(
//     // Light ESDF arrow keys when layer 1 is active
//     {2, 1, HSV_PURPLE}
// );

// // Now define the array of layers. Later layers take precedence
// const rgblight_segment_t* const PROGMEM RGB_LAYERS[] = RGBLIGHT_LAYERS_LIST(
//     _DEFAULT_LED_LAYER
//     ,_CAPS_LOCK_LED_LAYER
//     ,_LED_LAYER_1   // Overrides caps lock layer
//     ,_LED_LAYER_2   // Overrides previous layer
//     ,_LED_LAYER_3   // Overrides other previous layers again
// );

// void keyboard_post_init_user(void) {
//     // Enable the LED layers
//     rgblight_layers = RGB_LAYERS;
//     set_bit_c_LED(LED_OFF); //LED_ON, LED_DIM, or LED_OFF
// }

// layer_state_t layer_state_set_user(layer_state_t state) {
//     // Both layers will light up if both kb layers are active
//     // rgblight_set_layer_state(0, layer_state_cmp(state, _DEFAULT_LED_LAYER));
//     rgblight_set_layer_state(2, layer_state_cmp(state, _FN_LAYER));
//     rgblight_set_layer_state(3, layer_state_cmp(state, _RGB_LAYER));
//     rgblight_set_layer_state(4, layer_state_cmp(state, _DUMMY_VIA_LAYER));
//     return state;
// }

// bool led_update_user(led_t led_state) {
//     rgblight_set_layer_state(1, led_state.caps_lock);
//     if (led_state.caps_lock) {
//         set_bit_c_LED(LED_ON); //LED_ON, LED_DIM, or LED_OFF
//     } else {
//         set_bit_c_LED(LED_OFF); //LED_ON, LED_DIM, or LED_OFF
//     }
//     return true;
// }

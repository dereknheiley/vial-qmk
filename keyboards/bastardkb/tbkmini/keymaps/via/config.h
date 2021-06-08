#pragma once
#define VIAL_KEYBOARD_UID {0x72, 0xE6, 0xED, 0x4A, 0xE8, 0xE5, 0xB8, 0x5D}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 4 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 0 }
#define PERMISSIVE_HOLD
#define EE_HANDS

/* this combination of PERMISSIVE_HOLD being off and IGNORE_MOD_TAP_INTERRUPT being on 
 * helps with keys like A are also SHIFT when held */
// #undef PERMISSIVE_HOLD
// #define IGNORE_MOD_TAP_INTERRUPT
//
// #define TAPPING_TERM 200

#define COMBO_COUNT 18
#define COMBO_TERM 20

#undef RGBLIGHT_ANIMATIONS
// #define RGBLIGHT_ANIMATIONS
//save space by only specifying the animations you want
#define RGBLIGHT_EFFECT_STATIC_LIGHT
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
// #define RGBLIGHT_EFFECT_TWINKLE

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
#define NO_DEBUG

/* disable print */
#define NO_PRINT

/* disable action features */
#define NO_ACTION_LAYER
#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
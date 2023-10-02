#pragma once
#define VIAL_KEYBOARD_UID {0xB2, 0xCB, 0xF0, 0x0E, 0xB2, 0x9F, 0xA7, 0xC8}

#define PERMISSIVE_HOLD
#define EE_HANDS

#undef MANUFACTURER
#define MANUFACTURER "DKN"

/* this combination of PERMISSIVE_HOLD being off and IGNORE_MOD_TAP_INTERRUPT being on 
 * helps with keys like A are also SHIFT when held */
// #undef PERMISSIVE_HOLD
// #define IGNORE_MOD_TAP_INTERRUPT

// #define TAPPING_TERM 200

// #undef COMBO_COUNT
// #define VIAL_COMBO_ENTRIES 18
// #undef COMBO_TERM
#define COMBO_TERM 20

// #define RGBLED_NUM_PER_HALF 34
// #undef RGBLED_NUM
// #define RGBLED_NUM RGBLED_NUM_PER_HALF*2
// #undef RGBLED_SPLIT
// #define RGBLED_SPLIT { RGBLED_NUM_PER_HALF, RGBLED_NUM_PER_HALF }
// #undef RGBLIGHT_LIMIT_VAL
// #define RGBLIGHT_LIMIT_VAL 180

// #undef RGBLIGHT_LAYERS
// #define RGBLIGHT_LAYERS

// #undef RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF
// #define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF

// #undef RGBLIGHT_ANIMATIONS
// // #define RGBLIGHT_ANIMATIONS
// //save space by only specifying the animations you want
// #define RGBLIGHT_EFFECT_STATIC_LIGHT
// #define RGBLIGHT_EFFECT_STATIC_GRADIENT
// // #define RGBLIGHT_EFFECT_TWINKLE


// turn things off to save space
#undef NO_ACTION_ONESHOT
#define NO_ACTION_ONESHOT
#undef NO_ACTION_MACRO
#define NO_ACTION_MACRO
#undef NO_ACTION_FUNCTION
#define NO_ACTION_FUNCTION

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x1209
#define PRODUCT_ID      0x5502
#define DEVICE_VER      0x0001
#define MANUFACTURER    scum noodle society
#define PRODUCT         DECK1
#define DESCRIPTION     Keyboard with trackball and scroll-ring

/* key matrix size */
#define MATRIX_ROWS        (5 * 2)
#define ROW_START_AVR      5
#define ROW_START_EXPANDER 0
#define MATRIX_COLS        8

#define TRACKBALL_PRESCALE 2    // 1:thru, 2:half-speed, 4:quater-speed

#define ID_MS_BTN1 0
#define ID_MS_BTN2 1

// #define TAPPING_TERM    200
// #define IGNORE_MOD_TAP_INTERRUPT // this makes it possible to do rolling combos (zx) with keys that convert to other keys on hold (z becomes ctrl when you hold it, and when this option isn't enabled, z rapidly followed by x actually sends Ctrl-x. That's bad.)

// /* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
// #define LOCKING_SUPPORT_ENABLE
// // Locking resynchronize hack
// #define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    get_mods() == (MOD_BIT(KC_LCTL) | MOD_BIT(KC_RCTL)) || \
    get_mods() == (MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT)) \
)

// /* number of backlight levels */
// #define BACKLIGHT_LEVELS 3

// #define LED_BRIGHTNESS_LO       15
// #define LED_BRIGHTNESS_HI       255

/* fix space cadet rollover issue */
#define DISABLE_SPACE_CADET_ROLLOVER

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    5
/*
 * This constant define not debouncing time in msecs, but amount of matrix
 * scan loops which should be made to get stable debounced results.
 *
 * On this keyboard matrix scan rate is relatively low, because of slow I2C.
 * Now it's only 353 scans/sec, or about 2.83 ms/scan.
 * According to Cherry specs, debouncing time is 5 msec.
 *
 * And so, there is no sense to have DEBOUNCE higher than 2.
 */

#define USB_MAX_POWER_CONSUMPTION 500

/* enable user print (uprint) */
// #define USER_PRINT
// #define DEBUG_MATRIX_SCAN_RATE

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable action features */
// #define NO_ACTION_LAYER
// #define NO_ACTION_TAPPING
// #define NO_ACTION_ONESHOT
// #define NO_ACTION_MACRO
// #define NO_ACTION_FUNCTION

// BootMagic keys                                                  QMK Default  Description
// -----------------------------------------------------------------------------------------------------------------
#define BOOTMAGIC_KEY_SALT                        KC_TAB        // KC_SPACE     The Bootmagic key
#define BOOTMAGIC_KEY_SKIP                        KC_NO         // KC_ESC       Ignore Bootmagic configuration in EEPROM
#define BOOTMAGIC_KEY_EEPROM_CLEAR                KC_BSPACE     // KC_BSPACE    Clear the EEPROM configuration
#define BOOTMAGIC_KEY_BOOTLOADER                  KC_B          // KC_B         Enter the bootloader
#define BOOTMAGIC_KEY_DEBUG_ENABLE                KC_D          // KC_D         Toggle debugging over serial
#define BOOTMAGIC_KEY_DEBUG_MATRIX                KC_X          // KC_X         Toggle matrix debugging
#define BOOTMAGIC_KEY_DEBUG_KEYBOARD              KC_K          // KC_K         Toggle keyboard debugging
#define BOOTMAGIC_KEY_DEBUG_MOUSE                 KC_M          // KC_M         Toggle mouse debugging
#define BOOTMAGIC_KEY_SWAP_CONTROL_CAPSLOCK       KC_NO         // KC_LCTRL     Swap Left Control and Caps Lock
#define BOOTMAGIC_KEY_CAPSLOCK_TO_CONTROL         KC_NO         // kC_CAPSLOCK  Toggle treating Caps Lock as Left Control
#define BOOTMAGIC_KEY_SWAP_LALT_LGUI              KC_NO         // KC_LALT      Toggle swapping Left Alt and Left GUI (for macOS)
#define BOOTMAGIC_KEY_SWAP_RALT_RGUI              KC_NO         // KC_RALT      Toggle swapping Right Alt and Right GUI (for macOS)
#define BOOTMAGIC_KEY_NO_GUI                      KC_NO         // KC_LGUI      Toggle the GUI keys (useful when gaming)
#define BOOTMAGIC_KEY_SWAP_GRAVE_ESC              KC_NO         // KC_GRAVE     Toggle swapping <code>&#96;</code> and Escape
#define BOOTMAGIC_KEY_SWAP_BACKSLASH_BACKSPACE    KC_NO         // KC_BSLASH    Toggle swapping `\` and Backspace
#define BOOTMAGIC_HOST_NKRO                       KC_N          // KC_N         Toggle N-Key Rollover (NKRO)
#define BOOTMAGIC_KEY_DEFAULT_LAYER_0             KC_GRV        // KC_0         Make layer 0(Mac) the default layer
#define BOOTMAGIC_KEY_DEFAULT_LAYER_1             KC_1          // KC_1         Make layer 1(Linux) the default layer
#define BOOTMAGIC_KEY_DEFAULT_LAYER_2             KC_2          // KC_2         Make layer 2(Windows) the default layer
#define BOOTMAGIC_KEY_DEFAULT_LAYER_3             KC_NO         // KC_3         Make layer 3 the default layer
#define BOOTMAGIC_KEY_DEFAULT_LAYER_4             KC_NO         // KC_4         Make layer 4 the default layer
#define BOOTMAGIC_KEY_DEFAULT_LAYER_5             KC_NO         // KC_5         Make layer 5 the default layer
#define BOOTMAGIC_KEY_DEFAULT_LAYER_6             KC_NO         // KC_6         Make layer 6 the default layer
#define BOOTMAGIC_KEY_DEFAULT_LAYER_7             KC_NO         // KC_7         Make layer 7 the default layer
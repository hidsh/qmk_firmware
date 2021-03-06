#include "asceension.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Mac
    [0] = { {KC_NO,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,   KC_F10,   KC_F11,   KC_F12,   KC_DEL},
            {KC_GRAVE, KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC},
            {KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS},
            {KC_F18,   KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,    KC_SCLN,  KC_QUOT,  KC_ENT,   KC_NO},
            {KC_HOME,  KC_END,   KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM, KC_DOT,   KC_SLSH,  KC_PGDN,  KC_PGUP},
            {KC_NO,    KC_NO,    KC_NO,    KC_ESC,   KC_LSFT,  KC_LOPT,  KC_BTN2,  KC_SPC,   KC_LEFT,  KC_DOWN, KC_UP,    KC_RGHT,  KC_NO,    KC_NO},
            {KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_LCMD,  KC_BTN1,  KC_SPC,   KC_LCTRL, KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO} },
    // Win
	[1] = { {KC_NO,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,   KC_F10,   KC_F11,   KC_F12,   KC_DEL},
            {KC_GRAVE, KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC},
            {KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS},
            {KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,    KC_SCLN,  KC_QUOT,  KC_ENT,   KC_NO},
            {KC_HOME,  KC_END,   KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM, KC_DOT,   KC_SLSH,  KC_PGDN,  KC_PGUP},
            {KC_NO,    KC_NO,    KC_NO,    KC_ESC,   KC_LSFT,  KC_LWIN,  KC_BTN2,  KC_SPC,   KC_LEFT,  KC_DOWN, KC_UP,    KC_RGHT,  KC_NO,    KC_NO},
            {KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_LALT,  KC_BTN1,  KC_SPC,   KC_LCTRL, KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO} },

    // optional layer
	[2] = { {KC_NO,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS},
            {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS},
            {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS},
            {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_NO},
            {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS},
            {KC_NO,    KC_NO,    KC_NO,    RESET,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_NO,    KC_NO},
            {KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO} },
};

void matrix_init_user(void) {
    dprintf("matrix_init_user()\n");
}

void matrix_scan_user(void) {
    static bool dipsw_not_yet = true;
    
    if(dipsw_not_yet) {
        dipsw_not_yet = false;
        read_dipsw();
    }
}

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_GRAVE,            KC_1,    KC_2,            KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,         KC_EQL,  KC_BSPC,
        KC_TAB,              KC_Q,    KC_W,            KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,         KC_RBRC, KC_BSLS,
        C_S_T(KC_ESCAPE),    KC_A,    KC_S,            KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,                  KC_ENT,
        LM(1, MOD_LSFT),              KC_Z,            KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  RSFT_T(KC_SLSH), KC_UP,   KC_DEL,
        KC_LCTL,             KC_LGUI, KC_LALT,                                    KC_SPC,                    KC_RALT, MO(2),   KC_LEFT,         KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT(
        _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,            _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,   _______, _______,                      KC_UNDERSCORE,                   _______, _______, _______, _______, _______
    ),
    [2] = LAYOUT(
        TO(4),   KC_F1,   KC_F2,     KC_F3,   KC_F4,   KC_F5, KC_F6, KC_F7, KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
        KC_NO, KC_PGDN, KC_UP,       KC_PGUP, KC_NO,   KC_NO, KC_NO, KC_NO, KC_WH_U, KC_BTN1, KC_MS_U, KC_BTN2, KC_NO,   KC_NO,
        KC_NO, KC_LEFT, KC_DOWN,     KC_RGHT, KC_NO,   KC_NO, KC_NO, KC_NO, KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R,          KC_NO,
        KC_NO,          KC_INSERT,   KC_HOME, KC_END,  KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_END,  KC_PGDN, KC_VOLU, KC_MUTE,
        KC_NO,          TO(3),   KC_NO,                   KC_NO,                     MO(5),   KC_NO,   KC_MPRV, KC_VOLD, KC_MNXT
    ),
    [3] = LAYOUT(
        KC_NO, KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, RGB_TOG, RGB_MOD,  RGB_HUI, RGB_SAI, RGB_VAI, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        TO(0), BL_TOGG, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO,        TO(0),
        KC_NO,          KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO,          KC_NO, KC_NO,                    KC_NO,                     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
    ),
    [4] = LAYOUT(
        KC_NUM, KC_PSLS,   KC_PAST, KC_PMNS, KC_PPLS, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSLS, KC_PAST, KC_PMNS, KC_PPLS, KC_BSPC,
        KC_NO,  KC_P7,     KC_P8,   KC_P9,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_P7, KC_P8,   KC_P9,   KC_NO,   KC_NO,   KC_NO,
        TO(0),  KC_P4,     KC_P5,   KC_P6,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_P4, KC_P5,   KC_P6,   KC_NO,            TO(0),
        KC_NO,             KC_P1,   KC_P2,   KC_P3,   KC_NO, KC_NO, KC_NO, KC_NO, KC_P1,   KC_P2,   KC_P3,   KC_UP,   KC_DEL,
        KC_NO,  KC_P0,     KC_PDOT,                       KC_PENT,                KC_P0,   KC_PDOT, KC_LEFT, KC_DOWN, KC_RIGHT
    ),
    [5] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, QK_RBT,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, QK_MAKE,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO,        QK_BOOT,
        KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO,                        KC_NO,               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
    )
};

#include QMK_KEYBOARD_H


#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3
#define _LAYER4 4

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
    LAYER3,
    LAYER4,
};

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_LAYER0] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_LBRC, KC_RBRC, KC_6, KC_7, KC_8, KC_9, KC_0, KC_GRV, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_MINS, KC_EQL, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, TO(3), KC_SLSH, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, TO(4), KC_INS, KC_N, KC_M, KC_COMM, KC_DOT, KC_UP, KC_RSFT, KC_LCTL, KC_LGUI, KC_LALT, KC_RALT, KC_BSPC, MO(1), KC_DEL, KC_ENT, MO(2), KC_SPC, LT(1,KC_F13), KC_LEFT, KC_DOWN, KC_RGHT),

[_LAYER1] = LAYOUT(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_LCBR, KC_RCBR, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_UNDS, KC_PLUS, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE, KC_NO, KC_NO, KC_LGUI, KC_LSFT, KC_S, KC_NO, KC_NO, KC_QUES, KC_MUTE, KC_MPRV, KC_MPLY, KC_MNXT, KC_COLN, KC_DQUO, KC_NO, KC_NO, KC_NO, KC_I, KC_L, KC_NO, KC_DEL, KC_INS, KC_VOLD, KC_VOLU, KC_LT, KC_GT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SPC, KC_TRNS, KC_ENT, KC_BSPC, KC_TRNS, KC_SPC, KC_HOME, KC_PGUP, KC_PGDN, KC_END),

[_LAYER2] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PLUS, KC_7, KC_8, KC_9, KC_ASTR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MINS, KC_4, KC_5, KC_6, KC_SLSH, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_DEL, KC_INS, KC_NO, KC_1, KC_2, KC_3, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SPC, KC_TRNS, KC_ENT, KC_BSPC, KC_TRNS, KC_SPC, KC_0, KC_DOT, KC_NO, KC_NO),

[_LAYER3] = LAYOUT(KC_ESC, KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLD, KC_VOLU, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, TO(0), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SPC, KC_B, KC_P, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),

[_LAYER4] = LAYOUT(KC_NO, KC_ESC, KC_MPLY, KC_VOLD, KC_VOLU, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_B, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_M, KC_LSFT, KC_A, KC_S, KC_D, KC_F, TO(0), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_U, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LALT, KC_SPC, KC_4, KC_G, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO) 

};
#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
enum layers {
    WIN,
    WIN_FN,
    MAC,
    MAC_FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC] = LAYOUT(
        KC_GRV ,  KC_F1 ,  KC_F2 ,  KC_F3 ,  KC_F4 ,  KC_F5 ,  KC_F6 ,  KC_F7 ,  KC_F8 ,  KC_F9 ,  KC_F10,  KC_F11,  KC_F12,  KC_INS,  KC_DEL,      KC_CALC, KC_MPLY, KC_MPRV, KC_MNXT,\
        KC_ESC ,   KC_1 ,   KC_2 ,   KC_3 ,   KC_4 ,   KC_5 ,   KC_6 ,   KC_7 ,   KC_8 ,   KC_9 ,   KC_0 , KC_MINS,  KC_EQL,          KC_BSPC,      KC_LPRN, KC_RPRN, KC_PSLS, KC_PAST,\
        KC_TAB ,       KC_Q ,   KC_W ,   KC_E ,   KC_R ,   KC_T ,   KC_Y ,   KC_U ,   KC_I ,   KC_O ,   KC_P , KC_LBRC, KC_RBRC,      KC_BSLS,       KC_P7 ,  KC_P8 ,  KC_P9 , KC_PMNS,\
        KC_LCMD,          KC_A ,   KC_S ,   KC_D ,   KC_F ,   KC_G ,   KC_H ,   KC_J ,   KC_K ,   KC_L , KC_SCLN, KC_QUOT,             KC_ENT,       KC_P4 ,  KC_P5 ,  KC_P6 , KC_PPLS,\
        KC_LSFT,             KC_Z ,   KC_X ,   KC_C ,   KC_V ,   KC_B ,   KC_N ,   KC_M , KC_COMM,  KC_DOT, KC_SLSH,         KC_CAPS,  KC_UP ,       KC_P1 ,  KC_P2 ,  KC_P3 ,         \
        KC_F24 ,    KC_LCTL,    KC_LOPT,   MO(MAC_FN),        KC_SPC,           KC_RSFT,    KC_ROPT,    KC_RCTL,    KC_RCMD, KC_LEFT, KC_DOWN,      KC_RGHT,  KC_P0 , KC_PDOT, KC_PENT ),

    [MAC_FN] = LAYOUT(
        QK_BOOT,    DF(MAC),    DF(WIN),    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    KC_NUM,     KC_PSCR,    KC_F20,     KC_F21,\
        _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    KC_HOME,    KC_END,     KC_PGUP,    KC_PGDN,\
        LCAG(KC_LEFT),          KC_F13,     LCA(KC_W),  _______,    _______,    _______,    _______,    KC_HOME,    KC_UP,      KC_END,     _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,\
        _______,    G(KC_W),    KC_F18,     LCA(KC_D),  KC_F17,     _______,    KC_DEL,     KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_BSPC,    _______,    _______,    _______,    _______,    _______,    _______,\
        _______,    LCA(KC_Z),  KC_F19,     KC_F20,     KC_F16,     _______,    A(KC_LEFT), A(KC_RGHT), _______,    _______,    _______,    _______,    KC_VOLU,    _______,    _______,    _______,\
        _______,    _______,    _______,    _______,    KC_F15,     _______,    _______,    _______,    _______,    C(KC_LEFT), KC_VOLD,    C(KC_RGHT), _______,    _______,    _______ ),

    [WIN] = LAYOUT(
        KC_GRV ,  KC_F1 ,  KC_F2 ,  KC_F3 ,  KC_F4 ,  KC_F5 ,  KC_F6 ,  KC_F7 ,  KC_F8 ,  KC_F9 ,  KC_F10,  KC_F11,  KC_F12,  KC_INS,  KC_DEL,      KC_CALC, KC_MPLY, KC_MPRV, KC_MNXT,\
        KC_ESC ,   KC_1 ,   KC_2 ,   KC_3 ,   KC_4 ,   KC_5 ,   KC_6 ,   KC_7 ,   KC_8 ,   KC_9 ,   KC_0 , KC_MINS,  KC_EQL,          KC_BSPC,      KC_LPRN, KC_RPRN, KC_PSLS, KC_PAST,\
        KC_TAB ,       KC_Q ,   KC_W ,   KC_E ,   KC_R ,   KC_T ,   KC_Y ,   KC_U ,   KC_I ,   KC_O ,   KC_P , KC_LBRC, KC_RBRC,      KC_BSLS,       KC_P7 ,  KC_P8 ,  KC_P9 , KC_PMNS,\
        KC_LCTL,          KC_A ,   KC_S ,   KC_D ,   KC_F ,   KC_G ,   KC_H ,   KC_J ,   KC_K ,   KC_L , KC_SCLN, KC_QUOT,             KC_ENT,       KC_P4 ,  KC_P5 ,  KC_P6 , KC_PPLS,\
        KC_LSFT,             KC_Z ,   KC_X ,   KC_C ,   KC_V ,   KC_B ,   KC_N ,   KC_M , KC_COMM,  KC_DOT, KC_SLSH,          KC_F14,  KC_UP ,       KC_P1 ,  KC_P2 ,  KC_P3 ,         \
        KC_CAPS,    KC_LGUI,    KC_LALT,   MO(WIN_FN),        KC_SPC,           KC_RSFT,    KC_RALT,     KC_F19,    KC_RCTL, KC_LEFT, KC_DOWN,      KC_RGHT,  KC_P0 , KC_PDOT, KC_PENT ),

    [WIN_FN] = LAYOUT(
        QK_BOOT,    DF(MAC),    DF(WIN),    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    KC_NUM,     KC_PSCR,    KC_F20,     KC_F21,\
        _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    KC_HOME,    KC_END,     KC_PGUP,    KC_PGDN,\
        LSG(KC_LEFT),           KC_F13,     C(KC_F18),  G(KC_E),    C(S(KC_ESC)),           _______,    _______,    KC_HOME,    KC_UP,      KC_END,     _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,\
        _______,    A(KC_F4),   _______,    KC_F15,     KC_F17,     _______,    KC_DEL,     KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_BSPC,    _______,    _______,    _______,    _______,    _______,    _______,\
        _______,    LCA(KC_F12),            S(KC_F18),  G(KC_1),    KC_F16,     _______,    KC_PGUP,    KC_PGDN,    _______,    _______,    _______,    _______,    KC_VOLU,    _______,    _______,    _______,\
        _______,    _______,    _______,    _______,    KC_F20,     _______,    _______,    _______,    _______,    C(G(KC_LEFT)),          KC_VOLD,    C(G(KC_RGHT)),          _______,    _______,    _______ ),
};

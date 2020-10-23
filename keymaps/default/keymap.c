#include QMK_KEYBOARD_H

// static bool is_LFN_pressed;

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    QMKURL
};

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
#define _1 0
#define _2 1
#define FN 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_1] = KEYMAP(
        KC_GRV ,  KC_F1 ,  KC_F2 ,  KC_F3 ,  KC_F4 ,  KC_F5 ,  KC_F6 ,  KC_F7 ,  KC_F8 ,  KC_F9 ,  KC_F10,  KC_F11,  KC_F12,  KC_INS,  KC_DEL, KC_CALC, KC_MPLY, KC_MPRV, KC_MNXT,\
        KC_ESC ,   KC_1 ,   KC_2 ,   KC_3 ,   KC_4 ,   KC_5 ,   KC_6 ,   KC_7 ,   KC_8 ,   KC_9 ,   KC_0 , KC_MINS,  KC_EQL,          KC_BSPC, KC_LPRN, KC_RPRN, KC_RPRN, KC_PAST,\
        KC_TAB ,       KC_Q ,   KC_W ,   KC_E ,   KC_R ,   KC_T ,   KC_Y ,   KC_U ,   KC_I ,   KC_O ,   KC_P , KC_LBRC, KC_RBRC,      KC_BSLS,  KC_P7 ,  KC_P8 ,  KC_P9 , KC_PMNS,\
        KC_LCTL,          KC_A ,   KC_S ,   KC_D ,   KC_F ,   KC_G ,   KC_H ,   KC_J ,   KC_K ,   KC_L , KC_SCLN, KC_QUOT,             KC_ENT,  KC_P4 ,  KC_P5 ,  KC_P6 , KC_PPLS,\
        KC_LSFT,             KC_Z ,   KC_X ,   KC_C ,   KC_V ,   KC_B ,   KC_N ,   KC_M , KC_COMM,  KC_DOT, KC_SLSH,          KC_F14,  KC_UP ,  KC_P1 ,  KC_P2 ,  KC_P3 ,         \
        KC_CAPS,    KC_LGUI,    KC_LALT,     MO(FN),          KC_SPC,           KC_RSFT,    KC_RALT,    KC_RGUI,    KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT,  KC_P0 , KC_PDOT, KC_PENT ),

    [_2] = KEYMAP(
        KC_ESC ,  KC_F1 ,  KC_F2 ,  KC_F3 ,  KC_F4 ,  KC_F5 ,  KC_F6 ,  KC_F7 ,  KC_F8 ,  KC_F9 ,  KC_F10,  KC_F11,  KC_F12,  KC_INS,  KC_DEL, KC_CALC, KC_MPLY, KC_MPRV, KC_MNXT,\
        KC_GRV ,   KC_1 ,   KC_2 ,   KC_3 ,   KC_4 ,   KC_5 ,   KC_6 ,   KC_7 ,   KC_8 ,   KC_9 ,   KC_0 , KC_MINS,  KC_EQL,          KC_BSPC, KC_LPRN, KC_RPRN, KC_RPRN, KC_PAST,\
        KC_TAB ,       KC_Q ,   KC_W ,   KC_E ,   KC_R ,   KC_T ,   KC_Y ,   KC_U ,   KC_I ,   KC_O ,   KC_P , KC_LBRC, KC_RBRC,      KC_BSLS,  KC_P7 ,  KC_P8 ,  KC_P9 , KC_PMNS,\
        KC_CAPS,          KC_A ,   KC_S ,   KC_D ,   KC_F ,   KC_G ,   KC_H ,   KC_J ,   KC_K ,   KC_L , KC_SCLN, KC_QUOT,             KC_ENT,  KC_P4 ,  KC_P5 ,  KC_P6 , KC_PPLS,\
        KC_LSFT,             KC_Z ,   KC_X ,   KC_C ,   KC_V ,   KC_B ,   KC_N ,   KC_M , KC_COMM,  KC_DOT, KC_SLSH,          KC_F14,  KC_UP ,  KC_P1 ,  KC_P2 ,  KC_P3 ,         \
        KC_LCTL,    KC_LGUI,    KC_LALT,     MO(FN),          KC_SPC,           KC_RSFT,    KC_RALT,    KC_RGUI,    KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT,  KC_P0 , KC_PDOT, KC_PENT ),

    [FN] = KEYMAP(
        RESET  ,    DF(_1),     DF(_2),     _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    KC_CALC,    KC_MPLY,    KC_MPRV,    KC_MNXT,\
        _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    LCTL(LGUI(KC_LEFT)),    LCTL(LGUI(KC_RGHT)),    _______,    _______,    _______,    KC_HOME,    KC_END,     KC_PGUP,    KC_PGDN,\
        LSFT(LGUI(KC_LEFT)),    KC_F13,     LCA(KC_W),  LGUI(KC_E), LCTL(LSFT(KC_GRV)),     _______,    _______,    KC_HOME,    KC_UP,      KC_END,     _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,\
        _______,    RALT(KC_F4),            _______,    KC_F15, KC_F17,         _______,    KC_DEL,     KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_BSPC,    _______,    _______,    _______,    _______,    _______,    _______,\
        _______,    LCA(KC_Z),  KC_F18,     LGUI(KC_1), KC_F16,     _______,    LCTL(KC_LEFT),          LCTL(KC_RGHT),          _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,\
        _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    KC_VOLU,    _______,    _______,    _______,    _______ ),


        // KC_ESC ,  KC_F1 ,  KC_F2 ,  KC_F3 ,  KC_F4 ,  KC_F5 ,  KC_F6 ,  KC_F7 ,  KC_F8 ,  KC_F9 ,  KC_F10,  KC_F11,  KC_F12,  KC_INS,  KC_DEL, KC_CALC, KC_MPLY, KC_MPRV, KC_MNXT,
        // KC_GRV ,   KC_1 ,   KC_2 ,   KC_3 ,   KC_4 ,   KC_5 ,   KC_6 ,   KC_7 ,   KC_8 ,   KC_9 ,   KC_0 , KC_MINS,  KC_EQL,          KC_BSPC, KC_LPRN, KC_RPRN, KC_RPRN, KC_PAST,
        // KC_TAB ,       KC_Q ,   KC_W ,   KC_E ,   KC_R ,   KC_T ,   KC_Y ,   KC_U ,   KC_I ,   KC_O ,   KC_P , KC_LBRC, KC_RBRC,      KC_BSLS,  KC_P7 ,  KC_P8 ,  KC_P9 , KC_PMNS,
        // KC_CAPS,          KC_A ,   KC_S ,   KC_D ,   KC_F ,   KC_G ,   KC_H ,   KC_J ,   KC_K ,   KC_L , KC_SCLN, KC_QUOT,             KC_ENT,  KC_P4 ,  KC_P5 ,  KC_P6 , KC_PPLS,
        // KC_LSFT,             KC_Z ,   KC_X ,   KC_C ,   KC_V ,   KC_B ,   KC_N ,   KC_M , KC_COMM,  KC_DOT, KC_SLSH,          KC_F14,  KC_UP ,  KC_P1 ,  KC_P2 ,  KC_P3 ,
        // KC_LCTL,    KC_LGUI,    KC_LALT,     MO(FN),          KC_SPC,           KC_RSFT,    KC_RALT,    KC_RGUI,    KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT,  KC_P0 , KC_PDOT, KC_PENT ),

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // switch (keycode) {
    // case QMKBEST:
    //     if (record->event.pressed) {
    //         // when keycode QMKBEST is pressed
    //         SEND_STRING("QMK is the best thing ever!");
    //     } else {
    //         // when keycode QMKBEST is released
    //     }
    //     break;
    // case QMKURL:
    //     if (record->event.pressed) {
    //         // when keycode QMKURL is pressed
    //         SEND_STRING("https://qmk.fm/" SS_TAP(X_ENTER));
    //     } else {
    //         // when keycode QMKURL is released
    //     }
    //     break;
    // case MO(1):
    //     if (record->event.pressed) {
    //         // is_LFN_pressed = record->event.pressed;
    //         SEND_STRING(SS_DOWN(X_F13));
    //         return true;
    //     } else {
    //         // is_LFN_pressed = false;
    //         SEND_STRING(SS_UP(X_F13));
    //         return true;
    //     }
    //     break;
    // }
    return true;
}

void matrix_init_user(void) {
    DDRB |= (1 << 2);
    PORTB |= (1 << 2);
}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

    if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
        PORTB &= ~(1 << 2);
    } else {
        PORTB |= (1 << 2);
    }

}
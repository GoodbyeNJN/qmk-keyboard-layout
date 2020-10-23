/* Copyright 2018 REPLACE_WITH_YOUR_NAME
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

// static bool is_LFN_pressed;

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    KEYMAP(
        KC_ESC,         KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,     KC_INS,     KC_DEL,     KC_CALC,    KC_MPLY,    KC_MPRV,    KC_MNXT,

        KC_GRV,         KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_F6,      KC_7,           KC_9,                   KC_0,                   KC_MINS,    KC_EQL,     KC_BSPC,    KC_LPRN,    KC_RPRN,    KC_PSLS,    KC_PAST,

        KC_TAB,                     KC_Q,       KC_W,       KC_E,       KC_R,                   KC_T,       KC_6,       KC_8,       KC_I,       KC_O,       KC_P,       KC_LBRC,    KC_RBRC,    KC_BSLS,    KC_P7,      KC_P8,      KC_P9,      KC_PMNS,

        KC_CAPS,        KC_A,                   KC_S,       KC_D,       KC_F,       KC_G,       KC_Y,       KC_U,   KC_K,       KC_L,       KC_SCLN,    KC_QUOT,    KC_ENT,     KC_P4,      KC_P5,      KC_P6,      KC_PPLS,

        KC_LSFT,        KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_H,       KC_J,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_F14,     KC_UP,      KC_P1,      KC_P2,      KC_P3,

        KC_LCTL,        KC_LGUI,    KC_LALT,    MO(1),      KC_SPC,     KC_N,                   KC_M,           KC_RSFT,    KC_RALT,    KC_RGUI,    KC_RCTL,    KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_P0,      KC_PDOT,    KC_PENT),

    KEYMAP(
        RESET,          KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_NLCK,    KC_PSCR,    KC_SLCK,    KC_PAUS,

        KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                LCTL(LGUI(KC_LEFT)),    LCTL(LGUI(KC_RGHT)),    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_HOME,    KC_END, KC_PGUP,    KC_PGDN,

        LSFT(LGUI(KC_LEFT)),        KC_F13,     LCA(KC_W),  LGUI(KC_E), LCTL(LSFT(KC_GRV)),     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_UP,      KC_END,     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,

        KC_TRNS,        RALT(KC_F4),            KC_TRNS,    KC_F15,     KC_F17,     KC_TRNS,    KC_TRNS,    KC_HOME,    KC_DOWN,    KC_RGHT,    KC_BSPC,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,

        KC_TRNS,        LCA(KC_Z),  KC_F18,     LGUI(KC_1), KC_F16,     KC_TRNS,    KC_DEL,     KC_LEFT,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,

        KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    LCTL(KC_LEFT),          LCTL(KC_RGHT),  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_VOLD,    KC_TRNS,    KC_VOLU,    KC_TRNS,    KC_TRNS,    KC_TRNS)

    /*    KEYMAP(
            KC_TILD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
            KC_TRNS, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_TRNS, KC_AMPR, KC_LPRN, KC_RPRN, KC_UNDS, KC_PLUS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_CIRC, KC_ASTR, KC_TRNS, KC_TRNS, KC_TRNS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_COLN, KC_DQUO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LABK, KC_RABK, KC_QUES, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F14, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
    */
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

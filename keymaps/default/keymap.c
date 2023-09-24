#include QMK_KEYBOARD_H

typedef enum {
    TD_NONE,
    TD_UNKNOWN,
    TD_SINGLE_TAP,
    TD_SINGLE_HOLD,
    TD_DOUBLE_TAP,
    TD_DOUBLE_HOLD
} td_state_t;

typedef struct {
    bool is_press_action;
    td_state_t state;
} td_tap_t;

// Tap dance enums
enum {
    WIN_FN,
    MAC_FN,
    FN_1,
    FN_2
};

td_state_t cur_dance(tap_dance_state_t *state);

// For the tap dance. Put it here so it can be used in any keymap
void win_fn_finished(tap_dance_state_t *state, void *user_data);
void win_fn_reset(tap_dance_state_t *state, void *user_data);

void mac_fn_finished(tap_dance_state_t *state, void *user_data);
void mac_fn_reset(tap_dance_state_t *state, void *user_data);

void fn_1_finished(tap_dance_state_t *state, void *user_data);
void fn_1_reset(tap_dance_state_t *state, void *user_data);

void fn_2_finished(tap_dance_state_t *state, void *user_data);
void fn_2_reset(tap_dance_state_t *state, void *user_data);

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
enum layers {
    WIN_0,
    WIN_1,
    MAC_0,
    MAC_1
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_0] = LAYOUT(
        KC_GRV ,  KC_F1 ,  KC_F2 ,  KC_F3 ,  KC_F4 ,  KC_F5 ,  KC_F6 ,  KC_F7 ,  KC_F8 ,  KC_F9 ,  KC_F10,  KC_F11,  KC_F12,  KC_INS,  KC_DEL,      KC_CALC, KC_MPLY, KC_MPRV, KC_MNXT,\
        KC_ESC ,   KC_1 ,   KC_2 ,   KC_3 ,   KC_4 ,   KC_5 ,   KC_6 ,   KC_7 ,   KC_8 ,   KC_9 ,   KC_0 , KC_MINS,  KC_EQL,          KC_BSPC,      KC_LPRN, KC_RPRN, KC_PSLS, KC_PAST,\
        KC_TAB ,       KC_Q ,   KC_W ,   KC_E ,   KC_R ,   KC_T ,   KC_Y ,   KC_U ,   KC_I ,   KC_O ,   KC_P , KC_LBRC, KC_RBRC,      KC_BSLS,       KC_P7 ,  KC_P8 ,  KC_P9 , KC_PMNS,\
        KC_LCMD,          KC_A ,   KC_S ,   KC_D ,   KC_F ,   KC_G ,   KC_H ,   KC_J ,   KC_K ,   KC_L , KC_SCLN, KC_QUOT,             KC_ENT,       KC_P4 ,  KC_P5 ,  KC_P6 , KC_PPLS,\
        KC_LSFT,             KC_Z ,   KC_X ,   KC_C ,   KC_V ,   KC_B ,   KC_N ,   KC_M , KC_COMM,  KC_DOT, KC_SLSH,         KC_CAPS,  KC_UP ,       KC_P1 ,  KC_P2 ,  KC_P3 ,         \
        KC_F24 ,    KC_LCTL,    KC_LOPT,   MO(MAC_1),         KC_SPC,           KC_RSFT,    KC_ROPT,    KC_RCTL,    KC_RCMD, KC_LEFT, KC_DOWN,      KC_RGHT,  KC_P0 , KC_PDOT, KC_PENT ),

    [MAC_1] = LAYOUT(
        QK_BOOT,    DF(MAC_0),  DF(WIN_0),  _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    KC_NUM,     KC_PSCR,    _______,    _______,\
        _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    KC_HOME,    KC_END,     KC_PGUP,    KC_PGDN,\
        LCAG(KC_LEFT),          KC_F13,     LCA(KC_W),  _______,    _______,    _______,    _______,    KC_HOME,    KC_UP,      KC_END,     _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,\
        _______,    G(KC_W),    KC_F18,     LCA(KC_D),  KC_F17,     _______,    KC_DEL,     KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_BSPC,    _______,    _______,    _______,    _______,    _______,    _______,\
        _______,    LCA(KC_Z),  KC_F19,     KC_F20,     KC_F16,     _______,    A(KC_LEFT), A(KC_RGHT), _______,    _______,    _______,    _______,    KC_VOLU,    _______,    _______,    _______,\
        _______,    _______,    _______,    _______,    KC_F15,     _______,    _______,    _______,    _______,    C(KC_LEFT), KC_VOLD,    C(KC_RGHT), _______,    _______,    _______ ),

    [WIN_0] = LAYOUT(
        KC_GRV ,  KC_F1 ,  KC_F2 ,  KC_F3 ,  KC_F4 ,  KC_F5 ,  KC_F6 ,  KC_F7 ,  KC_F8 ,  KC_F9 ,  KC_F10,  KC_F11,  KC_F12,  KC_INS,  KC_DEL,      KC_CALC, KC_MPLY, KC_MPRV, KC_MNXT,\
        KC_ESC ,   KC_1 ,   KC_2 ,   KC_3 ,   KC_4 ,   KC_5 ,   KC_6 ,   KC_7 ,   KC_8 ,   KC_9 ,   KC_0 , KC_MINS,  KC_EQL,          KC_BSPC,      KC_LPRN, KC_RPRN, KC_PSLS, KC_PAST,\
        KC_TAB ,       KC_Q ,   KC_W ,   KC_E ,   KC_R ,   KC_T ,   KC_Y ,   KC_U ,   KC_I ,   KC_O ,   KC_P , KC_LBRC, KC_RBRC,      KC_BSLS,       KC_P7 ,  KC_P8 ,  KC_P9 , KC_PMNS,\
        KC_LCTL,          KC_A ,   KC_S ,   KC_D ,   KC_F ,   KC_G ,   KC_H ,   KC_J ,   KC_K ,   KC_L , KC_SCLN, KC_QUOT,             KC_ENT,       KC_P4 ,  KC_P5 ,  KC_P6 , KC_PPLS,\
        KC_LSFT,             KC_Z ,   KC_X ,   KC_C ,   KC_V ,   KC_B ,   KC_N ,   KC_M , KC_COMM,  KC_DOT, KC_SLSH,          KC_F14,  KC_UP ,       KC_P1 ,  KC_P2 ,  KC_P3 ,         \
        KC_F19 ,    KC_LGUI,    KC_LALT,   TD(WIN_FN),         KC_SPC,         TD(FN_1),    KC_RALT,    KC_F20 ,    KC_RCTL, KC_LEFT, KC_DOWN,      KC_RGHT,  KC_P0 , KC_PDOT, KC_PENT ),

    [WIN_1] = LAYOUT(
        QK_BOOT,    DF(MAC_0),  DF(WIN_0),  _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    KC_NUM,     KC_PSCR,    _______,    _______,\
        _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    KC_HOME,    KC_END,     KC_PGUP,    KC_PGDN,\
        LSG(KC_LEFT),           KC_F13,     C(KC_F18),  G(KC_E),    C(S(KC_ESC)),           _______,    _______,    KC_HOME,    KC_UP,      KC_END,     _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,\
        _______,    A(KC_F4),   _______,    KC_F15,     KC_F17,     _______,    KC_DEL,     KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_BSPC,    _______,    _______,    _______,    _______,    _______,    _______,\
        _______,    LCA(KC_F12),            S(KC_F18),  G(KC_1),    KC_F16,     _______,    KC_PGUP,    KC_PGDN,    _______,    _______,    _______,    _______,    KC_VOLU,    _______,    _______,    _______,\
        KC_F21,     _______,    _______,    TD(WIN_FN), KC_F22,     TD(FN_2),   _______,    _______,    _______,    C(G(KC_LEFT)),          KC_VOLD,    C(G(KC_RGHT)),          _______,    _______,    _______ ),
};

/* Return an integer that corresponds to what kind of tap dance should be executed.
 *
 * How to figure out tap dance state: interrupted and pressed.
 *
 * Interrupted: If the state of a dance is "interrupted", that means that another key has been hit
 *  under the tapping term. This is typically indicitive that you are trying to "tap" the key.
 *
 * Pressed: Whether or not the key is still being pressed. If this value is true, that means the tapping term
 *  has ended, but the key is still being pressed down. This generally means the key is being "held".
 *
 * One thing that is currenlty not possible with qmk software in regards to tap dance is to mimic the "permissive hold"
 *  feature. In general, advanced tap dances do not work well if they are used with commonly typed letters.
 *  For example "A". Tap dances are best used on non-letter keys that are not hit while typing letters.
 *
 * Good places to put an advanced tap dance:
 *  z,q,x,j,k,v,b, any function key, home/end, comma, semi-colon
 *
 * Criteria for "good placement" of a tap dance key:
 *  Not a key that is hit frequently in a sentence
 *  Not a key that is used frequently to double tap, for example 'tab' is often double tapped in a terminal, or
 *    in a web form. So 'tab' would be a poor choice for a tap dance.
 *  Letters used in common words as a double. For example 'p' in 'pepper'. If a tap dance function existed on the
 *    letter 'p', the word 'pepper' would be quite frustating to type.
 *
 * For the third point, there does exist the 'TD_DOUBLE_SINGLE_TAP', however this is not fully tested
 *
 */
td_state_t cur_dance(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) {
            return TD_SINGLE_TAP;
        } else {
            // Key has not been interrupted, but the key is still held. Means you want to send a 'HOLD'.
            return TD_SINGLE_HOLD;
        }
    } else if (state->count == 2) {
        if (!state->interrupted && state->pressed) {
            return TD_DOUBLE_HOLD;
        } else {
            return TD_DOUBLE_TAP;
        }
    } else {
        return TD_UNKNOWN;
    }
}

// Create an instance of 'td_tap_t' for tap dance.
static td_tap_t win_fn_state = {
    .is_press_action = true,
    .state = TD_NONE
};

void win_fn_finished(tap_dance_state_t *state, void *user_data) {
    win_fn_state.state = cur_dance(state);
    switch (win_fn_state.state) {
        case TD_SINGLE_TAP:
        case TD_SINGLE_HOLD:
            layer_on(WIN_1);
            break;
        case TD_DOUBLE_TAP:
            register_code(KC_LCTL);
            tap_code(KC_F19);
            unregister_code(KC_LCTL);
            break;
        case TD_DOUBLE_HOLD:
            layer_on(WIN_1);
            break;
        default:
            break;
    }
}

void win_fn_reset(tap_dance_state_t *state, void *user_data) {
    switch (win_fn_state.state) {
        case TD_SINGLE_TAP:
        case TD_SINGLE_HOLD:
            layer_off(WIN_1);
            break;
        case TD_DOUBLE_TAP:
            break;
        case TD_DOUBLE_HOLD:
            layer_off(WIN_1);
            break;
        default:
            break;
    }
    win_fn_state.state = TD_NONE;
}

static td_tap_t mac_fn_state = {
    .is_press_action = true,
    .state = TD_NONE
};

void mac_fn_finished(tap_dance_state_t *state, void *user_data) {
    mac_fn_state.state = cur_dance(state);
    switch (mac_fn_state.state) {
        case TD_SINGLE_TAP:
        case TD_SINGLE_HOLD:
        case TD_DOUBLE_TAP:
        case TD_DOUBLE_HOLD:
        default:
            break;
    }
}

void mac_fn_reset(tap_dance_state_t *state, void *user_data) {
    switch (mac_fn_state.state) {
        case TD_SINGLE_TAP:
        case TD_SINGLE_HOLD:
        case TD_DOUBLE_TAP:
        case TD_DOUBLE_HOLD:
        default:
            break;
    }
    mac_fn_state.state = TD_NONE;
}

static td_tap_t fn_1_state = {
    .is_press_action = true,
    .state = TD_NONE
};

void fn_1_finished(tap_dance_state_t *state, void *user_data) {
    fn_1_state.state = cur_dance(state);
    switch (fn_1_state.state) {
        case TD_SINGLE_TAP:
        case TD_SINGLE_HOLD:
            register_code(KC_RSFT);
            break;
        case TD_DOUBLE_TAP:
            register_code(KC_RSFT);
            tap_code(KC_F19);
            unregister_code(KC_RSFT);
            break;
        case TD_DOUBLE_HOLD:
            register_code(KC_RSFT);
            break;
        default:
            break;
    }
}

void fn_1_reset(tap_dance_state_t *state, void *user_data) {
    switch (fn_1_state.state) {
        case TD_SINGLE_TAP:
        case TD_SINGLE_HOLD:
            unregister_code(KC_RSFT);
            break;
        case TD_DOUBLE_TAP:
            break;
        case TD_DOUBLE_HOLD:
            unregister_code(KC_RSFT);
            break;
        default:
            break;
    }
    fn_1_state.state = TD_NONE;
}

static td_tap_t fn_2_state = {
    .is_press_action = true,
    .state = TD_NONE
};

void fn_2_finished(tap_dance_state_t *state, void *user_data) {
    fn_2_state.state = cur_dance(state);
    switch (fn_2_state.state) {
        case TD_SINGLE_TAP:
        case TD_SINGLE_HOLD:
            register_code(KC_RSFT);
            break;
        case TD_DOUBLE_TAP:
            register_code(KC_RSFT);
            register_code(KC_RCTL);
            tap_code(KC_F19);
            unregister_code(KC_RCTL);
            unregister_code(KC_RSFT);
            break;
        case TD_DOUBLE_HOLD:
            register_code(KC_RSFT);
            break;
        default:
            break;
    }
}

void fn_2_reset(tap_dance_state_t *state, void *user_data) {
    switch (fn_2_state.state) {
        case TD_SINGLE_TAP:
        case TD_SINGLE_HOLD:
            unregister_code(KC_RSFT);
            break;
        case TD_DOUBLE_TAP:
            break;
        case TD_DOUBLE_HOLD:
            unregister_code(KC_RSFT);
            break;
        default:
            break;
    }
    fn_2_state.state = TD_NONE;
}

tap_dance_action_t tap_dance_actions[] = {
    [WIN_FN] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, win_fn_finished, win_fn_reset),
    [MAC_FN] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, mac_fn_finished, mac_fn_reset),
    [FN_1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, fn_1_finished, fn_1_reset),
    [FN_2] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, fn_2_finished, fn_2_reset)
};

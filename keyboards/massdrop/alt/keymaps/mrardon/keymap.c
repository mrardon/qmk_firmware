#include "keymap.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
    COLEMAK Layout
    */
    [_COLEMAK] = LAYOUT_65_ansi_blocker(
        KC_ESC,          KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,  \
        KC_TAB,          KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_LBRC, KC_RBRC, KC_BSLS, KC_GRAVE, \
        LGUI_T(KC_BSPC), KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,          KC_ENT,  KC_PGUP, \
        KC_LSFT,         KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,   KC_PGDN, \
        KC_LCTL,         KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, MO(_FUNC),   KC_LEFT, KC_DOWN, KC_RGHT  \
    ),
    /*
    COLEMAK DH ANSI Layout
    */
    [_COLEMAK_DH] = LAYOUT_65_ansi_blocker(
        KC_ESC,          KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,  \
        KC_TAB,          KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_LBRC, KC_RBRC, KC_BSLS, KC_GRAVE, \
        LGUI_T(KC_BSPC), KC_A,    KC_R,    KC_S,    KC_T,    KC_G,    KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,          KC_ENT,  KC_PGUP, \
        KC_LSFT,         KC_X,    KC_C,    KC_D,    KC_V,    KC_Z,    KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,   KC_PGDN, \
        KC_LCTL,         KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, MO(_FUNC),   KC_LEFT, KC_DOWN, KC_RGHT  \
    ),
    /*
    QWERTY
    */
    [_QWERTY] = LAYOUT_65_ansi_blocker(
        KC_ESC,          KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,  \
        KC_TAB,          KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_GRAVE, \
        LGUI_T(KC_BSPC), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,  KC_PGUP, \
        KC_LSFT,         KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,   KC_PGDN, \
        KC_LCTL,         KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, MO(_FUNC),   KC_LEFT, KC_DOWN, KC_RGHT  \
    ),
    [_FUNC] = LAYOUT_65_ansi_blocker(
        ESC_GR,  KC_F1,   KC_F2,   KC_F3,      KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, KC_MUTE, \
        _______, QWERTY,  COLEMAK, COLEMAK_DH, _______, _______, _______, U_T_AUTO,U_T_AGCR,RST_EEP, _______, _______, _______, _______, KC_END, \
        _______, _______, _______, DBG_TOG,    _______, _______, _______, _______, _______, _______, _______, _______,          _______, KC_VOLU, \
        _______, _______, _______, _______,    _______, MD_BOOT, NK_TOGG, _______, _______, _______, _______, _______,          KC_PGUP, KC_VOLD, \
        _______, _______, _______,                              _______,                             _______, _______, KC_HOME, KC_PGDN, KC_END  \
    ),
    /*
    [X] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______  \
    ),
    */
};

#ifdef _______
#undef _______
#define _______ {0, 0, 0}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [_COLEMAK] = {
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RED,     RED,
        _______, _______, _______, ORANGE,  _______, _______, _______, _______, _______, ORANGE,  _______, _______, _______, _______, _______,
        _______, ORANGE,  _______, _______, _______, _______, _______, _______, ORANGE,  ORANGE,  _______, _______,          _______, _______,
        _______, _______, _______, ORANGE,  _______, _______, _______, ORANGE,  _______, _______, _______, _______,          ORANGE,  _______,
        _______, _______, _______,                            _______,                            _______, _______, ORANGE,  ORANGE,  ORANGE,
        //UnderGlow
        ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,
        ORANGE,                                                                                                                       ORANGE,
        ORANGE,                                                                                                                       ORANGE,
        ORANGE,                                                                                                                       ORANGE,
        ORANGE,                                                                                                                       ORANGE,
        ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE
    },
    [_COLEMAK_DH] = {
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RED,     RED,
        _______, _______, _______, ORANGE,  _______, _______, _______, _______, _______, ORANGE,  _______, _______, _______, _______, _______,
        _______, ORANGE,  _______, ORANGE,  _______, _______, ORANGE,  _______, ORANGE,  ORANGE,  _______, _______,          _______, _______,
        _______, _______, _______, ORANGE,  _______, _______, _______, ORANGE,  _______, _______, _______, _______,          ORANGE,  _______,
        _______, _______, _______,                            _______,                            _______, _______, ORANGE,  ORANGE,  ORANGE,
        //UnderGlow
        ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,
        ORANGE,                                                                                                                       ORANGE,
        ORANGE,                                                                                                                       ORANGE,
        ORANGE,                                                                                                                       ORANGE,
        ORANGE,                                                                                                                       ORANGE,
        ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE
    },
    [_QWERTY] = {
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RED,     RED,
        _______, ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          ORANGE,  _______,
        _______, _______, _______,                            _______,                            _______, _______, ORANGE,  ORANGE,  ORANGE,
        //UnderGlow
        ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,
        ORANGE,                                                                                                                       ORANGE,
        ORANGE,                                                                                                                       ORANGE,
        ORANGE,                                                                                                                       ORANGE,
        ORANGE,                                                                                                                       ORANGE,
        ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE
    },
    [_FUNC] = {
        _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______,  BLUE,
        _______, GREEN,   GREEN,   GREEN,   _______, _______, _______, RED,     _______,  RED,     _______, _______, _______, _______,  BLUE,
        _______, _______, _______, YELLOW,  _______, _______, _______, _______, _______,  _______, _______, _______,             GOLD,  BLUE,
        _______, _______, _______, _______, _______, RED,     RED,     _______, _______,  _______, _______, _______,             GOLD,  BLUE,
        _______, _______, _______,                            _______,                             _______, _______,  PURPLE,    GOLD,  PURPLE,
        //UnderGlow
        ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,
        ORANGE,                                                                                                                       ORANGE,
        ORANGE,                                                                                                                       ORANGE,
        ORANGE,                                                                                                                       ORANGE,
        ORANGE,                                                                                                                       ORANGE,
        ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE,  ORANGE
    },
};

#undef _______
#define _______ KC_TRNS
#endif

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {
    // Enable or disable debugging
    debug_enable=false;
    debug_matrix=false;
    debug_keyboard=false;
    //rgb_enabled_flag = true;          // Initially, keyboard RGB is enabled. Change to false config.h initializes RGB disabled.
};

void keyboard_post_init_user(void) {
    rgb_matrix_enable();
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    static uint32_t key_timer;

    switch (keycode) {
        case U_T_AUTO:
            if (record->event.pressed && MODS_SHIFT && MODS_CTRL) {
                TOGGLE_FLAG_AND_PRINT(usb_extra_manual, "USB extra port manual mode");
            }
            return false;
        case U_T_AGCR:
            if (record->event.pressed && MODS_SHIFT && MODS_CTRL) {
                TOGGLE_FLAG_AND_PRINT(usb_gcr_auto, "USB GCR auto mode");
            }
            return false;
        case DBG_TOG:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_enable, "Debug mode");
            }
            return false;
        case DBG_MTRX:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_matrix, "Debug matrix");
            }
            return false;
        case DBG_KBD:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_keyboard, "Debug keyboard");
            }
            return false;
        case DBG_MOU:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_mouse, "Debug mouse");
            }
            return false;
        case MD_BOOT:
            if (record->event.pressed) {
                key_timer = timer_read32();
            } else {
                if (timer_elapsed32(key_timer) >= 500) {
                    reset_keyboard();
                }
            }
            return false;
        case ESC_GR:
            if (record->event.pressed) {
                key_timer = timer_read32();
            } else {
                if (timer_elapsed32(key_timer) >= 150) {
                    SEND_STRING(SS_TAP(X_ESC));
                } else {
                    SEND_STRING(SS_TAP(X_GRAVE));
                }
            }
            return false;
        case RST_EEP:
            if (record->event.pressed) {
                key_timer = timer_read32();
            } else {
                if (timer_elapsed32(key_timer) >= 500) {
                    eeconfig_init();
                    dprintf("EEPROM reset\r\n");
                }
            }
            return false;
        case RGB_TOG:
            if (record->event.pressed) {
              switch (rgb_matrix_get_flags()) {
                case LED_FLAG_ALL: {
                    rgb_matrix_set_flags(LED_FLAG_KEYLIGHT | LED_FLAG_MODIFIER | LED_FLAG_INDICATOR);
                    rgb_matrix_set_color_all(0, 0, 0);
                  }
                  break;
                case (LED_FLAG_KEYLIGHT | LED_FLAG_MODIFIER | LED_FLAG_INDICATOR): {
                    rgb_matrix_set_flags(LED_FLAG_UNDERGLOW);
                    rgb_matrix_set_color_all(0, 0, 0);
                  }
                  break;
                case LED_FLAG_UNDERGLOW: {
                    rgb_matrix_set_flags(LED_FLAG_NONE);
                    rgb_matrix_disable_noeeprom();
                  }
                  break;
                default: {
                    rgb_matrix_set_flags(LED_FLAG_ALL);
                    rgb_matrix_enable_noeeprom();
                  }
                  break;
              }
            }
            return false;
        case QWERTY:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_QWERTY);
                dprintf("Default layer changed to: QWERTY\r\n");

                switch (biton32(default_layer_state)) {
                    case _COLEMAK:
                        // LED2 for COLEMAK
                        dprintf("COLEMAK");
                        break;
                    case _QWERTY:
                        // LED3 for QWERTY
                        dprintf("QWERTY");
                        break;
                    case _COLEMAK_DH:
                        dprintf("COLEMAK_DH");
                        break;
                    };
            }
            return false;

        case COLEMAK:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_COLEMAK);
                dprintf("Default layer changed to: COLEMAK\r\n");

                switch (biton32(default_layer_state)) {
                    case _COLEMAK:
                        // LED2 for COLEMAK
                        dprintf("COLEMAK");
                        break;
                    case _QWERTY:
                        // LED3 for QWERTY
                        dprintf("QWERTY");
                        break;
                    case _COLEMAK_DH:
                        dprintf("COLEMAK_DH");
                        break;
                    };
            }
            return false;

        case COLEMAK_DH:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_COLEMAK_DH);
                dprintf("Default layer changed to: COLEMAK_DH\r\n");

                switch (biton32(default_layer_state)) {
                    case _COLEMAK:
                        // LED2 for COLEMAK
                        dprintf("COLEMAK");
                        break;
                    case _QWERTY:
                        // LED3 for QWERTY
                        dprintf("QWERTY");
                        break;
                    case _COLEMAK_DH:
                        dprintf("COLEMAK_DH");
                        break;
                    };
            }
            return false;
        default:
            return true; //Process all other keycodes normally
    }
}

void set_layer_color(int layer) {
    for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
        HSV hsv = {
            .h = pgm_read_byte(&ledmap[layer][i][0]),
            .s = pgm_read_byte(&ledmap[layer][i][1]),
            .v = pgm_read_byte(&ledmap[layer][i][2]),
        };
        if (hsv.h || hsv.s || hsv.v) {
            RGB rgb = hsv_to_rgb(hsv);
            float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
            rgb_matrix_set_color(i, f * rgb.r, f * rgb.g, f * rgb.b);
        } else if (layer == _FUNC) {
            // Only deactivate non-defined key LEDs at layers other than FN. Because at FN we have RGB adjustments and need to see them live.
            // If the values are all false then it's a transparent key and deactivate LED at this layer
            rgb_matrix_set_color(i, 0, 0, 0);
        }
    }
}
void rgb_matrix_indicators_user(void) {
    if (g_suspend_state || disable_layer_color ||
        rgb_matrix_get_flags() == LED_FLAG_NONE ||
        rgb_matrix_get_flags() == LED_FLAG_UNDERGLOW) {
            return;
        }

    if(get_highest_layer(layer_state) == _FUNC) {
        set_layer_color(_FUNC);
        return;
    }

    set_layer_color(biton32(default_layer_state));
    dprintf("Layer: %d, State: %d\r\n", get_highest_layer(layer_state), layer_state);
}

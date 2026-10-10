/*
Copyright 2022 @Yowkees
Copyright 2022 MURAOKA Taro (aka KoRoN, @kaoriya)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#include "quantum.h"

// Raw matrix order, transcribed from the Vial layout (keyball61.vil).
// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = {
        { QK_GESC        , KC_1           , KC_2           , XXXXXXX        , KC_3           , KC_4           , KC_5           , XXXXXXX },
        { KC_TAB         , KC_Q           , KC_W           , XXXXXXX        , KC_E           , KC_R           , KC_T           , XXXXXXX },
        { KC_LCTL        , KC_A           , KC_S           , XXXXXXX        , KC_D           , KC_F           , KC_G           , XXXXXXX },
        { TL_LOWR        , KC_Z           , KC_X           , XXXXXXX        , KC_C           , KC_V           , KC_B           , KC_LNG2 },
        { KC_LSFT        , KC_CAPS        , KC_LCTL        , XXXXXXX        , KC_LGUI        , KC_LALT        , KC_LSFT        , KC_SPC },
        { KC_MINS        , KC_0           , KC_9           , XXXXXXX        , KC_8           , KC_7           , KC_6           , XXXXXXX },
        { KC_BSLS        , KC_P           , KC_O           , XXXXXXX        , KC_I           , KC_U           , KC_Y           , XXXXXXX },
        { KC_QUOT        , KC_SCLN        , KC_L           , XXXXXXX        , KC_K           , KC_J           , KC_H           , XXXXXXX },
        { TL_UPPR        , KC_SLSH        , KC_DOT         , XXXXXXX        , KC_COMM        , KC_M           , KC_N           , KC_LNG1 },
        { KC_PSCR        , KC_RALT        , _______        , XXXXXXX        , KC_RGUI        , LT(1, KC_LNG2) , KC_BSPC        , KC_ENT },
    },
    [1] = {
        { KC_GRV         , KC_F1          , KC_F2          , XXXXXXX        , KC_F3          , KC_F4          , KC_F5          , XXXXXXX },
        { _______        , KC_HOME        , KC_UP          , XXXXXXX        , KC_END         , _______        , _______        , XXXXXXX },
        { _______        , KC_LEFT        , KC_DOWN        , XXXXXXX        , KC_RIGHT       , _______        , _______        , XXXXXXX },
        { _______        , KC_PGUP        , _______        , XXXXXXX        , KC_PGDN        , _______        , _______        , _______ },
        { _______        , _______        , _______        , XXXXXXX        , _______        , _______        , _______        , _______ },
        { KC_EQL         , KC_F10         , KC_F9          , XXXXXXX        , KC_F8          , KC_F7          , KC_F6          , XXXXXXX },
        { KC_RBRC        , KC_LBRC        , _______        , XXXXXXX        , _______        , _______        , _______        , XXXXXXX },
        { _______        , _______        , _______        , XXXXXXX        , _______        , _______        , _______        , XXXXXXX },
        { _______        , _______        , _______        , XXXXXXX        , _______        , _______        , _______        , _______ },
        { _______        , _______        , _______        , XXXXXXX        , LSFT(KC_RGUI)  , _______        , _______        , _______ },
    },
    [2] = {
        { _______        , _______        , _______        , XXXXXXX        , _______        , _______        , _______        , XXXXXXX },
        { _______        , _______        , _______        , XXXXXXX        , _______        , _______        , _______        , XXXXXXX },
        { _______        , _______        , _______        , XXXXXXX        , _______        , _______        , _______        , XXXXXXX },
        { _______        , _______        , _______        , XXXXXXX        , _______        , _______        , _______        , _______ },
        { _______        , _______        , _______        , XXXXXXX        , _______        , _______        , _______        , _______ },
        { _______        , _______        , _______        , XXXXXXX        , _______        , _______        , _______        , XXXXXXX },
        { _______        , _______        , _______        , XXXXXXX        , _______        , _______        , _______        , XXXXXXX },
        { _______        , _______        , _______        , XXXXXXX        , _______        , _______        , _______        , XXXXXXX },
        { _______        , _______        , _______        , XXXXXXX        , _______        , _______        , _______        , _______ },
        { _______        , _______        , _______        , XXXXXXX        , _______        , _______        , KC_DEL         , _______ },
    },
    [3] = {
        { _______        , _______        , _______        , XXXXXXX        , _______        , SCRL_DVD       , SCRL_DVI       , XXXXXXX },
        { _______        , _______        , _______        , XXXXXXX        , _______        , _______        , _______        , XXXXXXX },
        { _______        , _______        , _______        , XXXXXXX        , _______        , _______        , _______        , XXXXXXX },
        { _______        , _______        , _______        , XXXXXXX        , _______        , _______        , _______        , _______ },
        { _______        , _______        , _______        , XXXXXXX        , _______        , _______        , _______        , _______ },
        { KBC_RST        , KBC_SAVE       , CPI_I1K        , XXXXXXX        , CPI_I100       , CPI_D100       , CPI_D1K        , XXXXXXX },
        { _______        , _______        , _______        , XXXXXXX        , _______        , _______        , _______        , XXXXXXX },
        { _______        , _______        , _______        , XXXXXXX        , _______        , _______        , _______        , XXXXXXX },
        { _______        , _______        , _______        , XXXXXXX        , _______        , _______        , _______        , _______ },
        { EE_CLR         , QK_BOOT        , _______        , XXXXXXX        , _______        , _______        , _______        , _______ },
    },
};
// clang-format on

const uint16_t PROGMEM combo_jk[]  = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM combo_kl[]  = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM combo_jkl[] = {KC_J, KC_K, KC_L, COMBO_END};

combo_t key_combos[] = {
    COMBO(combo_jk, MS_BTN1),
    COMBO(combo_kl, MS_BTN2),
    COMBO(combo_jkl, MO(3)),
};

void keyboard_post_init_user(void) {
    // NKRO_DEFAULT_ON only applies when the EEPROM is reset, so an EEPROM
    // written by earlier firmware keeps NKRO off. There is no NKRO toggle key.
    keymap_config.nkro = true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    // Auto enable scroll mode when the highest layer is 3
    keyball_set_scroll_mode(get_highest_layer(state) == 3);
    return state;
}

#ifdef OLED_ENABLE

#    include "lib/oledkit/oledkit.h"

void oledkit_render_info_user(void) {
    keyball_oled_render_keyinfo();
    keyball_oled_render_ballinfo();
    keyball_oled_render_layerinfo();
}
#endif

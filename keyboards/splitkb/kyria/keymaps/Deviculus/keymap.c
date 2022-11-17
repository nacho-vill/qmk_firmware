/* Copyright 2019 Thomas Baart <thomas@splitkb.com>
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

#include "keymap.h"

#include "oled.c"

// #include "encoders.c"

// #include "key_overrides.c"

#ifdef COMBO_ENABLE
  #include "g/keymap_combo.h"
#endif

#include "features/casemodes.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 /*
  * Layer template
  *
  * ,-------------------------------------------.                              ,-------------------------------------------.
  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
  * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
  * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
  * |        |      |      |      |      |      |      |      |  |      |      |      |      |      |      |      |        |
  * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
  *                        |      |      |      |      |      |  |      |      |      |      |      |
  *                        |      |      |      |      |      |  |      |      |      |      |      |
  *                        `----------------------------------'  `----------------------------------'
  */

    [_COLEMAK] = LAYOUT(
      XXXXXXX, KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                                        KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT, XXXXXXX,
      XXXXXXX, KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                                        KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    XXXXXXX,
      XXXXXXX, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_COLN, XXXXXXX,
                                 LOCK, XXXXXXX,    NAV,     OS_LSFT, MOUSE,   EXTRA,   KC_SPC,  SYMBOL,  XXXXXXX, KC_MUTE
    ),
  
 /*
  * Layer template
  *
  * ,-------------------------------------------.                              ,-------------------------------------------.
  * |        |      |      |      |      |      |         s                    |------+------+------+------+------+--------|
  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
  * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
  * |        |      |      |      |      |      |      |      |  |      |      |      |      |      |      |      |        |
  * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
  *                        |      |      |      |      |      |  |      |      |      |      |      |
  *                        |      |      |      |      |      |  |      |      |      |      |      |
  *                        `----------------------------------'  `----------------------------------'
  */
    [_SYMB] = LAYOUT(
      XXXXXXX, KC_ESC,  KC_LCBR, KC_LPRN, KC_LBRC, KC_LT,                                       KC_GT,   KC_RBRC, KC_RPRN, KC_RCBR, KC_GRV,  XXXXXXX,
      XXXXXXX, KC_MINS, KC_ASTR, KC_EQL,  KC_UNDS, KC_DLR,                                      KC_HASH, OS_LCTL, OS_LSFT, OS_LALT, KC_LGUI, XXXXXXX,
      XXXXXXX, KC_PLUS, KC_AT,   KC_PERC, KC_SLSH, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_CIRC, KC_BSLS, KC_AMPR, KC_PIPE, KC_TILD, XXXXXXX,
                                 RGB_TOG, XXXXXXX, _______, CAPSWORD, XCASE,   XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX
    ),
 /*
  * Layer template
  *
  * ,-------------------------------------------.                              ,-------------------------------------------.
  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
  * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
  * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
  * |        |      |      |      |      |      |      |      |  |      |      |      |      |      |      |      |        |
  * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
  *                        |      |      |      |      |      |  |      |      |      |      |      |
  *                        |      |      |      |      |      |  |      |      |      |      |      |
  *                        `----------------------------------'  `----------------------------------'
  */
    [_NAV] = LAYOUT(
      XXXXXXX, KC_TAB,  SAVE,    FIND,    FND_REP, SELECT,                                      XXXXXXX, KC_PGUP, KC_PGDN, XXXXXXX, KC_DEL,  XXXXXXX,
      XXXXXXX, KC_LGUI, OS_LALT, OS_LSFT, OS_LCTL, PRINT,                                       XXXXXXX, KC_LEFT, KC_UP,   KC_RGHT, KC_BSPC, XXXXXXX,
      XXXXXXX, UNDO,    CUT,     COPY,    PASTE,   REDO,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME, KC_DOWN, KC_END,  KC_ENT,  XXXXXXX,
                                 XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX, KC_SPC,  _______, XXXXXXX, XXXXXXX
    ),
 /*
  * Layer templater
  *
  * ,-------------------------------------------.                              ,-------------------------------------------.
  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
  * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
  * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
  * |        |      |      |      |      |      |      |      |  |      |      |      |      |      |      |      |        |
  * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
  *                        |      |      |      |      |      |  |      |      |      |      |      |
  *                        |      |      |      |      |      |  |      |      |      |      |      |
  *                        `----------------------------------'  `----------------------------------'
  */
    [_EXTRA] = LAYOUT(
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, TASK,    WIND_LT, WIND_UP, WIND_RT, EMOJI,                                       XXXXXXX, KC_CALC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, SNIP,    DSKT_LT, WIND_DN, DSKT_RT, CLIP,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                 XXXXXXX, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
     ),
 /*
  * Layer template
  *
  * ,-------------------------------------------.                              ,-------------------------------------------.
  * |        |   8  |   7  |   6  |   5  |   ^  |                              |      |      |      |      |      |        |
  * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
  * |        |   4  |   3  |   2  |   1  |   9  |                              |      |      |      |      |      |        |
  * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
  * |        |   /  |   -  |   *  |   +  |   %  |      |      |  |      |      |      |      |      |      |      |        |
  * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
  *                        |      |   ,  |   =  |   0  |   .  |  |      |      |      |      |      |
  *                        |      |      |      |      |      |  |      |      |      |      |      |
  *                        `----------------------------------'  `----------------------------------'
  */
    [_MOUSE] = LAYOUT(
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, KC_ACL2, KC_ACL1, KC_LSFT, KC_ACL0, XXXXXXX,                                     XXXXXXX, KC_MS_L, KC_MS_U, KC_MS_R, KC_WH_U, XXXXXXX,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_WH_L, KC_MS_D, KC_WH_R, KC_WH_D, XXXXXXX,
                                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, KC_BTN3, KC_BTN1, KC_BTN2,  XXXXXXX, XXXXXXX
    ),

/*
 * Layer template
 *
 * ,-------------------------------------------.                              ,-------------------------------------------.
 * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
 * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |      |  |      |      |      |      |      |      |      |        |
 * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
 *                        |      |      |      |      |      |  |      |      |      |      |      |
 *                        |      |      |      |      |      |  |      |      |      |      |      |
 *                        `----------------------------------'  `----------------------------------'
 */
    [_NUMBER] = LAYOUT(
      XXXXXXX, KC_F12,  KC_F7,   KC_F8,   KC_F9,   XXXXXXX,                                     XXXXXXX, KC_7,    KC_8,    KC_9, KC_COMM, XXXXXXX,
      XXXXXXX, KC_F11,  KC_F4,   KC_F5,   KC_F6,   XXXXXXX,                                     KC_COLN, KC_4,    KC_5,    KC_6, KC_0,    XXXXXXX,
      XXXXXXX, KC_F10,  KC_F1,   KC_F2,   KC_F3,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_1,    KC_2,    KC_3, KC_DOT,  XXXXXXX,
                                 XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX
    )
// /*
//  * Layer template
//  *
//  * ,-------------------------------------------.                              ,-------------------------------------------.
//  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
//  * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
//  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
//  * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
//  * |        |      |      |      |      |      |      |      |  |      |      |      |      |      |      |      |        |
//  * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
//  *                        |      |      |      |      |      |  |      |      |      |      |      |
//  *                        |      |      |      |      |      |  |      |      |      |      |      |
//  *                        `----------------------------------'  `----------------------------------'
//  */
//     [_LAYERINDEX] = LAYOUT(
//       _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
//       _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
//       _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
//                                  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
//     )
};


layer_state_t layer_state_set_user(layer_state_t state) {
   return update_tri_layer_state(state, _NAV, _SYMB, _NUMBER);
}


// bool use_default_xcase_separator(uint16_t keycode, const keyrecord_t *record) {
//     switch (keycode) {
//         case KC_A ... KC_Z:
//         case KC_1 ... KC_0:
//             return true;
//     }
//     return false;
// }

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { 
        if (IS_LAYER_ON(_SYMB)){
            tap_code(clockwise ? KC_BRIU : KC_BRID);
        }
        else {
            tap_code16(clockwise ? UNDO : REDO);
        }
    }
    else if (index == 1) { 
        if (IS_LAYER_ON(_NAV)) {
            tap_code16(clockwise ? LSFT(KC_TAB) : KC_TAB);
        }
        else {
            tap_code16(clockwise ? KC_VOLD : KC_VOLU);
        } 
    }
    return false;
}
#endif

#ifdef KEY_OVERRIDE_ENABLE
//                          name                               modifiers      key    replacement
const key_override_t scln_key_override      = ko_make_basic(MOD_MASK_SHIFT, KC_COLN, KC_SCLN);
const key_override_t exlm_key_override      = ko_make_basic(MOD_MASK_SHIFT, KC_DOT,  KC_QUES);
const key_override_t ques_key_override      = ko_make_basic(MOD_MASK_SHIFT, KC_COMM, KC_EXLM);
const key_override_t hue_up_key_override    = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_BRIU, RGB_HUI, ~(1<<_EXTRA), MOD_MASK_CA);
const key_override_t hue_dn_key_override    = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_BRID, RGB_HUD, ~(1<<_EXTRA), MOD_MASK_CA);
const key_override_t sat_up_key_override    = ko_make_with_layers_and_negmods(MOD_MASK_ALT,   KC_BRIU, RGB_SAI, ~(1<<_EXTRA), MOD_MASK_CS);
const key_override_t sat_dn_key_override    = ko_make_with_layers_and_negmods(MOD_MASK_ALT,   KC_BRID, RGB_SAD, ~(1<<_EXTRA), MOD_MASK_CS);
const key_override_t val_up_key_override    = ko_make_with_layers_and_negmods(MOD_MASK_CTRL,  KC_BRIU, RGB_VAI, ~(1<<_EXTRA), MOD_MASK_SA);
const key_override_t val_dn_key_override    = ko_make_with_layers_and_negmods(MOD_MASK_CTRL,  KC_BRID, RGB_VAD, ~(1<<_EXTRA), MOD_MASK_SA);



// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
    &scln_key_override,
    &exlm_key_override,
    &ques_key_override,
    &hue_up_key_override,
    &hue_dn_key_override,
    &sat_up_key_override,
    &sat_dn_key_override,   
    &val_up_key_override,
    &val_dn_key_override,
    NULL // Null terminate the array of overrides!
};
/*
MOD_MASK_CTRL
MOD_MASK_SHIFT
MOD_MASK_ALT
MOD_MASK_GUI
*/
#endif


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // Process case modes
    if (!process_case_modes(keycode, record)) {
        return false;
    }

    // Regular user keycode case statement
    switch (keycode) {
        case XCASE:
            if (record->event.pressed) {
                enable_xcase();
            }
            return false;
        case CAPSWORD:
            if (record->event.pressed) {
                enable_caps_word();
            }
            return false;
        default:
            return true;
    }
}
#include QMK_KEYBOARD_H
#include "keymap_norwegian.h"

#define NO_AE KC_QUOT
#define NO_OE KC_SCLN
#define NO_AA KC_LBRC

#define MAC_PIPE A(KC_7)
#define MAC_QUOT KC_GRV
#define MAC_LCBR S(A(KC_8))
#define MAC_RCBR S(A(KC_9))
#define MAC_AT KC_NUHS
#define MAC_DLR S(KC_4)
#define MAC_BSLS S(A(KC_7))

enum layer_number {
  BASE_MAC = 0,
  BASE_WIN,
  SFT_MAC,
  SFT_WIN,
  CTL_MAC,
  CTL_WIN,
  GUI_MAC,
  GUI_WIN,
  ALT_MAC,
  ALT_WIN,
  NAVI,
};

enum custom_keycodes {
    SFT_SPC_TAP = SAFE_RANGE,
    L_PAR_BRC,
    R_PAR_BRC,
    TICKS,
    CHEVRONS,
    TILDE_HAT,
    EQL,
    MAC_6,
    MAC_BSPC,
    MAC_EQL,
    MAC_TICKS,
    MAC_AE,
    MAC_OE,
    MAC_AA,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* BASE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |   |  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   q  |   w  |   f  |   p  |   b  |                    |   j  |   l  |   u  |   y  |   =  |   <  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | BcSp |   a  |   r  |   s  |   t  |   g  |-------.    ,-------|   m  |   n  |   e  |   i  |   o  |   '  |
 * |------+------+------+------+------+------|   `   |    |   ~   |------+------+------+------+------+------|
 * |   (  |   z  |   x  |   c  |   d  |   v  |-------|    |-------|   k  |   h  |   ,  |   .  |   -  |   )  |
 * `-----------------------------------------'       /     \      '-----------------------------------------'
 *                   | LCTL | LGUI | LAlt |   SFT   /       \   NAVI   | RAlt | RGUI | RCTL |
 *                   | LGUI | LCTL |      |   SPC  /         \   ENT   |      | RCTL | RGUI |
 *                   '----------------------------'           '----------------------------'
 */

[BASE_MAC] = LAYOUT(
     KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5,                     MAC_6, KC_7,    KC_8,   KC_9,    KC_0,  MAC_PIPE,
     KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_B,                      KC_J, KC_L,    KC_U,   KC_Y, MAC_EQL,  CHEVRONS,
   MAC_BSPC, MAC_AA, KC_R, KC_S, KC_T, KC_G,                      KC_M, KC_N,    MAC_AE,   KC_I,    MAC_OE,  MAC_QUOT,
  L_PAR_BRC, KC_Z, KC_X, KC_C, KC_D, KC_V, TICKS,    TILDE_HAT, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, R_PAR_BRC,
        KC_LCTL, KC_LGUI, KC_LALT, SFT_T(KC_SPC),    LT(NAVI, KC_ENT), KC_RALT, KC_RGUI, KC_RCTL
),

[BASE_WIN] = LAYOUT(
     KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5,                      KC_6, KC_7,    KC_8,   KC_9,    KC_0,  NO_PIPE,
     KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_B,                      KC_J, KC_L,    KC_U,   KC_Y,     EQL, CHEVRONS,
    KC_BSPC, KC_A, KC_R, KC_S, KC_T, KC_G,                      KC_M, KC_N,    KC_E,   KC_I,    KC_O,  NO_QUOT,
    NO_LPRN, KC_Z, KC_X, KC_C, KC_D, KC_V, TICKS,    TILDE_HAT, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH,  NO_RPRN,
        KC_LGUI, KC_LCTL, KC_LALT, SFT_T(KC_SPC),    LT(NAVI, KC_ENT), KC_RALT, KC_RCTL, KC_RGUI
),

/* SFT
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   !  |   "  |   #  |   $  |   %  |                    |   ^  |   ?  |   *  |   /  |   \  |   &  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   F  |   P  |   B  |                    |   J  |   L  |   U  |   Y  |   +  |   >  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | BcSp |   A  |   R  |   S  |   T  |   G  |-------.    ,-------|   M  |   N  |   E  |   I  |   O  |   "  |
 * |------+------+------+------+------+------|   ´   |    |   @   |------+------+------+------+------+------|
 * |   [  |   Z  |   X  |   C  |   D  |   V  |-------|    |-------|   K  |   H  |   ;  |   :  |   _  |   ]  |
 * `-----------------------------------------'       /     \      '-----------------------------------------'
 *                   | LCTL | LGUI | LAlt |   SFT   /       \   NAVI   | RAlt | RGUI | RCTL |
 *                   | LGUI | LCTL |      |   SPC  /         \   ENT   |      | RCTL | RGUI |
 *                   '----------------------------'           '-----------------------------'
 */

 [SFT_MAC] = LAYOUT(
   _______, _______, _______, _______, _______, _______,                      KC_RBRC, KC_MINS, KC_BSLS,    KC_7, A(KC_7),    KC_6,
   _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, KC_MINS, _______,
    KC_DEL, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______,    KC_2,
   A(KC_8), _______, _______, _______, _______, _______, C(KC_EQL),  KC_BSLS, _______, _______, _______, _______, _______, A(KC_9),
                              _______, _______, _______, _______,    _______, _______, _______, _______
 ),

 [SFT_WIN] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, _______,
                             _______, _______, _______, _______,    _______, _______, _______, _______
 ),

/* CTL
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |      |      |      |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------'       /     \      '-----------------------------------------'
 *                   |      |      |      |         /       \          |      |      |      |
 *                   |      |      |      |        /         \         |      |      |      |
 *                   '----------------------------'           '-----------------------------'
 */

[CTL_MAC] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, _______,
                             _______, _______, _______, _______,    _______, _______, _______, _______
),

[CTL_WIN] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, _______,
                             _______, _______, _______, _______,    _______, _______, _______, _______
),

/* GUI
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |      |      |      |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------'       /     \      '-----------------------------------------'
 *                   |      |      |      |         /       \          |      |      |      |
 *                   |      |      |      |        /         \         |      |      |      |
 *                   '----------------------------'           '-----------------------------'
 */

[GUI_MAC] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, _______,
                             _______, _______, _______, _______,    _______, _______, _______, _______
),

[GUI_WIN] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, _______,
                             _______, _______, _______, _______,    _______, _______, _______, _______
),

/* ALT
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |      |      |      |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |   {  |      |      |      |      |      |-------|    |-------|      |      |      |      |      |   }  |
 * `-----------------------------------------'       /     \      '-----------------------------------------'
 *                   |      |      |      |         /       \          |      |      |      |
 *                   |      |      |      |        /         \         |      |      |      |
 *                   '----------------------------'           '-----------------------------'
 */

[ALT_MAC] = LAYOUT(
     _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______,    _______,
     _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______,    _______,
     _______, KC_LBRC, _______, _______, _______, _______,                      _______, _______, KC_QUOT, _______, KC_SCLN,    _______,
  S(A(KC_8)), _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, S(A(KC_9)),
                                _______, _______, _______, _______,    _______, _______, _______, _______
),

[ALT_WIN] = LAYOUT(
     _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
     _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
     _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
     _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, _______,
                                _______, _______, _______, _______,    _______, _______, _______, _______
),

/* NAVI
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  |  F10 | PrScr|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      | PgUp |      | F11  |                    |  F12 |      |  Up  |      | |<<  | Break|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Del  |      | Home | PgDn | End  |      |-------.    ,-------|      | Left | Down | Rght |  ||  |WinBrk|
 * |------+------+------+------+------+------| MAIN  |    | LOCK  |------+------+------+------+------+------|
 * | Ins  |      |      |LC+Ins|      |LS+Ins|-------|    |-------|      |      |      |      |  >>| |      |
 * `-----------------------------------------'       /     \      '-----------------------------------------'
 *                   |      |      |      |         /       \          |      |      |      |
 *                   |      |      |      |        /         \         |      |      |      |
 *                   '----------------------------'           '-----------------------------'
 */

[NAVI] = LAYOUT(
    _______,   KC_F1,   KC_F2,   KC_F3,        KC_F4,        KC_F5,                           KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_PSCR,
    _______, _______, _______, KC_PGUP,      _______,       KC_F11,                           KC_F12,  _______, KC_UP,   _______, KC_MPRV, KC_PAUS,
     KC_DEL, _______, KC_HOME, KC_PGDN,       KC_END,      _______,                           _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_MPLY, RGUI(KC_PAUS),
     KC_INS, _______, _______, LCTL(KC_INS), _______, LSFT(KC_INS), DF(BASE_MAC),  DF(BASE_WIN), _______, _______, _______, _______, KC_MNXT, _______,
                                    _______, _______, _______, KC_LSFT,       _______, _______, _______, _______
),
};

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
    return false;
}
#endif // OLED_ENABLE


// common overrides

// win sft overrides
const key_override_t sft_pipe_and = ko_make_with_layers(MOD_MASK_SHIFT, NO_PIPE, NO_AMPR, 1<<BASE_WIN);
const key_override_t sft_quot_dquo = ko_make_basic(MOD_MASK_SHIFT, NO_QUOT, NO_DQUO);
const key_override_t sft_4_dlr = ko_make_with_layers(MOD_MASK_SHIFT, KC_4, NO_DLR, 1<<BASE_WIN);
const key_override_t sft_6_at = ko_make_with_layers(MOD_MASK_SHIFT, KC_6, NO_AT, 1<<BASE_WIN);
const key_override_t sft_7_ques = ko_make_basic(MOD_MASK_SHIFT, KC_7, NO_QUES);
const key_override_t sft_8_astr = ko_make_basic(MOD_MASK_SHIFT, KC_8, NO_ASTR);
const key_override_t sft_9_slsh = ko_make_basic(MOD_MASK_SHIFT, KC_9, NO_SLSH);
const key_override_t sft_0_bsls = ko_make_with_layers(MOD_MASK_SHIFT, KC_0, NO_BSLS, 1<<BASE_WIN);
const key_override_t sft_eql_plus = ko_make_with_layers(MOD_MASK_SHIFT, NO_EQL, NO_PLUS, 1<<BASE_WIN);
const key_override_t sft_bspc_del = ko_make_with_layers(MOD_MASK_SHIFT, KC_BSPC, KC_DEL, 1<<BASE_WIN);
const key_override_t sft_lprn_lbrc = ko_make_with_layers(MOD_MASK_SHIFT, NO_LPRN, NO_LBRC, 1<<BASE_WIN);
const key_override_t sft_rprn_rbrc = ko_make_with_layers(MOD_MASK_SHIFT, NO_RPRN, NO_RBRC, 1<<BASE_WIN);
// win alt overrides
const key_override_t alt_e_ae = ko_make_with_layers(MOD_MASK_ALT, KC_E, NO_AE, 1<<BASE_WIN);
const key_override_t alt_o_oe = ko_make_with_layers(MOD_MASK_ALT, KC_O, NO_OE, 1<<BASE_WIN);
const key_override_t alt_a_aa = ko_make_with_layers(MOD_MASK_ALT, KC_A, NO_AA, 1<<BASE_WIN);
const key_override_t alt_lprn_lcbr = ko_make_with_layers(MOD_MASK_ALT, NO_LPRN, NO_LCBR, 1<<BASE_WIN);
const key_override_t alt_rprn_rcbr = ko_make_with_layers(MOD_MASK_ALT, NO_RPRN, NO_RCBR, 1<<BASE_WIN);

// mac sft overrides
const key_override_t m_sft_pipe_and = ko_make_with_layers(MOD_MASK_SHIFT, MAC_PIPE, NO_AMPR, 1<<BASE_MAC);
const key_override_t m_sft_quot_dquo = ko_make_with_layers(MOD_MASK_SHIFT, MAC_QUOT, NO_DQUO, 1<<BASE_MAC);
const key_override_t m_sft_4_dlr = ko_make_with_layers(MOD_MASK_SHIFT, KC_4, MAC_DLR, 1<<BASE_MAC);
const key_override_t m_sft_0_bsls = ko_make_with_layers(MOD_MASK_SHIFT, KC_0, MAC_BSLS, 1<<BASE_MAC);
//const key_override_t m_sft_quot_dquo = ko_make_with_layers(MOD_MASK_SHIFT, KC_6, MAC_AT, 1<<BASE_MAC);
// mac alt overrides


//const key_override_t sft_brk_l = ko_make_with_layers(MOD_MASK_SHIFT, A(KC_8), A(KC_8), 1<<SFT_MAC);
//const key_override_t sft_brk_r = ko_make_with_layers(MOD_MASK_SHIFT, A(KC_9), A(KC_9), 1<<SFT_MAC);
//const key_override_t sft_rti = ko_make_with_layers(MOD_MASK_SHIFT, C(KC_EQL), C(KC_EQL), 1<<SFT_MAC);
//const key_override_t sft_at = ko_make_with_layers(MOD_MASK_SHIFT, KC_BSLS, KC_BSLS, 1<<SFT_MAC);
//const key_override_t sft_plus = ko_make_with_layers(MOD_MASK_SHIFT, KC_MINS, KC_MINS, 1<<SFT_MAC);
//const key_override_t sft_nubs = ko_make_with_layers(MOD_MASK_SHIFT, KC_NUBS, KC_NUBS, 1<<SFT_MAC);

const key_override_t **key_overrides = (const key_override_t *[]){
  &sft_pipe_and,
  &sft_quot_dquo,
  &sft_4_dlr,
  &sft_6_at,
  &sft_7_ques,
  &sft_8_astr,
  &sft_9_slsh,
  &sft_0_bsls,
  //&sft_eql_plus,
  &sft_lprn_lbrc,
  &sft_rprn_rbrc,
  &m_sft_pipe_and,
  &m_sft_quot_dquo,
  &m_sft_4_dlr,
  &m_sft_0_bsls,
  //&m_sft_lprn_lbrc,
  //&m_sft_rprn_rbrc,
  &alt_e_ae,
  &alt_o_oe,
  &alt_a_aa,
  &alt_lprn_lcbr,
  &alt_rprn_rcbr,
  //&m_alt_lprn_lcbr,
  //&m_alt_rprn_rcbr,
  NULL
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  static uint16_t tap_timer;

  if (get_mods() == MOD_MASK_ALT) {
    caps_word_on();
  }

  switch(keycode) {
    case SFT_SPC_TAP: {

      if (record->event.pressed) {
          tap_timer = timer_read();

          // Start both mod and layer on press
          register_mods(MOD_BIT(KC_LSFT));
      } else {
          // Release both mod and layer on release
          unregister_mods(MOD_BIT(KC_LSFT));

          // If it's a tap, not a hold
          if (timer_elapsed(tap_timer) < TAPPING_TERM) {
              tap_code(KC_SPC);
          }
      }
      return true;
    }
    case L_PAR_BRC: {
      if (record->event.pressed) {
        uint8_t mods = get_mods();  // Get currently held modifiers

        if (mods & MOD_MASK_ALT) {
            // send {
            tap_code16(MAC_LCBR);
        } else if (mods & MOD_MASK_SHIFT) {
            // send [
            clear_mods();
            tap_code16(NO_LBRC);
            set_mods(mods);
        } else {
            // No modifier → send (
            tap_code16(NO_LPRN);
        }
      }
      // Stop default processing
      return false;
    }
    case R_PAR_BRC: {
      if (record->event.pressed) {
        uint8_t mods = get_mods();  // Get currently held modifiers

        if (mods & MOD_MASK_ALT) {
            // send {
            tap_code16(MAC_RCBR);
        } else if (mods & MOD_MASK_SHIFT) {
            // send [
            clear_mods();
            tap_code16(NO_RBRC);
            set_mods(mods);
        } else {
            // No modifier → send (
            tap_code16(NO_RPRN);
        }
      }
      // Stop default processing
      return false;
    }
    case TICKS: {
      if (record->event.pressed) {
        uint8_t mods = get_mods();  // Get currently held modifiers
        tap_timer = timer_read();

        if (mods & MOD_MASK_SHIFT) {
            // Shift is held → send ´
            clear_mods();
            tap_code16(NO_ACUT);
            set_mods(mods);
        }
        else {
            // No modifier → send `
            tap_code16(NO_GRV);
        }
      }
      else {
        if (timer_elapsed(tap_timer) < TAPPING_TERM) {
          tap_code(KC_SPC);
        }
      }
      // Stop default processing
      return false;
    }
    case MAC_TICKS: {
      if (record->event.pressed) {
        uint8_t mods = get_mods();  // Get currently held modifiers
        tap_timer = timer_read();

        if (mods & MOD_MASK_SHIFT) {
            // send ´
            unregister_mods(MOD_MASK_SHIFT);
            tap_code16(KC_EQL);
            set_mods(mods);
        }
        else {
            // send `
            tap_code16(S(KC_EQL));
        }
      }
      else {
        if (timer_elapsed(tap_timer) < TAPPING_TERM) {
          tap_code(KC_SPC);
        }
      }
      // Stop default processing
      return false;
    }
    case CHEVRONS: {
      if (record->event.pressed) {
        uint8_t mods = get_mods();  // Get currently held modifiers

        if (mods & MOD_MASK_ALT) {
            // Alt is held, send ->
            clear_mods();
            tap_code(NO_MINS);
            tap_code16(NO_RABK);
            set_mods(mods);
        }
        else {
            tap_code(NO_LABK);
        }
      }
      // Stop default processing
      return false;
    }
    case TILDE_HAT: {
      if (record->event.pressed) {
        uint8_t mods = get_mods();  // Get currently held modifiers
        tap_timer = timer_read();

        if (mods & MOD_MASK_SHIFT) {
            clear_mods();
            tap_code16(NO_CIRC); // ^
            set_mods(mods);
        }
        else {
            tap_code16(NO_TILD);
        }
      }
      else {
        if (timer_elapsed(tap_timer) < TAPPING_TERM) {
          tap_code(KC_SPC);
        }
      }
      // Stop default processing
      return false;
    }
    case EQL: {
      if (record->event.pressed) {
        uint8_t mods = get_mods();  // Get currently held modifiers
        if (mods & MOD_MASK_SHIFT) {
            clear_mods();
            tap_code16(NO_PLUS);
            set_mods(mods);
        }
        else {
            tap_code16(NO_EQL);
        }
      }
      // Stop default processing
      return false;
    }
    case MAC_6: {
      if (record->event.pressed) {
        uint8_t mods = get_mods();  // Get currently held modifiers

        if (mods & MOD_MASK_SHIFT) {
            unregister_mods(MOD_MASK_SHIFT);
            tap_code16(MAC_AT);
            set_mods(mods);
        }
        else {
          tap_code(KC_6);
        }
      }
      return false;
    }
    case MAC_BSPC: {
      if (record->event.pressed) {
        uint8_t mods = get_mods();  // Get currently held modifiers

        if (mods & MOD_MASK_SHIFT) {
            unregister_mods(MOD_MASK_SHIFT);
            tap_code(KC_DEL);
            set_mods(mods);
        }
        else {
          tap_code(KC_BSPC);
        }
      }
      return false;
    }
    case MAC_EQL: {
      if (record->event.pressed) {
        uint8_t mods = get_mods();  // Get currently held modifiers

        if (mods & MOD_MASK_SHIFT) {
            unregister_mods(MOD_MASK_SHIFT);
            tap_code(NO_PLUS);
            set_mods(mods);
        }
        else {
          tap_code16(NO_EQL);
        }
      }
      return false;
    }
    case MAC_AE: {
      if (record->event.pressed) {
        uint8_t mods = get_mods();  // Get currently held modifiers

        if (mods & MOD_MASK_ALT) {
            unregister_mods(MOD_MASK_ALT);
            tap_code(NO_AE);
            set_mods(mods);
        }
        else {
          tap_code(KC_E);
        }
      }
      // Stop default processing
      return false;
    }
    case MAC_OE: {
      if (record->event.pressed) {
        uint8_t mods = get_mods();  // Get currently held modifiers

        if (mods & MOD_MASK_ALT) {
            unregister_mods(MOD_MASK_ALT);
            tap_code(NO_OE);
            set_mods(mods);
        }
        else {
          tap_code(KC_O);
        }
      }
      // Stop default processing
      return false;
    }
    case MAC_AA: {
      if (record->event.pressed) {
        uint8_t mods = get_mods();  // Get currently held modifiers

        if (mods & MOD_MASK_ALT) {
            unregister_mods(MOD_MASK_ALT);
            tap_code(NO_AA);
            set_mods(mods);
        }
        else {
          tap_code(KC_A);
        }
      }
      // Stop default processing
      return false;
    }
    case KC_BSPC: {
      if (record->event.pressed) {
        uint8_t mods = get_mods();  // Get currently held modifiers

        if (mods & MOD_MASK_ALT) {
            unregister_mods(MOD_MASK_ALT);
            set_mods(MOD_BIT(KC_RCTL));
            tap_code(KC_BSPC);
            set_mods(mods);
        }
      }
      return false;
    }
  }
  return true;
};

bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
        case NO_AE:
        case NO_OE:
        case NO_AA:
        case NO_MINS:
            add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case KC_UNDS:
            return true;

        default:
            return false;  // Deactivate Caps Word.
    }
};

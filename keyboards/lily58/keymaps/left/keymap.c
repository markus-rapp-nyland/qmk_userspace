#include QMK_KEYBOARD_H
#include "keymap_norwegian.h"

// Fix weird names from keymap_norwegian
#define NO_OE NO_OSTR   // Ø
#define NO_AA NO_ARNG   // Å

#define MAC_PIPE A(KC_7)
#define MAC_QUOT KC_GRV
#define MAC_DQUO S(KC_2)
#define MAC_LCBR S(A(KC_8))
#define MAC_RCBR S(A(KC_9))
#define MAC_AT KC_NUHS
#define MAC_DLR S(KC_4)
#define MAC_BSLS S(A(KC_7))

// Left-hand HRM
#define HOME_A LT(0,KC_A) // "layer-tap" for ctrl with a and å support
#define HOME_R LALT_T(KC_R)
#define HOME_S LSFT_T(KC_S)
#define HOME_T LGUI_T(KC_T)

// Right-hand HRM
#define HOME_N RGUI_T(KC_N)
#define HOME_E LT(0,KC_E) // "layer-tap" for shift with e and æ support
#define HOME_I RALT_T(KC_I)
#define HOME_O LT(0,KC_O) // "layer-tap" for ctrl with o and ø support

// NAVI left-hand HRM
#define NAVI_R LALT_T(KC_HOME)
#define NAVI_S LSFT_T(KC_PGDN)
#define NAVI_T LGUI_T(KC_END)

// NAVI right-hand HRM
#define NAVI_N RGUI_T(KC_LEFT)
#define NAVI_E RSFT_T(KC_DOWN)
#define NAVI_I RALT_T(KC_RGHT)

// BASE thumb keys
#define L_GUI_ENT LGUI_T(KC_ENT)
#define R_GUI_ENT RGUI_T(KC_ENT)
#define L_ALT_BSPC LALT_T(KC_BSPC)
#define R_ALT_BSPC RALT_T(KC_BSPC)

enum layer_number {
  BASE = 0,
  NAVI,
};

enum custom_keycodes {
    TICK = SAFE_RANGE,
    TILDE,
    L_PAR_BRC,
    R_PAR_BRC,
    MAC_6,
    MAC_EQL,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* BASE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  ESC |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   q  |   w  |   f  |   p  |   b  |                    |   j  |   l  |   u  |   y  |   =  |  Tab |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |   "  |   a  |   r  |   s  |   t  |   g  |-------.    ,-------|   m  |   n  |   e  |   i  |   o  |   '  |
 * |------+------+------+------+------+------|   `   |    |   ~   |------+------+------+------+------+------|
 * |   (  |   z  |   x  |   c  |   d  |   v  |-------|    |-------|   k  |   h  |   ,  |   .  |   -  |   )  |
 * `-----------------------------------------'       /     \      '-----------------------------------------'
 *                   | LCTL | LGUI | LAlt |   SFT   /       \   NAVI   | RAlt | RGUI | RCTL |
 *                   | LGUI | LCTL |      |   SPC  /         \   ENT   |      | RCTL | RGUI |
 *                   '----------------------------'           '----------------------------'
 */

[BASE] = LAYOUT(
     KC_ESC,    KC_1,   KC_2,   KC_3,   KC_4, KC_5,                MAC_6,   KC_7,    KC_8,   KC_9,    KC_0,    KC_ESC,
     KC_TAB,    KC_Q,   KC_W,   KC_F,   KC_P, KC_B,                 KC_J,   KC_L,    KC_U,   KC_Y, MAC_EQL,    KC_TAB,
    MAC_DQUO, HOME_A, HOME_R, HOME_S, HOME_T, KC_G,                 KC_M, HOME_N,  HOME_E, HOME_I,  HOME_O,  MAC_QUOT,
   L_PAR_BRC,   KC_Z,   KC_X,   KC_C,   KC_D, KC_V, TICK,    TILDE, KC_K,   KC_H, KC_COMM, KC_DOT, KC_SLSH, R_PAR_BRC,
      KC_LCTL, L_GUI_ENT, L_ALT_BSPC, LT(NAVI, KC_SPC),      LT(NAVI, KC_SPC), R_ALT_BSPC, R_GUI_ENT, KC_RCTL
),

/* NAVI
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  |  F10 | PrScr|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   <  |   &  | PgUp |   !  | F11  |                    |  F12 |   ?  |  Up  |   |  |   >  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      | Home | PgDn | End  |   \  |-------.    ,-------|   /  | Left | Down | Rght |      |      |
 * |------+------+------+------+------+------| MAIN  |    | LOCK  |------+------+------+------+------+------|
 * |      |      |   "  |   $  |   {  |      |-------|    |-------|      |   ;  |   )  |  (   |      |      |
 * `-----------------------------------------'       /     \      '-----------------------------------------'
 *                   |      |      |      |         /       \          |      |      |      |
 *                   |      |      |      |        /         \         |      |      |      |
 *                   '----------------------------'           '-----------------------------'
 */

[NAVI] = LAYOUT(
    _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                         KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, KC_PSCR,
    _______, NO_LABK, NO_AMPR, KC_PGUP, NO_EXLM,  KC_F11,                        KC_F12, NO_QUES,  KC_UP, MAC_PIPE, NO_RABK, _______,
    _______, _______, KC_HOME, KC_PGDN,  KC_END, MAC_BSLS,                       NO_SLSH, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,
    _______, _______, NO_DQUO,  NO_DLR, NO_LCBR, _______, _______,     _______, _______, NO_SCLN, NO_RPRN, NO_LPRN, _______, _______,
         LGUI_T(KC_ESC), LCTL_T(KC_TAB), LALT_T(KC_DEL), _______,       _______, LALT_T(KC_DEL), RCTL_T(KC_TAB), RGUI_T(KC_ESC)
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

// Key overrides - https://docs.qmk.fm/features/key_overrides
const key_override_t sft_4_dlr      = ko_make_with_layers(MOD_MASK_SHIFT, KC_4, MAC_DLR, 1<<BASE);
const key_override_t sft_6_at       = ko_make_with_layers(MOD_MASK_SHIFT, KC_6, MAC_AT, 1<<BASE);
const key_override_t sft_7_ques     = ko_make_with_layers(MOD_MASK_SHIFT, KC_7, NO_QUES, 1<<BASE);
const key_override_t sft_8_astr     = ko_make_with_layers(MOD_MASK_SHIFT, KC_8, NO_ASTR, 1<<BASE);
const key_override_t sft_9_slsh     = ko_make_with_layers(MOD_MASK_SHIFT, KC_9, NO_SLSH, 1<<BASE);
const key_override_t sft_0_bsls     = ko_make_with_layers(MOD_MASK_SHIFT, KC_0, MAC_BSLS, 1<<BASE);
const key_override_t sft_eql_plus   = ko_make_with_layers(MOD_MASK_SHIFT, NO_EQL, NO_PLUS, 1<<BASE);
const key_override_t sft_pipe_and   = ko_make_with_layers(MOD_MASK_SHIFT, NO_PIPE, NO_AMPR, 1<<BASE);
const key_override_t sft_quot_dquo  = ko_make_with_layers(MOD_MASK_SHIFT, NO_QUOT, NO_DQUO, 1<<BASE);
const key_override_t sft_lprn_lbrc  = ko_make_with_layers(MOD_MASK_SHIFT, NO_LPRN, NO_LBRC, 1<<BASE);
const key_override_t sft_rprn_rbrc  = ko_make_with_layers(MOD_MASK_SHIFT, NO_RPRN, NO_RBRC, 1<<BASE);

const key_override_t alt_lprn_lcbr = ko_make_with_layers(MOD_MASK_ALT, NO_LPRN, NO_LCBR, 1<<BASE);
const key_override_t alt_rprn_rcbr = ko_make_with_layers(MOD_MASK_ALT, NO_RPRN, NO_RCBR, 1<<BASE);

const key_override_t **key_overrides = (const key_override_t *[]){
  &sft_4_dlr,
  &sft_6_at,
  &sft_7_ques,
  &sft_8_astr,
  &sft_9_slsh,
  &sft_0_bsls,
  &sft_pipe_and,
  &sft_eql_plus,
  &sft_quot_dquo,
  &sft_lprn_lbrc,
  &sft_rprn_rbrc,
  &alt_lprn_lcbr,
  &alt_rprn_rcbr,
  NULL
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  static uint16_t tap_timer;

  if (get_mods() == MOD_MASK_ALT) {
    caps_word_on();
  }

  switch(keycode) {
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
    case TICK: {
      if (record->event.pressed) {
        uint8_t mods = get_mods();  // Get currently held modifiers
        tap_timer = timer_read();

        if (mods & MOD_MASK_SHIFT) {
            // Shift is held → send ´
            unregister_mods(MOD_MASK_SHIFT);
            tap_code16(KC_EQL);
            set_mods(mods);
        }
        else {
            // No modifier → send `
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
    case TILDE: {
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
    case LT(0,KC_A): {
      uint8_t mods = get_mods();  // Get currently held modifiers

      if (record->tap.count && record->event.pressed) { // tap
        if (is_caps_word_on()) {
          add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
        }

        if (mods & MOD_MASK_ALT) {
           unregister_mods(MOD_MASK_ALT);
           tap_code16(NO_AA);
           set_mods(mods);
        }
        else {
          tap_code16(KC_A);
        }
      } else if (record->event.pressed) { // hold
          register_code(KC_LCTL);
      }
      else { // release
        unregister_code(KC_LCTL);
      }
      // Stop default processing
      return false;
    }
    case LT(0,KC_E): {
      uint8_t mods = get_mods();  // Get currently held modifiers

      if (record->tap.count && record->event.pressed) { // tap
        if (is_caps_word_on()) {
          add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
        }

        if (mods & MOD_MASK_ALT) {
           unregister_mods(MOD_MASK_ALT);
           tap_code16(NO_AE);
           set_mods(mods);
        }
        else {
          tap_code16(KC_E);
        }
      } else if (record->event.pressed) { // hold
          register_code(KC_LSFT);
      }
      else { // release
        unregister_code(KC_LSFT);
      }
      // Stop default processing
      return false;
    }
    case LT(0,KC_O): {
      uint8_t mods = get_mods();  // Get currently held modifiers

      if (record->tap.count && record->event.pressed) { // tap
        if (is_caps_word_on()) {
          add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
        }

        if (mods & MOD_MASK_ALT) {
           unregister_mods(MOD_MASK_ALT);
           tap_code16(NO_OE);
           set_mods(mods);
        }
        else {
          tap_code16(KC_O);
        }
      } else if (record->event.pressed) { // hold
          register_code(KC_LCTL);
      }
      else { // release
        unregister_code(KC_LCTL);
      }
      // Stop default processing
      return false;
    }
  }
  return true;
};

bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
        case HOME_A:
        case HOME_R:
        case HOME_S:
        case HOME_T:
        case HOME_N:
        case HOME_E:
        case HOME_I:
        case HOME_O:
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

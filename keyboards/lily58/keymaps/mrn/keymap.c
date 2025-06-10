#include QMK_KEYBOARD_H

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
  NAVI_MAC,
  NAVI_WIN,
};

enum custom_keycodes {
    SFT_SPC_TAP = SAFE_RANGE,
    L_PAR_BRC,
    R_PAR_BRC,
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
   KC_ESC, KC_1, KC_2,    KC_3,    KC_4,    KC_5,                                                  KC_6,    KC_7,    KC_8,   KC_9,    KC_0,    A(KC_7),
   KC_TAB, KC_Q, KC_W,    KC_F,    KC_P,    KC_B,                                                  KC_J,    KC_L,    KC_U,   KC_Y, S(KC_0),    KC_NUBS,
  KC_BSPC, KC_A, KC_R,    KC_S,    KC_T,    KC_G,                                                  KC_M,    KC_N,    KC_E,   KC_I,    KC_O, A(KC_BSLS),
  S(KC_8), KC_Z, KC_X,    KC_C,    KC_D,    KC_V,    A(KC_EQL),         RALT(KC_RBRC),    KC_K,    KC_H, KC_COMM, KC_DOT, KC_SLSH,    S(KC_9),
  LM(CTL_MAC, MOD_LCTL), LM(GUI_MAC, MOD_LGUI), LM(ALT_MAC, MOD_LALT), SFT_SPC_TAP, LT(NAVI_MAC, KC_ENT), LM(ALT_MAC, MOD_LALT), LM(GUI_MAC, MOD_RGUI), LM(CTL_MAC, MOD_RCTL)
),

[BASE_WIN] = LAYOUT(
   KC_ESC, KC_1, KC_2,    KC_3,    KC_4,    KC_5,                                                  KC_6,    KC_7,    KC_8,   KC_9,    KC_0,    A(KC_7),
   KC_TAB, KC_Q, KC_W,    KC_F,    KC_P,    KC_B,                                                  KC_J,    KC_L,    KC_U,   KC_Y, S(KC_0),    KC_NUBS,
  KC_BSPC, KC_A, KC_R,    KC_S,    KC_T,    KC_G,                                                  KC_M,    KC_N,    KC_E,   KC_I,    KC_O, A(KC_BSLS),
  L_PAR_BRC, KC_Z, KC_X,    KC_C,    KC_D,    KC_V,    A(KC_EQL),         RALT(KC_RBRC),    KC_K,    KC_H, KC_COMM, KC_DOT, KC_SLSH,    R_PAR_BRC,
  LM(GUI_WIN, MOD_LGUI), LM(CTL_WIN, MOD_LCTL), LM(ALT_WIN, MOD_LALT), SFT_SPC_TAP, LT(NAVI_WIN, KC_ENT), LM(ALT_WIN, MOD_LALT), LM(CTL_WIN, MOD_RCTL), LM(GUI_WIN, MOD_RGUI)
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
     _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______,    _______,
     _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______,    _______,
     _______, KC_LBRC, _______, _______, _______, _______,                      _______, _______, KC_QUOT, _______, KC_SCLN,    _______,
     _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, S(A(KC_9)),
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

[NAVI_MAC] = LAYOUT(
    _______,   KC_F1,   KC_F2,   KC_F3,        KC_F4,        KC_F5,                           KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_PSCR,
    _______, _______, _______, KC_PGUP,      _______,       KC_F11,                           KC_F12,  _______, KC_UP,   _______, KC_MPRV, KC_PAUS,
     KC_DEL, _______, KC_HOME, KC_PGDN,       KC_END,      _______,                           _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_MPLY, RGUI(KC_PAUS),
     KC_INS, _______, _______, LCTL(KC_INS), _______, LSFT(KC_INS), DF(BASE_MAC),  DF(NAVI_MAC), _______, _______, _______, _______, KC_MNXT, _______,
                                    KC_TRNS, KC_TRNS,      KC_TRNS, KC_LSFT,       _______,   _______, _______, _______
),

[NAVI_WIN] = LAYOUT(
    _______,   KC_F1,   KC_F2,   KC_F3,        KC_F4,        KC_F5,                           KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_PSCR,
    _______, _______, _______, KC_PGUP,      _______,       KC_F11,                           KC_F12,  _______, KC_UP,   _______, KC_MPRV, KC_PAUS,
     KC_DEL, _______, KC_HOME, KC_PGDN,       KC_END,      _______,                           _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_MPLY, RGUI(KC_PAUS),
     KC_INS, _______, _______, LCTL(KC_INS), _______, LSFT(KC_INS), DF(BASE_MAC),  DF(NAVI_MAC), _______, _______, _______, _______, KC_MNXT, _______,
                                    KC_TRNS, KC_TRNS,      KC_TRNS, KC_LSFT,       _______,   _______, _______, _______
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

// Sft overrides
//const key_override_t sft_brk_l = ko_make_with_layers(MOD_MASK_SHIFT, A(KC_8), A(KC_8), 1<<SFT_MAC);
//const key_override_t sft_brk_r = ko_make_with_layers(MOD_MASK_SHIFT, A(KC_9), A(KC_9), 1<<SFT_MAC);
//const key_override_t sft_del = ko_make_with_layers(MOD_MASK_SHIFT, KC_DEL, KC_DEL, 1<<SFT_MAC);
//const key_override_t sft_rti = ko_make_with_layers(MOD_MASK_SHIFT, C(KC_EQL), C(KC_EQL), 1<<SFT_MAC);
//const key_override_t sft_at = ko_make_with_layers(MOD_MASK_SHIFT, KC_BSLS, KC_BSLS, 1<<SFT_MAC);
//const key_override_t sft_plus = ko_make_with_layers(MOD_MASK_SHIFT, KC_MINS, KC_MINS, 1<<SFT_MAC);
//const key_override_t sft_nubs = ko_make_with_layers(MOD_MASK_SHIFT, KC_NUBS, KC_NUBS, 1<<SFT_MAC);
//
//// Alt overrides
//const key_override_t alt_ae = ko_make_with_layers(MOD_MASK_ALT, KC_QUOT, KC_QUOT, 1<<ALT_MAC);
//const key_override_t alt_oe = ko_make_with_layers(MOD_MASK_ALT, KC_SCLN, KC_SCLN, 1<<ALT_MAC);
//const key_override_t alt_aa = ko_make_with_layers(MOD_MASK_ALT, KC_LBRC, KC_LBRC, 1<<ALT_MAC);
//
//const key_override_t **key_overrides = (const key_override_t *[]){
//    &sft_brk_l,
//    &sft_brk_r,
//    &sft_del,
//    &sft_rti,
//    &sft_at,
//    &sft_plus,
//    &sft_nubs,
//    &alt_ae,
//    &alt_oe,
//    &alt_aa
//};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  static uint16_t tap_timer;

  switch(keycode) {
    case SFT_SPC_TAP: {
      os_variant_t detected_os = detected_host_os();

      if (record->event.pressed) {
          tap_timer = timer_read();

          // Start both mod and layer on press
          register_mods(MOD_BIT(KC_LSFT));
          layer_on(detected_os == OS_MACOS ? SFT_MAC : SFT_WIN);
      } else {
          // Release both mod and layer on release
          unregister_mods(MOD_BIT(KC_LSFT));
          layer_off(detected_os == OS_MACOS ? SFT_MAC : SFT_WIN);

          // If it's a tap, not a hold
          if (timer_elapsed(tap_timer) < TAPPING_TERM) {
              tap_code(KC_SPC);
          }
      }
      // Stop default processing of SFT_SPC_TAP
      return false;
    }
    case L_PAR_BRC: {
      if (record->event.pressed) {
        uint8_t mods = get_mods();  // Get currently held modifiers

        if (mods & MOD_MASK_ALT) {
            // Alt is held → send {
            register_mods(MOD_BIT(KC_RALT) | MOD_BIT(KC_RCTL));
            tap_code(KC_7);
            unregister_mods(MOD_BIT(KC_RALT) | MOD_BIT(KC_RCTL));
        } else if (mods & MOD_MASK_SHIFT) {
            // Shift is held → send [
            register_mods(MOD_BIT(KC_RALT) | MOD_BIT(KC_RCTL));
            tap_code(KC_8);
            unregister_mods(MOD_BIT(KC_RALT) | MOD_BIT(KC_RCTL));
        } else {
            // No modifier → send (
            register_mods(MOD_BIT(KC_LSFT));
            tap_code(KC_8);
            unregister_mods(MOD_BIT(KC_LSFT));
        }
      }
      // Stop default processing of L_PAR_BRC
      return false;
    }
    case R_PAR_BRC: {
      if (record->event.pressed) {
        uint8_t mods = get_mods();  // Get currently held modifiers

        if (mods & MOD_MASK_ALT) {
            // Alt is held → send {
            register_mods(MOD_BIT(KC_RALT) | MOD_BIT(KC_RCTL));
            tap_code(KC_0);
            unregister_mods(MOD_BIT(KC_RALT) | MOD_BIT(KC_RCTL));
        } else if (mods & MOD_MASK_SHIFT) {
            // Shift is held → send [
            register_mods(MOD_BIT(KC_RALT) | MOD_BIT(KC_RCTL));
            tap_code(KC_9);
            unregister_mods(MOD_BIT(KC_RALT) | MOD_BIT(KC_RCTL));
        } else {
            // No modifier → send (
            register_mods(MOD_BIT(KC_LSFT));
            tap_code(KC_9);
            unregister_mods(MOD_BIT(KC_LSFT));
        }
      }
      // Stop default processing of R_PAR_BRC
      return false;
    }
  }
//  if (record->event.pressed) {
//    #ifdef OLED_ENABLE
//      set_keylog(keycode, record);
//    #endif
//  }
  return true;
}

#if defined(OS_DETECTION_ENABLE)
uint32_t custom_os_settings(uint32_t trigger_time, void *cb_arg) {
  os_variant_t detected_os = detected_host_os();
  uint16_t retry_ms = 500;

  if (detected_os == OS_MACOS) {
    default_layer_set(BASE_MAC);
    layer_move(BASE_MAC);
    //set_single_persistent_default_layer(BASE_MAC);
    retry_ms = 0;
  } else {
    default_layer_set(BASE_WIN);
    layer_move(BASE_WIN);
    //set_single_persistent_default_layer(BASE_WIN);
    retry_ms = 0;
  }

  return retry_ms;
}

void keyboard_post_init_user(void) {
  defer_exec(100, custom_os_settings, NULL);
}
#endif


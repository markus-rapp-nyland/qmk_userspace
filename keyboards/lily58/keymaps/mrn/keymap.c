#include QMK_KEYBOARD_H

enum layer_number {
  BASE_MAC = 0,
  SFT_MAC,
  GUI_MAC,
  CTL_MAC,
  ALT_MAC,
  MAC_NAVI,
  BASE_WIN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*  BASE_MAC (actually colemak-dh)
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |   |  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   q  |   w  |   f  |   p  |   b  |                    |   j  |   l  |   u  |   y  |   =  |   <  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | BcSp |   a  |   r  |   s  |   t  |   g  |-------.    ,-------|   m  |   n  |   e  |   i  |   o  |   '  |
 * |------+------+------+------+------+------|   `   |    |   ~   |------+------+------+------+------+------|
 * |   (  |   z  |   x  |   c  |   d  |   v  |-------|    |-------|   k  |   h  |   ,  |   .  |   -  |   )  |
 * `-----------------------------------------'       /     \      '-----------------------------------------'
 *                   | LCTL | LGUI | LAlt |   Spc   /       \   Ent   | RAlt | RGUI | RCTL |
 *                   |      |      |      | LShift /         \  NAVI  |      |      |      |
 *                   '----------------------------'           '----------------------------'
 */
[BASE_MAC] = LAYOUT(
   KC_ESC, KC_1, KC_2,    KC_3,    KC_4,    KC_5,                                                  KC_6,    KC_7,    KC_8,   KC_9,    KC_0,    A(KC_7),
   KC_TAB, KC_Q, KC_W,    KC_F,    KC_P,    KC_B,                                                  KC_J,    KC_L,    KC_U,   KC_Y, S(KC_0),    KC_NUBS,
  KC_BSPC, KC_A, KC_R,    KC_S,    KC_T,    KC_G,                                                  KC_M,    KC_N,    KC_E,   KC_I,    KC_O, A(KC_BSLS),
  S(KC_8), KC_Z, KC_X,    KC_C,    KC_D,    KC_V,    A(KC_EQL),         RALT(KC_RBRC),    KC_K,    KC_H, KC_COMM, KC_DOT, KC_SLSH,    S(KC_9),
  LM(CTL_MAC, MOD_LCTL), LM(GUI_MAC, MOD_LGUI), LM(ALT_MAC, MOD_LALT), LT(0, KC_NO), LT(MAC_NAVI, KC_ENT), LM(ALT_MAC, MOD_LALT), LM(GUI_MAC, MOD_RGUI), LM(CTL_MAC, MOD_RCTL)
),


[GUI_MAC] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, _______,
                             _______, _______, _______, _______,    _______, _______, _______, _______
),

[CTL_MAC] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, _______,
                             _______, _______, _______, _______,    _______, _______, _______, _______
),

[ALT_MAC] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, KC_LBRC, _______, _______, _______, _______,                      _______, _______, KC_QUOT, _______, KC_SCLN, _______,
  S(A(KC_8)), _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, S(A(KC_9)),
                             _______, _______, _______, _______,    _______, _______, _______, _______
),

/* SFT_MAC
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   !  |   "  |   #  |   $  |   %  |                    |   ^  |   ?  |   *  |   /  |   \  |   &  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   F  |   P  |   B  |                    |   J  |   L  |   U  |   Y  |   +  |   >  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | BcSp |   A  |   R  |   S  |   T  |   G  |-------.    ,-------|   M  |   N  |   E  |   I  |   O  |   "  |
 * |------+------+------+------+------+------|   ´   |    |   @   |------+------+------+------+------+------|
 * |   [  |   Z  |   X  |   C  |   D  |   V  |-------|    |-------|   K  |   H  |   ;  |   :  |   _  |   ]  |
 * `-----------------------------------------'       /     \      '-----------------------------------------'
 *                   | LCTL | LGUI | LAlt |  S_MAC  /       \  S(Ent) | RAlt | RGUI | RCTL |
 *                   '----------------------------'           '----------------------------'
 */
[SFT_MAC] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                      KC_RBRC, KC_MINS, KC_BSLS,    KC_7, A(KC_7),    KC_6,
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, KC_MINS, _______,
   KC_DEL, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______,    KC_2,
  A(KC_8), _______, _______, _______, _______, _______, C(KC_EQL),  KC_BSLS, _______, _______, _______, _______, _______, A(KC_9),
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
 * `-----------------------------------------/ LShift/     \      \-----------------------------------------'
 *                   | LCtl | LAlt |  Meh | /       /       \      \  |      |      |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[MAC_NAVI] = LAYOUT(
    _______,   KC_F1,   KC_F2,   KC_F3,        KC_F4,        KC_F5,                           KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_PSCR,
    _______, _______, _______, KC_PGUP,      _______,       KC_F11,                           KC_F12,  _______, KC_UP,   _______, KC_MPRV, KC_PAUS,
     KC_DEL, _______, KC_HOME, KC_PGDN,       KC_END,      _______,                           _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_MPLY, RGUI(KC_PAUS),
     KC_INS, _______, _______, LCTL(KC_INS), _______, LSFT(KC_INS), DF(BASE_MAC),  DF(MAC_NAVI), _______, _______, _______, _______, KC_MNXT, _______,
                                    KC_TRNS, KC_TRNS,      KC_TRNS, KC_LSFT,       _______,   _______, _______, _______
)
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
const key_override_t sft_brk_l = ko_make_with_layers(MOD_MASK_SHIFT, A(KC_8), A(KC_8), 1<<SFT_MAC);
const key_override_t sft_brk_r = ko_make_with_layers(MOD_MASK_SHIFT, A(KC_9), A(KC_9), 1<<SFT_MAC);
const key_override_t sft_del = ko_make_with_layers(MOD_MASK_SHIFT, KC_DEL, KC_DEL, 1<<SFT_MAC);
const key_override_t sft_rti = ko_make_with_layers(MOD_MASK_SHIFT, C(KC_EQL), C(KC_EQL), 1<<SFT_MAC);
const key_override_t sft_at = ko_make_with_layers(MOD_MASK_SHIFT, KC_BSLS, KC_BSLS, 1<<SFT_MAC);
const key_override_t sft_plus = ko_make_with_layers(MOD_MASK_SHIFT, KC_MINS, KC_MINS, 1<<SFT_MAC);
const key_override_t sft_nubs = ko_make_with_layers(MOD_MASK_SHIFT, KC_NUBS, KC_NUBS, 1<<SFT_MAC);

// Alt overrides
const key_override_t alt_ae = ko_make_with_layers(MOD_MASK_ALT, KC_QUOT, KC_QUOT, 1<<ALT_MAC);
const key_override_t alt_oe = ko_make_with_layers(MOD_MASK_ALT, KC_SCLN, KC_SCLN, 1<<ALT_MAC);
const key_override_t alt_aa = ko_make_with_layers(MOD_MASK_ALT, KC_LBRC, KC_LBRC, 1<<ALT_MAC);

const key_override_t **key_overrides = (const key_override_t *[]){
    &sft_brk_l,
    &sft_brk_r,
    &sft_del,
    &sft_rti,
    &sft_at,
    &sft_plus,
    &sft_nubs,
    &alt_ae,
    &alt_oe,
    &alt_aa
};


// Initialize variable holding the binary
// representation of active modifiers.
//uint8_t mod_state;
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // assign LT(SFT_MAC, KC_SPC) and LM(SFT_MAC, MOD_LSFT) functionality to LT(0, KC_NO)
//  mod_state = get_mods();
//  switch(keycode) {
//    case KC_L_CODE:
//      if (record->event.pressed) {
//        if (get_mods() & MOD_MASK_SHIFT) {
//          del_mods(MOD_MASK_SHIFT);
//          register_mods(MOD_BIT(KC_LALT));
//          register_code(KC_8);
//          return false;
//        }
//        else {
//          register_mods(MOD_BIT(KC_LSFT));
//          register_code(KC_8);
//        }
//      }
//
//      set_mods(mod_state);
//      unregister_code(KC_8);
//      return false; // Skip all further processing of this key
//  }
      // Detect the activation of either shift keys
//      if (get_mods() & MOD_MASK_SHIFT) {
//        tap_code16(A(KC_8));
//      }
//      else {
//        tap_code16(S(KC_8));
//      }

  switch(keycode) {
    case LT(0, KC_NO):
      if (record->tap.count && record->event.pressed) {
        tap_code16(KC_SPC);
      }
      else if (record->event.pressed) {
        register_mods(MOD_BIT(KC_LSFT));
        layer_on(SFT_MAC);
      }
      else {
        unregister_mods(MOD_BIT(KC_LSFT));
        layer_off(SFT_MAC);
      }
  }
  if (record->event.pressed) {
    #ifdef OLED_ENABLE
      set_keylog(keycode, record);
    #endif
  }
  return true;
}

void keyboard_post_init_user(void) {
  // Set default layer based on the detected OS after a 500 ms delay.
  uint32_t get_host_os(uint32_t trigger_time, void* cb_arg) {
    switch (detected_host_os()) {
      case OS_UNSURE:  // Don't change default layer if unsure.
        break;
      case OS_MACOS:   // On Mac, set default layer to BASE_MAC.
      case OS_IOS:
        set_single_persistent_default_layer(BASE_MAC);
        break;
      default:         // On Windows and Linux, set to BASE_WIN.
        set_single_persistent_default_layer(BASE_WIN);
        break;
    }
    return 0;
  }
  defer_exec(400, get_host_os, NULL);
}

#include QMK_KEYBOARD_H

// enum custom_keycodes {
//     KC_DTQS = SAFE_RANGE,
//     KC_CMEX,
//     G_START,
//     G_EXIT
// };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap 0: Default Layer (Qwerty also showing with shift modifier)
   * ,-------------------------------------------------------------------------------------------------.
   * |Esc  |  1   |  2   |  3   |  4   |  5   |  6   |  7   |  8   |  9   |  0   |  -   |  =   |   BS  |
   * |-------------------------------------------------------------------------------------------------|
   * |Tab  |  q   |  w   |  e   |  r   |  t   |  y   |  u   |  i   |  o   |  p   |  [   |  ]   | Entr  |
   * |---------------------------------------------------------------------------------------------|   |
   * |Fn1      |  a   |  s   |  d   |  f   |  g   |  h   |  j   |  k   |  l   |  ;   |  '   |  \   |   |
   * |-------------------------------------------------------------------------------------------------|
   * |Fn2     |  #  |  z   |  x   |  c   |  v   |  b   |  n   |  m   |  ,   |  .   |  /   | Fn2        |
   * |-------------------------------------------------------------------------------------------------|
   * |Ctrl   |Gui    |Alt    |               Space                      |Fn0    |Gui    |App   |Ctrl   |
   * `-------------------------------------------------------------------------------------------------'
   */
	[0] = LAYOUT_60_iso(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_EQL, KC_EQL, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, MO(2), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_COMM, KC_QUOT, KC_NUBS, KC_ENT, KC_LSFT, KC_COMM, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_MINS, KC_RSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, MO(1), KC_RALT, KC_APP, KC_RCTL),

  /* Keymap 1: Shifted Layer
   * ,-------------------------------------------------------------------------------------------------.
   * |     |  !   |  @   |  #   |  $   |  %   |  ^   |  &   |  *   |  (   |  )   |  _   |  +   |       |
   * |-------------------------------------------------------------------------------------------------|
   * |        Q   |  W   |  E   |  R   |  T   |  Y   |  U   |  I   |  O   |  P   |  {   |  }   |       |
   * |---------------------------------------------------------------------------------------------|   |
   * |         |  A   |  S   |  D   |  F   |  G   |  H   |  J   |  K   |  L   |  :   |  "   |  |   |   |
   * |-------------------------------------------------------------------------------------------------|
   * |        |  ~  |  Z   |  X   |  C   |  V   |  B   |  N   |  M   |  ;   |  :   |  ?   |            |
   * |-------------------------------------------------------------------------------------------------|
   * |       |       |       |                                          |       |       |      |       |
   * `-------------------------------------------------------------------------------------------------'
   */
	/*[0] = LAYOUT_60_iso(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_EQL, KC_EQL, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, MO(2), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_NUBS, KC_ENT, KC_LSFT, KC_COMM, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_MINS, KC_RSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, MO(1), KC_RALT, KC_APP, KC_RCTL),*/

    /* Keymap 1: Programming Layer
   * ,-------------------------------------------------------------------------------------------------.
   * |     |      |      |      |      |      |      |      |      |      |      |      |      | Del   |
   * |-------------------------------------------------------------------------------------------------|
   * |     |  "   |  %   |  `   |  #   |  *   |  ^   |  _   |  -   |  $   |      |      |      |       |
   * |---------------------------------------------------------------------------------------------|   |
   * |         |  +   |  =   |  (   |  [   |  {   |  }   |  ]   |  )   |      |      |      |      |   |
   * |-------------------------------------------------------------------------------------------------|
   * |        |     |  -   |  <   |  >   |      |      |      |      |      |      |      |            |
   * |-------------------------------------------------------------------------------------------------|
   * |       |       |       |                                          |       |       |      |       |
   * `-------------------------------------------------------------------------------------------------'
   */

	[1] = LAYOUT_60_iso(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL, KC_TRNS, RSFT(KC_2), RSFT(KC_5), RSFT(KC_EQL), RSFT(KC_3), RSFT(KC_BSLASH), RSFT(KC_RBRACKET), RSFT(KC_SLASH), KC_SLASH, RALT(KC_4), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MINS, KC_RPRN, KC_ASTR, RALT(KC_8), RSFT(RALT(KC_8)), RSFT(RALT(KC_9)), RALT(KC_9), RSFT(KC_9), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RALT(KC_RBRACKET), KC_SLASH, KC_TILD, KC_TILD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),



    /* Keymap 2: Arrows, built in and media keys
   * ,-------------------------------------------------------------------------------------------------.
   * |     |      |      |      |      |      |      |      |      |      |      |      |      |       |
   * |-------------------------------------------------------------------------------------------------|
   * |     |      |  UP  |      |      |      |      |      |      |      |      |      |      |       |
   * |---------------------------------------------------------------------------------------------|   |
   * |         | LEFT | DOWN | RIGHT|      |      |      |      |      |      |      |      |      |   |
   * |-------------------------------------------------------------------------------------------------|
   * | LShif  |     |      |      |      |      |      |      |      |      |      |      |            |
   * |-------------------------------------------------------------------------------------------------|
   * |       |       |       |                                          |       |       |      |       |
   * `-------------------------------------------------------------------------------------------------'
   */

	[2] = LAYOUT_60_iso(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGDN, KC_PGUP, KC_HOME, KC_END, KC_PSCR, KC_TRNS, KC_TRNS, KC_TRNS, KC_UP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};


// SWE to EN KC map

// KC_ENTER KC_ENT
// KC_ESCAPE KC_ESC
// KC_BSPACE KC_BSPC
// KC_TAB
// KC_SPACE KC_SPC
// KC_MINUS KC_MINS S(KC_MINUS) = +
// KC_EQUAL KC_EQL
// KC_LBRACKET KC_LBRC
// KC_RBRACKET KC_RBRC
// KC_BSLASH KC_BSLS
// KC_NONUS_HASH KC_NUHS
// KC_SCOLON KC_SCLN = ö
// KC_QUOTE KC_QUOT
// KC_GRAVE KC_GRV
// KC_ZKHK
// KC_COMMA KC_COMM = ,
// KC_DOT
// KC_SLASH KC_SLSH
// KC_NONUS_BSLASH
static bool isAltRegistered = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  int MY_SEMICOL = KC_COMM;
  int MY_COL = S(KC_DOT);
  bool isLeftShiftPressed = get_mods() & MOD_BIT(KC_LSHIFT);
  bool isRightShiftPressed = get_mods() & MOD_BIT(KC_RSHIFT);

  switch (keycode) {
    // Shift 2 to @
    case KC_2:
      if (record->event.pressed){
        if (isLeftShiftPressed || isRightShiftPressed) {
          unregister_code(KC_LSHIFT);
          unregister_code(KC_RSHIFT);
          register_code(KC_RALT);
          register_code(KC_2);
          isAltRegistered = true;
        } else {
          register_code(KC_2);
        }
      } else {
        unregister_code(KC_2);
      }
      return false;

    // Shift 4 to $
    case KC_4:
      if (record->event.pressed){
        if (isLeftShiftPressed || isRightShiftPressed) {
          unregister_code(KC_LSHIFT);
          unregister_code(KC_RSHIFT);
          register_code(KC_RALT);
          register_code(KC_4);
          isAltRegistered = true;
        } else {
          register_code(KC_4);
        }
      } else {
        unregister_code(KC_4);
      }
      return false;

    // Shift 6 to ^
    case KC_6:
      if (record->event.pressed){
        if (isLeftShiftPressed || isRightShiftPressed) {
          unregister_code(KC_6);
          register_code(KC_RBRACKET);
        } else {
          register_code(KC_6);
        }
      } else {
        unregister_code(KC_6);
        unregister_code(KC_RBRACKET);
      }
      return false;

    // Shift 7 to &
    case KC_7:
      if (record->event.pressed){
        if (isLeftShiftPressed || isRightShiftPressed) {
          unregister_code(KC_7);
          register_code(KC_6);
        } else {
          register_code(KC_7);
        }
      } else {
        unregister_code(KC_7);
        unregister_code(KC_6);
      }
      return false;

    // Shift 8 to *
    case KC_8:
      if (record->event.pressed){
        if (isLeftShiftPressed || isRightShiftPressed) {
          unregister_code(KC_8);
          register_code(KC_NONUS_HASH);
        } else {
          register_code(KC_8);
        }
      } else {
        unregister_code(KC_8);
        unregister_code(KC_NONUS_HASH);
      }
      return false;

    // Shift 9 to (
    case KC_9:
      if (record->event.pressed){
        if (isLeftShiftPressed || isRightShiftPressed) {
          unregister_code(KC_9);
          register_code(KC_8);
        } else {
          register_code(KC_9);
        }
      } else {
        unregister_code(KC_9);
        unregister_code(KC_8);
      }
      return false;

    // 1234567890+´
    // !"#€%&/()=?`
    // goal
    // 1234567890-=
    // !@#$%^&*()_+

    // Shift 9 to (
    case KC_0:
      if (record->event.pressed){
        if (isLeftShiftPressed || isRightShiftPressed) {
          unregister_code(KC_0);
          register_code(KC_9);
        } else {
          register_code(KC_9);
        }
      } else {
        unregister_code(KC_0);
        unregister_code(KC_9);
      }
      return false;

    // ö to ; and Ö to ;
    case KC_COMM:
      if (record->event.pressed){
        if (isLeftShiftPressed || isRightShiftPressed) {
          unregister_code(KC_COMM);
          register_code(MY_COL);
        } else {
          unregister_code(KC_COMM);
          register_code(KC_LSHIFT);
          register_code(MY_SEMICOL);
        }
      } else {
        unregister_code(KC_COMM);
        unregister_code(KC_LSHIFT);
        unregister_code(MY_COL);
        unregister_code(MY_SEMICOL);
      }
      return false;

    default:
      if (isAltRegistered) {
        unregister_code(KC_RALT);
        isAltRegistered = false;
      }
      return true;
  }
}






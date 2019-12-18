#include QMK_KEYBOARD_H

enum custom_keycodes {
  QMKBEST = SAFE_RANGE,
  QMKURL,
  MY_OTHER_MACRO
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QMKBEST:
      if (record->event.pressed) {
        // when keycode QMKBEST is pressed
        SEND_STRING("QMK is the best thing ever!");
      } else {
        // when keycode QMKBEST is released
      }
      break;
    case QMKURL:
      if (record->event.pressed) {
        // when keycode QMKURL is pressed
        SEND_STRING("https://qmk.fm/\n");
      } else {
        // when keycode QMKURL is released
      }
      break;
    case MY_OTHER_MACRO:
      if (record->event.pressed) {
                SEND_STRING(SS_LCTL("ac")); // selects all and copies
      }
      break;
  }
  return true;
};

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
	[0] = LAYOUT_60_iso(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_EQL, KC_EQL, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, MO(2), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, QMKBEST, KC_QUOT, KC_NUBS, KC_ENT, KC_LSFT, KC_COMM, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_MINS, KC_RSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, MO(1), KC_RALT, KC_APP, KC_RCTL),

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

	[1] = LAYOUT_60_iso(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_DEL, KC_NO, RSFT(KC_2), RSFT(KC_5), RSFT(KC_EQL), RSFT(KC_3), RSFT(KC_BSLASH), RSFT(KC_RBRACKET), RSFT(KC_SLASH), KC_SLASH, RALT(KC_4), KC_NO, KC_NO, KC_NO, KC_NO, KC_MINS, KC_RPRN, KC_ASTR, RALT(KC_8), RSFT(RALT(KC_8)), RSFT(RALT(KC_9)), RALT(KC_9), RSFT(KC_9), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RALT(KC_RBRACKET), KC_SLASH, KC_TILD, KC_TILD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO),



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

	[2] = LAYOUT_60_iso(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PGDN, KC_PGUP, KC_HOME, KC_END, KC_PSCR, KC_NO, KC_NO, KC_NO, KC_UP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};

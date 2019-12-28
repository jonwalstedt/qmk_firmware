#include QMK_KEYBOARD_H
#include "keymap_swedish.h"
#include <print.h>

enum layers {
  _BASE = 0,
  _DEV,
  _SWE,
  _MEDIA,
};

#define MO_BASE     MO(_BASE)
#define MO_DEV      MO(_DEV)
#define TG_SWE      TG(_SWE)
#define MO_MEDIA    MO(_MEDIA)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap _BASE (showing shifted versions as well)
   * ,-------------------------------------------------------------------------------------------------.
   * |Esc |  1!  |  2@  |  3#  |  4$  |  5%  |  6^  |  7&  |  8*  |  9(  |  0)  |  -_  |  +=  |   BS   |
   * |-------------------------------------------------------------------------------------------------|
   * |Tab  |  q   |  w   |  e   |  r   |  t   |  y   |  u   |  i   |  o   |  p   |  [   |  ]   | Entr  |
   * |---------------------------------------------------------------------------------------------|   |
   * |Fn1      |  a   |  s   |  d   |  f   |  g   |  h   |  j   |  k   |  l   |  ;   |  '   |  \   |   |
   * |-------------------------------------------------------------------------------------------------|
   * |Fn2     | ﬁ ~ |  z   |  x   |  c   |  v   |  b   |  n   |  m   |  ,   |  .   |  /   | Fn2        |
   * |-------------------------------------------------------------------------------------------------|
   * |Ctrl   |Gui    |Alt    |               Space                      |Fn0    |Gui    |App   |Fn1    |
   * `-------------------------------------------------------------------------------------------------'
   */
  [_BASE] = LAYOUT_60_iso(
    KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, SE_PLUS, SE_ACUT,       KC_BSPC,
    KC_TAB,      KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, BA_LBRC, BA_RBRC,
    TG_SWE,    KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, BA_SCLN, BA_QUOT, BA_BSLSH, KC_ENT,
    KC_LSFT,    BA_TILD, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, BA_COMM, BA_DOT, BA_SLSH,    KC_RSFT,
    KC_LCTL, KC_LALT, KC_LGUI,                KC_SPC,                 MO_DEV, KC_RALT, KC_APP,  MO_MEDIA
  ),


    /* Keymap _DEV
   * ,-------------------------------------------------------------------------------------------------.
   * |     |      |      |      |      |      |      |      |      |      |      |      |      | Del   |
   * |-------------------------------------------------------------------------------------------------|
   * |     |  "   |  %   |  `   |  #   |  *   |  ^   |  _   |  -   |  $   |  $   |      |      |       |
   * |---------------------------------------------------------------------------------------------|   |
   * |         |  +   |  =   |  (   |  [   |  {   |  }   |  ]   |  )   |      |      |      |      |   |
   * |-------------------------------------------------------------------------------------------------|
   * |        |     |  -   |  <   |  >   |      |      |      |      |      |      |      |            |
   * |-------------------------------------------------------------------------------------------------|
   * |       |       |       |                                          |       |       |      |       |
   * `-------------------------------------------------------------------------------------------------'
   */

  [_DEV] = LAYOUT_60_iso(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_DEL,
    _______, CU_QUOT, CU_PERC, CU_BQUO, CU_NUMB, CU_ASTR, CU_CIRC, CU_LOWE, CU_MINS, CU_DLR, CU_DLR, _______, _______,
    _______, CU_PLUS, CU_EQL, CU_LPRN, CU_LBRC, CU_LCBR, CU_RCBR, CU_RBRC, CU_RPRN, _______, _______, _______, _______, _______,
    _______, _______, CU_MINS, CU_LESS, CU_GRTR, _______, _______, _______, _______, _______, _______, _______, _______,
    _______,  _______, _______,                           _______,                           _______, _______, _______, _______
  ),


    /* Keymap _DEFAULT: Swedish åäö characters, characters on number row not available in BASE, and other special keys
   * ,-------------------------------------------------------------------------------------------------.
   * |     |      |      |   £  |      |      |      |      |      |      |     |       |      |       |
   * |-------------------------------------------------------------------------------------------------|
   * |     |      |      |      |      |      |      |      |      |      |      |  å   |      |       |
   * |---------------------------------------------------------------------------------------------|   |
   * |         |      |      |      |      |      |      |      |      |      |  ö   |  ä   |      |   |
   * |-------------------------------------------------------------------------------------------------|
   * |        |     |      |      |      |      |      |      |      |      |      |      |            |
   * |-------------------------------------------------------------------------------------------------|
   * |       |       |       |                                          |       |       |      |       |
   * `-------------------------------------------------------------------------------------------------'
   */

  [_SWE] = LAYOUT_60_iso(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, SE_AA, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, SE_OSLH, SE_AE, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, SWE_COM, SWE_DOT, SWE_DAS, _______,
    _______, _______, _______,                          _______,                               _______, _______, _______, _______
    ),

    /* Keymap _DEFAULT: Arrows, built in and media keys
   * ,-------------------------------------------------------------------------------------------------.
   * |     |      |      |   £  |      |      |      |      |PSCR  |HOME  |END  |PGUP   |PGDN  |       |
   * |-------------------------------------------------------------------------------------------------|
   * |     |      |      |      |      |      |      |      |      |      |      |  å   |      |       |
   * |---------------------------------------------------------------------------------------------|   |
   * |         |      |      |      |      |      |      |      |      |      |  ö   |  ä   |      |   |
   * |-------------------------------------------------------------------------------------------------|
   * |        |     |      |      |      |      |      |      |      |      |      |      |            |
   * |-------------------------------------------------------------------------------------------------|
   * |       |       |       |                                          |       |       |      |       |
   * `-------------------------------------------------------------------------------------------------'
   */

  [_MEDIA] = LAYOUT_60_iso(
    _______, _______, _______, _______, _______, _______, _______, _______, KC_PSCR, KC_HOME, KC_END, KC_PGUP, KC_PGDN, _______,
    _______, _______, KC_UP, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______,                          _______,                               _______, _______, _______, _______
    ),
};


// Number of items that are saved in prev_kcs
uint8_t prev_indx = 0;
// Used to save the last 6 actual keycodes activated by frankenkeycodes
uint16_t prev_kcs[6] = {0, 0, 0, 0, 0, 0};

/*
Used to add a keycode to a prev_kcs to remember it.
When full the last code gets discarded and replaced by
the new one.
*/
void add_to_prev(uint16_t kc){
  for (int i=0; i<prev_indx; i++){
    if (kc == prev_kcs[i])
      return;
  }
  if (prev_indx == 6){
    for (int i=5; i>0; i--){
      prev_kcs[i] = prev_kcs[i-1];
    }
    prev_kcs[0] = kc;
  } else {
    prev_kcs[prev_indx] = kc;
    prev_indx++;
  }
}

/*
Unregisters all codes saved in prev_kcs and resets prev_indx.
gets called on multiple occasions mainly when shift is released
and when frankenkeycodes are pressed. Prevents output of
wrong characters when really specific key combinations
that would never occur during normal usage are pressed.
*/
void unreg_prev(void){
  if (prev_indx == 0)
    return;
  for (int i=0; i<prev_indx; i++){
    unregister_code(prev_kcs[i]);
  }
  prev_indx = 0;
}

// These indicate if left and right shift are physically pressed
bool lshift = false;
bool rshift = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case KC_LSFT:
      if(record->event.pressed) {
        unregister_code(KC_LSFT);
        register_code(KC_LSFT);
        lshift = true;
      } else {
        unreg_prev();
        if (!rshift)
          unregister_code(KC_LSFT);
        lshift = false;
      }
      return false;
    case KC_RSFT:
      if(record->event.pressed) {
        unregister_code(KC_LSFT);
        register_code(KC_LSFT);
        rshift = true;
      } else {
        unreg_prev();
        if (!lshift)
          unregister_code(KC_LSFT);
        rshift = false;
      }
      return false;
    case KC_2:
      NORM_ALGR(KC_2, KC_2); // Shift 2 to @
    case KC_4:
      NORM_ALGR(KC_4, KC_4); // Shift 4 to $
    case KC_6:
      NORM_SHIFT(KC_6, KC_RBRC); // Shift 6 to ^
    case KC_7:
      NORM_SHIFT(KC_7, KC_6); // Shift 7 to &
    case KC_8:
      NORM_SHIFT(KC_8, KC_NONUS_HASH); // Shift 8 to *
    case KC_9:
      NORM_SHIFT(KC_9, KC_8); // Shift 9 to (
    case KC_0:
      NORM_SHIFT(KC_0, KC_9); // Shift 0 to )
    case SE_PLUS:
      NORM_SHIFT(SE_MINS, SE_MINS); // + to - | ? to _
    case SE_ACUT:
      NORM_SHIFT(SE_PLUS, KC_0); // ´ to + | ` to =
    case BA_LBRC:
      ALGR_SHIFT_ALGR(KC_8, KC_8); // å to [ | ˚ to {
    case BA_RBRC:
      ALGR_SHIFT_ALGR(KC_9, KC_9); // ¨ to ] | ^ to }
    case BA_SCLN:
      SHIFT_SHIFT(KC_COMM, KC_DOT); // ö to ; | Ö to :
    case BA_QUOT:
      NORM_SHIFT(KC_NONUS_HASH, KC_2); // ä to ' | Ä to "
    case BA_BSLSH:
      SHIFT_ALGR_ALGR(KC_7, KC_7); // ' to \ | * to |
    case CU_BQUO: // ` backtick without being a dead key`
      if(record->event.pressed) {
        register_code(KC_LSFT);
        register_code(KC_EQL);
        unregister_code(KC_EQL);
        unregister_code(KC_LSFT);
        register_code(KC_SPC);
        unregister_code(KC_SPC);
      }
      return false;
    case BA_TILD: // < to ﬁ | > to ~
      unregister_code(KC_LSFT);
      if(record->event.pressed) {
        if (lshift || rshift) {
          register_code(KC_RALT);
          unregister_code(BA_TILD);
          register_code(SE_QUOT);
          unregister_code(SE_QUOT);
          unregister_code(KC_RALT);
        } else {
          register_code(KC_RALT);
          unregister_code(BA_TILD);
          register_code(KC_L);
          unregister_code(KC_L);
          unregister_code(KC_RALT);
          if (lshift || rshift) {
            register_code(KC_LSFT);
          } else {
            unregister_code(KC_LSFT);
          }
        }
      }
      return false;
    case BA_COMM:
      NORM_NORM(KC_COMM, KC_GRV); // ; to <
    case BA_DOT:
      NORM_SHIFT(KC_DOT, KC_GRV); // : to >
    case BA_SLSH:
      SHIFT_SHIFT(KC_7, KC_MINS); // - to / | _ to ?
    case SWE_COM:
      NORM_SHIFT(KC_COMM, KC_COMM);
    case SWE_DOT:
      NORM_SHIFT(KC_DOT, KC_DOT);
    case SWE_DAS:
      NORM_SHIFT(KC_SLSH, KC_SLSH);
    default:
      if(record->event.pressed) {
        if (lshift || rshift)
          register_code(KC_LSFT);
        else
          unregister_code(KC_LSFT);
      }
      return true;
  }

  return true;
}

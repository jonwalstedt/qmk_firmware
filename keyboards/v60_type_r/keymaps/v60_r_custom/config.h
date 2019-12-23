/* Copyright 2019 Lukewh
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
#pragma once

// place overrides here

// Normal first shift second
#define NORM_SHIFT(kc1, kc2) \
if (record->event.pressed) { \
  if (lshift || rshift) { \
    register_code(KC_LSFT); \
    unregister_code(kc2); \
    register_code(kc2); \
    add_to_prev(kc2); \
  } else { \
    unregister_code(KC_LSFT); \
    unregister_code(kc1); \
    register_code(kc1); \
  } \
} else { \
  unregister_code(kc1); \
  unregister_code(kc2); \
} \
return false;

// Shift first normal second
#define SWITCH_SHIFT(kc1, kc2) \
if (record->event.pressed) { \
  if (lshift || rshift) { \
    unregister_code(KC_LSFT); \
    unregister_code(kc2); \
    register_code(kc2); \
    add_to_prev(kc2); \
  } else { \
    register_code(KC_LSFT); \
    unregister_code(kc1); \
    register_code(kc1); \
    add_to_prev(kc1); \
  } \
} else { \
  unregister_code(kc1); \
  unregister_code(kc2); \
  unreg_prev(); \
  if (lshift || rshift) \
    register_code(KC_LSFT); \
  else \
    unregister_code(KC_LSFT); \
} \
return false;

// Shift both
#define SHIFT_SHIFT(kc1, kc2) \
if (record->event.pressed) { \
  register_code(KC_LSFT); \
  if (lshift || rshift) { \
    unregister_code(kc2); \
    register_code(kc2); \
    add_to_prev(kc2); \
  } else { \
    unregister_code(kc1); \
    register_code(kc1); \
    add_to_prev(kc1); \
  } \
} else { \
  unregister_code(kc1); \
  unregister_code(kc2); \
  unreg_prev(); \
  if (lshift || rshift) \
    register_code(KC_LSFT); \
  else \
    unregister_code(KC_LSFT); \
} \
return false;

// Never shifted
#define NORM_NORM(kc1, kc2) \
if (record->event.pressed) { \
  unregister_code(KC_LSFT); \
  if (lshift || rshift) { \
    unregister_code(kc2); \
    register_code(kc2); \
    add_to_prev(kc2); \
  } else { \
    unregister_code(kc1); \
    register_code(kc1); \
  } \
} else { \
  unregister_code(kc1); \
  unregister_code(kc2); \
  unreg_prev(); \
  if (lshift || rshift) \
    register_code(KC_LSFT); \
  else \
    unregister_code(KC_LSFT); \
} \
return false;

// Normal first altgr second
#define NORM_ALGR(kc1, kc2) \
if (record->event.pressed) { \
  unregister_code(KC_LSFT); \
  if (lshift || rshift) { \
    register_code(KC_RALT); \
    unregister_code(kc2); \
    register_code(kc2); \
    unregister_code(kc2); \
    register_code(KC_LSFT); \
    unregister_code(KC_RALT); \
  } else { \
    unregister_code(kc1); \
    register_code(kc1); \
    unregister_code(kc1); \
  } \
} \
return false;

// Shift first, altgr shift second
#define SHIFT_SHIFT_ALGR(kc1, kc2) \
if (record->event.pressed) { \
  unregister_code(KC_LSFT); \
  if (lshift || rshift) { \
    register_code(KC_RALT); \
    unregister_code(kc2); \
    register_code(kc2); \
    unregister_code(kc2); \
    register_code(KC_LSFT); \
    unregister_code(KC_RALT); \
  } else { \
    register_code(KC_LSFT); \
    unregister_code(kc1); \
    register_code(kc1); \
    unregister_code(kc1); \
    unregister_code(KC_LSFT); \
  } \
} \
return false;

// Shift altgr first shift second
#define SHIFT_ALGR_ALGR(kc1, kc2) \
if (record->event.pressed) { \
  unregister_code(KC_LSFT); \
  if (lshift || rshift) { \
    register_code(KC_RALT); \
    unregister_code(kc2); \
    register_code(kc2); \
    unregister_code(kc2); \
    unregister_code(KC_RALT); \
  } else { \
    register_code(KC_LSFT); \
    register_code(KC_RALT); \
    unregister_code(kc1); \
    register_code(kc1); \
    unregister_code(kc1); \
    unregister_code(KC_RALT); \
    if (lshift || rshift) \
      register_code(KC_LSFT); \
    else \
      unregister_code(KC_LSFT); \
    } \
} \
return false;

// Different keycode when Ctrl is pressed
#define CTRL(kc1, kc2) \
if(record->event.pressed) { \
  if (lshift || rshift) \
    register_code(KC_LSFT); \
  else \
    unregister_code(KC_LSFT); \
  if (keyboard_report->mods & (MOD_BIT(KC_LCTL) | MOD_BIT(KC_RCTL))){ \
    register_code(kc2); \
  } else { \
    register_code(kc1); \
  } \
} else { \
    unregister_code(kc1); \
    unregister_code(kc2); \
} \
return false;

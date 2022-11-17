#pragma once

#include QMK_KEYBOARD_H

enum layers {
  _COLEMAK = 0,
  _NAV,
  _SYMB,
  _MOUSE,
  _NUMBER,
  _EXTRA,
};

enum custom_keycodes {
  XCASE = SAFE_RANGE,
  CAPSWORD
};

#define  TASK    LGUI(KC_TAB)
#define  LOCK    LGUI(KC_L)
#define  SNIP    LSG(KC_S)
#define  EMOJI   LGUI(KC_DOT)
#define  CLIP    LGUI(KC_V)


#define  WIND_UP LGUI(KC_UP)
#define  WIND_DN LGUI(KC_DOWN)
#define  WIND_LT LGUI(KC_LEFT)
#define  WIND_RT LGUI(KC_RGHT)

#define  DSKT_LT C(G(KC_LEFT))
#define  DSKT_RT C(G(KC_RGHT))


#define  UNDO    LCTL(KC_Z)
#define  SAVE    LCTL(KC_S)
#define  PRINT   LCTL(KC_P)
#define  CUT     LCTL(KC_X)
#define  COPY    LCTL(KC_C)
#define  PASTE   LCTL(KC_V)
#define  REDO    C(S(KC_Z))

#define  FIND    LCTL(KC_F)
#define  FND_REP LCTL(KC_H)
#define  SELECT  LCTL(KC_A)

/*
#define  TASKMAN LGUI(KC_1)
#define  DISCORD LGUI(KC_2)

#define  HOME_A  LGUI_T(KC_A)
#define  HOME_R  LALT_T(KC_R)
#define  HOME_S  LSFT_T(KC_S)
#define  HOME_T  LCTL_T(KC_T)

#define  HOME_N  LCTL_T(KC_N)
#define  HOME_E  LSFT_T(KC_E)
#define  HOME_I  LALT_T(KC_I)
#define  HOME_O  LGUI_T(KC_O)
*/

#define  OS_LSFT  OSM(MOD_LSFT)
#define  OS_LCTL  OSM(MOD_LCTL)
#define  OS_LALT  OSM(MOD_LALT)
#define  OS_LGUI  OSM(MOD_LGUI)

#define  SYMBOL   MO(_SYMB)
#define  NAV      MO(_NAV)
#define  EXTRA    MO(_EXTRA)
#define  MOUSE    MO(_MOUSE)
#define  NUMBER   MO(_NUMBER)

/*
#define  TH_TAB  LT(_NUMBER,  KC_TAB)
#define  TH_BSPC LT(_FN,      KC_BSPC)

#define  TH_SPC  LT(_MOUSE,   KC_SPC)
#define  TH_ENT  LT(_NAV,     KC_ENT)
*/
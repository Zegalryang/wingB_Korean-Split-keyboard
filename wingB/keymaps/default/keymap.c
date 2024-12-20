#include QMK_KEYBOARD_H
#include "wingB.h"

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
     KC_GRV ,    KC_1  , KC_2    , KC_3      , KC_4   , KC_5  ,              KC_6      , KC_7   , KC_8     , KC_9   , KC_0    ,KC_MINS,
     KC_TAB ,    KC_Q  , KC_W    , KC_E      , KC_R   , KC_T  ,              KC_Y      , KC_U   , KC_I     , KC_O   , KC_P    ,KC_EQL,
     KC_CAPS,    KC_A  , KC_S    , KC_D      , KC_F   , KC_G  ,              KC_H      , KC_J   , KC_K     , KC_L   , KC_SCLN ,KC_QUOT,
     KC_LSFT ,   KC_Z  , KC_X    , KC_C      , KC_V   , KC_B  ,              KC_B      , KC_N   , KC_M     , KC_COMM, KC_DOT  ,KC_SLSH,
     KC_LCTL ,  KC_ESC , KC_LOPT , KC_LCMD   , KC_SPC , MO(_LOWER),          MO(_RAISE), KC_SPC , KC_RCMD  , KC_ROPT, KC_RCTL ,KC_RSFT,
                                               KC_BSPC, KC_ENT,              KC_ENT    , KC_BSPC
  ),
  [_LOWER] = LAYOUT(
     KC_F2 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                         KC_F6,   KC_F7 , KC_F8   , KC_F9   ,KC_F10  ,KC_F11 ,
     KC_ESC,_______,_______,_______,_______,_______,                         _______, KC_7  , KC_8    , KC_9     ,_______ ,KC_BSLS,
     _______,_______,_______,_______,_______,KC_LBRC,                        KC_RBRC, KC_4  , KC_5    , KC_6     ,_______ ,_______,
     _______,_______,_______,_______,_______,KC_LPRN,                        KC_RPRN, KC_1  , KC_2    , KC_3     ,_______ ,_______,
     KC_LCTL,KC_ESC ,KC_LOPT,KC_LCMD,_______,_______,                        _______, KC_0  , KC_LEFT ,KC_UP     , KC_DOWN,KC_RGHT,
                                     KC_DEL ,_______,                        _______, KC_DEL
  ),
  [_RAISE] = LAYOUT(
     KC_ESC ,KC_PSCR,KC_BRMD,KC_PAUS,_______,_______,                       _______,_______,_______,_______,_______,_______,
     _______,KC_PGDN,KC_UP  ,KC_PGUP,KC_INS ,KC_HOME,                       _______,_______,_______,_______,_______,_______,
     _______,KC_LEFT,KC_DOWN,KC_RGHT,_______,KC_END ,                       _______,_______,_______,_______,_______,_______,
     _______,_______,_______,_______,_______,_______,                       _______,_______,_______,_______,_______,_______,
     _______,KC_MUTE,KC_VOLD,KC_VOLU,_______,_______,                       _______,_______,_______,_______,_______,_______,
                                     KC_DEL ,_______,                       _______, KC_DEL
  )
};
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

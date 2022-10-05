#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Layer 0, dvorak layer
____________________________________________________________________________________________________________________________________________
|        |        |        |        |        |        |        |        |        |        |        |        |        |             |        |
|  ESC   |   1    |   2    |   3    |   4    |   5    |   6    |   7    |   8    |   9    |   0    |  _ -   | =  +   | BACKSPACE   |  HOME  |
|________|________|________|________|________|________|________|________|________|________|________|________|________|_____________|________|
|            |   '    |   ,    |   .    |        |        |        |        |        |        |        |   /    |   +    |         |        |
|     TAB    |   "    |   <    |   >    |   P    |   Y    |   F    |   G    |   C    |   R    |   L    |   ?    |   =    |  |   \  |  PGUP  |
|____________|________|________|________|________|________|________|________|________|________|________|________|________|_________|________|
  |            |        |        |        |        |        |        |        |        |        |        |   -    |            |   |        |
  |    LCTL    |   A    |   O    |   E    |   U    |   I    |   D    |   H    |   T    |   N    |   S    |   _    |   ENTER    |   |  PGDN  |
  |____________|________|________|________|________|________|________|________|________|________|________|________|____________|___|________|
  |                |   ;    |        |        |        |        |        |        |        |        |        |            |        |        |
  |     SHIFT      |   :    |   Q    |   J    |   K    |   X    |   B    |   M    |   W    |    V   |   Z    |   SHIFT    |   UP   |  END   |
  |________________|________|________|________|________|________|________|________|________|________|________|____________|________|________|
  |            |        |       |        |                 |                 |        |        |             |   |        |        |        |
  |     FN     |  LCTL  | LALT  |  LGUI  |      SPACE      |        FN       |  RCTL  |  RALT  |     FN      |   |  LEFT  |  DOWN  | RIGHT  |
  |____________|________|_______|________|_________________|_________________|________|________|_____________|   |________|________|________|
*/

  [0] = LAYOUT(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_LBRC, KC_RBRC, KC_BSPC,      KC_HOME,
        KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_SLSH, KC_EQL,  KC_BSLS,  KC_PGUP,
          KC_LCTL, KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_MINS,    KC_ENT,       KC_PGDN,
          KC_LSFT,     KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,     KC_Z,      KC_RSFT,    KC_UP, KC_END,
          MO(2), KC_LCTL, KC_LALT,   KC_LGUI,      KC_SPC,           MO(2),     KC_RCTL,   KC_RALT,   MO(2),         KC_LEFT, KC_DOWN, KC_RGHT
  ),

  /* Layer 1, qwerty layer
____________________________________________________________________________________________________________________________________________
|        |        |        |        |        |        |        |        |        |        |        |        |        |             |        |
|  ESC   |   1    |   2    |   3    |   4    |   5    |   6    |   7    |   8    |   9    |   0    |  _ -   | =  +   | BACKSPACE   |  HOME  |
|________|________|________|________|________|________|________|________|________|________|________|________|________|_____________|________|
|            |        |        |        |        |        |        |        |        |        |        |  [     |   ]    |         |        |
|     TAB    |   Q    |   W    |   E    |   R    |   T    |   Y    |   U    |   I    |   O    |   P    |  {     |   }    |  |   \  |  PGUP  |
|____________|________|________|________|________|________|________|________|________|________|________|________|________|_________|________|
  |            |        |        |        |        |        |        |        |        |        |   ;    |   '    |            |   |        |
  |    LCTL    |   A    |   S    |   D    |   F    |   G    |   H    |   J    |   K    |   L    |   :    |   "    |   ENTER    |   |  PGDN  |
  |____________|________|________|________|________|________|________|________|________|________|________|________|____________|___|________|
  |                |        |        |        |        |        |        |        |   ,    |    .   |   /    |            |        |        |
  |     SHIFT      |   Z    |   X    |   C    |   V    |   B    |   N    |   M    |   <    |    >   |   ?    |   SHIFT    |   UP   |  END   |
  |________________|________|________|________|________|________|________|________|________|________|________|____________|________|________|
  |            |        |       |        |                 |                 |        |        |             |   |        |        |        |
  |     FN     |  LCTL  |  LALT |  LGUI  |      SPACE      |        FN       | RCTRL  |  RALT  |     FN      |   |  LEFT  |  DOWN  | RIGHT  |
  |____________|________|_______|________|_________________|_________________|________|________|_____________|   |________|________|________|
*/

  [1] = LAYOUT(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,      KC_HOME,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,  KC_PGUP,
          KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,    KC_ENT,       KC_PGDN,
          KC_LSFT,     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,    KC_RSFT,    KC_UP, KC_END,
          MO(2), KC_LCTL, KC_LALT,   KC_LGUI,     KC_SPC,           MO(2),      KC_RCTL,   KC_RALT,   MO(2),         KC_LEFT, KC_DOWN, KC_RGHT
  ),

    /* Layer 2, function layer
____________________________________________________________________________________________________________________________________________
|        |        |        |        |        |        |        |        |        |        |        |        |        |             |        |
|   ~    |   F1   |   F2   |   F3   |   F4   |   F5   |   F6   |   F7   |   F8   |   F9   |  F10   |  F11   |  F12   |    DEL      | Dvorak |
|________|________|________|________|________|________|________|________|________|________|________|________|________|_____________|________|
|            |        |        |        |        |        |        |        |        |        |        |        |        |         |        |
|            |  HOME  |   UP   |  END   |  PGUP  |        |  PGUP  |  HOME  |   UP   |  END   |        |        |        |  PRTSCR | Qwerty |
|____________|________|________|________|________|________|________|________|________|________|________|________|________|_________|________|
  |            |        |        |        |        |        |        |        |        |        |        |        |            |   |        |
  |            |  LEFT  |  DOWN  | RIGHT  |  PGDN  |        |  PGDN  |  LEFT  |  DOWN  | RIGHT  |        |        |            |   |        |
  |____________|________|________|________|________|________|________|________|________|________|________|________|____________|___|________|
  |                | PLAY/  | MEDIA  | MEDIA  | VOLUME | VOLUME | VOLUME |        |        |        |        |            |        |        |
  |                | PAUSE  | PREV   | NEXT   | DOWN   | UP     | MUTE   |        |        |        |        |            |  PGUP  | RESET  |
  |________________|________|________|________|________|________|________|________|________|________|________|____________|________|________|
  |            |        |       |        |                 |                 |        |        |             |   |        |        |        |
  |            |        |       |        |    BACKSPACE    |                 |        |        |             |   |  HOME  |  PGDN  |  END   |
  |____________|________|_______|________|_________________|_________________|________|________|_____________|   |________|________|________|
*/

  [2] = LAYOUT(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  TO(0),
        KC_TRNS, KC_HOME, KC_UP,   KC_END,  KC_PGUP, KC_TRNS, KC_PGUP, KC_HOME, KC_UP,   KC_END,  KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR, TO(1),
          KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_TRNS, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS,    KC_TRNS,     KC_TRNS,
              KC_TRNS, KC_MPLY, KC_MPRV, KC_MNXT, KC_VOLD, KC_VOLU, KC_MUTE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,  KC_PGUP, RESET,
          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_BSPC,          KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS,       KC_HOME,  KC_PGDN, KC_END
  ),

  [3] = LAYOUT(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,     KC_TRNS,
              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,  KC_TRNS, KC_TRNS,
          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS,          KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS,  KC_TRNS, KC_TRNS
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}

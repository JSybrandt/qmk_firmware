#include QMK_KEYBOARD_H


// Define different layers
// The default layer is where It type most of the time.
#define _DF 0
// The navigation layer makes it easier for me to move between tasks.
#define _NV 1
// The media layer helps me control music, lights, brightness, and maybe open some apps.
#define _MD 2
// The command layer lets me alias commands.
#define _CM 3

// This enum defines custom keycodes that are used to support commands.
enum custom_keycodes {
  JSYBRAN = SAFE_RANGE,
  // Switch between tmux windows with one key.
  TWIN_1, TWIN_2, TWIN_3, TWIN_4, TWIN_5,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Layer 0, default layer
__________________________________________________________________________________________________________________________________  ________
|        |        |        |        |        |        |        |        |        |        |        |        |        |            ||        |
|  ESC   |   F1   |   F2   |   F3   |   F4   |   F5   |   F6   |   F7   |   F8   |   F9   |  F10   |  F11   |  F12   |  DELETE    ||  HOME  |
|________|________|________|________|________|________|________|________|________|________|________|________|________|____________||________|
|        |        |        |        |        |        |        |        |        |        |        |        |        |            ||        |
|  ~`    |   1    |   2    |   3    |   4    |   5    |   6    |   7    |   8    |   9    |   0    |  _ -   | =  +   | BACKSPACE  ||  PGUP  |
|________|________|________|________|________|________|________|________|________|________|________|________|________|____________||________|
|            |        |        |        |        |        |        |        |        |        |        |  [     |   ]    |        ||        |
|     TAB    |   Q    |   W    |   E    |   R    |   T    |   Y    |   U    |   I    |   O    |   P    |  {     |   }    |  |   \ ||  PGDN  |
|____________|________|________|________|________|________|________|________|________|________|________|________|________|________||________|
  |            |        |        |        |        |        |        |        |        |        |   ;    |   '    |            |   |        |
  |    CAPS    |   A    |   S    |   D    |   F    |   G    |   H    |   J    |   K    |   L    |   :    |   "    |   ENTER    |   |  END   |
  |____________|________|________|________|________|________|________|________|________|________|________|________|____________|___|________|
  |                |        |        |        |        |        |        |        |   ,    |    .   |   /    |            |        |
  |     SHIFT      |   Z    |   X    |   C    |   V    |   B    |   N    |   M    |   <    |    >   |   ?    |   SHIFT    |   UP   |
  |________________|________|________|________|________|________|________|________|________|________|________|____________|________|_________
  |            |        |       |        |                 |                 |        |        |             |   |        |        |        |
  |    CTRL    |  LALT  | FN    | LGUI   |    SPACE        |      SPACE      | RCTRL  |  RALT  |     FN      |   |  LEFT  |  DOWN  | RIGHT  |
  |____________|________|_______|________|_________________|_________________|________|________|_____________|   |________|________|________|
*/

  [_DF] = LAYOUT(
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_HOME,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_PGUP,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_PGDN,
    KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,           KC_END,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,
    KC_LCTL, MO(_CM), KC_LGUI, KC_LALT, KC_SPC,  MO(_NV), KC_RALT, KC_RCTL, MO(_MD),                            KC_LEFT, KC_DOWN, KC_RGHT
  ),

  [_NV] = LAYOUT(
    _______, TWIN_1,  TWIN_2,  TWIN_3,  TWIN_4,  TWIN_5,  _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    KC_PSCR, _______, _______, _______, _______, _______, _______, _______, KC_HOME, _______, _______, _______, _______, _______, _______,
    _______, KC_END,  _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______, _______,          _______,
    _______, _______, KC_DEL,  _______, _______, _______, _______, _______, _______, _______, KC_FIND, _______,          KC_PGUP,
    _______, _______, _______, _______, _______, _______, _______, _______, _______,                            KC_HOME, KC_PGDN, KC_END
  ),

  [_MD] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MPLY,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_TOG, RGB_VAD, RGB_VAI, _______, KC_VOLU,
    KC_PSCR, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_BRID, KC_BRIU, _______, KC_VOLD,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          KC_MUTE,
    _______, _______, _______, _______, _______, _______, _______, _______, KC_WBAK, KC_WFWD, _______, _______,          KC_VOLU,
    _______, _______, _______, _______, _______, _______, _______, _______, _______,                            KC_MNXT, KC_VOLD, KC_MPRV
  ),

  [_CM] = LAYOUT(
    RESET,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, JSYBRAN, _______, KC_SLEP, _______, _______, _______,          _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______,                            _______, _______, _______
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // These macros are all setup for on the keydown event.
  if(record->event.pressed) {
    switch (keycode){
      case JSYBRAN:
          SEND_STRING("jsybrandt");
        break;
      case TWIN_1:
          SEND_STRING(SS_LCTL("a")"1");
        break;
      case TWIN_2:
          SEND_STRING(SS_LCTL("a")"2");
        break;
      case TWIN_3:
          SEND_STRING(SS_LCTL("a")"3");
        break;
      case TWIN_4:
          SEND_STRING(SS_LCTL("a")"4");
        break;
      case TWIN_5:
          SEND_STRING(SS_LCTL("a")"5");
        break;
    }
  }
  return true;
}

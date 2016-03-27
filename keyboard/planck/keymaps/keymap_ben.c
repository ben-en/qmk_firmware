// This is the canonical layout file for the Quantum project. If you want to add another keyboard,
// this is the style you want to emulate.
//
// TODO
// Move spacebar so it's directly under homing key, use center two buttons for
// something else
// Make modifiers only apply while key is held down, sometimes releasing a
// modifier while typing too fast results in an alpha being a number, etc

#include "planck.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QW 0
#define _FA 1
#define _WN 3
#define _SN 4

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

				/* QWERTY */
	[_QW] = { 
	  {KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC},
	  {KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_QUOT, KC_ENT },
	  {KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_SCLN},
	  {F(0),    KC_LCTL, MO(5),   KC_LALT, MO(_FA), KC_LGUI, MO(_SN), KC_SPC,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT}

	//  {F(4),    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_QUOT, F(5)   },
	},

				/* WASD + NUMPAD */
	[_WN] = { 
	  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P7,   KC_P8,   KC_P9,   KC_PSLS, KC_PMNS, KC_TRNS},
	  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P4,   KC_P5,   KC_P6,   KC_PAST, KC_PPLS, KC_PENT},
	  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P1,   KC_P2,   KC_P3,   KC_PDOT, KC_PSLS, KC_NUMLOCK},
	  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, DF(_QW)}
	},

				/* SPECIAL CHARS + NUMPAD */
	[_SN] = { 
	  {KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_TRNS},
	  {KC_BSLS,	KC_LBRC, KC_RBRC, KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, KC_PLUS, KC_MINS, KC_EQL,  KC_UNDS, KC_TRNS},
	  {KC_TRNS, KC_BSLS, KC_GRV , KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_AMPR, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS},
	  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NUMLOCK, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END}
	},

				/* FKEYS + AWESOME WM SHORTCUTS */
	[_FA] = { 
	  {KC_TILD, KC_F1,  KC_F2,    KC_F3,   KC_F4,  KC_F5,    KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_DELETE},
	  {KC_PIPE, F(11),   F(12),   F(13),   F(14),   F(15),   F(16),   F(17),   F(18),   F(19),   F(20),   LGUI(KC_ENT)},
	  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, M(1),    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS},
	  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MNXT, LGUI(LCTL(KC_D)), LGUI(LCTL(KC_U)), LGUI(LCTL(KC_M))}

	//  {LGUI(LCTL(KC_F)), KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_TRNS},
	//  {LGUI(LCTL(KC_C)), F(11),   F(12),   F(13),   F(14),   F(15),   F(16),   F(17),   F(18),   F(19),   F(20),   LGUI(KC_ENT)},
	},
			
				/* SPECIAL FUNCTIONS */
	[5] = { 
	  {RESET,   F(6),    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_END},
	  {KC_CAPS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_PGUP, KC_PGDN},
	  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, M(1),    KC_DELETE},
	  {DF(_QW), KC_TRNS, MO(5),   KC_F12,  KC_F11,  M(0),    KC_TRNS, KC_TRNS, KC_MNXT, KC_MPLY, KC_VOLD, KC_VOLU}
	},
};

const uint16_t PROGMEM fn_actions[] = {

	[0] = ACTION_MODS_KEY(MOD_LSFT, KC_INS),

	[1] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_CAPS),
	[2] = ACTION_MODS_TAP_KEY(MOD_LGUI, KC_ESC),
	
	[4] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_BSLS),
	[5] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_SLSH),

	[6] = ACTION_MODS_KEY(MOD_LALT | MOD_LCTL, KC_DELETE),

	[7] = ACTION_MODS_TAP_KEY(MO(5), ACTION_MODS_KEY(MOD_LSFT, KC_INS)),

 	[11] = LGUI(KC_1),
 	[12] = LGUI(KC_2),
 	[13] = LGUI(KC_3),
 	[14] = LGUI(KC_4),
 	[15] = LGUI(KC_5),
 	[16] = LGUI(KC_6),
 	[17] = LGUI(KC_7),
 	[18] = LGUI(KC_8),
 	[19] = LGUI(KC_9),
 	[20] = LGUI(KC_0)
 
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
			return MACRO(T(DOWN), T(DOWN), T(DOWN), T(ENT), END);
          }
        case 1:
          if (record->event.pressed) {
			return MACRO(T(PSCR), END);
          }
        break;
      }
    return MACRO_NONE;
};

// Historical dump
//
//	 [_RS] = { /* BENS RAISE */
//	  {KC_TRNS, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_TRNS},
//	  {KC_TRNS,	KC_LBRC, KC_RBRC, KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, KC_UNDS, KC_MINS, KC_EQL,  KC_PLUS, KC_TRNS},
//	  {KC_TRNS, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_GRV , KC_TILD, KC_TRNS},
//	  {RESET,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY}
//	},
//	[_LW] = { /* BENS LOWER */
//	  {LGUI(LCTL(KC_F)), KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_TRNS},
//	  {LGUI(LCTL(KC_C)), F(11),   F(12),   F(13),   F(14),   F(15),   F(16),   F(17),   F(18),   F(19),   F(20),   LGUI(KC_ENT)},
//	  {KC_TRNS, LGUI(LCTL(KC_S)), LGUI(LCTL(KC_P)), LGUI(LCTL(KC_N)), M(1), KC_F11,  KC_F12,  KC_NO, LGUI(KC_COMM), LGUI(KC_DOT), LGUI(KC_TAB), KC_TRNS},
//	  {M(0),   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MNXT, LGUI(LCTL(KC_D)), LGUI(LCTL(KC_U)), LGUI(LCTL(KC_M))}
//	},
//	[_ML] = { /* BENS MOD LAYER */
//	  {KC_TRNS, F(11),   F(12),   F(13),   F(14),   F(15),   F(16),   F(17),   F(18),   F(19),   F(20),   KC_TRNS},
//	  {KC_TRNS, LGUI(LCTL(KC_S)), LGUI(LCTL(KC_P)), LGUI(LCTL(KC_N)), KC_PSCR, KC_PGUP, KC_PGDN, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_ENT},
//	  {KC_TRNS, LGUI(LCTL(KC_C)), LGUI(LCTL(KC_F)), KC_NO,   KC_NO,   LGUI(LCTL(KC_D)), LGUI(LCTL(KC_U)), LGUI(LCTL(KC_M)), LGUI(KC_COMM), LGUI(KC_DOT), LGUI(KC_TAB), KC_TILD},
//	  {RESET,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LGUI(LCTL(KC_D)), LGUI(LCTL(KC_U)), LGUI(LCTL(KC_M))}
//	}
//
//	[_RS] = { /* BENS RAISE */
//	  {KC_TRNS, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_TRNS},
//	  {KC_TRNS,	KC_LBRC, KC_RBRC, KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, KC_UNDS, KC_MINS, KC_EQL,  KC_PLUS, KC_TRNS},
//	  {KC_TRNS, KC_BSLS, KC_GRV , KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_AMPR, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS},
//	  {RESET,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY}
//	},
//
//				/* SPECIAL CHARS + NUMPAD */
//	[_SN] = { 
//	  {KC_TRNS, KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_7,    KC_8,    KC_9,    KC_MINS, KC_TRNS},
//	  {KC_TRNS, KC_LBRC, KC_RBRC, KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, KC_4,    KC_5,    KC_6,    KC_EQUAL, KC_PENT},
//	  {KC_TRNS, KC_BSLS, KC_GRV , KC_TILD, KC_EXLM, KC_AT,   KC_0,    KC_1,    KC_2,    KC_3,    KC_DOT,  KC_TRNS},
//	  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NUMLOCK, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END}
//	},
//
//  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS}

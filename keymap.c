#include "config.h"
#include "whitefox.h"

/* KEYS */
#define ______ KC_TRNS
#define XXXXXX KC_NO
#define CA(kc) LCTL(LALT(kc))

/* MACROS */
#define M_TMUX 0

#define MT_CTMUX MACROTAP(M_TMUX)

/* LAYERS */
enum {
	L_MAIN = 0,
	L_FCT,
	L_ADV,
	L_GAME
};

/* KEYMAPS */
const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: Default Layer
     * ,---------------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|GAM|
     * |---------------------------------------------------------------|
     * | Tab |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|Del|
     * |---------------------------------------------------------------|
     * | tmux |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |PgU|
     * |---------------------------------------------------------------|
     * |  LSPO  |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /| RSPC |Up |PgD|
     * |---------------------------------------------------------------|
     * | Fn |Alt |Gui |         Space        |Caps |ADV |  |Lef|Dow|Rig|
     * `---------------------------------------------------------------'
     */
    [L_MAIN] = KEYMAP( \
	       KC_GESC,      KC_1,      KC_2,      KC_3,      KC_4,      KC_5,      KC_6,      KC_7,      KC_8,      KC_9,      KC_0,   KC_MINS,    KC_EQL,   KC_BSLS,    KC_GRV,TG(L_GAME), \
            KC_TAB,      KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,      KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,   KC_LBRC,   KC_RBRC,   KC_BSPC,               KC_DEL, \
          MT_CTMUX,      KC_A,      KC_S,      KC_D,      KC_F,      KC_G,      KC_H,      KC_J,      KC_K,      KC_L,   KC_SCLN,   KC_QUOT,   KC_NUHS,               KC_ENT,   KC_PGUP, \
           KC_LSPO,   KC_NUBS,      KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,      KC_N,      KC_M,   KC_COMM,    KC_DOT,   KC_SLSH,              KC_RSPC,     KC_UP,   KC_PGDN, \
		 MO(L_FCT),   KC_LALT,   KC_LGUI,                                                          LT(L_FCT, KC_SPC),   KC_CAPS, MO(L_ADV),    XXXXXX,   KC_LEFT,   KC_DOWN,   KC_RGHT \
    ),
    /* Layer 1: Common Fonctions Layer
     * ,---------------------------------------------------------------.
     * |   | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|   |   |   |
     * |---------------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |   |
     * |---------------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |   |   |   |        |   |
     * |---------------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |      |   |   |
     * |---------------------------------------------------------------|
     * |    |    |    |                  |    |    |    |  |   |   |   |
     * `---------------------------------------------------------------'
     */
    [L_FCT] = KEYMAP( \
            ______,     KC_F1,     KC_F2,     KC_F3,     KC_F4,     KC_F5,     KC_F6,     KC_F7,     KC_F8,     KC_F9,    KC_F10,    KC_F11,    KC_F12,    ______,    ______,    ______,\
            ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,               ______,\
            ______,    ______,    ______,    ______,    ______,    ______,   KC_LEFT,   KC_DOWN,     KC_UP,  KC_RIGHT,    ______,    ______,    ______,               ______,    ______,\
            ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,               ______,    ______,    ______,\
            ______,    ______,    ______,                                                                      ______,    ______,    ______,    ______,    ______,    ______,    ______ \
    ),
    /* Layer 2: Advanced System Layer
     * ,----------------------------------------------------------------.
     * |EJT|   |   |   |   |   |   |   |   |   |   |   |   |   |   |    |
     * |----------------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |Mute|
     * |----------------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |   |   |   |        |Vol+|
     * |----------------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |      | N^|Vol-|
     * |----------------------------------------------------------------|
     * |    |    |    |                  |    |    |    |  | N<| Nv|N>  |
     * `----------------------------------------------------------------'
     */
    [L_ADV] = KEYMAP( \
           KC_EJCT,    ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,\
            ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,              KC_MUTE,\
            ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,               ______,   KC_VOLU,\
            ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,    ______,               ______, CA(KC_UP),   KC_VOLD,\
            ______,    ______,    ______,                                                                      ______,    ______,    ______,    ______,CA(KC_LEFT),CA(KC_DOWN),CA(KC_RGHT) \
    ),
    /* Layer 3: Gaming Layer */
    [L_GAME] = KEYMAP( \
            KC_ESC,      KC_1,      KC_2,      KC_3,      KC_4,      KC_5,      KC_6,      KC_7,      KC_8,      KC_9,      KC_0,   KC_MINS,    KC_EQL,   KC_BSLS,    KC_GRV,    ______, \
            KC_TAB,      KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,      KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,   KC_LBRC,   KC_RBRC,   KC_BSPC,               KC_DEL, \
           KC_LCTL,      KC_A,      KC_S,      KC_D,      KC_F,      KC_G,      KC_H,      KC_J,      KC_K,      KC_L,   KC_SCLN,   KC_QUOT,   KC_NUHS,               KC_ENT,   KC_PGUP,\
           KC_LSFT,   KC_NUBS,      KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,      KC_N,      KC_M,   KC_COMM,    KC_DOT,   KC_SLSH,              KC_RSFT,     KC_UP,   KC_PGDN, \
           KC_LCTL,   KC_LALT,   KC_LGUI,                                                                      KC_SPC,    XXXXXX,    XXXXXX,    XXXXXX,   KC_LEFT,   KC_DOWN,   KC_RGHT \
    ),
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
	switch(id) {
	case M_TMUX:
		return MACRO_TAP_HOLD_MOD(record, MACRO(D(LCTL), T(A), U(LCTL), END), LCTL);
	}
	return MACRO_NONE;
}

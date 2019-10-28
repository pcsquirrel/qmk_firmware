#pragma once

#include "quantum.h"
#include "led.h"

/*  ANSI LAYOUT
  ESC| F1 | F2 | F3 | F4 | F5 | F6 | F7 | F8 | F9 | F10| F11| F12| PSC| PGU| PGD | XXX
  GRA| 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  | 9  | 0  | '  | ¡  |   BCKS  | DEL | XXX
  TAB| Q  | W  | E  | R  | T  | Y  | U  | I  | O  | P  | `  | +  |         | HOM | XXX
  CAP| A  | S  | D  | F  | G  | H  | J  | K  | L  | Ñ  | ´  | Ç  |   ENTER | END | XXX
  LSI| (<)| Z  | X  | C  | V  | B  | N  | M  | ,  | .  | -  |   RSHIF | UP | FNL | XXX
  LCT| WIN| ALT|               ESPACE             | ALG| FN | RCT| LEF| DOW| RIG | XXX

  LCT| WIN| ALT|               ESPACE             | ALG| FN | RCT| LEF| DOW| RIG | XXX
  LCT| WIN| ALT|               ESPACE             | ALG| FN | RCT| LEF| DOW| RIG | XXX
*/
/*
#define LAYOUT_seventy_ansi( \
  K00, K01, K02, K03,   K04,   K05,   K06, K07,   K08,   K09, K0A, K0B, K0C, K0D, K0E, K0F, \
  K10, K11, K12, K13,   K14,   K15,   K16, K17,   K18,   K19, K1A, K1B, K1C,    K1D,   K1E, \
  K20, K21, K22, K23,   K24,   K25,   K26, K27,   K28,   K29, K2A, K2B, K2C,           K2D, \
  K30, K31, K32, K33,   K34,   K35,   K36, K37,   K38,   K39, K3A, K3B, K3C,      K3D, K3E, \
  K40, K41, K42, K43,   K44,   K45,   K46, K47,   K48,   K49, K4A, K4B,      K4C, K4D, K4E, \
  K50, K51, K52,                      K53,               K54, K55, K56, K57, K58, K59 \
) { \
  { K00, K01, K02, K03,   K04,   K05,   K06, K07,   K08,  K09, K0A, K0B, K0C, K0D, K0F }, \
  { K10, K11, K12, K13,   K14,   K15,   K16, K17,   K18,  K19, K1A, K1B, K1C, K0E, K1E }, \
  { K20, K21, K22, K23,   K24,   K25,   K26, K27,   K28,  K29, K2A, K2B, K2C, K1D, K2D }, \
  { K30, K31, K32, K33,   K34,   K35,   K36, K37,   K38,  K39, K3A, K3B, K3C, K3D, K3E }, \
  { K40, K41, K42, K43,   K44,   K45,   K46, K47,   K48,  K49, K4A, K4B, K4C, K4D, K4E }, \
  { K50, K51, K52, KC_NO, KC_NO, KC_NO, K53, KC_NO, KC_NO,K54, K55, K56, K57, K58, K59 } \
}
*/
#define LAYOUT_t43_ansi( \
	k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, \
	k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e, \
	k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, \
	k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d, \
	k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4a, k4b, k4c, \
	k50, k51, k52, k53, k54, k55, k56, k57, k58, k59, k5a, k5b, k5c, \
	k60, k61, k62, k63, k64, k65, k66, \
	k70, k71, k72 \
) { \
	{k43,	KC_NO,	KC_NO,	KC_NO,	k41,	KC_NO,	KC_NO,	k42,	k04,	k47,	k48,	KC_NO,	k49,	k44,	k4a,	KC_NO}, \
	{k33,	KC_NO,	KC_NO,	KC_NO,	k31,	KC_NO,	KC_NO,	k32,	k03,	k37,	k38,	KC_NO,	k39,	k34,	k3a,	k06}, \
	{k12,	KC_NO,	KC_NO,	KC_NO,	k30,	KC_NO,	k50,	k40,	k02,	k36,	k3c,	k2d,	k16,	k35,	k3b,	KC_NO}, \
	{k11,	k61,	k09,	k0a,	k20,	k08,	KC_NO,	k10,	k1c,	k26,	k2c,	k18,	k17,	k25,	k2b,	KC_NO}, \
	{k13,	KC_NO,	k66,	KC_NO,	k00,	KC_NO,	KC_NO,	k51,	k01,	k46,	k15,	k14,	KC_NO,	k45,	k4b,	k62}, \
	{k23,	KC_NO,	k1d,	k1e,	k21,	k1b,	KC_NO,	k22,	k1a,	k27,	k28,	k19,	k29,	k24,	k2a,	k05}, \
	{k54,	k65,	k07,	KC_NO,	k52,	KC_NO,	k5c,	k53,	KC_NO,	k58,	k59,	k3d,	k5a,	k55,	k4c,	KC_NO}, \
	{KC_NO,	KC_NO,	k70,	KC_NO,	KC_NO,	k72,	KC_NO,	KC_NO,	k71,	k57,	KC_NO,	k63,	KC_NO,	k56,	k5b,	k64} \
}

//k60 FN-Key fehlt

/*  ISO LAYOUT
  ESC| F1 | F2 | F3 | F4 | F5 | F6 | F7 | F8 | F9 | F10| F11| F12| PSC| PGU| PGD
  GRA| 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  | 9  | 0  | '  | ¡  |   BCKS  | DEL
  TAB| Q  | W  | E  | R  | T  | Y  | U  | I  | O  | P  | `  | +  |         | HOM
  CAP| A  | S  | D  | F  | G  | H  | J  | K  | L  | Ñ  | ´  | Ç  |   ENTER | END
  LSI| <  | Z  | X  | C  | V  | B  | N  | M  | ,  | .  | -  |   RSHIF | UP | FNL
  LCT| WIN| ALT|               ESPACE             | ALG| FN | RCT| LEF| DOW| RIG
*/
/*
#define LAYOUT_seventy_iso( \
  K00, K01, K02, K03,   K04,   K05,   K06, K07,   K08,   K09, K0A, K0B, K0C, K0D, K0E, K0F, \
  K10, K11, K12, K13,   K14,   K15,   K16, K17,   K18,   K19, K1A, K1B, K1C,    K1D,   K1E, \
  K20, K21, K22, K23,   K24,   K25,   K26, K27,   K28,   K29, K2A, K2B, K2C,           K2D, \
  K30, K31, K32, K33,   K34,   K35,   K36, K37,   K38,   K39, K3A, K3B, K3C,      K3D, K3E, \
  K40, K41, K42, K43,   K44,   K45,   K46, K47,   K48,   K49, K4A, K4B,      K4C, K4D, K4E, \
  K50, K51, K52,                      K53,               K54, K55, K56, K57, K58, K59 \
) { \
  { K00, K01, K02, K03,   K04,   K05,   K06, K07,   K08,  K09, K0A, K0B, K0C, K0D, K0F }, \
  { K10, K11, K12, K13,   K14,   K15,   K16, K17,   K18,  K19, K1A, K1B, K1C, K0E, K1E }, \
  { K20, K21, K22, K23,   K24,   K25,   K26, K27,   K28,  K29, K2A, K2B, K2C, K1D, K2D }, \
  { K30, K31, K32, K33,   K34,   K35,   K36, K37,   K38,  K39, K3A, K3B, K3C, K3D, K3E }, \
  { K40, K41, K42, K43,   K44,   K45,   K46, K47,   K48,  K49, K4A, K4B, K4C, K4D, K4E }, \
  { K50, K51, K52, KC_NO, KC_NO, KC_NO, K53, KC_NO, KC_NO,K54, K55, K56, K57, K58, K59 } \
}*/

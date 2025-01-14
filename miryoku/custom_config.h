// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku
// https://github.com/mnivoliez/miryoku_zmk/blob/master/miryoku/custom_config.h

#define CONFIG_ZMK_BLE_EXPERIMENTAL_FEATURES

#define MIRYOKU_LAYER_FUN \
&kp F12,           &kp F7,            &kp F8,            &kp F9,            &kp PSCRN,         &u_to_U_GAME,      &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp F11,           &kp F4,            &kp F5,            &kp F6,            &kp SLCK,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp F10,           &kp F1,            &kp F2,            &kp F3,            &kp PAUSE_BREAK,   U_NA,              &u_to_U_FUN,       &u_to_U_MEDIA,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp K_APP,         &kp TAB,           &kp SPACE,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// FPS friendly tap layer
#define MIRYOKU_LAYER_GAME \
&kp TAB,           &kp Q,             &kp W,             &kp E,             &kp R,             U_NA,              U_NA,              U_NA,              U_NA,              U_NA,            \
&kp LSHFT,         &kp A,             &kp S,             &kp D,             &kp F,             U_NA,              U_NA,              U_NA,              U_NA,              U_NA,            \
&kp LCTRL,         &kp Z,             &kp X,             &kp C,             N4, B,             U_NA,              U_NA,              U_NA,              U_NA,              U_NA,            \
U_NP,              U_NP,              &kp ESC,           U_LT(U_GAME2, V),  &kp SPACE,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP 


#define MIRYOKU_LAYER_GAME2 \
&kp B,             U_NA,              U_NA,              &kp N4,            &kp CAPSLOCK,      U_NA,              U_NA,              U_NA,              U_NA,              U_NA,            \
&kp ESC,           &kp N1,            &kp N2,            &kp N3,            &kp G,             U_NA,              U_NA,              U_NA,              U_NA,              U_NA,            \
U_NA,              U_NA,              U_NA,              &kp Y,             &kp V,             U_NA,              U_NA,              U_NA,              U_NA,              U_NA,            \
U_NP,              U_NP,              U_NA,              &kp LCTRL,         &kp SPACE,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP 

// Direct custom layer access
#define MIRYOKU_LAYOUTMAPPING_CORNE( \
     K00, K01, K02, K03, K04,       K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
XXX  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
XXX  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
XXX  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
               K32  K33  K34       K35  K36  K37


#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(GAME,   "Game") \
MIRYOKU_X(VTWO,   "Game2")

#define MIRYOKU_LAYERMAPPING_GAME MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_GAME2 MIRYOKU_MAPPING

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9
#define U_GAME    10
#define U_GAME2   11

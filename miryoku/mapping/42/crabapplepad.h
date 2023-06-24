// SPDX-FileCopyrightText: 2023 Sergei Silnov
// SPDX-License-Identifier: MIT

#if !defined (MIRYOKU_LAYOUTMAPPING_CRABAPPLEPAD)

#define MIRYOKU_LAYOUTMAPPING_CRABAPPLEPAD( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp LBRC   K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &kp RBRC \
&kp TILDE  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  &kp SQT \
&kp CAPS   K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &kp BSLH \
                     K32  K33  K34       K35  K36  K37

#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_CRABAPPLEPAD


#if !defined (MIRYOKU_LAYERMAPPING_CRABAPPLEPAD)


#define MIRYOKU_LAYERMAPPING_CRABAPPLEPAD \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SEMI),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#endif

#define MIRYOKU_LAYERMAPPING_BASE MIRYOKU_LAYERMAPPING_CRABAPPLEPAD

// SPDX-FileCopyrightText: 2024 Sergei Silnov
// SPDX-License-Identifier: MIT

#if !defined(MIRYOKU_LAYOUTMAPPING_ARONIA_V1)

#define MIRYOKU_LAYOUTMAPPING_ARONIA_V1(              \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, \
    N30, N31, K32, K33, K34, K35, K36, K37, N38, N39) \
     K00 K01 K02 K03 K04 K05 K06 K07 K08 K09          \
         K10 K11 K12 K13 K14 K15 K16 K17 K18 K19      \
             K20 K21 K22 K23 K24 K25 K26 K27 K28 K29  \
                 K32 K33 K34 K35 K36 K37

#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_ARONIA_V1

#if !defined(MIRYOKU_LAYER_BASE_ARONIA_V1)

#define MIRYOKU_LAYER_BASE_ARONIA_V1                                                                                                                  \
     &kp Q, &kp W, &kp E, &kp R, &kp T, &kp Y, &kp U, &kp I, &kp O, &kp P,                                                                            \
         U_MT(LGUI, A), U_MT(LALT, S), U_MT(LCTRL, D), U_MT(LSHFT, F), &kp G, &kp H, U_MT(LSHFT, J), U_MT(LCTRL, K), U_MT(LALT, L), U_MT(LGUI, SEMI), \
         U_LT(U_BUTTON, Z), U_MT(RALT, X), &kp C, &kp V, &kp B, &kp N, &kp M, &kp COMMA, U_MT(RALT, DOT), U_LT(U_BUTTON, SLASH),                      \
         U_NP, U_NP, U_LT(U_MEDIA, ESC), U_LT(U_NAV, SPACE), U_LT(U_MOUSE, TAB), U_LT(U_SYM, RET), U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL), U_NP, U_NP

#endif

#define MIRYOKU_LAYER_BASE MIRYOKU_LAYER_BASE_ARONIA_V1

#if !defined(MIRYOKU_LAYER_NUM_ARONIA_V1)

#define MIRYOKU_LAYER_NUM_ARONIA_V1 \
&kp LBKT,          &kp N7,            &kp N8,            &kp N9,            &kp RBKT,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp SQT,          &kp N4,            &kp N5,            &kp N6,            &kp EQUAL,         U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp GRAVE,         &kp N1,            &kp N2,            &kp N3,            &kp BSLH,          U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DOT,           &kp N0,            &kp MINUS,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#endif
#define MIRYOKU_LAYER_NUM MIRYOKU_LAYER_NUM_ARONIA_V1

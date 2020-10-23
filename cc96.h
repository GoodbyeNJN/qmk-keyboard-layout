#ifndef CC96_H
#define CC96_H

#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define KEYMAP( \
    K000 ,  K001 ,  K002 ,  K003 ,  K004 ,  K005 ,  K106 ,  K006 ,  K007 ,  K008 ,  K009 ,  K010 ,  K011 ,  K012 ,  K013 ,  K014 ,  K015 ,  K016 ,  K017 ,\
    K100 ,  K101 ,  K102 ,  K103 ,  K104 ,  K105 ,  K206 ,  K107 ,  K207 ,  K108 ,  K109 ,  K110 ,  K111 ,          K113 ,  K114 ,  K115 ,  K116 ,  K117 ,\
    K200 ,      K201 ,  K202 ,  K203 ,  K204 ,  K205 ,  K306 ,  K307 ,  K208 ,  K209 ,  K210 ,  K211 ,  K212 ,      K213 ,  K214 ,  K215 ,  K216 ,  K217 ,\
    K300 ,        K301 ,  K302 ,  K303 ,  K304 ,  K305 ,  K406 ,  K407 ,  K308 ,  K309 ,  K310 ,  K311 ,            K313 ,  K314 ,  K315 ,  K316 ,  K317 ,\
    K400 ,          K401 ,  K402 ,  K403 ,  K404 ,  K405 ,  K506 ,  K507 ,  K408 ,  K409 ,  K410 ,          K412 ,  K413 ,  K414 ,  K415 ,  K416 ,        \
    K500 ,    K501 ,    K502 ,    K503 ,           K504 ,           K508 ,    K509 ,    K510 ,    K511 ,    K512 ,  K513 ,  K514 ,  K515 ,  K516 ,  K517  \
) { \
    { K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  K014,  K015,  K016,  K017 }, \
    { K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  KC_NO, K113,  K114,  K115,  K116,  K117 }, \
    { K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  K213,  K214,  K215,  K216,  K217 }, \
    { K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  KC_NO, K313,  K314,  K315,  K316,  K317 }, \
    { K400,  K401,  K402,  K403,  K404,  K405,  K406,  K407,  K408,  K409,  K410,  KC_NO, K412,  K413,  K414,  K415,  K416,  KC_NO }, \
    { K500,  K501,  K502,  K503,  K504,  KC_NO, K506,  K507,  K508,  K509,  K510,  K511,  K512,  K513,  K514,  K515,  K516,  K517 }  \
}

#endif

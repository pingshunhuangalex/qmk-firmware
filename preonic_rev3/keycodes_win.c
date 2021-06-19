enum preonic_layers_win {
    _BSW = 0,
    _NMW,
    _SMW,
    _MKW,
    _NVW,
    _FNW
};

enum preonic_keycodes_win {
    DEL_LSW = SAFE_RANGE,
    DEL_LEW,
    DEL_WFW
};

#define SET_BSW TO(_BSW)

#define OSL_NMW OSL(_NMW)
#define SET_NMW TO(_NMW)

#define OSL_SMW OSL(_SMW)
#define SET_SMW TO(_SMW)

#define BSP_MKW LT(_MKW, KC_BSPC)
#define SET_MKW TO(_MKW)

#define SPC_NVW LT(_NVW, KC_SPC)
#define SET_NVW TO(_NVW)

#define ENT_FNW LT(_FNW, KC_ENT)
#define SET_FNW TO(_FNW)

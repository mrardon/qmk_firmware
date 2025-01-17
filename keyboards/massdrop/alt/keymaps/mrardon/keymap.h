#include QMK_KEYBOARD_H

// HID has not yet been implemented for this keyboard
// #include "raw_hid.h"

#define MILLISECONDS_IN_SECOND 1000

// These are just to make it neater to use builtin HSV values in the keymap
#define RED {HSV_RED}
#define CORAL {HSV_CORAL}
// #define ORANGE {HSV_ORANGE}
#define ORANGE { 18, 255, 255 }
#define GOLDEN {HSV_GOLDENROD}
#define GOLD {HSV_GOLD}
#define YELLOW {HSV_YELLOW}
#define CHART {HSV_CHARTREUSE}
#define GREEN {HSV_GREEN}
#define SPRING {HSV_SPRINGGREEN}
#define TURQ {HSV_TURQUOISE}
#define TEAL {HSV_TEAL}
#define CYAN {HSV_CYAN}
#define AZURE {HSV_AZURE}
#define BLUE {HSV_BLUE}
#define PURPLE {HSV_PURPLE}
#define MAGENT {HSV_MAGENTA}
#define PINK {HSV_PINK}

//========================================================== CONFIGURABLE DEFAULTS ==========================================================
extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;
bool disable_layer_color;

enum alt_keycodes {
    U_T_AUTO = SAFE_RANGE, // USB Extra Port Toggle Auto Detect / Always Active
    U_T_AGCR,              // USB Toggle Automatic GCR control
    DBG_TOG,               // DEBUG Toggle On / Off
    DBG_MTRX,              // DEBUG Toggle Matrix Prints
    DBG_KBD,               // DEBUG Toggle Keyboard Prints
    DBG_MOU,               // DEBUG Toggle Mouse Prints
    MD_BOOT,               // Restart into bootloader after hold timeout
    ESC_GR,                // Grave on tap, Esc after hold timeout
    RST_EEP,               // Reset eeprom after hold timeout
    QWERTY,                // Change default layer to QWERTY
    COLEMAK,               // Change default layer to Colemak
    COLEMAK_DH            // Change default layer to Colemak DH
};

enum alt_layers {
  _COLEMAK,
  _COLEMAK_DH,
  _QWERTY,
  _FUNC
};

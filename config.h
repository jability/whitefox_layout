#ifndef CONFIG_JABI_H
# define CONFIG_JABI_H

# include "../../config.h"

# undef MANUFACTURER
# undef USBSTR_MANUFACTURER
# undef PRODUCT
# undef USBSTR_PRODUCT
# define MANUFACTURER "IC-QMK"
# define USBSTR_MANUFACTURER    'I', '\x00', 'C', '\x00', '-', '\x00', 'Q', '\x00', 'M', '\x00', 'K', '\x00'
# define PRODUCT "WhiteFox Zealios 65g"
# define USBSTR_PRODUCT         'W', '\x00', 'h', '\x00', 'i', '\x00', 't', '\x00', 'e', '\x00', 'F', '\x00', 'o', '\x00', 'x', '\x00', ' ', '\x00', 'Z', '\x00', 'e', '\x00', 'a', '\x00', 'l', '\x00', 'i', '\x00', 'o', '\x00', 's', '\x00', ' ', '\x00', '6', '\x00', '5', '\x00', 'g', '\x00'

# define TAPPING_TERM 170
# define PREVENT_STUCK_MODIFIERS
# define IGNORE_MOD_TAP_INTERRUPT
#endif

//
// Created by matin on 12/30/25.
//

#ifndef MESSENGER_CONSOLESTYLE_H
#define MESSENGER_CONSOLESTYLE_H
#ifndef CONSOLE_STYLE_H
#define CONSOLE_STYLE_H

#include <iostream>

// Global reset
inline constexpr const char* RESET = "\033[0m";

// Style controls

inline constexpr const char* BOLD      = "\033[1m";
inline constexpr const char* DIM       = "\033[2m";
inline constexpr const char* ITALIC    = "\033[3m";
inline constexpr const char* UNDERLINE = "\033[4m";
inline constexpr const char* BLINK     = "\033[5m";
inline constexpr const char* REVERSE   = "\033[7m";

// Reset only styles (bold, underline, etc.)
inline constexpr const char* RESET_STYLE = "\033[22m";
inline constexpr const char* RESET_UNDERLINE = "\033[24m";
inline constexpr const char* RESET_BLINK = "\033[25m";
inline constexpr const char* RESET_REVERSE = "\033[27m";


// Foreground colors
inline constexpr const char* BLACK   = "\033[30m";
inline constexpr const char* RED     = "\033[31m";
inline constexpr const char* GREEN   = "\033[32m";
inline constexpr const char* YELLOW  = "\033[33m";
inline constexpr const char* BLUE    = "\033[34m";
inline constexpr const char* MAGENTA = "\033[35m";
inline constexpr const char* CYAN    = "\033[36m";
inline constexpr const char* WHITE   = "\033[37m";

// Bright foreground colors
inline constexpr const char* BLACK_B   = "\033[90m";
inline constexpr const char* RED_B     = "\033[91m";
inline constexpr const char* GREEN_B   = "\033[92m";
inline constexpr const char* YELLOW_B  = "\033[93m";
inline constexpr const char* BLUE_B    = "\033[94m";
inline constexpr const char* MAGENTA_B = "\033[95m";
inline constexpr const char* CYAN_B    = "\033[96m";
inline constexpr const char* WHITE_B   = "\033[97m";

// Reset foreground color only
inline constexpr const char* RESET_COLOR = "\033[39m";

// Background colors
inline constexpr const char* BG_BLACK   = "\033[40m";
inline constexpr const char* BG_RED     = "\033[41m";
inline constexpr const char* BG_GREEN   = "\033[42m";
inline constexpr const char* BG_YELLOW  = "\033[43m";
inline constexpr const char* BG_BLUE    = "\033[44m";
inline constexpr const char* BG_MAGENTA = "\033[45m";
inline constexpr const char* BG_CYAN    = "\033[46m";
inline constexpr const char* BG_WHITE   = "\033[47m";

// Bright background colors
inline constexpr const char* BG_BLACK_B   = "\033[100m";
inline constexpr const char* BG_RED_B     = "\033[101m";
inline constexpr const char* BG_GREEN_B   = "\033[102m";
inline constexpr const char* BG_YELLOW_B  = "\033[103m";
inline constexpr const char* BG_BLUE_B    = "\033[104m";
inline constexpr const char* BG_MAGENTA_B = "\033[105m";
inline constexpr const char* BG_CYAN_B    = "\033[106m";
inline constexpr const char* BG_WHITE_B   = "\033[107m";

// Reset background color only
inline constexpr const char* RESET_BG = "\033[49m";





#endif // CONSOLE_STYLE_H




#endif //MESSENGER_CONSOLESTYLE_H
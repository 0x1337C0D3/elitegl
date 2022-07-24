/**
 * Elite - The New Kind.
 *
 * SDL/OpenGL Port by Mark Follett 2001-2002
 * email: <mef123@geocities.com>
 **/

#ifndef KEYSYMS_H
#define KEYSYMS_H

#include <SDL2/SDL.h>

typedef SDL_Keysym Keysym;

#define KEY_UNKNOWN            SDLK_UNKNOWN
#define KEY_FIRST              SDLK_FIRST
#define KEY_BACKSPACE          SDLK_BACKSPACE
#define KEY_TAB                SDLK_TAB
#define KEY_CLEAR              SDLK_CLEAR
#define KEY_RETURN             SDLK_RETURN
#define KEY_PAUSE              SDLK_PAUSE
#define KEY_ESCAPE             SDLK_ESCAPE
#define KEY_SPACE              SDLK_SPACE
#define KEY_EXCLAIM            SDLK_EXCLAIM
#define KEY_QUOTEDBL           SDLK_QUOTEDBL
#define KEY_HASH               SDLK_HASH
#define KEY_DOLLAR             SDLK_DOLLAR
#define KEY_AMPERSAND          SDLK_AMPERSAND
#define KEY_QUOTE              SDLK_QUOTE
#define KEY_LEFTPAREN          SDLK_LEFTPAREN
#define KEY_RIGHTPAREN         SDLK_RIGHTPAREN
#define KEY_ASTERISK           SDLK_ASTERISK
#define KEY_PLUS               SDLK_PLUS
#define KEY_COMMA              SDLK_COMMA
#define KEY_MINUS              SDLK_MINUS
#define KEY_PERIOD             SDLK_PERIOD
#define KEY_SLASH              SDLK_SLASH
#define KEY_0                  SDLK_0
#define KEY_1                  SDLK_1
#define KEY_2                  SDLK_2
#define KEY_3                  SDLK_3
#define KEY_4                  SDLK_4
#define KEY_5                  SDLK_5
#define KEY_6                  SDLK_6
#define KEY_7                  SDLK_7
#define KEY_8                  SDLK_8
#define KEY_9                  SDLK_9
#define KEY_COLON              SDLK_COLON
#define KEY_SEMICOLON          SDLK_SEMICOLON
#define KEY_LESS               SDLK_LESS
#define KEY_EQUALS             SDLK_EQUALS
#define KEY_GREATER            SDLK_GREATER
#define KEY_QUESTION           SDLK_QUESTION
#define KEY_AT                 SDLK_AT

#define KEY_LEFTBRACKET        SDLK_LEFTBRACKET
#define KEY_BACKSLASH          SDLK_BACKSLASH
#define KEY_RIGHTBRACKET       SDLK_RIGHTBRACKET
#define KEY_CARET              SDLK_CARET
#define KEY_UNDERSCORE         SDLK_UNDERSCORE
#define KEY_BACKQUOTE          SDLK_BACKQUOTE
#define KEY_a                  SDLK_a
#define KEY_b                  SDLK_b
#define KEY_c                  SDLK_c
#define KEY_d                  SDLK_d
#define KEY_e                  SDLK_e
#define KEY_f                  SDLK_f
#define KEY_g                  SDLK_g
#define KEY_h                  SDLK_h
#define KEY_i                  SDLK_i
#define KEY_j                  SDLK_j
#define KEY_k                  SDLK_k
#define KEY_l                  SDLK_l
#define KEY_m                  SDLK_m
#define KEY_n                  SDLK_n
#define KEY_o                  SDLK_o
#define KEY_p                  SDLK_p
#define KEY_q                  SDLK_q
#define KEY_r                  SDLK_r
#define KEY_s                  SDLK_s
#define KEY_t                  SDLK_t
#define KEY_u                  SDLK_u
#define KEY_v                  SDLK_v
#define KEY_w                  SDLK_w
#define KEY_x                  SDLK_x
#define KEY_y                  SDLK_y
#define KEY_z                  SDLK_z
#define KEY_DELETE             SDLK_DELETE

#define KEY_WORLD_0            SDLK_WORLD_0
#define KEY_WORLD_1            SDLK_WORLD_1
#define KEY_WORLD_2            SDLK_WORLD_2
#define KEY_WORLD_3            SDLK_WORLD_3
#define KEY_WORLD_4            SDLK_WORLD_4
#define KEY_WORLD_5            SDLK_WORLD_5
#define KEY_WORLD_6            SDLK_WORLD_6
#define KEY_WORLD_7            SDLK_WORLD_7
#define KEY_WORLD_8            SDLK_WORLD_8
#define KEY_WORLD_9            SDLK_WORLD_9
#define KEY_WORLD_10           SDLK_WORLD_10
#define KEY_WORLD_11           SDLK_WORLD_11
#define KEY_WORLD_12           SDLK_WORLD_12
#define KEY_WORLD_13           SDLK_WORLD_13
#define KEY_WORLD_14           SDLK_WORLD_14
#define KEY_WORLD_15           SDLK_WORLD_15
#define KEY_WORLD_16           SDLK_WORLD_16
#define KEY_WORLD_17           SDLK_WORLD_17
#define KEY_WORLD_18           SDLK_WORLD_18
#define KEY_WORLD_19           SDLK_WORLD_19
#define KEY_WORLD_20           SDLK_WORLD_20
#define KEY_WORLD_21           SDLK_WORLD_21
#define KEY_WORLD_22           SDLK_WORLD_22
#define KEY_WORLD_23           SDLK_WORLD_23
#define KEY_WORLD_24           SDLK_WORLD_24
#define KEY_WORLD_25           SDLK_WORLD_25
#define KEY_WORLD_26           SDLK_WORLD_26
#define KEY_WORLD_27           SDLK_WORLD_27
#define KEY_WORLD_28           SDLK_WORLD_28
#define KEY_WORLD_29           SDLK_WORLD_29
#define KEY_WORLD_30           SDLK_WORLD_30
#define KEY_WORLD_31           SDLK_WORLD_31
#define KEY_WORLD_32           SDLK_WORLD_32
#define KEY_WORLD_33           SDLK_WORLD_33
#define KEY_WORLD_34           SDLK_WORLD_34
#define KEY_WORLD_35           SDLK_WORLD_35
#define KEY_WORLD_36           SDLK_WORLD_36
#define KEY_WORLD_37           SDLK_WORLD_37
#define KEY_WORLD_38           SDLK_WORLD_38
#define KEY_WORLD_39           SDLK_WORLD_39
#define KEY_WORLD_40           SDLK_WORLD_40
#define KEY_WORLD_41           SDLK_WORLD_41
#define KEY_WORLD_42           SDLK_WORLD_42
#define KEY_WORLD_43           SDLK_WORLD_43
#define KEY_WORLD_44           SDLK_WORLD_44
#define KEY_WORLD_45           SDLK_WORLD_45
#define KEY_WORLD_46           SDLK_WORLD_46
#define KEY_WORLD_47           SDLK_WORLD_47
#define KEY_WORLD_48           SDLK_WORLD_48
#define KEY_WORLD_49           SDLK_WORLD_49
#define KEY_WORLD_50           SDLK_WORLD_50
#define KEY_WORLD_51           SDLK_WORLD_51
#define KEY_WORLD_52           SDLK_WORLD_52
#define KEY_WORLD_53           SDLK_WORLD_53
#define KEY_WORLD_54           SDLK_WORLD_54
#define KEY_WORLD_55           SDLK_WORLD_55
#define KEY_WORLD_56           SDLK_WORLD_56
#define KEY_WORLD_57           SDLK_WORLD_57
#define KEY_WORLD_58           SDLK_WORLD_58
#define KEY_WORLD_59           SDLK_WORLD_59
#define KEY_WORLD_60           SDLK_WORLD_60
#define KEY_WORLD_61           SDLK_WORLD_61
#define KEY_WORLD_62           SDLK_WORLD_62
#define KEY_WORLD_63           SDLK_WORLD_63
#define KEY_WORLD_64           SDLK_WORLD_64
#define KEY_WORLD_65           SDLK_WORLD_65
#define KEY_WORLD_66           SDLK_WORLD_66
#define KEY_WORLD_67           SDLK_WORLD_67
#define KEY_WORLD_68           SDLK_WORLD_68
#define KEY_WORLD_69           SDLK_WORLD_69
#define KEY_WORLD_70           SDLK_WORLD_70
#define KEY_WORLD_71           SDLK_WORLD_71
#define KEY_WORLD_72           SDLK_WORLD_72
#define KEY_WORLD_73           SDLK_WORLD_73
#define KEY_WORLD_74           SDLK_WORLD_74
#define KEY_WORLD_75           SDLK_WORLD_75
#define KEY_WORLD_76           SDLK_WORLD_76
#define KEY_WORLD_77           SDLK_WORLD_77
#define KEY_WORLD_78           SDLK_WORLD_78
#define KEY_WORLD_79           SDLK_WORLD_79
#define KEY_WORLD_80           SDLK_WORLD_80
#define KEY_WORLD_81           SDLK_WORLD_81
#define KEY_WORLD_82           SDLK_WORLD_82
#define KEY_WORLD_83           SDLK_WORLD_83
#define KEY_WORLD_84           SDLK_WORLD_84
#define KEY_WORLD_85           SDLK_WORLD_85
#define KEY_WORLD_86           SDLK_WORLD_86
#define KEY_WORLD_87           SDLK_WORLD_87
#define KEY_WORLD_88           SDLK_WORLD_88
#define KEY_WORLD_89           SDLK_WORLD_89
#define KEY_WORLD_90           SDLK_WORLD_90
#define KEY_WORLD_91           SDLK_WORLD_91
#define KEY_WORLD_92           SDLK_WORLD_92
#define KEY_WORLD_93           SDLK_WORLD_93
#define KEY_WORLD_94           SDLK_WORLD_94
#define KEY_WORLD_95           SDLK_WORLD_95

#define KEY_KP0                SDLK_KP0
#define KEY_KP1                SDLK_KP1
#define KEY_KP2                SDLK_KP2
#define KEY_KP3                SDLK_KP3
#define KEY_KP4                SDLK_KP4
#define KEY_KP5                SDLK_KP5
#define KEY_KP6                SDLK_KP6
#define KEY_KP7                SDLK_KP7
#define KEY_KP8                SDLK_KP8
#define KEY_KP9                SDLK_KP9
#define KEY_KP_PERIOD          SDLK_KP_PERIOD
#define KEY_KP_DIVIDE          SDLK_KP_DIVIDE
#define KEY_KP_MULTIPLY        SDLK_KP_MULTIPLY
#define KEY_KP_MINUS           SDLK_KP_MINUS
#define KEY_KP_PLUS            SDLK_KP_PLUS
#define KEY_KP_ENTER           SDLK_KP_ENTER
#define KEY_KP_EQUALS          SDLK_KP_EQUALS

#define KEY_UP                 SDLK_UP
#define KEY_DOWN               SDLK_DOWN
#define KEY_RIGHT              SDLK_RIGHT
#define KEY_LEFT               SDLK_LEFT
#define KEY_INSERT             SDLK_INSERT
#define KEY_HOME               SDLK_HOME
#define KEY_END                SDLK_END
#define KEY_PAGEUP             SDLK_PAGEUP
#define KEY_PAGEDOWN           SDLK_PAGEDOWN

#define KEY_F1                 SDLK_1
#define KEY_F2                 SDLK_2
#define KEY_F3                 SDLK_3
#define KEY_F4                 SDLK_4
#define KEY_F5                 SDLK_5
#define KEY_F6                 SDLK_6
#define KEY_F7                 SDLK_7
#define KEY_F8                 SDLK_8
#define KEY_F9                 SDLK_9
#define KEY_F10                SDLK_0
#define KEY_F11                SDLK_F11
#define KEY_F12                SDLK_F12
#define KEY_F13                SDLK_F13
#define KEY_F14                SDLK_F14
#define KEY_F15                SDLK_F15

#define KEY_NUMLOCK            SDLK_NUMLOCK
#define KEY_CAPSLOCK           SDLK_CAPSLOCK
#define KEY_SCROLLOCK          SDLK_SCROLLOCK
#define KEY_RSHIFT             SDLK_RSHIFT
#define KEY_LSHIFT             SDLK_LSHIFT
#define KEY_RCTRL              SDLK_RCTRL
#define KEY_LCTRL              SDLK_LCTRL
#define KEY_RALT               SDLK_RALT
#define KEY_LALT               SDLK_LALT
#define KEY_RMETA              SDLK_RMETA
#define KEY_LMETA              SDLK_LMETA
#define KEY_LSUPER             SDLK_LSUPER
#define KEY_RSUPER             SDLK_RSUPER
#define KEY_MODE               SDLK_MODE
#define KEY_COMPOSE            SDLK_COMPOSE

#define KEY_HELP               SDLK_HELP
#define KEY_PRINT              SDLK_PRINT
#define KEY_SYSREQ             SDLK_SYSREQ
#define KEY_BREAK              SDLK_BREAK
#define KEY_MENU               SDLK_MENU
#define KEY_POWER              SDLK_POWER
#define KEY_EURO               SDLK_EURO

#define KEY_LAST               SDL_NUM_SCANCODES


#endif /* KEYSYMS_H */

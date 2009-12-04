#ifndef KEYCODE_HPP
#define KEYCODE_HPP

namespace org_pqrs_KeyRemap4MacBook {
  namespace KeyEvent {
    enum KeyEvent {
      DOWN = 10,
      UP = 11,
      MODIFY = 12,
    };
  }

  namespace KeyboardType {
    enum KeyboardType {
      MACBOOK = 37,
      MACBOOK_COREDUO = 38,
      POWERBOOK_G4_TI = 201,
      POWERBOOK_G4 = 202,
      POWERBOOK = 207,

      Logitech_DI_NOVO_KEYBOARD = 41,
      REALFORCE91UBK = 42,

      JIS_MACBOOK = 43,
      JIS_MACBOOK_2008 = 45,
      JIS_APPLE_USB_KEYBOARD = 36,
      JIS_APPLE_USB_KEYBOARD_ALUMINUM = 48,
      JIS_PC_USB_KEYBOARD = 42,
      JIS_HAPPY_HACKING_KEYBOARD = 40,
    };
  }

  namespace ModifierFlag {
    enum ModifierFlag {
      CAPSLOCK =    0x10000,

      SHIFT_L =     0x20002,
      SHIFT_R =     0x20004,

      CONTROL_L =   0x40001,
      CONTROL_R =   0x42000,

      OPTION_L =    0x80020,
      OPTION_R =    0x80040,

      COMMAND_L =  0x100008,
      COMMAND_R =  0x100010,

      CURSOR =     0x200000,
      KEYPAD =     0x200000,
      FN =         0x800000,

      NONE =      0x1000000,
    };

    const ModifierFlag::ModifierFlag list[] = {
      ModifierFlag::CAPSLOCK,
      ModifierFlag::SHIFT_L,
      ModifierFlag::SHIFT_R,
      ModifierFlag::CONTROL_L,
      ModifierFlag::CONTROL_R,
      ModifierFlag::OPTION_L,
      ModifierFlag::OPTION_R,
      ModifierFlag::COMMAND_L,
      ModifierFlag::COMMAND_R,
      ModifierFlag::FN,
    };
    const int listsize = sizeof(list) / sizeof(list[0]);

    // ----------------------------------------------------------------------
    inline unsigned int stripFN(unsigned int flags) {
      return (flags & ~ModifierFlag::FN);
    }
    inline unsigned int stripCURSOR(unsigned int flags) {
      return (flags & ~ModifierFlag::CURSOR);
    }
    inline unsigned int stripKEYPAD(unsigned int flags) {
      return (flags & ~ModifierFlag::KEYPAD);
    }
    inline unsigned int stripNONE(unsigned int flags) {
      return (flags & ~ModifierFlag::NONE);
    }

    inline bool isOn(unsigned int flags, ModifierFlag::ModifierFlag f) {
      return ((flags & f) == static_cast<unsigned int>(f));
    }
  }

  namespace KeyCode {
    enum KeyCode {
      RETURN = 36,
      BACKSLASH = 42,
      TAB = 48,
      SPACE = 49,
      BACKQUOTE = 50,
      DELETE = 51,
      ENTER_POWERBOOK = 52,
      ESCAPE = 53,
      COMMAND_R = 54,
      COMMAND_L = 55,
      SHIFT_L = 56,
      CAPSLOCK = 57,
      OPTION_L = 58,
      CONTROL_L = 59,
      SHIFT_R = 60,
      OPTION_R = 61,
      CONTROL_R = 62,
      FN = 63,
      ENTER = 76,

      KEYPAD_DOT = 65,
      KEYPAD_MULTIPLY = 67,
      KEYPAD_PLUS = 69,
      KEYPAD_CLEAR = 71,
      KEYPAD_SLASH = 75,
      KEYPAD_MINUS = 78,
      KEYPAD_EQUAL = 81,
      KEYPAD_COMMA = 95,
      KEYPAD_0 = 82,
      KEYPAD_1 = 83,
      KEYPAD_2 = 84,
      KEYPAD_3 = 85,
      KEYPAD_4 = 86,
      KEYPAD_5 = 87,
      KEYPAD_6 = 88,
      KEYPAD_7 = 89,
      KEYPAD_8 = 91,
      KEYPAD_9 = 92,

      A = 0,
      S = 1,
      D = 2,
      F = 3,
      H = 4,
      G = 5,
      Z = 6,
      X = 7,
      C = 8,
      V = 9,
      B = 11,
      Q = 12,
      W = 13,
      E = 14,
      R = 15,
      Y = 16,
      T = 17,
      KEY_1 = 18,
      KEY_2 = 19,
      KEY_3 = 20,
      KEY_4 = 21,
      KEY_6 = 22,
      KEY_5 = 23,
      EQUAL = 24,
      KEY_9 = 25,
      KEY_7 = 26,
      MINUS = 27,
      KEY_8 = 28,
      KEY_0 = 29,
      O = 31,
      U = 32,
      I = 34,
      P = 35,
      L = 37,
      J = 38,
      K = 40,
      SLASH = 44,
      N = 45,
      M = 46,
      DOT = 47,

      SEMICOLON = 41,
      COMMA = 43,
      BRACKET_LEFT = 33,
      BRACKET_RIGHT = 30,
      QUOTE = 39,

      F1 = 122,
      F2 = 120,
      F3 = 99,
      F4 = 118,
      F5 = 96,
      F6 = 97,
      F7 = 98,
      F8 = 100,
      F9 = 101,
      F10 = 109,
      F11 = 103,
      F12 = 111,
      F13 = 105,
      F14 = 107,
      F15 = 113,
      F16 = 106,

      PC_KEYPAD_NUMLOCK = 71,
      PC_APPLICATION = 110,
      PC_PRINTSCREEN = 105,
      PC_SCROLLLOCK = 107,
      PC_PAUSE = 113,
      PC_INSERT = 114,
      HELP = 114,

      FORWARD_DELETE = 117,

      CURSOR_LEFT = 123,
      CURSOR_RIGHT = 124,
      CURSOR_DOWN = 125,
      CURSOR_UP = 126,

      PAGEUP = 116,
      PAGEDOWN = 121,
      END = 119,
      HOME = 115,

      BRIGHTNESS_UP = 144, // Apple USB Keyboard Aluminum
      BRIGHTNESS_DOWN = 145, // Apple USB Keyboard Aluminum

      EXPOSE_ALL = 160,
      DASHBOARD = 130,

      JIS_YEN = 93,
      JIS_UNDERSCORE = 94,
      JIS_EISUU = 102,
      JIS_KANA = 104,
      JIS_BRACKET_LEFT = 30,

      RUSSIAN_PARAGRAPH = 10,
      UK_SECTION = 10,
      GERMAN_QUOTE = 24,
      FRENCH_MINUS = 24,
      FRENCH_RIGHT_PAREN = 27,
      FRENCH_EQUAL = 44,

      // Virtual KeyCode
      VK__BEGIN__ = 1024,
      VK_NONE,
      VK_JIS_TOGGLE_EISUU_KANA,
      VK_JIS_EISUU_x2,
      VK_JIS_KANA_x2,
      VK__END__,
    };

    void normalizeKey(unsigned int& key, unsigned int& flags, unsigned int keyboardType);
    void reverseNormalizeKey(unsigned int& key, unsigned int& flags, unsigned int keyboardType);
  }

  namespace ModifierFlag {
    KeyCode::KeyCode getKeyCode(unsigned int flag);
  }
  namespace KeyCode {
    ModifierFlag::ModifierFlag getModifierFlag(unsigned int key);
  }

  namespace ConsumerKeyCode {
    enum ConsumerKeyCode {
      VOLUME_UP = 0,
      VOLUME_DOWN = 1,
      POWER = 6,
      VOLUME_MUTE = 7,
      BRIGHTNESS_UP = 2,
      BRIGHTNESS_DOWN = 3,
      NUMLOCK = 10,
      EJECT = 14,

      VIDEO_MIRROR = 15, // FN+F7

      KEYBOARDLIGHT_OFF = 23,
      KEYBOARDLIGHT_LOW = 22,
      KEYBOARDLIGHT_HIGH = 21,

      MUSIC_PREV = 20,
      MUSIC_PLAY = 16,
      MUSIC_NEXT = 19,

      // Virtual KeyCode
      VK__BEGIN__ = 1024,
      VK_NONE,
      VK__END__,
    };
  }

  namespace PointingButton {
    enum PointingButton {
      NONE = 0,
      LEFT = 4,
      RIGHT = 1,
      MIDDLE = 2,
      BUTTON4 = 8,
    };
  }
}

#endif

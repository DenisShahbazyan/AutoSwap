#include "SecondaryFunctions.h"


std::string IntToHex(int value, int len) {
    std::stringstream ss_hex;
    ss_hex << std::hex << value;

    std::string hex = ss_hex.str();

    if (hex.size() < len) {
        for (int i = hex.size(); i < len; i++) {
            hex = "0" + hex;
        }
    }

    return hex;
}

std::string ConvertByte(const std::string& z) {
    std::string s;

    for (int j = z.length() - 1; j >= 0; --j) {
        s += z[j];
    }

    for (int i = 0; i < s.length(); i += 2) {
        char c = s[i];
        s[i] = s[i + 1];
        s[i + 1] = c;
    }

    return s;
}

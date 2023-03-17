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
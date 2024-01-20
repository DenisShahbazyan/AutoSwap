#include "Assist.h"


void Assist() {
    std::string startPacket = "3200";

    std::string lastPacket = ConvertByte(IntToHex(1, 8));

    Packet(G_PID, startPacket + lastPacket);
}
#include "PacketInjection.h"


void PacketCall(PParams aPParams)
{
    DWORD _baseAddress = aPParams->baseAddress;
    DWORD _packCall = aPParams->packCall;
    DWORD _lenPacket = aPParams->lenPacket;
    LPVOID _bytePacket = &aPParams->bytePacket;

    __asm
    {
        pushad
        mov ecx, _baseAddress
        mov ecx, dword ptr[ecx]
        mov ecx, dword ptr[ecx + 0x20]
        push _lenPacket
        push _bytePacket
        call _packCall
        popad
    }
}

void StrToByte(std::string strPacket, TParams& aParams)
{
    aParams.lenPacket = strPacket.length() / 2;

    int iter = 0;
    for (int i = 0; i < strPacket.length(); i += 2) {
        char char1 = char(strPacket[i]);
        char char2 = char(strPacket[i + 1]);

        std::string str = std::string(1, char1) + std::string(1, char2);
        int hex = std::stoi(str, nullptr, 16);

        aParams.bytePacket[iter++] = hex;
    }
}

void Packet(std::string strPacket, DWORD ProcessID)
{
    TParams aParams = { 0 };
    aParams.baseAddress = of.BaseAddress;
    aParams.packCall = of.PackCall;

    StrToByte(strPacket, aParams);
    InjectFunc(ProcessID, (LPVOID)&PacketCall, &aParams, sizeof(aParams));
}

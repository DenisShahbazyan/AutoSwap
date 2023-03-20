#pragma once
#include <windows.h>
#include <string>
#include "Injector.h"
#include "Offsets.h"
#include "GlobalVariables.h"


#pragma pack(push, 1)
struct TParams {
    BYTE bytePacket[100];
    DWORD lenPacket;
    DWORD baseAddress;
    DWORD packCall;
};
#pragma pack(pop)

typedef TParams* PParams;

/**
 * Внутриигровая функция, которую будем внедрять в процесс игры.
 */
void PacketCall(PParams aPParams);

/**
 * Формирует пакет из строки в массив байтов по 2 символа.
 */
void StrToByte(std::string strPacket, TParams& aParams);

/**
 * Функция для отправки пакета в игру.
 */
void Packet(DWORD ProcessID, std::string strPacket);
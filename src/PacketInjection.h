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
 * ������������� �������, ������� ����� �������� � ������� ����.
 */
void PacketCall(PParams aPParams);

/**
 * ��������� ����� �� ������ � ������ ������ �� 2 �������.
 */
void StrToByte(std::string strPacket, TParams& aParams);

/**
 * ������� ��� �������� ������ � ����.
 */
void Packet(DWORD ProcessID, std::string strPacket);
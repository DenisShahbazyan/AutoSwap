#pragma once
#include <windows.h>
#include <string>
#include "Injector.h"
#include "GlobalVariables.h"
#include "Offsets.h"


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
void Packet(std::string strPacket, DWORD ProcessID);
#pragma once
#ifndef GLOBAL_STRUCT_H
#define GLOBAL_STRUCT_H
#include <Windows.h>


struct Offset
{
	static const DWORD BaseAddress = 0x00DA433C;
	static const DWORD GameAddress = 0x00DA4AE4;
	static const DWORD PackCall = 0x007B8970;

	static const DWORD GameStructure = 0x1C;
	static const DWORD PlayerStructure = 0x28;

	static const DWORD PlayerHP = 0x4CC;
	static const DWORD PlayerTarget = 0x5A4;
	static const DWORD ClanID = 0x694;
	static const DWORD PlayerName = 0x6F4;

	static const DWORD GroupLeaderWID = 0xC;
	static const DWORD GroupPristWID = 0xC;
};

extern Offset of;

#endif // GLOBAL_STRUCT_H
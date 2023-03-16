#pragma once
#ifndef GLOBAL_STRUCT_H
#define GLOBAL_STRUCT_H
#include <Windows.h>


struct Offset
{
	static const DWORD BaseAddress = 0x00E444A4;
	static const DWORD GameAddress = 0x00E44C4C;
	static const DWORD PackCall = 0x00819A40;

	static const DWORD GameStructure = 0x1C;
	static const DWORD PlayerStructure = 0x34;

	static const DWORD PlayerHP = 0x4CC;
	static const DWORD PlayerTarget = 0x5A4;
	static const DWORD ClanID = 0x694;
	static const DWORD PlayerName = 0x6FC;

	static const DWORD GroupLeaderWID = 0xC;
	static const DWORD GroupPristWID = 0xC;
};

extern Offset of;

#endif // GLOBAL_STRUCT_H
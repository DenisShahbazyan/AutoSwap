#pragma once
#include <Windows.h>
#include <map>
#include <string>

extern std::map<std::wstring, DWORD> map_charName_processId;
extern DWORD g_PID;
extern int keyCodeSwap;
extern bool isThreadRunning;
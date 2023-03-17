#pragma once
#include <Windows.h>
#include <map>
#include <string>
#include <vector>


extern std::map<std::wstring, DWORD> map_charName_processId;
extern DWORD g_PID;
extern int keyCodeSwap;
extern bool isThreadRunning;

extern std::vector<bool> checkBoxEquips;
extern std::vector<int> equipCells;
extern std::vector<std::wstring> equipDolls;
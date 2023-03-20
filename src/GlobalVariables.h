#pragma once
#include <Windows.h>
#include <map>
#include <string>
#include <vector>
#include <atomic>
#include <thread>


extern std::map<std::wstring, DWORD> map_charName_processId;

extern DWORD G_PID;
extern int G_KEY_CODE_SWAP;
extern bool G_IS_THREAD_RUNNING;

extern std::vector<bool> G_checkBoxEquips;
extern std::vector<int> G_equipCells;
extern std::vector<std::wstring> G_equipDolls;

extern DWORD G_THREAD_ID;
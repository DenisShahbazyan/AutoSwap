#pragma once
#include <Windows.h>
#include <map>
#include <string>
#include <vector>
#include <atomic>
#include <thread>


extern std::map<std::wstring, DWORD> G_map_charName_processId;

extern DWORD G_PID;

extern int G_KEY_CODE_SWAP;
extern int G_KEY_CODE_ASSIST;

extern DWORD G_THREAD_SWAP_ID;
extern bool G_IS_THREAD_SWAP_RUNNING;
extern DWORD G_THREAD_ASSIST_ID;
extern bool G_IS_THREAD_ASSIST_RUNNING;

extern std::vector<bool> G_checkBoxEquips;
extern std::vector<int> G_equipCells;
extern std::vector<std::wstring> G_equipDolls;

#pragma once
#include <Windows.h>
#include <map>
#include <string>
#include <vector>
#include <atomic>
#include <thread>


extern std::map<std::wstring, DWORD> map_charName_processId;

extern std::atomic<DWORD> g_PID;
extern std::atomic<int> keyCodeSwap;
extern std::atomic<bool> isThreadRunning;

extern std::vector<bool> checkBoxEquips;
extern std::vector<int> equipCells;
extern std::vector<std::wstring> equipDolls;

extern DWORD thread_id;
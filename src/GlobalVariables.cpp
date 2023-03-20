#include "GlobalVariables.h"

std::map<std::wstring, DWORD> map_charName_processId;

std::atomic<DWORD> g_PID;
std::atomic<int> keyCodeSwap;
std::atomic<bool> isThreadRunning = false;

std::vector<bool> checkBoxEquips;
std::vector<int> equipCells;
std::vector<std::wstring> equipDolls;
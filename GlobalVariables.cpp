#include "GlobalVariables.h"

std::map<std::wstring, DWORD> map_charName_processId;
DWORD g_PID;
int keyCodeSwap;
bool isThreadRunning = false;

std::vector<bool> checkBoxEquips;
std::vector<int> equipCells;
std::vector<std::wstring> equipDolls;
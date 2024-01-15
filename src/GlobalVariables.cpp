#include "GlobalVariables.h"

std::map<std::wstring, DWORD> G_map_charName_processId;

DWORD G_PID;
int G_KEY_CODE_SWAP;
bool G_IS_THREAD_RUNNING = false;

std::vector<bool> G_checkBoxEquips;
std::vector<int> G_equipCells;
std::vector<std::wstring> G_equipDolls;

DWORD G_THREAD_ID = 0;
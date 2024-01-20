#include "GlobalVariables.h"

std::map<std::wstring, DWORD> G_map_charName_processId;

DWORD G_PID;

int G_KEY_CODE_SWAP;
int G_KEY_CODE_ASSIST;

DWORD G_THREAD_SWAP_ID = 0;
bool G_IS_THREAD_SWAP_RUNNING = false;
DWORD G_THREAD_ASSIST_ID = 0;
bool G_IS_THREAD_ASSIST_RUNNING = false;

std::vector<bool> G_checkBoxEquips;
std::vector<int> G_equipCells;
std::vector<std::wstring> G_equipDolls;

#include "GlobalVariables.h"

std::map<std::wstring, DWORD> map_charName_processId;
DWORD g_PID;
int keyCodeSwap;
bool isThreadRunning = false;
const std::map<std::wstring, DWORD> equipment = {
    {L"����", 1},
    {L"�����", 4},
    {L"������", 6},
    {L"�������", 7},
    {L"������", 8},
    {L"�������", 3},
    {L"�������", 18},
    {L"����", 0},
    {L"������� ����", 2},
    {L"������ ����", 5},
    {L"������ 1", 9},
    {L"������ 2", 10},
    {L"��������", 22},
    {L"����", 38},
    {L"������", 11}
};
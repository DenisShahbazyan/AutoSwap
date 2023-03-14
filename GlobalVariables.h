#pragma once
#include <Windows.h>
#include <map>


static std::map<std::wstring, DWORD> map_charName_processId;
static DWORD g_PID;
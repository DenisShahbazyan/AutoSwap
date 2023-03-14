#pragma once
#include <Windows.h>
#include <map>


static DWORD PW_BASE_ADDRESS = 0x00E444A4;
static DWORD PACKCALL = 0x00819A40;
static std::map<std::wstring, DWORD> map_charName_processId;
static DWORD g_PID;
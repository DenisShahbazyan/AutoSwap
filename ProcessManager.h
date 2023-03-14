#pragma once
#pragma comment(lib, "User32.lib")
#include <Windows.h>
#include <TlHelp32.h>
#include <vector>
#include <string>
#include <map>
#include "GlobalVariables.h"
#include "Offsets.h"

/**
 * ���������� ������ PID'��. ��������� ��� ��������.
 */
std::vector<DWORD> GetProcessIdsByProcessName(const std::wstring& processName);

/**
 * ���������� ������ PID'��. ��������� ��� ������ ����.
 */
std::vector<DWORD> GetProcessIdsByWindowClassName(const std::wstring& windowClassName);

/**
 * ���������� ������ PID'��. ��������� ��� ����.
 */
std::vector<DWORD> GetProcessIdsByWindowName(const std::wstring& windowName);

/**
 * ���������� map<��� ���������, PID>. ��������� ������ PID'��.
 */
std::map<std::wstring, DWORD> FindClients(const std::vector<DWORD>& PIDs);
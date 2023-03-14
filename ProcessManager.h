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
 * Возвращает вектор PID'ов. Принимает имя процесса.
 */
std::vector<DWORD> GetProcessIdsByProcessName(const std::wstring& processName);

/**
 * Возвращает вектор PID'ов. Принимает имя класса окна.
 */
std::vector<DWORD> GetProcessIdsByWindowClassName(const std::wstring& windowClassName);

/**
 * Возвращает вектор PID'ов. Принимает имя окна.
 */
std::vector<DWORD> GetProcessIdsByWindowName(const std::wstring& windowName);

/**
 * Возвращает map<Имя персонажа, PID>. Принимает вектор PID'ов.
 */
std::map<std::wstring, DWORD> FindClients(const std::vector<DWORD>& PIDs);
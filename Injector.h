#pragma once
#include <windows.h>

/**
 * ������� ������� � ������ ����. �������� ������� ������ � ���������.
 */
void InjectFunc(DWORD ProcessID, LPVOID Func, LPVOID aParams, DWORD aParamsSize);
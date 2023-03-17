#pragma once
#include <windows.h>

/**
 * Функция инжекта в память игры. Инжектит Функцию пакета и параметры.
 */
void InjectFunc(DWORD ProcessID, LPVOID Func, LPVOID aParams, DWORD aParamsSize);
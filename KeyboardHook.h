#pragma once
#include <windows.h>
#include <msclr/marshal_cppstd.h> 
#include "GlobalVariables.h"


LRESULT CALLBACK KeyboardProc(int nCode, WPARAM wParam, LPARAM lParam);

void SetHook();

void StartMessageLoop();

void RemoveHook();
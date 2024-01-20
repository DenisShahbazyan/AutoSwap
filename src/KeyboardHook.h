#pragma once
#include <windows.h>
#include <thread>
#include <msclr/marshal_cppstd.h> 
#include "GlobalVariables.h"
#include "Swap.h"
#include "Assist.h"


LRESULT CALLBACK KeyboardProcSwap(int nCode, WPARAM wParam, LPARAM lParam);
LRESULT CALLBACK KeyboardProcAssist(int nCode, WPARAM wParam, LPARAM lParam);

void SetHookSwap();
void SetHookAssist();

void RemoveHookSwap();
void RemoveHookAssist();

void StartMessageLoop();
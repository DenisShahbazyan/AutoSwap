#include "KeyboardHook.h"


HHOOK g_hHook_Swap = NULL;
HHOOK g_hHook_Assist = NULL;

LRESULT CALLBACK KeyboardProcSwap(int nCode, WPARAM wParam, LPARAM lParam) {
	if (nCode == HC_ACTION) {
		KBDLLHOOKSTRUCT* pKeyboardStruct = (KBDLLHOOKSTRUCT*)lParam;
		if (wParam == WM_KEYDOWN || wParam == WM_SYSKEYDOWN) {
			int vkCode = pKeyboardStruct->vkCode;
			if (vkCode == G_KEY_CODE_SWAP) {
				std::thread thread_swap(Swap);
				thread_swap.detach();
			}
		}
	}
	return CallNextHookEx(NULL, nCode, wParam, lParam);
}

LRESULT CALLBACK KeyboardProcAssist(int nCode, WPARAM wParam, LPARAM lParam) {
	if (nCode == HC_ACTION) {
		KBDLLHOOKSTRUCT* pKeyboardStruct = (KBDLLHOOKSTRUCT*)lParam;
		if (wParam == WM_KEYDOWN || wParam == WM_SYSKEYDOWN) {
			int vkCode = pKeyboardStruct->vkCode;
			if (vkCode == G_KEY_CODE_ASSIST) {
				std::thread thread_assist(Assist);
				thread_assist.detach();
			}
		}
	}
	return CallNextHookEx(NULL, nCode, wParam, lParam);
}

void SetHookSwap() { g_hHook_Swap = SetWindowsHookEx(WH_KEYBOARD_LL, KeyboardProcSwap, NULL, 0); }
void SetHookAssist() { g_hHook_Assist = SetWindowsHookEx(WH_KEYBOARD_LL, KeyboardProcAssist, NULL, 0); }

void RemoveHookSwap() { UnhookWindowsHookEx(g_hHook_Swap); }
void RemoveHookAssist() { UnhookWindowsHookEx(g_hHook_Assist); }

void StartMessageLoop() {
	MSG msg;
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
}
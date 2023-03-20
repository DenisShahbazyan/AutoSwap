#include "KeyboardHook.h"


HHOOK g_hHook = NULL;

LRESULT CALLBACK KeyboardProc(int nCode, WPARAM wParam, LPARAM lParam)
{
    if (nCode == HC_ACTION)
    {
        KBDLLHOOKSTRUCT* pKeyboardStruct = (KBDLLHOOKSTRUCT*)lParam;
        if (wParam == WM_KEYDOWN || wParam == WM_SYSKEYDOWN)
        {
            int vkCode = pKeyboardStruct->vkCode;
            if (vkCode == G_KEY_CODE_SWAP)
            {
                std::thread thread_swap(Swap);
                thread_swap.detach();
            }
        }
    }
    return CallNextHookEx(NULL, nCode, wParam, lParam);
}

void SetHook()
{
    g_hHook = SetWindowsHookEx(WH_KEYBOARD_LL, KeyboardProc, NULL, 0);
}

void StartMessageLoop() {
    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
}

void RemoveHook()
{
    UnhookWindowsHookEx(g_hHook);
}
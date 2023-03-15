#include "KeyboardHook.h"


HHOOK g_hHook = NULL;

LRESULT CALLBACK KeyboardProc(int nCode, WPARAM wParam, LPARAM lParam)
{
    if (nCode == HC_ACTION)
    {
        KBDLLHOOKSTRUCT* pKeyboardStruct = (KBDLLHOOKSTRUCT*)lParam;
        if (wParam == WM_KEYDOWN || wParam == WM_SYSKEYDOWN)
        {
            // ��������� ������� �������
            int vkCode = pKeyboardStruct->vkCode;
            if (vkCode == 0x70)  // ������� ���� ���� ������������� ������� �� ����
            {
                // ����� ������ �������
                //MyFunction();
                
                // ���������� ���������� ���� � ���������� � �������� ��� ������ �������� ��������
                int result = MessageBox(nullptr, L"����� ���������", L"��������� ����", MB_YESNO | MB_ICONQUESTION);

                // ������������ ��������� ������� ������
                switch (result)
                {
                case IDYES:
                    // �������� ��� ������� ������ Yes
                    break;
                case IDNO:
                    // �������� ��� ������� ������ No
                    break;
                    // ��������� ������ ���������
                }
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
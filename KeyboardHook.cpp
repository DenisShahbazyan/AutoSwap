#include "KeyboardHook.h"


HHOOK g_hHook = NULL;

LRESULT CALLBACK KeyboardProc(int nCode, WPARAM wParam, LPARAM lParam)
{
    if (nCode == HC_ACTION)
    {
        KBDLLHOOKSTRUCT* pKeyboardStruct = (KBDLLHOOKSTRUCT*)lParam;
        if (wParam == WM_KEYDOWN || wParam == WM_SYSKEYDOWN)
        {
            // Обработка нажатия клавиши
            int vkCode = pKeyboardStruct->vkCode;
            if (vkCode == 0x70)  // Сделать чтоб суда подставлялась клавиша из поля
            {
                // Вызов нужной функции
                //MyFunction();
                
                // Отображаем диалоговое окно с сообщением и кнопками для выбора варианта действия
                int result = MessageBox(nullptr, L"Текст сообщения", L"Заголовок окна", MB_YESNO | MB_ICONQUESTION);

                // Обрабатываем результат нажатия кнопки
                switch (result)
                {
                case IDYES:
                    // Действия при нажатии кнопки Yes
                    break;
                case IDNO:
                    // Действия при нажатии кнопки No
                    break;
                    // Обработка других вариантов
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
#include "ProcessManager.h"


std::vector<DWORD> GetProcessIdsByProcessName(const std::wstring& processName)
{
    std::vector<DWORD> processIds;

    HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (snapshot != INVALID_HANDLE_VALUE)
    {
        PROCESSENTRY32 processEntry = { sizeof(PROCESSENTRY32) };
        if (Process32First(snapshot, &processEntry))
        {
            do
            {
                if (_wcsicmp(processEntry.szExeFile, processName.c_str()) == 0)
                {
                    processIds.push_back(processEntry.th32ProcessID);
                }
            } while (Process32Next(snapshot, &processEntry));
        }
        CloseHandle(snapshot);
    }

    return processIds;
}

std::vector<DWORD> GetProcessIdsByWindowClassName(const std::wstring& windowClassName)
{
    std::vector<DWORD> processIds;

    HWND hwnd = FindWindowW(windowClassName.c_str(), nullptr);
    if (hwnd != nullptr)
    {
        DWORD processId = 0;
        GetWindowThreadProcessId(hwnd, &processId);
        if (processId != 0)
        {
            processIds.push_back(processId);
        }
    }

    return processIds;
}

std::vector<DWORD> GetProcessIdsByWindowName(const std::wstring& windowName)
{
    std::vector<DWORD> processIds;

    HWND hwnd = FindWindowW(nullptr, windowName.c_str());
    if (hwnd != nullptr)
    {
        DWORD processId = 0;
        GetWindowThreadProcessId(hwnd, &processId);
        if (processId != 0)
        {
            processIds.push_back(processId);
        }
    }

    return processIds;
}

std::map<std::wstring, DWORD> FindClients(const std::vector<DWORD>& PIDs)
{ 
    std::map<std::wstring, DWORD> result;
    
    for (DWORD processId : PIDs)
    {
        HANDLE processHandle = OpenProcess(PROCESS_ALL_ACCESS, false, processId);
        DWORD buf = 0;
        wchar_t name[255]{};

        ReadProcessMemory(processHandle, (LPCVOID)(BASE_ADDRESS), &buf, sizeof(buf), NULL);
        ReadProcessMemory(processHandle, (LPVOID)(buf + 0x1C), &buf, sizeof(buf), NULL);
        ReadProcessMemory(processHandle, (LPVOID)(buf + 0x34), &buf, sizeof(buf), NULL);
        ReadProcessMemory(processHandle, (LPVOID)(buf + 0x6FC), &buf, sizeof(buf), NULL);
        ReadProcessMemory(processHandle, (LPVOID)(buf), &name, sizeof(name), 0);

        std::wstring str_name(name);

        result[str_name] = processId;
    }

    return result;
}
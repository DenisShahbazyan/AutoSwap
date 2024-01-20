#include "Injector.h"


void InjectFunc(DWORD ProcessID, LPVOID Func, LPVOID aParams, DWORD aParamsSize) {
	HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, ProcessID);

	if (hProcess != NULL) {
		LPVOID ThreadAddr = VirtualAllocEx(hProcess, NULL, 256, MEM_COMMIT, PAGE_READWRITE);
		LPVOID ParamAddr = VirtualAllocEx(hProcess, NULL, aParamsSize, MEM_COMMIT, PAGE_READWRITE);

		SIZE_T lpNumberOfBytes = 0;
		WriteProcessMemory(hProcess, ThreadAddr, Func, 256, &lpNumberOfBytes);
		WriteProcessMemory(hProcess, ParamAddr, aParams, aParamsSize, &lpNumberOfBytes);

		DWORD lpThreadId = 0;
		HANDLE hThread = CreateRemoteThread(hProcess, NULL, 0, (LPTHREAD_START_ROUTINE)ThreadAddr, ParamAddr, 0, &lpThreadId);

		WaitForSingleObject(hThread, INFINITE);

		CloseHandle(hThread);
		VirtualFreeEx(hProcess, ParamAddr, 0, MEM_RELEASE);
		VirtualFreeEx(hProcess, ThreadAddr, 0, MEM_RELEASE);
		CloseHandle(hProcess);
	}
}
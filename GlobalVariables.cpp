#include "GlobalVariables.h"

std::map<std::wstring, DWORD> map_charName_processId;
DWORD g_PID;
int keyCodeSwap;
bool isThreadRunning = false;
const std::map<std::wstring, DWORD> equipment = {
    {L"Шлем", 1},
    {L"Броня", 4},
    {L"Поножи", 6},
    {L"Ботинки", 7},
    {L"Наручи", 8},
    {L"Накидка", 3},
    {L"Трактат", 18},
    {L"Пуха", 0},
    {L"Верхняя бижа", 2},
    {L"Нижняя бижа", 5},
    {L"Кольцо 1", 9},
    {L"Кольцо 2", 10},
    {L"Цитатник", 22},
    {L"Диск", 38},
    {L"Стрелы", 11}
};
#include "Swap.h"


std::map<std::wstring, DWORD> equipment = {
    {L"", -1},
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

void Swap() {
    std::string startPacket = "1100";

    for (int i = 0; i < checkBoxEquips.size(); i++) {
        if (checkBoxEquips[i]) {
            std::string equipCell = IntToHex(equipCells[i] - 1, 2);
            std::string equipDoll = IntToHex(equipment[equipDolls[i]], 2);
            Packet(startPacket + equipCell + equipDoll);
        }
    }
}
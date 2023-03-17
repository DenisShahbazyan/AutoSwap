#include "Swap.h"


std::map<std::wstring, DWORD> equipment = {
    {L"", -1},
    {L"����", 1},
    {L"�����", 4},
    {L"������", 6},
    {L"�������", 7},
    {L"������", 8},
    {L"�������", 3},
    {L"�������", 18},
    {L"����", 0},
    {L"������� ����", 2},
    {L"������ ����", 5},
    {L"������ 1", 9},
    {L"������ 2", 10},
    {L"��������", 22},
    {L"����", 38},
    {L"������", 11}
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
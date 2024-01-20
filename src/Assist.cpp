#include "Assist.h"

using namespace System;
using namespace System::Windows::Forms;

void SetAssist() {
	MessageBox::Show("Заголовок", "Привет мир!", MessageBoxButtons::OK, MessageBoxIcon::Information);
	//std::string startPacket = "3200";
	//std::string lastPacket = ConvertByte(IntToHex(1, 8));
	//Packet(G_PID, startPacket + lastPacket);

	// TODO: Найти офсет таргета пати лидера.
}

ChronoTimer timerAssist;
std::atomic<bool> ACTIVE_ASSIST(false);

void Assist() {
	ACTIVE_ASSIST = !ACTIVE_ASSIST;
	if (ACTIVE_ASSIST) {
		timerAssist.start(2000, SetAssist);
	}
	else {
		timerAssist.stop();
	}
}
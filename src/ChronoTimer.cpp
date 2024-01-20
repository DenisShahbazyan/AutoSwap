#include "ChronoTimer.h"

ChronoTimer::ChronoTimer() : is_running(false) {}

ChronoTimer::~ChronoTimer() { stop(); }

void ChronoTimer::start(int interval, const std::function<void()>& function) {
	std::lock_guard<std::mutex> lock(timerMutex);
	if (!is_running) {
		is_running = true;
		timer_thread = std::thread(&ChronoTimer::timer_function, this, interval, function);
	}
}

void ChronoTimer::stop() {
	std::lock_guard<std::mutex> lock(timerMutex);
	if (is_running) {
		is_running = false;
		if (timer_thread.joinable()) {
			timer_thread.join();
		}
	}
}

void ChronoTimer::timer_function(int interval, const std::function<void()>& function) {
	while (is_running) {
		function();
		std::this_thread::sleep_for(std::chrono::milliseconds(interval));
	}
}
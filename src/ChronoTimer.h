#pragma once
#include <thread>
#include <functional>
#include <chrono>
#include <mutex>

class ChronoTimer {
public:
	ChronoTimer();
	~ChronoTimer();

	void start(int interval, const std::function<void()>& function);
	void stop();

private:
	bool is_running;
	std::thread timer_thread;
	std::mutex timerMutex;

	void timer_function(int interval, const std::function<void()>& function);
};

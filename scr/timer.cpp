#include<iostream>
#include<thread>
#include<chrono>

class Timer
{
private:
	int delayMS;

public:
	Timer(int delay)
	{
		delayMS = delay;
	}
	
	void wait()
	{
		std::cout <<"Timer started..." << std::endl;
	
		std::this_thread::sleep_for(
			std::chrono::milliseconds(delayMS)
		);

		std::cout <<"Timer expired!" << std::endl;
	}
};

int main()
{
	Timer timer(1000);

	timer.wait();
	
	return 0;

}

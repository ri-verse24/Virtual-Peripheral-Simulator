#include <iostream>
#include <string>

class UART 
{
private:
	bool enabled;


public:
	UART()
	{
		enabled = false;
	}
	
	void init()
	{
		enabled = true;
		std::cout << "UART initialized. " << std::endl;
	}

	void send(std::string data)
	{
		if (enabled)
		{
			std::cout << "UART TX: " << data << std::endl;

		}
		else
		{
			std::cout << "UART is disabled. " << std::endl;
			
		}
	}
};

int main()
{
	UART uart;

	uart.init();
	uart.send("Hello embedded World!");

	return 0;
}




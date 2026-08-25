#include <iostream>

class SPI
{
private:
	bool initialized;

public:
	SPI()
	{
		initialized = false;
	}

	void init()
	{
	
		initialized = true;
		std::cout << "SPI initialized.\n";
	}

	void transfer()
	{
		if (initialized)
			std::cout << "SPI data transferred.\n";
		else
			std::cout << "SPI not initialized.\n";
	}
};

int main()
{
	SPI spi;

	spi.init();
	spi.transfer();
	
	return 0;
}

#include <iostream>

class I2C
{
private:
	bool initialized;

public:
	I2C()
	{
		initialized = false;
	}

	void init()
	{
		initialized = true;
		std::cout << "I2C initialized." << std::endl;
	}
	
	void writeData(int address, int data)
	{
		if(initialized)
		{
			std::cout << "I2C WRITE | Address: "
				<< address
				<< " | Data:"
				<< data << std::endl;
		}
	}

	void readData(int address)
	{
		if(initialized)
		{
			std::cout << "I2C READ | Address: "
				<< address
				<< " | Data: 100" << std::endl;
		}
	}
};

int main()
{
	I2C i2c;
	
	i2c.init();

	i2c.writeData(80,25);
	i2c.readData(80);

	return 0;
}

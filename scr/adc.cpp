#include<iostream>

class ADC 
{
private:
	int value;

public:
	ADC()
	{
		value = 0;
	}
	
	void read()
	{
		value = 512;
		std::cout << "ADC Value: "<< value << std::endl;
	}
};

int main()
{
	ADC adc;

	adc.read();

	return 0;
}

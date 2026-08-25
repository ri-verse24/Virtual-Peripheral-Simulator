#include<iostream>
int main()
{
	std::cout <<"=================================" << std::endl;
	std::cout <<"  Virtual Peripheral Simulator" << std::endl;
	std::cout <<"=================================" << std::endl;

	std::cout <<"System starting..." << std::endl;
	std::cout <<"Virtual CPU initialized." << std::endl;
	std::cout <<"GPIO initialized." << std::endl;
	std::cout <<"Virtual peripherals ready." << std::endl;

	std::cout << "\n--- GPIO ---" << std::endl;
	system("gpio.exe");
	
	std::cout << "\n--- TIMER ---" << std::endl;
	system("timer.exe");

	std::cout << "\n--- UART ---" << std::endl;
	system("uart.exe");

	std::cout <<"\n--- ADC ---" << std::endl;
	system("adc.exe");

	std::cout <<"\n--- SPI ---" << std::endl;
	system("spi.exe");

	std::cout <<"\n--- I2C ---" << std::endl;
	system("i2c.exe");


	return 0;
}

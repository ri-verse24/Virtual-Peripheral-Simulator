#include<iostream>
class GPIO
{
private:
	bool state;


public:
	GIPO()
	{
		state = false;
	}
	
	void set()
	{
		state = true;
	}
	
	void clear()
	{
		state = false;
	}

	void printState()
	{
		if(state)
			std::cout <<"GPIO: HIGH\n";
		else
			std::cout <<"GPIO: LOW\n";
	}
};

int main()
{
	GPIO pin;

	pin.printState();
	
	pin.set();
	pin.printState();

	pin.clear();
	pin.printState();

	return 0;
}

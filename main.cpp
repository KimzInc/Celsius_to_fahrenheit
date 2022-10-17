#include <iostream>
#include<limits>
#include"header.h"

int main()
{
	double celsius= 0.00;
	
	std::cout << "Enter the temperature in celcius(Or a letter to exit to stop): ";
	std::cin >> celsius;

	//check for input 
	while (std::cin)
	{

		double fahrenheit = get_fahrenheit(celsius);

		std::cout << celsius << " " << fahrenheit << std::endl;

		//use if statement to break out of the loop
		if (!std::cin)
		{
			break;
		}
		else
		{
			std::cout << "Enter the temperature in celcius: ";
			std::cin >> celsius;
			
		}
	}
	
	std::cout << std::endl;
}


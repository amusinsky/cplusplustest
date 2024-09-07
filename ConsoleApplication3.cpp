#include <iostream>

int main()
{
	int number1;
	int number2;
	int sub;
	int add;
	std::cout << " Enter number two numbers\n";
	std::cin >> number1;
	std::cin >> number2;
	add = number1 + number2;
	sub = number1 - number2;
	std::cout << number1 << " + " << number2 << " is = " << add;
	std::cout << "\n";
	std::cout << number1 << " - " << number2 << " is = " << sub;


	return 0;

	
}
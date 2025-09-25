#include "math.h"
#include <iostream>

int main()
{
	int a, b;
	std::cout << "First Integer: ";
	std::cin >> a;
	std::cout << "Second integer: ";
	std::cin >> b;

	std::cout << "Sum:" << add(a, b) << std::endl;
	std::cout << "Multiply:" << multiply(a, b) << std::endl;

	return 0;
}
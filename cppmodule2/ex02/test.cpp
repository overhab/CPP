#include <iostream>

int		main()
{
	float a = 2.55f, b = 5;

	a = a / 0.000000005f;

	std::cout << a << std::endl;
	return (0);
}
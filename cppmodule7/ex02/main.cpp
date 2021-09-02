#include "Array.hpp"

int		main( void )
{
	Array<int> poop(3);

	std::cout <<"init index 2: " << poop[2] << std::endl;
	poop[2] = 12;
	std::cout << "assigned index 2: " << poop[2] << std::endl;

	Array<std::string> str(10);

	std::cout <<"["<<  str[2]<< "]" << std::endl;
	str[2] = "Hello";
	std::cout <<"["<<  str[2]<< "]" << std::endl;

	try { 
		str[14] = "oops";
	}
	catch (std::exception & err){
		std::cout << err.what() << std::endl;
		return 0;
	}

	
	std::cout << "fin." << std::endl;

	return (0);
}

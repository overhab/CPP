#include "Span.hpp"

int		main ( void )
{
	std::srand(unsigned(std::time(NULL)));
	std::cout << "------10000--------" << std::endl;

	Span				tmp(10000);

	tmp.fillRandom();

	std::cout << tmp.shortestSpan() << std::endl;
	std::cout << tmp.longestSpan() << std::endl;
	std::cout << "-------5-------" << std::endl;
	Span				array(5);

	try {	
		array.addNumber(5);
		array.addNumber(3);
		array.addNumber(17);
		array.addNumber(9);
		array.addNumber(11);
		//array.addNumber(11); // ERROR

		std::cout << array.shortestSpan() << std::endl;
		std::cout << array.longestSpan() << std::endl;
	}
	catch (std::exception &err) {
		std::cout << err.what() << std::endl;
		return 0;
	}
	std::cout << "-------COPY-------" << std::endl;

	Span				copy(array);


	std::cout << array.shortestSpan() << std::endl;
	std::cout << array.longestSpan() << std::endl;
	std::cout << "-------FAIL-------" << std::endl;

	Span				fail(10);

	try {	
		fail.addNumber(12);
		std::cout << fail.shortestSpan() << std::endl;
		std::cout << fail.longestSpan() << std::endl;
		std::cout << "--------------" << std::endl;
	}
	catch (std::exception &err) {
		std::cout << err.what() << std::endl;
		return 0;
	}

	return 0;
}

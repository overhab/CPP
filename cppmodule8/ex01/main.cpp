#include "Span.hpp"

int		main ( void )
{
	std::srand(unsigned(std::time(NULL)));
	std::cout << "--------------" << std::endl;

	Span				tmp(10000);

	tmp.fillRandom();

	std::cout << tmp.shortestSpan() << std::endl;
	std::cout << tmp.longestSpan() << std::endl;
	std::cout << "--------------" << std::endl;
	Span				array(5);

	array.addNumber(5);
	array.addNumber(3);
	array.addNumber(17);
	array.addNumber(9);
	array.addNumber(11);

	std::cout << array.shortestSpan() << std::endl;
	std::cout << array.longestSpan() << std::endl;
	std::cout << "--------------" << std::endl;

	Span				fail(10);

	fail.addNumber(12);

	std::cout << fail.shortestSpan() << std::endl;
	std::cout << fail.longestSpan() << std::endl;
	std::cout << "--------------" << std::endl;

	return 0;
}
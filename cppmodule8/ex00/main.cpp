#include "easyfind.hpp"

int		main( void )
{
	std::vector<int> vec;

	int		add = 0;

	for (int i = 0; i < 10; i++)
		vec.push_back(add++);

	std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout));

	std::cout << "\n--------------------" << std::endl;

	std::vector<int>::iterator	it = easyfind(vec, 0);

	(it == vec.end()) && (std::cout << "Can't find..." << std::endl);
	(it != vec.end()) && (std::cout << *it << std::endl);

	std::cout << "--------------------" << std::endl;

	return (0);
}

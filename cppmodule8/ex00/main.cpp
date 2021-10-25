#include "easyfind.hpp"

int		main( void )
{
	std::cout << "---------VECTOR---------" << std::endl;
	std::vector<int> vec;

	int		add = 0;

	for (int i = 0; i < 10; i++)
		vec.push_back(add++);
	
	for (std::vector<int>::iterator it2 = vec.begin(); it2 != vec.end(); ++it2)
		std::cout << *it2 << " ";

	std::cout << "\n--------------------" << std::endl;

	std::vector<int>::iterator	it = easyfind(vec, 1);

	(it == vec.end()) && (std::cout << "Can't find..." << std::endl);
	(it != vec.end()) && (std::cout << *it << std::endl);

	std::cout << "---------LIST---------" << std::endl;

	std::list<int> list;

	int		add2 = 10;

	for (int i = 0; i < 10; i++)
		list.push_back(add2++);
	
	for (std::list<int>::iterator it2 = list.begin(); it2 != list.end(); ++it2)
		std::cout << *it2 << " ";

	std::cout << "\n--------------------" << std::endl;

	std::list<int>::iterator	it3 = easyfind(list, 15);

	(it3 == list.end()) && (std::cout << "Can't find..." << std::endl);
	(it3 != list.end()) && (std::cout << *it3 << std::endl);

	std::cout << "--------------------" << std::endl;

	return (0);
}

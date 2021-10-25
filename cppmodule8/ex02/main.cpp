#include "MutantStack.hpp"

int		main ( void )
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << " - top()" << std::endl;

	mstack.pop();

	std::cout << mstack.size() << " - size() " << std::endl;
	std::cout << "--------Mutant Stack--------" << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	for (; it != ite; ++it)
		std::cout << *it << std::endl;

	std::cout << "--------Mutant Stack Reverse--------" << std::endl;

	for (MutantStack<int>::const_reverse_iterator rit = mstack.rbegin(); rit != mstack.rend(); ++rit)
	{
		std::cout << *rit << std::endl;
		//*rit = -42;
	}

	std::cout << "--------Mutant Stack Copy--------" << std::endl;	

	MutantStack<int> s(mstack);

	MutantStack<int>::iterator it2 = s.begin();
	MutantStack<int>::iterator ite2 = s.end();

	for (; it2 != ite2; ++it2)
		std::cout << *it2 << std::endl;

	std::cout << "--------List--------" << std::endl;
	std::list<int> list;

	list.push_back(5);

	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);

	std::list<int>::iterator iter = list.begin();
	std::list<int>::iterator itera = list.end();

	for (; iter != itera; ++iter)
		std::cout << *iter << std::endl;

	std::list<int> li(list);

	return 0;

}

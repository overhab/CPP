#include "MutantStack.hpp"

int		main ( void )
{
	MutantStack<int>		mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	//MutantStack<int>::iterator		it = mstack.begin();

	return 0;
}

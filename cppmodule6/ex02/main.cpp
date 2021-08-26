#include "Base.hpp"

Base	*generate(void)
{
	Base *ptr = NULL;
	int rnd = std::rand() % 3;
	(rnd == 0) && (ptr = new A);
	(rnd == 1) && (ptr = new B);
	(rnd == 2) && (ptr = new C);

	return (ptr);

}

void	identify(Base* p)
{
	A *a = dynamic_cast<A*>(p);
	B *b = dynamic_cast<B*>(p);
	C *c = dynamic_cast<C*>(p);
	if (a)
		std::cout << "Class A" << std::endl;
	else if (b)
		std::cout << "Class B" << std::endl;
	else if (c)
		std::cout << "Class C" << std::endl;
}

void	identify(Base &p)
{
	try {
		A a = dynamic_cast<A&>(p);;
		std::cout << "Class A" << std::endl;
		return ;
	}
	catch(std::exception &err)
	{
	}
	try {
		B b = dynamic_cast<B&>(p);;
		std::cout << "Class B" << std::endl;
		return ;
	}
	catch(std::exception &err)
	{
	}
	try {
		C c = dynamic_cast<C&>(p);;
		std::cout << "Class C" << std::endl;
		return ;
	}
	catch(std::exception &err)
	{
	}
}

int		main( void )
{
	std::srand(std::time(NULL));
	for (size_t i = 0; i < 10; i++)
	{
		Base *base = generate();
		std::cout << "-----------" << std::endl;
		identify(base);
		identify(*base);
		delete base;
	}
	return (0);
}

#include "main.hpp"

#define SIZE 2	

int		main ( void )
{

/* 	const AAnimal	*test = new AAnimal();

	std::cout << test->getType() << std::endl;
	test->makeSound();

	delete test; */

	const AAnimal	*dog = new Dog();

	std::cout << dog->getType() << std::endl;
	dog->makeSound();

	delete dog;

	return (0);
}

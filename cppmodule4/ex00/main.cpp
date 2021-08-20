#include "main.hpp"

int		main ( void )
{
	const Animal	*first = new Animal();
	const Animal	*second = new Dog();
	const Animal	*third = new Cat();
	std::cout << first->getType() << std::endl;
	std::cout << second->getType() << std::endl;
	std::cout << third->getType() << std::endl;

	first->makeSound();
	second->makeSound();
	third->makeSound();

	delete third;
	delete second;
	delete first;

	std::cout << "---------------------------" << std::endl;
	const WrongAnimal	*wrong = new WrongCat();

	std::cout << wrong->getType() << std::endl;
	wrong->makeSound();

	delete wrong;
	
	return (0);
}

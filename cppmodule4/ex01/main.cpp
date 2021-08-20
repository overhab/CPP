#include "main.hpp"

#define SIZE 2	

int		main ( void )
{
	std::cout << "---------------------------" << std::endl;
	std::cout << "     Array of aminals" << std::endl;
	std::cout << "---------------------------" << std::endl;

	Animal			*animal[SIZE];
	int				i = 0;

	while (i < (SIZE / 2))
		animal[i++] = new Cat();
	while (i < SIZE)
		animal[i++] = new Dog();
	i = 0;
	while (i < SIZE)
		delete animal[i++];

	std::cout << "---------------------------" << std::endl;
	std::cout << "\tDeep test" << std::endl;
	std::cout << "---------------------------" << std::endl;

	const Animal *dog = new Dog();

	std::cout << dog->getType() << std::endl;
	dog->makeSound();
	((Dog *)dog)->myBrain()->setIdea("What is life???");
	std::cout << ((Dog *)dog)->myBrain()->getIdea(0) << std::endl;
	std::cout << "---------------------------" << std::endl;
	const Animal *copy = new Dog(*((Dog *)dog));
	std::cout << "COPY:\t" << copy->getType() << std::endl;
	copy->makeSound();
	std::cout << "copy 1:\t\t" << ((Dog *)copy)->myBrain()->getIdea(0) << std::endl;
	((Dog *)copy)->myBrain()->setIdea("To bark or not to bark?");
	std::cout << "copy 2:\t\t" << ((Dog *)copy)->myBrain()->getIdea(0) << std::endl;
	std::cout << "original:\t" << ((Dog *)dog)->myBrain()->getIdea(0) << std::endl;

	delete dog;
	delete copy;

	std::cout << "---------------------------" << std::endl;
	return (0);
}
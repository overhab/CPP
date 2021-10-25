#include "main.hpp"

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
	(dynamic_cast<const Dog*>(dog))->myBrain()->setIdea("What is life???");
	std::cout << (dynamic_cast<const Dog*>(dog))->myBrain()->getIdea(0) << std::endl;
	std::cout << "---------------------------" << std::endl;
	const Animal *copy = new Dog(*(dynamic_cast<const Dog*>(dog)));
	std::cout << "COPY:\t" << copy->getType() << std::endl;
	copy->makeSound();
	std::cout << "copy 1:\t\t" << (dynamic_cast<const Dog*>(copy))->myBrain()->getIdea(0) << std::endl;
	(dynamic_cast<const Dog*>(copy))->myBrain()->setIdea("To bark or not to bark?");
	std::cout << "copy 2:\t\t" << (dynamic_cast<const Dog*>(copy))->myBrain()->getIdea(1) << std::endl;
	std::cout << "original:\t" << (dynamic_cast<const Dog*>(dog))->myBrain()->getIdea(1) << std::endl;

	std::cout << "---------------------------" << std::endl;
	std::cout << "     Assignment Test" << std::endl;
	std::cout << "---------------------------" << std::endl;
	Animal *cat = new Cat();
	std::cout << cat->getType() << std::endl;
	cat->makeSound();
	(dynamic_cast<const Cat*>(cat))->myBrain()->setIdea("KEKW");
	std::cout << "idea 1: " << (dynamic_cast<const Cat*>(cat))->myBrain()->getIdea(0) << std::endl;
	std::cout << "idea 2: " << (dynamic_cast<const Cat*>(cat))->myBrain()->getIdea(1) << std::endl;

	std::cout << "---------------------------" << std::endl;
	Animal *tac = new Cat();
	std::cout << tac->getType() << std::endl;
	tac->makeSound();
	(dynamic_cast<const Cat*>(tac))->myBrain()->setIdea("PogChamp");
	std::cout << "tac 1: " << (dynamic_cast<const Cat*>(tac))->myBrain()->getIdea(0) << std::endl;
	dynamic_cast<Cat&>(*cat) = dynamic_cast<Cat&>(*tac);
	std::cout << "cat 1: " << (dynamic_cast<const Cat*>(cat))->myBrain()->getIdea(0) << std::endl;
	(dynamic_cast<const Cat*>(tac))->myBrain()->setIdea("Kappa");
	std::cout << "cat 2: " << (dynamic_cast<const Cat*>(cat))->myBrain()->getIdea(1) << std::endl;
	std::cout << "tac 2: "<< (dynamic_cast<const Cat*>(tac))->myBrain()->getIdea(1) << std::endl;

	delete cat;
	delete tac;

	std::cout << "---------------------------" << std::endl;

	delete dog;
	delete copy;

	std::cout << "---------------------------" << std::endl;
	return (0);
}

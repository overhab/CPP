#include "main.hpp"

int		main ( void )
{
	ICharacter *man = new Character("Henry");
	ICharacter *other_man = new Character("Joe");
	IMateriaSource *src = new MateriaSource();

	man->unequip(2);
	man->unequip(10110);

	std::cout << man->getName() << std::endl;

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	AMateria *tmp;
	tmp = src->createMateria("ice");
	man->equip(tmp);
	delete tmp;
	tmp = src->createMateria("cure");
	man->equip(tmp);

/* 	ICharacter *copy = new Character(*(dynamic_cast<const Character*>(man)));
	std::cout << copy->getName() << std::endl;
	copy->use(0, *man);
	delete copy; */

/* 	ICharacter *copy = new Character("Matthew");
	std::cout << copy->getName() << std::endl;
	copy->use(0, *man);
	dynamic_cast<Character &>(*copy) = dynamic_cast<Character &>(*man);
	std::cout << copy->getName() << std::endl;
	copy->use(0, *man);
	copy->unequip(0);
	man->use(0, *other_man);
	delete copy; */

	man->use(0, *other_man);
	man->use(1, *other_man);

	delete tmp;
	delete man;
	delete other_man;
	delete src;

	return (0);
}

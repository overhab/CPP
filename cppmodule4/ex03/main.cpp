#include "main.hpp"

int		main ( void )
{
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	ICharacter *man = new Character("Henry");
	ICharacter *other_man = new Character("Joe");
	IMateriaSource *source = new MateriaSource();

	man->unequip(2);
	man->unequip(10110);

	std::cout << man->getName() << std::endl;
	std::cout << other_man->getName() << std::endl;

	source->learnMateria(new Ice());
	source->learnMateria(new Cure());
	source->learnMateria(new Ice());
	source->learnMateria(new Cure());
	source->learnMateria(new Cure());

	man->equip(source->createMateria("ice"));
	man->equip(source->createMateria("cure"));


	man->use(0, *other_man);
	man->use(1, *other_man);
	std::cout << "-----------COPY-----------" << std::endl;
	Character *copy = new Character(*(dynamic_cast<const Character*>(man)));
	std::cout << copy->getName() << std::endl;
	copy->use(0, *man);
	copy->use(1, *man);

/* 	std::cout << "-----------deep test-----------" << std::endl;

	copy->unequip(0);
	std::cout << "COPY: ";
	copy->use(0, *other_man);
	std::cout << "MAN: ";
	man->use(0, *other_man);
 */
	std::cout << "----------ASSIGNMENT------------" << std::endl;
	dynamic_cast<Character&>(*other_man) = *copy;
	std::cout << other_man->getName() << std::endl;
	other_man->use(0, *man);
	other_man->use(1, *man);
	std::cout << "----------------------------" << std::endl;

	delete source;
	delete copy;
	delete other_man;
	delete man;

	return (0);
}

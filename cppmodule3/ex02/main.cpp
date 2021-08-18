#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int		main ( void )
{
	std::cout << "\033[1;31m======FIRST======\033[0;0m" << std::endl;
	ClapTrap	first("Jack");

	first.attack("John");
	first.takeDamage(5);
	first.attack("Rob");
	first.beRepaired(4);
	first.takeDamage(5);
	
	std::cout << "\033[1;31m======SECOND======\033[0;0m" << std::endl;
	ScavTrap	second("Tom");

	second.attack("Max");
	second.takeDamage(17);
	second.attack("Ben");
	second.beRepaired(12);
	second.guardGate();

	std::cout << "\033[1;31m======THIRD======\033[0;0m" << std::endl;
	FragTrap	third("Billy");

	third.attack("Unknown entity");
	third.takeDamage(34);
	third.beRepaired(27);
	third.attack("Tyler");
	third.highFivesGuys();

	std::cout << "\033[1;31m======FOURTH======\033[0;0m" << std::endl;
	FragTrap	temp("Zack");
	FragTrap	fourth;

	fourth = temp;
	fourth.beRepaired(54);
	fourth.takeDamage(23);
	fourth.attack("Peter");
	fourth.highFivesGuys();
	fourth.beRepaired(38);
	fourth.takeDamage(7);

	std::cout << "\033[1;31m======END======\033[0;0m" << std::endl;
	return (0);
}

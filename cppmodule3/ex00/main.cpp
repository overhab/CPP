#include "ClapTrap.hpp"

int		main ( void )
{
	std::cout << "\033[1;31m======FIRST======\033[0;0m" << std::endl;
	ClapTrap	first("Jack");

	first.attack( "John" );
	first.takeDamage(5);
	first.attack( "Rob" );
	first.beRepaired(4);
	first.takeDamage(5);
	
	std::cout << "\033[1;31m======SECOND======\033[0;0m" << std::endl;
	ClapTrap	second(first);

	second.beRepaired(100);
	second.attack( "Max" );
	second.takeDamage(7);
	second.attack( "Ben" );
	second.beRepaired(7);
	second.takeDamage(3);

	std::cout << "\033[1;31m======THIRD======\033[0;0m" << std::endl;
	ClapTrap	third;

	third = second;

	third.takeDamage(6);
	third.beRepaired(21);

	std::cout << "\033[1;31m======END======\033[0;0m" << std::endl;
	return (0);
}

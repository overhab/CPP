#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int		main ( void )
{
	std::cout << "\033[1;31m======TESTS======\033[0;0m" << std::endl;
	DiamondTrap	fourth("Zack");

	fourth.whoAmI();
	fourth.beRepaired(54);
	fourth.takeDamage(23);
	fourth.attack("Peter");	
	fourth.highFivesGuys();
	fourth.beRepaired(38);
	fourth.guardGate();
	fourth.takeDamage(7);

	std::cout << "\033[1;31m======END======\033[0;0m" << std::endl;
	return (0);
}

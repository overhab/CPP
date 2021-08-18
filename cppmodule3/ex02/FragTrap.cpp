#include "FragTrap.hpp"

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap()
{
	_name = "default";
	_hitPoints = 100;
	_energyPoings = 100;
	_attackDamage = 30;
	std::cout << "Default \033[0;33mFragTrap\033[0;0m constructor called..." << std::endl;
}

FragTrap::FragTrap( const FragTrap& copy ) : ClapTrap(copy)
{
	std::cout << "Copy \033[0;33mFragTrap\033[0;0m constructor called..." << std::endl;
}

FragTrap::FragTrap( const std::string& name ) 
	: ClapTrap( name )
{
	_name = name;
	_hitPoints = 100;
	_energyPoings = 100;
	_attackDamage = 30;
	std::cout << _name << " (\033[0;33mFragTrap\033[0;0m) arrived for the party." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << _name << " (\033[0;33mFragTrap\033[0;0m) is done for today." << std::endl;
}

FragTrap& FragTrap::operator=( const FragTrap& ref )
{
	std::cout << "Assignation \033[0;33mFragTrap\033[0;0m operator called..." << std::endl;
	this->_name = ref._name;
	this->_attackDamage = ref._attackDamage;
	this->_hitPoints = ref._hitPoints;
	this->_energyPoings = ref._energyPoings;

	return (*this);
}

void	FragTrap::attack( std::string const & target )
{
	std::cout << this->_name << " sneaks to " << target << " and stabs him for\033[0;33m " 
		<< this->_attackDamage << " damage\033[0;0m!" << std::endl;
}

void	FragTrap::highFivesGuys(void) const
{
	std::cout << "\033[0;33mFragTrap \033[0;0m" << this->_name << " says \"Good job, guys!\" " \
	"as he raises his hand up for the high five." << std::endl;
}

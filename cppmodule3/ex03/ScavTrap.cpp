#include "ScavTrap.hpp"

int		ScavTrap::_ap = 20;
int		ScavTrap::_hp = 100;
int		ScavTrap::_ep = 50;

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	_hitPoints = ScavTrap::_hp;
	_energyPoings = ScavTrap::_ap;
	_attackDamage = ScavTrap::_ep;
	std::cout << "Default \033[1;36mScavTrap\033[0;0m constructor called..." << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& copy ) : ClapTrap(copy)
{
	std::cout << "Copy \033[1;36mScavTrap\033[0;0m constructor called..." << std::endl;
}

ScavTrap::ScavTrap( const std::string& name ) 
	: ClapTrap( name )
{
	_hitPoints = ScavTrap::_hp;
	_energyPoings = ScavTrap::_ap;
	_attackDamage = ScavTrap::_ep;
	std::cout << _name << " (\033[1;36mScavTrap\033[0;0m) is here to save the day!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << _name << " (\033[1;36mScavTrap\033[0;0m) completed his service." << std::endl;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& ref )
{
	std::cout << "Assignation \033[1;36mScavTrap\033[0;0m operator called..." << std::endl;
	this->_name = ref._name;
	this->_attackDamage = ref._attackDamage;
	this->_hitPoints = ref._hitPoints;
	this->_energyPoings = ref._energyPoings;

	return (*this);
}

void	ScavTrap::attack( std::string const & target )
{
	std::cout << this->_name << " inflicts\033[1;36m " << this->_attackDamage << " damage\033[0;0m to " 
		<< target << "!" << std::endl;
}

void		ScavTrap::guardGate( void ) const
{
	std::cout << this->_name << " is now in \"Gate keeper\" mode"
		<< std::endl;
}

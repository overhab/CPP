#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap(),  ScavTrap(), FragTrap()
{
	ClapTrap::_name = "default_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoings = ScavTrap::_energyPoings;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "Default \033[0;35mDiamondTrap\033[0;0m constructor called..." << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& copy ) : ClapTrap(copy),  ScavTrap(copy), FragTrap(copy)
{
	ClapTrap::_name = copy._name + "_clap_name";
	std::cout << "Copy \033[0;35mDiamondTrap\033[0;0m constructor called..." << std::endl;
}

DiamondTrap::DiamondTrap( const std::string& name ) 
	: ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	_hitPoints = FragTrap::_hp;
	_energyPoings = ScavTrap::_ep;
	_attackDamage = FragTrap::_ap;
	std::cout << _name << " (\033[0;35mDiamondTrap\033[0;0m) here." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << _name << " (\033[0;35mDiamondTrap\033[0;0m) disappeared." << std::endl;
}

DiamondTrap& DiamondTrap::operator=( const DiamondTrap& ref )
{
	std::cout << "Assignation \033[0;35mDiamondTrap\033[0;0m operator called..." << std::endl;
	ClapTrap::_name = ref._name + "_clap_name";
	this->_name = ref._name;
	this->_attackDamage = ref._attackDamage;
	this->_hitPoints = ref._hitPoints;
	this->_energyPoings = ref._energyPoings;

	return (*this);
}

void 	DiamondTrap::whoAmI( void ) const
{
	std::cout << "Hello! My name is \033[0;35m" << this->_name << "\033[0;0m and my grandparent name is \033[0;32m"
		<< ClapTrap::_name << "\033[0;0m" << std::endl;
}

void	DiamondTrap::attack( std::string const & target )
{
	ScavTrap::attack(target);
	this->_energyPoings--;
	std::cout << this->_energyPoings << " energy points left" << std::endl;
}

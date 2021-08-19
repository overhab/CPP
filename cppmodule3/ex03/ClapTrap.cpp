#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) :
	_name( "default" ), _hitPoints( 10 ), _energyPoings( 10 ), _attackDamage( 0 )
{
	std::cout << "Default \033[0;32mClapTrap\033[0;0m constructor called..." << std::endl;
}

ClapTrap::ClapTrap( const std::string& name ) :
	_name(name), _hitPoints( 10 ), _energyPoings( 10 ), _attackDamage( 0 )
{
	std::cout << _name << " (\033[0;32mClapTrap\033[0;0m) appeared!" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& copy )
	: _name(copy._name), _hitPoints(copy._hitPoints), _energyPoings(copy._energyPoings),
		_attackDamage(copy._attackDamage)
{
	std::cout << "Copy \033[0;32mClapTrap\033[0;0m contructor called..." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << _name << " (\033[0;32mClapTrap\033[0;0m) deconstructed." << std::endl;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& ref )
{
	std::cout << "Assignation \033[0;32mClapTrap\033[0;0m operator called..." << std::endl;
	this->_name = ref._name;
	this->_attackDamage = ref._attackDamage;
	this->_hitPoints = ref._hitPoints;
	this->_energyPoings = ref._energyPoings;

	return (*this);
}

void	ClapTrap::attack( std::string const & target )
{
	std::cout << this->_name << " attack " << target << ", causing " 
		<< this->_attackDamage << " points of damage!" << std::endl;
}

void 	ClapTrap::takeDamage( unsigned int amount )
{
	this->_hitPoints -= amount;
	std::cout << this->_name << " takes " << amount << " damage! ";
	if (this->_hitPoints <= 0)
	{
		std::cout << this->_name << " received fatal damage!" << std::endl;
		return ;
	}
	std::cout << " HP left: " << this->_hitPoints << std::endl;
}

void 	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_hitPoints >= 100)
		std::cout << this->_name << " has full HP!" << std::endl;
	else
	{
		this->_hitPoints += amount;
		if (this->_hitPoints > 100)
			this->_hitPoints = 100;
		std::cout << this->_name << " heals " << amount << " hit points!"
			<< " HP: " << this->_hitPoints << std::endl;
	}
}

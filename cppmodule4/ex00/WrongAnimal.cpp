#include "main.hpp"

WrongAnimal::WrongAnimal( void ) : _type("animal")
{
	std::cout << "[ Default "RED"WRONG Animal "RESET"constructor called ]" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& copy ) : _type(copy._type)
{
	std::cout << "[ Copy "RED"WRONG Animal "RESET"constructor called ]" << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "[ "RED"WRONG WrongAnimal "RESET"Destructor called ]" << std::endl;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& ref )
{
	this->_type = ref._type;
	return (*this);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << ""RED"WRONG Animal "RESET" makes some noise..." << std::endl;
}

std::string		WrongAnimal::getType( void ) const
{
	return (this->_type);
}

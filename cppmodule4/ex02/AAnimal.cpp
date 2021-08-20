#include "main.hpp"

AAnimal::AAnimal( void ) : _type("animal")
{
	std::cout << "[ Default "CYAN"Animal "RESET"constructor called ]" << std::endl;
}

AAnimal::AAnimal( const AAnimal& copy ) : _type(copy._type)
{
	std::cout << "[ Copy "CYAN"Animal "RESET"constructor called ]" << std::endl;
}

AAnimal::~AAnimal( void )
{
	std::cout << "[ "CYAN"Animal "RESET"Destructor called ]" << std::endl;
}

AAnimal& AAnimal::operator=( const AAnimal& ref )
{
	this->_type = ref._type;
	return (*this);
}

void	AAnimal::makeSound( void ) const
{
	std::cout << ""CYAN"Animal "RESET" makes some noise..." << std::endl;
}

std::string		AAnimal::getType( void ) const
{
	return (this->_type);
}

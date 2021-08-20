#include "main.hpp"

Animal::Animal( void ) : _type("animal")
{
	std::cout << "[ Default "CYAN"Animal "RESET"constructor called ]" << std::endl;
}

Animal::Animal( const Animal& copy ) : _type(copy._type)
{
	std::cout << "[ Copy "CYAN"Animal "RESET"constructor called ]" << std::endl;
}

Animal::~Animal( void )
{
	std::cout << "[ "CYAN"Animal "RESET"Destructor called ]" << std::endl;
}

Animal& Animal::operator=( const Animal& ref )
{
	this->_type = ref._type;
	return (*this);
}

void	Animal::makeSound( void ) const
{
	std::cout << ""CYAN"Animal "RESET" makes some noise..." << std::endl;
}

std::string		Animal::getType( void ) const
{
	return (this->_type);
}

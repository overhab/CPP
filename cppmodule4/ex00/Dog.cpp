#include "main.hpp"

Dog::Dog( void )
{
	this->_type = "Dog";
	std::cout << "[ Default "YELLOW"Dog "RESET"constructor called ]" << std::endl;
}

Dog::Dog( const Dog& copy )
{
	this->_type = copy._type;
	std::cout << "[ Copy "YELLOW"Dog "RESET"constructor called ]" << std::endl;
}

Dog::~Dog( void )
{
	std::cout << "[ "YELLOW"Dog "RESET"Destructor called ]" << std::endl;
}

Dog& Dog::operator=( const Dog& ref )
{
	this->_type = ref._type;
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << ""YELLOW"BARKING "RESET"" << std::endl;
}

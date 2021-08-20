#include "main.hpp"

Dog::Dog( void )
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "[ Default "YELLOW"Dog "RESET"constructor called ]" << std::endl;
}

Dog::Dog( const Dog& copy )
{
	_type = copy._type;
	_brain = new Brain();
	_brain->copyData(*copy._brain);
	std::cout << "[ Copy "YELLOW"Dog "RESET"constructor called ]" << std::endl;
}

Dog::~Dog( void )
{
	std::cout << "[ "YELLOW"Dog "RESET"Destructor called ]" << std::endl;
	delete _brain;
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

Brain*	Dog::myBrain( void ) const
{
	return (this->_brain);
}

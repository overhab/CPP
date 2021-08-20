#include "main.hpp"

Cat::Cat( void )
{
	this->_type = "Cat";
	std::cout << "[ Default "GREEN"Cat "RESET"constructor called ]" << std::endl;
}

Cat::Cat( const Cat& copy )
{
	this->_type = copy._type;
	std::cout << "[ Copy "GREEN"Cat "RESET"constructor called ]" << std::endl;
}

Cat::~Cat( void )
{
	std::cout << "[ "GREEN"Cat "RESET"Destructor called ]" << std::endl;
}

Cat& Cat::operator=( const Cat& ref )
{
	this->_type = ref._type;
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << ""GREEN"MEOW "RESET"" << std::endl;
}

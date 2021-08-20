#include "main.hpp"

Cat::Cat( void )
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << "[ Default "GREEN"Cat "RESET"constructor called ]" << std::endl;
}

Cat::Cat( const Cat& copy )
{
	_type = copy._type;
	_brain = new Brain();
	_brain->copyData(*copy._brain);
	std::cout << "[ Copy "GREEN"Cat "RESET"constructor called ]" << std::endl;
}

Cat::~Cat( void )
{
	std::cout << "[ "GREEN"Cat "RESET"Destructor called ]" << std::endl;
	delete _brain;
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

Brain*	Cat::myBrain( void ) const
{
	return (this->_brain);
}

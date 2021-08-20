#include "main.hpp"

WrongCat::WrongCat( void )
{
	this->_type = "WrongCat";
	std::cout << "[ Default "PURPLE"WrongCat "RESET"constructor called ]" << std::endl;
}

WrongCat::WrongCat( const WrongCat& copy )
{
	this->_type = copy._type;
	std::cout << "[ Copy "PURPLE"WrongCat "RESET"constructor called ]" << std::endl;
}

WrongCat::~WrongCat( void )
{
	std::cout << "[ "PURPLE"WrongCat "RESET"Destructor called ]" << std::endl;
}

WrongCat& WrongCat::operator=( const WrongCat& ref )
{
	this->_type = ref._type;
	return (*this);
}

void	WrongCat::makeSound( void ) const
{
	std::cout << ""PURPLE"WRONG MEOW "RESET"" << std::endl;
}

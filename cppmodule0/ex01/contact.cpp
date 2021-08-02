#include "main.hpp"

contact::contact( void ) : _full( 0 )
{
}

contact::~contact( void )
{
}

void	contact::setContact( const phonebook *pb )
{
	this->_id = pb->id;
	this->_firstName = pb->firstName;
	this->_lastName = pb->lastName;
	this->_nickname = pb->nickname;
	this->_phoneNumber = pb->phoneNumber;
	this->_secret = pb->secret;
	this->_full = 1;
}

void	contact::searchPrint( void ) const
{
	if (this->_full == 1)
		std::cout << this->_id << '\t' << this->_firstName << std::endl;
}

void	contact::printContact( void ) const
{
	if (this->_full == 1)
		std::cout << this->_id << '\t' << this->_firstName << std::endl;
}

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

std::string		contact::ft_truncate( const std::string line, size_t width) const
{
	if (line.length() > width)
		return (line.substr(0, 9) + ".");
	else
		return line;
}

void	contact::searchPrint( void ) const
{
	if (this->_full == 1)
	{
		std::cout << std::setw(10) << this->_id << "|" << std::setw(10) << ft_truncate(this->_firstName, 10)
			<< "|" << std::setw(10)	<< ft_truncate(this->_lastName, 10) << "|" << std::setw(10)
				<< ft_truncate(this->_nickname, 10) << std::endl;
	}
}

void	contact::printContact( void ) const
{
	if (this->_full == 1)
	{
		std::cout << std::setiosflags( std::ios::left );
		std::cout << std::setw(14) << "index" << "|\t" << this->_id << '\n';
		std::cout << std::setw(14) << "first name" << "|\t" << this->_firstName << '\n';
		std::cout << std::setw(14) << "last name" << "|\t" << this->_lastName << '\n';
		std::cout << std::setw(14) << "nickname" << "|\t" << this->_nickname << '\n';
		std::cout << std::setw(14) << "phone number" << "|\t" << this->_phoneNumber << '\n';
		std::cout << std::setw(14) << "darkest secret" << "|\t" << this->_secret << std::endl;
		std::cout << std::resetiosflags( std::ios::left );
	}
}

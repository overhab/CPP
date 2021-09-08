#include "main.hpp"

contact::contact( void ) : _full( 0 )
{
}

contact::~contact( void )
{
}

void	contact::setContact( int id )
{
	this->_id = id;
	std::cout << "Enter first name: ";
	std::getline(std::cin, this->_firstName);
	std::cout << "Enter last name: ";
	std::getline(std::cin, this->_lastName);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, this->_nickname);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, this->_phoneNumber);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, this->_secret);
	this->_full = 1;
}

std::string		contact::ft_truncate( const std::string	&line, size_t width) const
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

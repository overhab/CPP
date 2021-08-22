#include "main.hpp"

AMateria::AMateria( void ) : _type("default")
{
}

AMateria::AMateria( const AMateria& copy ) : _type(copy._type)
{
}

AMateria::AMateria( std::string const & type ) : _type(type)
{
}

AMateria::~AMateria( void )
{
}

AMateria& AMateria::operator=( const AMateria& ref )
{
	this->_type = ref.getType();
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
	std::cout << "default use called" << std::endl;
}

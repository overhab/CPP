#include "main.hpp"

Ice::Ice( void ) : AMateria("ice")
{
}

Ice::Ice( const Ice& copy ) : AMateria(copy)
{
}

Ice::~Ice( void )
{
}

AMateria*	Ice::clone() const
{
	return (new Ice);
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice&		Ice::operator=( const Ice& ref )
{
	this->_type = ref.getType();
	return (*this);
}

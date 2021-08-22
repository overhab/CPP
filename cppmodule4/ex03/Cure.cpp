#include "main.hpp"

Cure::Cure( void ) : AMateria("cure")
{
}

Cure::Cure( const Cure& copy ) : AMateria(copy)
{
}

Cure::~Cure( void )
{
}

AMateria*	Cure::clone() const
{
	return (new Cure);
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure&		Cure::operator=( const Cure& ref )
{
	this->_type = ref.getType();
	return (*this);
}

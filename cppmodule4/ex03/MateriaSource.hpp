#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria		**_mat;
	static int		_id;
public:
	MateriaSource( void );
	MateriaSource( const MateriaSource& copy );
	~MateriaSource( );

	MateriaSource&	operator=( const MateriaSource& ref );

	void 			learnMateria(AMateria*);
	AMateria*		createMateria(std::string const & type);

};

#endif

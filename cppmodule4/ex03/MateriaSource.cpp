#include "main.hpp"

int		MateriaSource::_id = 0;

MateriaSource::MateriaSource( void )
{
	_mat = new AMateria *[NUM_MAT];
	for (int i = 0; i < NUM_MAT; i++)
		_mat[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource& copy )
{
	_mat = new AMateria *[NUM_MAT];
	for (int i = 0; i < NUM_MAT; i++)
		_mat[i] = copy._mat[i];
}

MateriaSource::~MateriaSource( void )
{
	for (int i = 0; i < NUM_MAT; i++)
		delete _mat[i];
	delete [] _mat;
}

MateriaSource& MateriaSource::operator=( const MateriaSource& ref )
{
	delete [] this->_mat;
	this->_mat = new AMateria *[NUM_MAT];
	for (int i = 0; i < NUM_MAT; i++)
		this->_mat[i] = ref._mat[i];
	return (*this);
}

void		MateriaSource::learnMateria(AMateria* mat)
{
	if (MateriaSource::_id == NUM_MAT)
	{
		delete mat;
		return ;
	}
	if (mat)
	{
		this->_mat[MateriaSource::_id] = mat;
		MateriaSource::_id++;
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < NUM_MAT; i++)
	{
		if (this->_mat[i] && !this->_mat[i]->getType().compare(type))
			return (this->_mat[i]->clone());
	}
	std::cout << "Error: Wrong materia type!" << std::endl;
	return NULL;
}

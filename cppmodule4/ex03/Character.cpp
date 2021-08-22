#include "main.hpp"

Character::Character( void ) : _name("default")
{
	//_mat = new AMateria *[NUM_MAT];
	for (int i = 0; i < NUM_MAT; i++)
		_mat[i] = NULL;
}

Character::Character( const std::string& name ) : _name(name)
{
	//_mat = new AMateria *[NUM_MAT];
	for (int i = 0; i < NUM_MAT; i++)
		_mat[i] = NULL;
}

Character::Character( const Character& copy ) : _name(copy._name)
{
	//_mat = new AMateria *[NUM_MAT];
	for (int i = 0; i < NUM_MAT; i++)
		_mat[i] = copy._mat[i];
}

Character::~Character( void )
{
	for (int i = 0; i < NUM_MAT; i++)
		delete _mat[i];
	//delete [] _mat;
}

Character& Character::operator=( const Character& ref )
{
	this->_name = ref._name;
	//delete [] _mat;
	//this->_mat = new AMateria *[NUM_MAT];
	for (int i = 0; i < NUM_MAT; i++)
		this->_mat[i] = ref._mat[i];
	return (*this);
}

void 	Character::equip(AMateria* m)
{
	int i = 0;
	while (i < 4 && this->_mat[i])
		i++;
	if (i < 4)
		this->_mat[i] = this->store(*m);
}

void 	Character::unequip(int idx)
{
	if (idx > -1 && idx < 4)
		this->_mat[idx] = NULL;
}

void 	Character::use(int idx, ICharacter& target)
{
	if (idx > -1 && idx < 4)
	{
		if (this->_mat[idx])
			this->_mat[idx]->use(target);
	}
}

std::string const & Character::getName() const
{
	return (this->_name);
}

AMateria* Character::store( const AMateria& from )
{
	AMateria *tmp;

	tmp = from.clone();
	return tmp;
}

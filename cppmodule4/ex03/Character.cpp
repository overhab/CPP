#include "main.hpp"

Character::Character( void ) : _name("default")
{
	for (int i = 0; i < NUM_MAT; i++)
		_mat[i] = NULL;
}

Character::Character( const std::string& name ) : _name(name)
{
	for (int i = 0; i < NUM_MAT; i++)
		_mat[i] = NULL;
}

Character::Character( const Character& copy ) : _name(copy._name)
{
	for (int i = 0; i < NUM_MAT; i++)
	{
		delete this->_mat[i];
		this->_mat[i] = NULL;
		if (copy._mat[i] != NULL)
		{
			this->_mat[i] = copy._mat[i]->clone();
		}
	}
}

Character::~Character( void )
{
	for (int i = 0; i < NUM_MAT; i++)
	{
		if (this->_mat[i])
			delete this->_mat[i];
	}
}

Character& Character::operator=( const Character& ref )
{
	this->_name = ref._name;
	for (int i = 0; i < NUM_MAT; i++)
	{
		delete this->_mat[i];
		this->_mat[i] = NULL;
		if (ref._mat[i] != NULL)
		{
			this->_mat[i] = ref._mat[i]->clone();
		}
	}
	return (*this);
}

void 	Character::equip(AMateria* m)
{
	int i = 0;
	while (i < 4 && this->_mat[i])
		i++;
	if (i < 4)
		this->_mat[i] = m;
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

#include "main.hpp"

int	Brain::index = 0;

Brain::Brain( void )
{
	_ideas = new std::string[I_SIZE];
	Brain::index = 0;
	std::cout << "[ Default "PURPLE"Brain "RESET"constructor called ]" << std::endl;
}

Brain::Brain( const Brain& copy )
{
	if (_ideas)
		delete [] _ideas;
	_ideas = new std::string[I_SIZE];
	this->copyData(copy);
	std::cout << "[ Copy "PURPLE"Brain "RESET"constructor called ]" << std::endl;
}

Brain::~Brain( void )
{
	std::cout << "[ "PURPLE"Brain "RESET"destructor called ]" << std::endl;
	delete[] _ideas;
}

Brain&			Brain::operator=( const Brain& ref )
{
	this->_ideas = ref._ideas;
	return (*this);
}

void			Brain::copyData( const Brain& copy )
{
	for (int i = 0; i < I_SIZE; i++)
		this->_ideas[i] = copy._ideas[i];
}

void			Brain::setIdea(const std::string& idea)
{
	this->_ideas[Brain::index] = idea;
	Brain::index++;
	if (Brain::index == I_SIZE)
		Brain::index = 0;
}

std::string		Brain::getIdea( unsigned int i ) const
{
	if (i < I_SIZE)
		return (this->_ideas[i]);
	std::cout << "Wrong index!" << std::endl;
	return (NULL);
}

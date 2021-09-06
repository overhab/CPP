#include "Span.hpp"

int		Span::_status;

Span::Span( const Span& copy ) 
	: _N(copy._N), _array(copy._array)
{
	Span::_status = 1;
}

Span::Span( unsigned int n ) : _N(n)
{
	_array.reserve(_N);
	Span::_status = 1;
}

Span::~Span( void )
{
}

void				Span::addNumber( int num )
{
	if (this->_array.size() == this->_array.capacity()){
		throw Span::ArrayIsFullException();
		return ;
	}
	this->_array.push_back(num);
}

const std::vector<int>&		Span::getArray( void ) const
{
	return this->_array;
}

void				Span::fillRandom( void )
{
	this->_array.assign(this->_array.capacity(), 0);
	std::generate(this->_array.begin(), this->_array.end(), Span::_RNG);
}

int				Span::calculateSpan( void )
{
	if (!Span::_status)
		return 1;
	if (this->_array.size() <= 1){
		return 0;
	}
	std::sort(_array.begin(), _array.end());
	this->_short = _array[1] - _array[0];
	this->_long =  *std::max_element(_array.begin(), _array.end()) \
		- *std::min_element(_array.begin(), _array.end());
	Span::_status = 0;
	return 1;
}

int					Span::shortestSpan( void )
{
	if	(calculateSpan())
		return this->_short;
	throw Span::NoElementsException();
	return -1;
}

int					Span::longestSpan( void )
{
	if	(calculateSpan())
		return this->_long;
	throw Span::NoElementsException();
	return -1;
}

Span& 				Span::operator=( const Span& ref )
{
	this->_N = ref._N;
	this->_array = ref._array;
	Span::_status = 1;
	return (*this);
}

int					Span::_RNG( void )
{
	return (std::rand() % 100);
}

void				Span::printArray( void ) const
{
	std::copy(this->_array.begin(), this->_array.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
}

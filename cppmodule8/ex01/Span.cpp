#include "Span.hpp"

int		Span::_status;

Span::Span( const Span& copy ) 
	: _N(copy._N), _array(copy._array), _begin(_array.begin()), _end(_array.end())
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
	if (this->getArray().size() == this->getArray().capacity()){
		throw Span::ArrayIsFullException();
		return ;
	}
	this->getArray().push_back(num);
	_begin = _array.begin();
	_end = _array.end();
}

std::vector<int>&	Span::getArray( void )
{
	return this->_array;
}

void				Span::fillRandom( void )
{
	this->getArray().assign(this->getArray().capacity(), 0);
	std::generate(this->getArray().begin(), this->getArray().end(), Span::_RNG);
	_begin = _array.begin();
	_end = _array.end();
}

int				Span::calculateSpan( void )
{
	if (!Span::_status)
		return 1;
	if (this->getArray().size() <= 1){
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
	this->_begin = this->_array.begin();
	this->_end = this->_array.end();
	Span::_status = 1;
	return (*this);
}

int					Span::_RNG( void )
{
	return (std::rand() % 100);
}

void				Span::printArray( void ) const
{
	std::copy(this->_begin, this->_end, std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
}

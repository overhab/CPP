#include "Span.hpp"

int		Span::_status;

Span::Span( const Span& copy )
{
	(void)copy;
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
		throw std::exception();
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

template <class T> 
struct subtract : std::binary_function <T,T,T> 
{
  T operator() (const T& x, const T& y) const {
	  //std::cout << "." << std::endl;
	  return std::abs(x-y);
	}
};

void				Span::calculateSpan( void )
{
	if (!Span::_status)
		return ;
	if (this->getArray().size() <= 1){
		throw std::exception();
	}
	std::sort(_array.begin(), _array.end());
	Span::_status = 0;
	this->_short = _array[1] - _array[0];
	this->_long =  *std::max_element(_array.begin(), _array.end()) \
		- *std::min_element(_array.begin(), _array.end());
}

int					Span::shortestSpan( void )
{
	try {
		calculateSpan();
		return this->_short;
	}
	catch (std::exception &err){
		std::cout << "Error: there is only one (or none) numbers stored!" << std::endl;
		exit (EXIT_FAILURE);
	}
}

int					Span::longestSpan( void )
{
	try {
		calculateSpan();
		return this->_long;
	}
	catch (std::exception &err){
		std::cout << "Error: there is only one (or none) numbers stored!" << std::endl;
		exit (EXIT_FAILURE);
	}
}

Span& 				Span::operator=( const Span& ref )
{
	(void)ref;
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

/* int		Span::shortestSpan( void )
{
	unsigned int shortestSpan = UINT_MAX;
	std::vector<int> dif;

	if (_array.size() < 2) throw std::exception();
	std::sort(_array.begin(), _array.end());
	for (int i = 1; i < static_cast<int>(_array.size()); i++)
	{
		std::cout << "." << std::endl;
		dif.push_back(std::abs(_array[i] - _array[i-1]));
	}
	shortestSpan = *std::min_element(dif.begin(), dif.end());
	return shortestSpan;
}

int		Span::longestSpan( void )
{
	int	max;
	int	min;

	if (_array.size() < 2) throw std::exception();
	max = *std::max_element(_array.begin(), _array.end());
	min = *std::min_element(_array.begin(), _array.end());
	return max - min;
} */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <iterator>
# include <ctime>
# include <map>
# include <climits>
# include <sstream>
# include <numeric>
# include <exception>
# include <vector>
# include <cstdlib>
# include <functional>

class Span
{
private:
	unsigned int				_N;
	std::vector<int>			_array;
	std::vector<int>::iterator	_begin;
	std::vector<int>::iterator	_end;
	int							_short;
	int							_long;
	static int					_status;
	
	Span( void ) {};
	static int			_RNG( void );
public:
	Span( const Span& copy );
	Span( unsigned int n );
	~Span( );

	std::size_t			getSize( void ) const;
	void				fillRandom( void );
	std::vector<int>&	getArray( void );
	void				addNumber( int num );
	int					shortestSpan( void );
	int					longestSpan( void );
	void				calculateSpan( void );

	void				printArray( void ) const;

	Span& 				operator=( const Span& ref );
};

#endif

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <iterator>
# include <ctime>
# include <sstream>
# include <exception>
# include <numeric>
# include <vector>
# include <set>

class Span
{
private:
	unsigned int				_N;
	std::vector<int>			_array;
	int							_short;
	int							_long;
	static int					_status;
	
	Span( void ) {};
	static int			_RNG( void );
public:
	Span( const Span& copy );
	Span( unsigned int n );
	~Span( );

	void						fillRandom( void );
	const std::vector<int>&		getArray( void ) const;
	void						addNumber( int num );
	int							shortestSpan( void );
	int							longestSpan( void );
	int							calculateSpan( void );

	void						printArray( void ) const;

	Span& 						operator=( const Span& ref );

	class NoElementsException : public std::exception
	{
			virtual const char* what() const throw()
			{
				return ("Error: there is only one (or none) numbers stored!");
			}
	};
	class ArrayIsFullException : public std::exception
	{
			virtual const char* what() const throw()
			{
				return ("Error: cannot add more, array is full!");
			}
	};
};

#endif

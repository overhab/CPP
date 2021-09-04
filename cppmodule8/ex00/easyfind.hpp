#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <iterator>
# include <sstream>
# include <algorithm>
# include <vector>
# include <map>
# include <list>


template< typename T >
typename T::iterator		easyfind( T & first, int second )
{
	return (std::find(first.begin(), first.end(), second));
}

#endif

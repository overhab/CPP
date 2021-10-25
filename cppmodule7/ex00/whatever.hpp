#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template< typename T >
void	swap( T & par1, T & par2 )
{
	T	tmp;

	tmp = par1;
	par1 = par2;
	par2 = tmp;
}

template< typename T >
T	max( T & par1, T & par2 )
{
	return (par1 > par2 ? par1 : par2);
}

template< typename T >
T	min( T & par1, T & par2 )
{
	return (par1 > par2 ? par2 : par1);
}

#endif

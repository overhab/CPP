#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template< typename type >
void	swap( type & par1, type & par2 )
{
	type	tmp;

	tmp = par1;
	par1 = par2;
	par2 = tmp;
}

template< typename type >
type	max( type & par1, type & par2 )
{
	return (par1 > par2 ? par1 : par2);
}

template< typename type >
type	min( type & par1, type & par2 )
{
	return (par1 > par2 ? par2 : par1);
}

#endif

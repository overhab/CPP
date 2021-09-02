#ifndef ITER_HPP
# define ITER_HPP

# include <cstddef>
# include <iostream>
# define SIZE 10

template< typename type >
void	iter( type *array, std::size_t size, void (*func)(type&) )
{
	for (std::size_t i = 0; i < size; i++)
		func(array[i]);
}

template< typename type >
void	func(type & arg)
{
	arg++;
}

template< typename type >
void	printArr(type & arg)
{
	std::cout << arg << " ";
}

#endif

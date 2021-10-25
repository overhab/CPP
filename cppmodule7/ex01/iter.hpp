#ifndef ITER_HPP
# define ITER_HPP

# include <cstddef>
# include <iostream>
# define SIZE 10

template< typename T >
void	iter( T *array, std::size_t size, void (*func)(T &) )
{
	for (std::size_t i = 0; i < size; i++)
		func(array[i]);
}

template< typename T >
void	func(T & arg)
{
	arg++;
}

template< typename T >
void	printArr(T & arg)
{
	std::cout << arg << " ";
}

#endif

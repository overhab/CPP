#include "MutantStack.hpp"

template < typename T >
MutantStack<T>::MutantStack( void )
{
}

template < typename T >
MutantStack<T>::MutantStack( const MutantStack<T>& copy )
{
	(void)copy;
}

template < typename T >	
MutantStack<T>::~MutantStack( void )
{
}

template < typename T >
MutantStack<T>& MutantStack<T>::operator=( const MutantStack<T>& ref )
{
	(void)ref;
	return (*this);
}

template < typename T >
typename MutantStack<T>::iterator		MutantStack<T>::begin( void )
{
	return this->c.begin();
}

template < typename T >
typename MutantStack<T>::iterator		MutantStack<T>::end( void )
{
	return this->c.end();
}

//template class MutantStack<int>;
//template class MutantStack<std::string>;

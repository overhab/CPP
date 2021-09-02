#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <cstddef>
# include <cstdlib>

template< typename T >
class Array
{
public:
	class IndexOutOfRange : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Error: index out of range");
			}
	};
private:
	std::size_t		_size;
	T				*_array;
public:
	Array( void ) : _size(0), _array(NULL) {};

	Array( const Array<T>& copy ) : _size(copy.size()) {
		this->_array = new T[size()]();
		for (std::size_t i = 0; i < size(); i++)
			_array[i] = copy[i];
	};

	Array( unsigned int n ) :_size(n), _array(new T[size()]()) {};

	~Array( ) { 
		delete [] _array;
	};

	std::size_t		size( void ) const {
		return this->_size;
	}

	Array<T>& operator=( const Array<T>& ref ){
		this->_size = ref.size();
		if (this->_array)
			delete [] this->_array;
		this->_array = new T[size()]();
		for (std::size_t i = 0; i < size(); i++)
			_array[i] = ref[i];
		return (*this);
	};

	T& operator[]( unsigned int index ) const {
		if (index < size())
			return (this->_array[index]);
		throw Array::IndexOutOfRange();
	};
};

#endif

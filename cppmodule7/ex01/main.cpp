#include "iter.hpp"

class Testing
{
private:
	int		_par;
public:
	Testing( void ) {};
	Testing( int par ) { _par = par;};
	Testing( const Testing& copy ) { this->_par = copy.getPar();};
	~Testing( ) {};
	Testing&	operator=( const Testing& ref ) { this->_par = ref.getPar(); return *this;};
	bool		operator>( const Testing& ref ) const { return (this->_par > ref.getPar());};
	bool		operator<( const Testing& ref ) const { return (this->_par < ref.getPar());};

	int			getPar( void ) const { return this->_par;};
};

std::ostream& operator<<( std::ostream & stream, const Testing & ref)
{
	stream << ref.getPar();

	return stream;
}

int		main( void )
{
	int		arr[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	iter(arr, SIZE, printArr);
	std::cout << std::endl;
	iter(arr, SIZE, func);
	iter(arr, SIZE, printArr);
	std::cout << std::endl;

	const char *str = "Hello world";
	iter(str, 12, printArr);
	iter(str, 12, charFunc);
	std::cout << std::endl;


	return (0);
}

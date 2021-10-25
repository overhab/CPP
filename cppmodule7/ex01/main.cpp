#include "iter.hpp"

class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T & x ) { std::cout << x << std::endl; return; } // removed const 

int		main( void )
{
	int		arr[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	iter(arr, SIZE, printArr);
	std::cout << std::endl;
	iter(arr, SIZE, func);
	iter(arr, SIZE, printArr);
	std::cout << std::endl;

	std::string str("Hello World");
	iter(str.c_str(), str.length(), printArr);
	std::cout << std::endl;

	std::string arrStr[] = {"raz", "dva", "three"};
	iter(arrStr, 3, printArr);
	std::cout << std::endl;

	std::cout << "------CHECKLIST------" << std::endl;

	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
	Awesome tab2[5];

	iter( tab, 5, print );
	iter( tab2, 5, print );


	return (0);
}

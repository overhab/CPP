#include "whatever.hpp"
#include <iostream>

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

class Awesome
{
	public:
		Awesome(void) : _n(0) {}
		Awesome( int n ) : _n( n ) {}
		Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
		bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
		bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
		bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
		bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
		bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
		bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
		int get_n() const { return _n; }
	private:
		int _n;
};

std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

int		main( void )
{
	int a = 12;
	int b = 28;

	std::cout << "  INT SWAP" << std::endl;
	std::cout << "---------------" << std::endl;
	std::cout << "a = " << a  << "\tb = " << b << std::endl;
	swap(a, b);
	std::cout << "a = " << a  << "\tb = " << b << std::endl;
	std::cout << "---------------" << std::endl;
	std::cout << "max is: " << max(a, b) << "\nmin is: " << min(a, b)
		<< std::endl;
	std::cout << "---------------" << std::endl;

	float c = 49.44f;
	float d = 884.4f;

	std::cout << " FLOAT SWAP" << std::endl;
	std::cout << "---------------" << std::endl;
	std::cout << "pre: c = " << c  << "\td = " << d << std::endl;
	swap(c, d);
	std::cout << "post: a = " << c  << "\td = " << d << std::endl;
	std::cout << "---------------" << std::endl;
	std::cout << "max is: " << max(c, d) << "\nmin is: " << min(c, d)
		<< std::endl;
	std::cout << "---------------" << std::endl;

	char ch1 = 'a';
	char ch2 = 'A';

	std::cout << " CHAR SWAP" << std::endl;
	std::cout << "---------------" << std::endl;
	std::cout << "pre: ch1 = " << ch1  << "\tch2 = " << ch2 << std::endl;
	swap(ch1, ch2);
	std::cout << "post: ch1 = " << ch1  << "\tch2 = " << ch2 << std::endl;
	std::cout << "---------------" << std::endl;
	std::cout << "max is: " << max(ch1, ch2) << "\nmin is: " << min(ch1, ch2)
		<< std::endl;
	std::cout << "---------------" << std::endl;

	Testing cl1(49);
	Testing cl2(82);

	std::cout << " CLASS SWAP" << std::endl;
	std::cout << "---------------" << std::endl;
	std::cout << "pre: cl1 = " << cl1  << "\tcl2 = " << cl2 << std::endl;
	swap(cl1, cl2);
	std::cout << "post: cl1 = " << cl1  << "\tcl2 = " << cl2 << std::endl;
	std::cout << "---------------" << std::endl;
	std::cout << "max is: " << max(cl1, cl2) << "\nmin is: " << min(cl1, cl2)
		<< std::endl;
	std::cout << "---------------" << std::endl;

	std::string st1 = "Hello";
	std::string st2 = "hello";

	std::cout << " STRING SWAP" << std::endl;
	std::cout << "---------------" << std::endl;
	std::cout << "pre: st1 = " << st1  << "\tst2 = " << st2 << std::endl;
	swap(st1, st2);
	std::cout << "post: st1 = " << st1  << "\tst2 = " << st2 << std::endl;
	std::cout << "---------------" << std::endl;
	std::cout << "max is: " << max(st1, st2) << "\nmin is: " << min(st1, st2)
		<< std::endl;
	std::cout << "----CHECKLIST------" << std::endl;
	Awesome aws1(2), aws2(4);

	swap(aws1, aws2);
	std::cout << aws1 << " " << aws2 << std::endl;
	std::cout << max(aws1, aws2) << std::endl;
	std::cout << min(aws1, aws2) << std::endl;
	return (0);
	
	return (0);
}

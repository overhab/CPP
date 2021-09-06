#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <deque>
# include <iterator>
# include <queue>

template < typename T >
class MutantStack : public std::stack<T>
{
private:
	//std::deque<int>::iterator	it;
	//std::deque<T>		_con = std::stack<T>::c;
public:
	MutantStack( void ) {};
	MutantStack( const MutantStack<T>& copy ) {};
	virtual ~MutantStack( ) {};

	typedef typename	std::stack<T>::container_type::iterator		iterator;

	iterator		begin( void ){ return this->c.begin();};
	iterator		end( void ){ return this->c.end();};
	MutantStack<T>& operator=( const MutantStack<T>& ref );
};

#endif

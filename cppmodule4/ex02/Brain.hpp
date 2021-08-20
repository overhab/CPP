#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

# define I_SIZE 100

class Brain
{
private:
	std::string		*_ideas;
	static int		index;
public:
	Brain( void );
	Brain( const Brain& copy );
	~Brain( );

	void			copyData( const Brain& copy );
	void			setIdea( const std::string& idea );
	std::string		getIdea( unsigned int i ) const;
	Brain&			operator=( const Brain& ref );
};

#endif

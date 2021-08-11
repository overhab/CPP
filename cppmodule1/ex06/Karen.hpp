#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <sstream>
# define SIZE 5

enum	e_logLevel
{
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	NOTHING
};

class Karen
{
private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
	void	nothing( void );
	void 	(Karen::*funcPtr[SIZE])(void);
	int		getIndex( const std::string& level);

	std::string levels[SIZE - 1];
public:
	Karen( void );
	~Karen();
	void	complain( std::string level );
};

#endif

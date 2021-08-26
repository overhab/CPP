#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include "main.hpp"

class Convert
{
private:
	std::string		_input;
	size_t			_type;

	enum	_typeList{
		CHAR = 1,
		INT,
		FLOAT,
		DOUBLE,
		INF
	};
public:
	Convert( void );
	Convert( const Convert& copy );
	Convert( const std::string & input );

	void			convert( void );
	std::string		getInput( void ) const;
	size_t			getType( void ) const;
	void			setType( size_t type );

	bool			isFloat( void );
	bool			isDigit( void );
	bool			checkMinus( void ) const;
	bool			checkInput( void );
	int				displayInf( void ) const;

	explicit operator	float() const;
	explicit operator	int() const;
	explicit operator	double() const;
	explicit operator	char() const;
	~Convert( );
	Convert& operator=( const Convert& ref );
};

#endif

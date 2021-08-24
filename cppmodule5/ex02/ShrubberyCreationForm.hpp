#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "Form.hpp"
class Bureaucrat;

class ShrubberyCreationForm	: public Form
{
private:
	std::string 	_asciiTree;
public:
	ShrubberyCreationForm( void );
	ShrubberyCreationForm( const ShrubberyCreationForm& copy );
	ShrubberyCreationForm( const std::string& target );
	~ShrubberyCreationForm( );

	bool	execute( Bureaucrat const & executor ) const;
	ShrubberyCreationForm& operator=( const ShrubberyCreationForm& ref );
};

#endif

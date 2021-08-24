#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <fstream>
# include "Form.hpp"
class Bureaucrat;

class PresidentialPardonForm : public Form
{
private:

public:
	PresidentialPardonForm( void );
	PresidentialPardonForm( const PresidentialPardonForm& copy );
	PresidentialPardonForm( const std::string& target );
	~PresidentialPardonForm( );

	bool	execute( Bureaucrat const & executor ) const;
	PresidentialPardonForm& operator=( const PresidentialPardonForm& ref );
};

#endif

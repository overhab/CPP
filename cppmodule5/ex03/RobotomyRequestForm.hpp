#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <fstream>
# include "Form.hpp"
# include <cstdlib>
# include <ctime>
class Bureaucrat;

class RobotomyRequestForm : public Form
{
private:

public:
	RobotomyRequestForm( void );
	RobotomyRequestForm( const RobotomyRequestForm& copy );
	RobotomyRequestForm( const std::string& target );
	~RobotomyRequestForm( );

	bool	execute( Bureaucrat const & executor ) const;
	RobotomyRequestForm& operator=( const RobotomyRequestForm& ref );
};

#endif

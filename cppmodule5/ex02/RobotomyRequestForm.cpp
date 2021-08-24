#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : Form()
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& copy ) : Form(copy)
{
}

RobotomyRequestForm::RobotomyRequestForm( const std::string& target ) : Form("Robotomy", target, 72, 45)
{
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm& ref )
{
	Form::operator=(ref);
	return (*this);
}

bool	RobotomyRequestForm::execute( Bureaucrat const & executor ) const
{
	if (this->isSigned())
	{
		if (executor.getGrade() <= this->getExecGrade())
		{
			std::srand(std::time(NULL));
			if (std::rand() % 2)
			{
				std::cout << "\"" << this->getTarget()
				<< " has been robotomized successfully.\"" << std::endl;
			}
			else
				std::cout << "\"Robotomy failed!\"" << std::endl;
			return true;
		}
		throw (Form::GradeTooLowException());
		return false;

	}
	throw(Form::NotSignedException());
	return false;
}

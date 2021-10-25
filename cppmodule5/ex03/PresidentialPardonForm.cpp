#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : Form()
{
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& copy ) : Form(copy)
{
}

PresidentialPardonForm::PresidentialPardonForm( const std::string& target ) : Form("Pardon", target, 25, 5)
{
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm& ref )
{
	Form::operator=(ref);
	return (*this);
}

bool	PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{
	if (this->isSigned())
	{
		if (executor.getGrade() <= this->getExecGrade())
		{
			std::cout << executor.getName() << " executes " << this->getName()
				<< std::endl;
			std::cout << "\"" << this->getTarget() << " has been pardoned by Zafod Beeblebrox.\""
				<< std::endl;
			return true;
		}
		throw (Form::GradeTooLowException());
		return false;

	}
	throw(Form::NotSignedException());
	return false;
}

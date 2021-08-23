#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat( void ) : _name("default"), _grade(100)
{
}

Bureaucrat::Bureaucrat( const Bureaucrat& copy ) : _grade(copy.getGrade())
{
}

Bureaucrat::Bureaucrat( const std::string & name, unsigned int grade ) : _name(name), _grade(grade)
{
	if (_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

Bureaucrat::~Bureaucrat( void )
{
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& ref )
{
	this->_grade = ref.getGrade();
	return (*this);
}

std::ostream& operator<<( std::ostream& stream, const Bureaucrat& ref)
{
	stream << ref.getName() << ", bureaucrat grade " << ref.getGrade();
	return (stream);
}

std::string		Bureaucrat::getName(void) const
{
	return (this->_name);
}

unsigned int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void			Bureaucrat::incGrade(void)
{
	if (--this->_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
}

void			Bureaucrat::deGrade(void)
{
	if (++this->_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

void			Bureaucrat::signForm(Form& form) const
{
	try	{
		if (!form.beSigned(*this))
			return ;
		std::cout << this->getName() << " signs " << form.getName()
			<< std::endl;
	}
	catch(Form::GradeTooLowException& err)
	{
		std::cout << this->getName() << " cannot sign " << form.getName()
			<< "! Grade is too low." << std::endl;
	}
	catch(Form::AlreadySigned& err)
	{
		std::cout << form.getName() << " " << err.what() << std::endl;
	}
}

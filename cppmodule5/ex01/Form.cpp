#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form( void )
{
}

Form::Form( const std::string & name, unsigned int gradeToSign, unsigned int gradeToExec )
	: _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec), _isSigned(false)
{
	if (_gradeToSign < 1 || _gradeToExec < 1)
		throw (Form::GradeTooHighException());
	else if (_gradeToSign > 150 || _gradeToExec > 150)
		throw (Form::GradeTooLowException());
}

Form::Form( const Form& copy )
	: _name(copy.getName()), _gradeToSign(copy.getSignGrade()), _gradeToExec(copy.getExecGrade()), _isSigned(false)
{
}

Form::~Form( void )
{
}

Form& Form::operator=( const Form& ref )
{
	this->_gradeToSign = ref.getSignGrade();
	this->_gradeToExec = ref.getExecGrade();
	this->_isSigned = false;
	return (*this);
}

std::ostream& operator<<( std::ostream& stream, const Form& ref)
{
	stream << "Form: " << ref.getName() << ";\tGrade to sign: "
		<< ref.getSignGrade() << ";\tGrade to execute: " << ref.getExecGrade()
			<< ";\tSigned: " << ref.isSigned();
	return (stream);
}

std::string		Form::getName(void) const
{
	return (this->_name);
}

unsigned int	Form::getSignGrade(void) const
{
	return (this->_gradeToSign);
}

unsigned int	Form::getExecGrade(void) const
{
	return (this->_gradeToExec);
}

bool			Form::isSigned(void) const
{
	return (this->_isSigned);
}

bool			Form::beSigned(const Bureaucrat& bureau)
{
	if (this->_isSigned)
	{
		std::cout << "Form: " << this->getName() << " is signed.";
		return false;
	}
	if (bureau.getGrade() <= this->getSignGrade())
	{
		this->_isSigned = true;
		return true;
	}
	throw (Form::GradeTooLowException());
	return false;
}

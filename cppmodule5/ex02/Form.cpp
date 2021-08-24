#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form( void )
	: _name("default"), _target(NULL), _gradeToSign(150), _gradeToExec(150), _isSigned(false)
{
}

Form::Form( const std::string & name, const std::string & target, unsigned int gradeToSign, unsigned int gradeToExec )
	: _name(name), _target(target), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec), _isSigned(false)
{
	if (_gradeToSign < 1 || _gradeToExec < 1)
		throw (Form::GradeTooHighException());
	else if (_gradeToSign > 150 || _gradeToExec > 150)
		throw (Form::GradeTooLowException());
}

Form::Form( const Form& copy )
	: _name(copy.getName()), _target(copy._target), _gradeToSign(copy.getSignGrade()), _gradeToExec(copy.getExecGrade()), _isSigned(false)
{
}

Form::~Form( void )
{
}

Form& Form::operator=( const Form& ref )
{
	this->_gradeToSign = ref.getSignGrade();
	this->_gradeToExec = ref.getExecGrade();
	this->_target = ref.getTarget();
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
		throw(Form::AlreadySignedException());
	}
	if (bureau.getGrade() <= this->getSignGrade())
	{
		this->_isSigned = true;
		return true;
	}
	throw (Form::GradeTooLowException());
	return false;
}

std::string		Form::getTarget( void ) const
{
	return (this->_target);
}

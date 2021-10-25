#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
class Bureaucrat;

class Form
{
public:
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade is too high!");
			}
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade is too low!");
			}
	};
	class AlreadySignedException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("form is already signed.");
			}
	};
	class NotSignedException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("form is already signed.");
			}
	};
private:
	const std::string		_name;
	std::string				_target;
	const unsigned int		_gradeToSign;
	const unsigned int		_gradeToExec;
	bool					_isSigned;
public:
	Form( void );
	Form( const Form& copy );
	Form( const std::string & name, const std::string & target, const unsigned int gradeToSign, const unsigned int gradeToExec );
	virtual ~Form( );

	std::string		getName(void) const;
	unsigned int	getSignGrade(void) const;
	unsigned int	getExecGrade(void) const;
	bool			isSigned(void) const;
	bool			beSigned(const Bureaucrat& bureau);
	std::string		getTarget( void ) const;
	virtual bool	execute(Bureaucrat const & executor) const = 0;

	Form& operator=( const Form& ref );
};

std::ostream& operator<<( std::ostream & stream, const Form & ref);


#endif

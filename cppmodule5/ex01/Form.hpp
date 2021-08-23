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
				return ("Error: Grade is too high!");
			}
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Error: Grade is too low!");
			}
	};
private:
	const std::string		_name;
	unsigned int			_gradeToSign;
	unsigned int			_gradeToExec;
	bool					_isSigned;
public:
	Form( void );
	Form( const Form& copy );
	Form( const std::string & name, unsigned int gradeToSign, unsigned int gradeToExec );
	~Form( );

	std::string		getName(void) const;
	unsigned int	getSignGrade(void) const;
	unsigned int	getExecGrade(void) const;
	bool			isSigned(void) const;
	bool			beSigned(const Bureaucrat& bureau);
	Form& operator=( const Form& ref );
};

std::ostream& operator<<( std::ostream & stream, const Form & ref);


#endif

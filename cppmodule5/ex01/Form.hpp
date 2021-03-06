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
				return ("Error: grade is too high!");
			}
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Error: grade is too low!");
			}
	};
	class AlreadySigned : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("form is already signed.");
			}
	};
private:
	const std::string		_name;
	const unsigned int		_gradeToSign;
	const unsigned int		_gradeToExec;
	bool					_isSigned;
public:
	Form( void );
	Form( const Form& copy );
	Form( const std::string & name, const unsigned int gradeToSign, const unsigned int gradeToExec );
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

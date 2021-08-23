#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdlib.h>
class Form;

class Bureaucrat
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
	unsigned int			_grade;
public:
	Bureaucrat( void );
	Bureaucrat( const Bureaucrat& copy );
	Bureaucrat( const std::string & name, unsigned int grade );
	~Bureaucrat( );

	std::string		getName(void) const;
	unsigned int	getGrade(void) const;

	void			signForm(Form& form) const;
	void			incGrade(void);
	void			deGrade(void);
	Bureaucrat&		operator=( const Bureaucrat& ref );

};

std::ostream& operator<<( std::ostream & stream, const Bureaucrat & ref);


#endif

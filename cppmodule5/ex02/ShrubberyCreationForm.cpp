#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form()
{
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& copy ) : Form(copy)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& target ) : Form("Shrubbery", target, 145, 137)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm& ref )
{
	Form::operator=(ref);
	return (*this);
}

bool	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const
{
	if (this->isSigned())
	{
		if (executor.getGrade() <= this->getExecGrade())
		{
			std::string		name = this->getTarget() + "_shrubbery";
			std::ofstream	file(name.c_str());
			if (file.fail())
			{
				std::cerr << "File creation failed!" << std::endl;
				return false;	
			}
			std::cout << executor.getName() << " executes " << this->getName()
				<< std::endl;
			file << "            ,@@@@@@@,\n"
					"    ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
					" ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
					",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
					"%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
					"%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
					"`&%\\ ` /%&'    |.|        \\ '|8'\n"
					"    |o|        | |         | |\n"
					"    |.|        | |         | |\n"
					" \\\\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n";
			file.close();
			return true;
		}
		throw (Form::GradeTooLowException());
		return false;

	}
	throw(Form::NotSignedException());
	return false;
}

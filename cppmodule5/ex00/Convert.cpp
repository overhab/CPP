#include "Convert.hpp"

Convert::Convert( void ) : _input(NULL), _type(0)
{
}

Convert::Convert( const std::string & input ) : _input(input), _type(0)
{
}

Convert::Convert( const Convert& copy ) : _input(copy.getInput()), _type(0)
{
}

Convert::~Convert( void )
{
}

Convert& Convert::operator=( const Convert& ref )
{
	this->_input = ref.getInput();
	this->_type = 0;
	return (*this);
}

std::string		Convert::getInput( void ) const
{
	return (this->_input);
}

size_t			Convert::getType( void ) const
{
	return (this->_type);
}

void			Convert::setType( size_t type )
{
	this->_type = type;
}

Convert::operator	float() const
{
	float	ret;

	if (this->getType() == CHAR)
		ret = static_cast<char>((this->getInput().c_str())[0]);
	else
		ret = std::strtof(this->getInput().c_str(), NULL);
	std::cout << std::fixed << std::setprecision(1) << "float: " << ret << "f" <<std::endl;
	return (ret);
}

Convert::operator	int() const
{
	int		ret = 0;

	if (this->getType() == CHAR)
		ret = static_cast<char>((this->getInput().c_str())[0]);
	else
	{
		try {
			ret = std::stoi(this->getInput());
		}
		catch(const std::out_of_range &oor)
		{
			std::cout << "int: out of range" << std::endl;
			ret = 0;
			return (ret);
		}
	}
	std::cout << "int: " << ret << std::endl;
	return (ret);
}

Convert::operator	double() const
{
	double	ret;

	if (this->getType() == CHAR)
		ret = static_cast<char>((this->getInput().c_str())[0]);
	else
		ret = std::strtod(this->getInput().c_str(), NULL);
	std::cout << std::fixed << std::setprecision(1) << "double: " << ret << std::endl;
	return (ret);
}

Convert::operator	char() const
{
	char	ret = 0;

	if (this->getType() == CHAR)
		ret = (this->getInput().c_str())[0];
	else if (this->getType() != 0)
	{
		try {
			ret = std::stoi(this->getInput());
		}
		catch(const std::out_of_range &oor)
		{
			std::cout << "char: Non displayable" << std::endl;
			return (0);
		}
	}
	if (isprint(ret))
		std::cout << "char: \'" << ret << "\'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	return (ret);
}

size_t			Convert::countChar(const std::string &str, char c)
{
	std::string::const_iterator i;
	size_t count = 0;

	for (i = str.begin(); i != str.end(); i++)
	{
		if (*i == c)
			count++;
	}
	return count;
}

bool			Convert::isFloat( void )
{
	std::string tmp = this->getInput();
	size_t d = this->countChar(tmp, '.');
	size_t f = this->countChar(tmp, 'f');
	if (d == 1 && f == 0)
	{
		this->setType(DOUBLE);
		return false;
	}
	else if (d > 1 || f > 1 || (d == 0 && f == 0))
		return false;
	return true;
}

bool			Convert::checkMinus( void )
{
	std::string tmp = this->getInput();

	size_t d = this->countChar(tmp, '-');
	if ((d > 1) || (d == 1 && (tmp.c_str())[0] != '-'))
		return false;
	return true;
}

bool			Convert::isDigit( void )
{
	if (this->getInput().find_first_not_of("-0123456789") == std::string::npos)
		this->setType(INT);
	if (this->isFloat())
	{
		this->setType(FLOAT);
		return true;
	}
	if (!this->checkMinus())
		return false;
	return this->getType();
}

int				Convert::displayInf( void ) const
{
	std::string tmp = this->getInput();
	if (!tmp.compare("-inff") || !tmp.compare("+inff"))
	{
		std::cout << "char: impossible"<< "\nint: impossible"
			<< "\nfloat: " << tmp << "\ndouble: " << tmp.substr(0, tmp.size() - 1) << std::endl;
	}
	else if (!tmp.compare("-inf") || !tmp.compare("+inf"))
	{
		std::cout << "char: impossible"<< "\nint: impossible"
			<< "\nfloat: " << tmp << "f\ndouble: " << tmp << std::endl;
	}
	return 0;
}

bool			Convert::checkInput( void )
{
	if (!this->getInput().compare("-inff") || !this->getInput().compare("+inff")
		|| !this->getInput().compare("-inf") || !this->getInput().compare("+inf"))
	{
		this->setType(INF);
		return this->displayInf();
	}
	if ((this->getInput().length() == 1) && (!isdigit((this->getInput().c_str())[0])))
	{
		this->setType(CHAR);
		return true;
	}
	if (((this->getInput().find_first_not_of("-0123456789.f") == std::string::npos)) 
		&& this->isDigit())
			return true;
	return false;
}

void			Convert::convert( void )
{
	if (this->checkInput())
	{
		char	chr		= static_cast<char>(*this);
		int 	integer = static_cast<int>(*this);
		float	fl 		= static_cast<float>(*this);
		double	db		= static_cast<double>(*this);
		(void)chr;
		(void)integer;
		(void)fl;
		(void)db;
		return ;
	}
	if (this->getType() != INF)
	{
		std::cout << "char: impossible"<< "\nint: impossible"
			<< "\nfloat: nanf" << "\ndouble: nan" << std::endl;
	}
}

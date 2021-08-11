#include "Karen.hpp"

Karen::Karen( void )
{
	funcPtr[0] = &Karen::debug;
	funcPtr[1] = &Karen::info;
	funcPtr[2] = &Karen::warning;
	funcPtr[3] = &Karen::error;
	funcPtr[4] = &Karen::nothing;
	levels[0] = "DEBUG"; 
	levels[1] = "INFO"; 
	levels[2] = "WARNING"; 
	levels[3] = "ERROR";
}

Karen::~Karen()
{
}

void	Karen::debug( void )
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love to get extra bacon " \
		"for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"
			 << std::endl;
}
void	Karen::info( void )
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra " \
		"bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" 
			<< std::endl;
}
void	Karen::warning( void )
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been " \
		"coming here for years and you just started working here last month."
			<< std::endl;
}
void	Karen::error( void )
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now."
 		<< std::endl;
}

void	Karen::nothing( void )
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

int		Karen::getIndex( const std::string& level)
{
	int	i = 0;

	while (level.compare(this->levels[i]) && i < SIZE - 1)
		i++;
	return (i);
}

void	Karen::complain( std::string level )
{
	switch(this->getIndex(level))
	{
		case DEBUG:
			(this->*funcPtr[DEBUG])();
		case INFO:
			(this->*funcPtr[INFO])();
		case WARNING:
			(this->*funcPtr[WARNING])();	
		case ERROR:
			(this->*funcPtr[ERROR])();
			break ;
		default:
			(this->*funcPtr[NOTHING])();
	}
}

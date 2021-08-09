#include <string>
#include <iostream>

int		main ( void )
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "Adress: " << &string << "\tPTR adress: " << stringPTR
		<< "\tREF adress: " << &stringREF << '\n' << "stringPTR: "
			<< *stringPTR << "\tstringREF: " << stringREF << std::endl;
}

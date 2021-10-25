#ifndef MAIN_HPP
# define MAIN_HPP

# include <iostream>
# include <stdint.h>

struct Data
{
	std::string		data_string;
	long long		data_long;
};

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif

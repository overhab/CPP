#include "main.hpp"

uintptr_t 	serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int		main( void )
{
	Data		*data = new Data;
	//uintptr_t	ptr;

	data->data_string = "LOL CHE";
	std::cout << "original data: " << data << "\nstring: " << data->data_string << std::endl;
	//ptr = serialize(data);
	//std::cout << "serialize ptr: " << ptr << std::endl;
	std::cout << "deserialize data: " << deserialize(serialize(data)) << "\nstring: " << data->data_string << std::endl;

	delete data;

	return (0);
}

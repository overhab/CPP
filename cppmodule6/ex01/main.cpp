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
	uintptr_t	ptr;
	Data		*deserialized;

	data->data_string = "Hello world! Test test.";
	data->data_long = 10;

	std::cout << "Original data: " << data << "\nstring: \"" << data->data_string << "\" long: "
		<< data->data_long << std::endl;

	ptr = serialize(data);
	deserialized = deserialize(ptr);
	
	std::cout << "Deserialized data: " << deserialized << "\nstring: \"" << data->data_string
	<< "\" long: " << data->data_long << std::endl;

	delete data;

	return (0);
}

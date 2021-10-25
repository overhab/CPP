#include "Array.hpp"

#define MAX_VAL 750

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;

	std::cout << "---------------------------" << std::endl;
	Array<char> empty;

	Array<int> poop(3);

	std::cout << "init array: ";
	for (int i = 0; i < 3; i++)
		std::cout << poop[i] << " ";
	std::cout << std::endl;

	poop[2] = 12;

	std::cout <<  "array after: ";
	for (int i = 0; i < 3; i++)
		std::cout << poop[i] << " ";
	std::cout << std::endl;

	Array<std::string> str(10);

	std::cout <<"["<<  str[2]<< "]" << std::endl;
	str[2] = "Hello";
	std::cout <<"["<<  str[2]<< "]" << std::endl;

	Array<int> tmp(12);

	tmp = poop;
	std::cout << "tmp[2] : " << tmp[2] << std::endl;
	std::cout << "Deep copy check: " << std::endl;
	tmp[1] = -42;
	std::cout << "poop[1]: " << poop[1] << std::endl;
	std::cout << "tmp[1]: " << tmp[1] << std::endl;
	
	try { 
		str[14] = "oops";
	}
	catch (std::exception & err){
		std::cout << err.what() << std::endl;
		return 0;
	}


	std::cout << "fin." << std::endl;
    return 0;
}

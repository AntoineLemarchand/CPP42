#include <iostream>

#define uintptr_t unsigned long

struct Data
{
	std::string	name;
	int			val;
};

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main( void )
{
	Data test;
	test.name = "hello";
	test.val = 42;

	std::cout << test.name << " " << test.val << std::endl;

	test = *deserialize(serialize(&test));

	std::cout << test.name << " " << test.val << std::endl;
	return (0);
}

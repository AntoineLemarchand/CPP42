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
	uintptr_t	raw;
	test.name = "hello";
	test.val = 42;

	std::cout << "init: " << test.name << ' ' << test.val << std::endl;

	raw = serialize(&test);

	std::cout << "serialized: " << raw << std::endl;

	test = *deserialize(raw);

	std::cout << "deserialized: " << test.name << ' ' << test.val << std::endl;
	return (0);
}

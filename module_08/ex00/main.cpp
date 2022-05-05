#include <iostream>
#include <vector>
#include "easyFind.hpp"

int main( void )
{
	std::vector<int>	test;
	test.push_back(10);
	test.push_back(4);
	test.push_back(2);
	test.push_back(42);
	test.push_back(1337);

	try
	{
		(void)easyfind(test, 21);
	}
	catch (const std::exception& e)
	{
		std::cout << "number not found" << std::endl;
	}
	std::cout << *easyfind(test, 4) << *easyfind(test, 2) << std::endl;
	std::cout << *easyfind(test, 10) << *easyfind(test, 1337) << std::endl;
}

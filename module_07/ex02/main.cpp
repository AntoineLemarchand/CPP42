#include <iostream>
#include <cstdlib>
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
    delete [] mirror;//

	std::cout << "━━ Own Tests ━━" << std::endl;
	Array<std::string>A = Array<std::string>(5);
	A[0] = "Hello";
	A[1] = " World";
	A[2] = " !";
	A[3] = "\n";
	A[4] = "My size is ";

	std::cout << A[0] << A[1] << A[2] << A[3] << A[4] << A.size() << std::endl;

	Array<int>B = Array<int>(3);
	B[0] = 21;
	B[1] = 17;
	B[2] = 1;

	std::cout << B[0] + B[1] + B[2] + B.size() << std::endl;

	try
	{
		(void)B[3];
	}
	catch (Array<int>::OutOfBound& e)
	{
		std::cout << e.what() << std::endl;
	}

    return 0;
}

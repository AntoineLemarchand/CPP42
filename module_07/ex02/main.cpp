#include "Array.hpp"

int main( void )
{
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


}

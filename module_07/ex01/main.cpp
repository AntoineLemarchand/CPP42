#include <iostream>
#include "iter.hpp"

void	divide(float& f)
{
	f = f / 2;
}

void	putWord(std::string& s)
{
	std::cout << s;
}

void	putInt(int& i)
{
	std::cout << i;
}

int	main( void )
{
	std::string sentence[] = {"Hello ", "World ", "!"};
	::iter<std::string>(sentence, 3, putWord);
	std::cout << std::endl;

	float test[] = {42.42f, 21.21f, 10.f};
	std::cout << test[0] << ' '  << test[1] << ' ' << test[2] << std::endl;
	::iter<float>(test, 3, divide);
	std::cout << test[0] << ' '  << test[1] << ' ' << test[2] << std::endl;

	int	empty[] = {};
	::iter<int>(empty, 0, putInt);
}

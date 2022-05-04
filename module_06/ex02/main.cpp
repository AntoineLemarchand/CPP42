#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate( void )
{
	srand(time(NULL));
	switch (rand() % 3 + 1)
	{
		case 1:
			std::cout << 'A';
			return (new A());
			break;
		case 2:
			std::cout << 'B';
			return (new B());
			break;
		case 3:
			std::cout << 'C';
			return (new C());
			break;
	}
}

void	identify( Base* p )
{
	if (dynamic_cast<A*>(p))
		std::cout << 'A';
	else if (dynamic_cast<B*>(p))
		std::cout << 'B';
	else
		std::cout << 'C';
}

void identify( Base& p )
{
	try
	{
		(void)dynamic_cast<A&>(p);
	}
	catch (...)
	{
		try
		{
			(void)dynamic_cast<B&>(p);
		}
		catch (...)
		{
			return (C);
		}
		return (B);
	}
	return (A);
}

int main( void )
{
	std::cout << "┏━━━━━━━━━┓" << std::endl;
	std::cout << "┃ pointer ┃" << std::endl;
	std::cout << "┗━━━━━━━━━┛" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		Base* base = generate();
		std::cout << " = " << identify(base) << std::endl;
	}
}

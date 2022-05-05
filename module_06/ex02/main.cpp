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
	return (NULL);
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
	if (dynamic_cast<A*>(&p))
		std::cout << 'A';
	else if (dynamic_cast<B*>(&p))
		std::cout << 'B';
	else
		std::cout << 'C';
}

int main( void )
{
		Base* base = generate();
		std::cout << " | idendification by pointer: ";
		identify(base);
		std::cout << " | idendification by reference: ";
		identify(*base);
		std::cout << std::endl;
		delete base;
		return (0);
}

#include <iostream>
#include "Caster.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		std::cout << "Usage: ./Cast <literal>" << std::endl;
	else
	{
		std::string arg = av[1];
		Caster	caster = Caster(arg);
		caster.putChar();
		caster.putInt();
		caster.putFloat();
		caster.putDouble();
	}
}

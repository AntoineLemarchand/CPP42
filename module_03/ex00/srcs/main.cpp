#include "ClapTrap.hpp"
#include <iostream>

static void	status(ClapTrap C)
{
	std::cout << "name: " << C.getName() << "||";
	std::cout << "HP: " << C.getHP() << "||";
	std::cout << "energy: " << C.getEnergy() << "||";
	std::cout << "Attack: " << C.getAttack() << std::endl;
}

int main( void )
{
	ClapTrap C1 = ClapTrap("CL4P-TP-1");
	ClapTrap C2 = ClapTrap("CL4P-TP-2");

	C2.setHP(50);
	C1.setAttack(100);

	C1.setEnergy(1);


	std::cout << "--- STATUS ---" << std::endl;
	status(C1);
	status(C2);
	std::cout << "--------------" << std::endl;
	C1.attack("CL4P-TP-2");
	C2.attack("CL4P-TP-1");
	C1.takeDamage(C2.getAttack());
	C2.takeDamage(C1.getAttack());

	std::cout << "--- STATUS ---" << std::endl;
	status(C1);
	status(C2);
	std::cout << "--------------" << std::endl;
	C1.attack("CL4P-TP-2");
	C2.attack("CL4P-TP-1");
}

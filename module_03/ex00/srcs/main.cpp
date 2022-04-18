#include "ClapTrap.hpp"
#include <iostream>

static void	claptus(ClapTrap& C)
{
	std::cout << "name: " << C.getName() << " ● ";
	std::cout << "HP: " << C.getHP() << " ● ";
	std::cout << "energy: " << C.getEnergy() << " ● ";
	std::cout << "Attack: " << C.getAttack() << std::endl;
}

static void	claptest( void )
{
	std::cout << "┏━━━━━━━━━━━━━━━━━━━━┓" << std::endl;
	std::cout << "┃   CLAPTRAP TEST    ┃" << std::endl;
	std::cout << "┗━━━━━━━━━━━━━━━━━━━━┛" << std::endl;

	ClapTrap C1 = ClapTrap("CL4P-TP-1");
	ClapTrap C2 = ClapTrap("CL4P-TP-2");

	C2.setHP(50);
	C1.setAttack(51);

	C1.setEnergy(1);


	std::cout << "━━━━STATUS━━━━" << std::endl;
	claptus(C1);
	claptus(C2);
	std::cout << "━━━━━━━━━━━━━━" << std::endl;

	C2.beRepaired(10);
	C1.attack("CL4P-TP-2");
	C2.attack("CL4P-TP-1");
	C1.takeDamage(C2.getAttack());
	C2.takeDamage(C1.getAttack());

	std::cout << "━━━━STATUS━━━━" << std::endl;
	claptus(C1);
	claptus(C2);
	std::cout << "━━━━━━━━━━━━━━" << std::endl;

	C1.attack("CL4P-TP-2");
	C2.attack("CL4P-TP-1");
}

int main( void )
{
	claptest();
}

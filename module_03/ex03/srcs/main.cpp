#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

static void	claptus(ClapTrap& C)
{
	std::cout << "name: " << C.getName() << " ● ";
	std::cout << "HP: " << C.getHP() << " ● ";
	std::cout << "energy: " << C.getEnergy() << " ● ";
	std::cout << "Attack: " << C.getAttack() << std::endl;
}

static void	scavtus(ScavTrap& S)
{
	std::cout << "name: " << S.getName() << " ● ";
	std::cout << "HP: " << S.getHP() << " ● ";
	std::cout << "energy: " << S.getEnergy() << " ● ";
	std::cout << "Attack: " << S.getAttack() << std::endl;
}

static void	fragtus(FragTrap& F)
{
	std::cout << "name: " << F.getName() << " ● ";
	std::cout << "HP: " << F.getHP() << " ● ";
	std::cout << "energy: " << F.getEnergy() << " ● ";
	std::cout << "Attack: " << F.getAttack() << std::endl;
}

static void	diamtus(DiamondTrap& D)
{
	std::cout << "name: " << D.getName() << " ● ";
	std::cout << "HP: " << D.getHP() << " ● ";
	std::cout << "energy: " << D.getEnergy() << " ● ";
	std::cout << "Attack: " << D.getAttack() << std::endl;
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

static void	scavtest( void )
{
	std::cout << "┏━━━━━━━━━━━━━━━━━━━━┓" << std::endl;
	std::cout << "┃   SCAVTRAP TEST    ┃" << std::endl;
	std::cout << "┗━━━━━━━━━━━━━━━━━━━━┛" << std::endl;

	ScavTrap S1 = ScavTrap("SC4V-TP-1");
	ScavTrap S2 = ScavTrap("SC4V-TP-2");

	std::cout << "━━━━STATUS━━━━" << std::endl;
	scavtus(S1);
	scavtus(S2);
	std::cout << "━━━━━━━━━━━━━━" << std::endl;

	S1.guardGate();
	S2.attack("A Wall");

	std::cout << "━━━━STATUS━━━━" << std::endl;
	scavtus(S1);
	scavtus(S2);
	std::cout << "━━━━━━━━━━━━━━" << std::endl;
}

static void	fragtest( void )
{
	std::cout << "┏━━━━━━━━━━━━━━━━━━━━┓" << std::endl;
	std::cout << "┃   FRAGTRAP TEST    ┃" << std::endl;
	std::cout << "┗━━━━━━━━━━━━━━━━━━━━┛" << std::endl;

	FragTrap F1 = FragTrap("FR4G-TP-1");
	FragTrap F2 = FragTrap("FR4G-TP-2");

	std::cout << "━━━━STATUS━━━━" << std::endl;
	fragtus(F1);
	fragtus(F2);
	std::cout << "━━━━━━━━━━━━━━" << std::endl;
	F1.highFivesGuys();
}

static void	diamondtest( void )
{
	std::cout << "┏━━━━━━━━━━━━━━━━━━━━┓" << std::endl;
	std::cout << "┃   DIAMTRAP TEST    ┃" << std::endl;
	std::cout << "┗━━━━━━━━━━━━━━━━━━━━┛" << std::endl;

	DiamondTrap D1 = DiamondTrap("D14M-TP-1");
	DiamondTrap D2 = DiamondTrap("D14M-TP-2");

	std::cout << "━━━━STATUS━━━━" << std::endl;
	diamtus(D1);
	diamtus(D2);
	std::cout << "━━━━━━━━━━━━━━" << std::endl;
	D1.whoAmI();
	D1.attack("himself");
}

int main( void )
{
	claptest();
	scavtest();
	fragtest();
	diamondtest();
}

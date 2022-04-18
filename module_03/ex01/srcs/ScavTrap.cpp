#include <iostream>
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap()
{
	setName("ScavTrap");
	setHP(100);
	setEnergy(50);
	setAttack(20);
	std::cerr << "ScavTrap " << getName() << " constructed !" << std::endl;
}

ScavTrap::ScavTrap(const std::string name): ClapTrap(name)

{
	setHP(100);
	setEnergy(50);
	setAttack(20);
	std::cerr << "ScavTrap " << getName() << " name constructed !" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scavtrap): ClapTrap()
{
	*this = scavtrap;
	std::cerr << "ScavTrap " << getName() << " copy constructed !" << std::endl;
}

ScavTrap&	ScavTrap::operator = (const ScavTrap& scavtrap)
{
	setHP(scavtrap.getHP());
	setEnergy(scavtrap.getEnergy());
	setAttack(scavtrap.getAttack());
	std::cerr << "ScavTrap " << getName() << " equal constructed !" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cerr << "ScavTrap " << getName() << " destroyed !" << std::endl;
}

void	ScavTrap::guardGate( void )
{
	std::cout << "scavTrap: " << getName() << " is now in gatekeeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (getEnergy() >= 1 && getHP() > 0)
	{
		setEnergy(getEnergy() - 1);
		std::cout << "ScavTrap " << getName() << " attacks " << target ;
		std::cout << ", causing " << getAttack() << " points of damage!" << std::endl;
	}
}

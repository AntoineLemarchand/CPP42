#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap()
{
	setName("FragTrap");
	setHP(100);
	setEnergy(100);
	setAttack(30);
	std::cerr << "FragTrap " << getName() << " constructed !" << std::endl;
}

FragTrap::FragTrap(const std::string name): ClapTrap(name)
{
	setHP(100);
	setEnergy(100);
	setAttack(30);
	std::cerr << "FragTrap " << getName() << " name constructed !" << std::endl;
}

FragTrap::FragTrap(const FragTrap& scavtrap): ClapTrap()
{
	*this = scavtrap;
	std::cerr << "FragTrap " << getName() << " copy constructed !" << std::endl;
}

FragTrap&	FragTrap::operator = (const FragTrap& scavtrap)
{
	setHP(scavtrap.getHP());
	setEnergy(scavtrap.getEnergy());
	setAttack(scavtrap.getAttack());
	std::cerr << "FragTrap " << getName() << " equal constructed !" << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cerr << "FragTrap " << getName() << " destroyed !" << std::endl;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "Come on guys ! Give me five !" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (getEnergy() >= 1 && getHP() > 0)
	{
		setEnergy(getEnergy() - 1);
		std::cout << "FragTrap " << getName() << " attacks " << target ;
		std::cout << ", causing " << getAttack() << " points of damage!" << std::endl;
	}
}

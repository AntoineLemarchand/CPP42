#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
{
	this->name = name;
	this->weapon = &weapon;
}

HumanA::~HumanA()
{}

HumanA::HumanA(const HumanA& humanA)
{
	this->name = humanA.name;
	this->weapon = humanA.weapon;
}

HumanA HumanA::operator = (const HumanA& humanA)
{
	this->name = humanA.name;
	this->weapon = humanA.weapon;
	return (*this);
}

void	HumanA::attack( void )
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}

HumanB::HumanB(std::string name, Weapon& weapon)
{
	this->name = name;
	this->weapon = &weapon;
}

HumanB::~HumanB()
{}

HumanB::HumanB(const HumanB& humanB)
{
	this->name = humanB.name;
	this->weapon = humanB.weapon;
}

HumanB HumanB::operator = (const HumanB& humanB)
{
	this->name = humanB.name;
	this->weapon = humanB.weapon;
	return (*this);
}

void	HumanB::attack( void )
{
	std::cout << this->name << " attacks with their ";
	if (this->weapon != NULL)
		std::cout << this->weapon->getType() << std::endl;
	else
		std::cout << "fists" << std::endl;
}

void	HumanB::setWeapon( Weapon& weapon )
{
	this->weapon = &weapon;
}

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

/*
DiamondTrap::DiamondTrap(): _HP(FragTrap::FragTrap), _energy(ScavTrap::ScavTrap), _attack(FragTrap::FragTrap)
{
	std::cerr << "DiamondTrap Constructed" << std::endl; 
}
*/

DiamondTrap::DiamondTrap(const std::string name)
{
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	_HP = FragTrap::_HP;
	_energy = ScavTrap::_energy;
	_attack = FragTrap::_attack;
	std::cerr << "DiamondTrap name Constructed" << std::endl; 
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamondtrap): ClapTrap(diamondtrap), ScavTrap(diamondtrap), FragTrap(diamondtrap)
{
	*this = diamondtrap;
	std::cerr << "DiamondTrap copy Constructed" << std::endl; 
}

DiamondTrap& DiamondTrap::operator = (const DiamondTrap& diamondtrap)
{
	_name = diamondtrap._name;
	_HP = diamondtrap._HP;
	_energy = diamondtrap._energy;
	_attack = diamondtrap._attack;
	std::cerr << "DiamondTrap equal Constructed" << std::endl; 
	return (*this);
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "_name: " << _name << " ━ _clapname: " << ClapTrap::_name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cerr << "DiamondTrap " << _name <<  " Destroyed" << std::endl; 
}

#include <iostream>
#include "ClapTrap.hpp"

// ORTHODOX CANONIC NEEDS
ClapTrap::ClapTrap(): _HP(10), _energy(10), _attack(0)
{
	_name = "ClapTrap";
	std::cerr << "Claptrap: " << _name << "constructed !" << std::endl;
}

ClapTrap::ClapTrap(const std::string name): _HP(10), _energy(10), _attack(0)
{
	_name = name;
	std::cerr << "Claptrap: " << _name << "name constructed !" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& claptrap): _HP(10), _energy(10), _attack(0)
{
	_name = claptrap.getName();
	_HP = claptrap.getHP();
	_energy = claptrap.getEnergy();
	_attack = claptrap.getAttack();
	std::cerr << "Claptrap: " << _name << "copy constructed !" << std::endl;
}

ClapTrap& ClapTrap::operator = (const ClapTrap& claptrap)
{
	_name = claptrap.getName();
	_HP = claptrap.getHP();
	_energy = claptrap.getEnergy();
	_attack = claptrap.getAttack();
	std::cerr << "Claptrap: " << _name << "equal constructed !" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cerr << "Claptrap: " << _name << "destroyed !" << std::endl;
}

// SETTER-GETTER
std::string		ClapTrap::getName( void ) const
{
	return (_name);
}

unsigned int	ClapTrap::getHP( void ) const
{
	return (_HP);
}

unsigned int	ClapTrap::getEnergy( void ) const
{
	return (_energy);
}

unsigned int	ClapTrap::getAttack( void ) const
{
	return (_attack);
}

void	ClapTrap::setName( std::string name )
{
	_name = name;
}

void	ClapTrap::setHP( unsigned int hp )
{
	_HP = hp;
}

void	ClapTrap::setEnergy( unsigned int energy )
{
	_energy = energy;
}

void	ClapTrap::setAttack( unsigned int attack )
{
	_attack = attack;
}

// MISC
void	ClapTrap::attack(const std::string& target)
{
	if (_energy >= 1 && _HP > 0)
	{
		_energy--;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack << "points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_HP < amount)
		_HP = 0;
	else
		_HP -= amount;
	std::cout << "ClapTrap " << _name << " took " << amount << " points of damage" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy >= 1 && _HP > 0)
	{
		_energy--;
		std::cout << _name << " got repaired by " << amount << " points" << std::endl;
	}
}

#pragma once

# include <string>
# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		HumanB(std::string name, Weapon& weapon);
		~HumanB();
		HumanB(const HumanB& humanB);
		HumanB operator = (const HumanB& humanB);
		void	attack( void );
		void	setWeapon( Weapon& weapon );
	private:
		class Weapon*	weapon;
		std::string		name;
};

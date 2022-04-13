#pragma once

# include <string>
# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		HumanA(const HumanA& humanA);
		HumanA operator = (const HumanA& humanA);
		void	attack( void );
	private:
		class Weapon*	weapon;
		std::string		name;
};

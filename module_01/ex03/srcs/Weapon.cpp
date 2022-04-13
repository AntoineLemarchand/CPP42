#include <Weapon.hpp>

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon()
{}

Weapon::Weapon(const Weapon& weapon)
{
	this->type = weapon.type;
}

Weapon Weapon::operator = (const Weapon& weapon)
{
	this->type = weapon.type;
	return (*this);
}

std::string	Weapon::getType( void ) const
{
	return (this->type);
}

void	Weapon::setType( std::string type )
{
	this->type = type;
}

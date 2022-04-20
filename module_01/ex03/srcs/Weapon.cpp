#include <Weapon.hpp>

Weapon::Weapon(std::string type)
{
	if (type.compare(""))
		this->type = type;
	else
		this->type = "The weapon no one speak about";
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
	if (type.compare(""))
		this->type = type;
	else
		this->type = "The weapon no one speak about";
}

#include "AMateria.hpp"
#include "Ice.hpp"

Ice::Ice()
{}

Ice::Ice(const Ice& ice)
{
	(void)ice;
}

Ice& Ice::operator = (const Ice& ice)
{
	(void)ice;
	return (*this);
}

Ice::~Ice()
{
}

AMateria*	Ice::clone() const
{
	return (NULL);
}

void	Ice::use(ICharacter& character)
{
	(void)character;
}

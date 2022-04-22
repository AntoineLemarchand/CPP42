#include "Cure.hpp"

Cure::Cure()
{}

Cure::Cure(const Cure& cure)
{
	(void)cure;
}

Cure& Cure::operator = (const Cure& cure)
{
	(void)cure;
	return (*this);
}

Cure::~Cure()
{}

AMateria*	Cure::clone() const
{
	return (NULL);
}

void	Cure::use(ICharacter& character)
{
	(void)character;
}

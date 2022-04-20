#pragma once

class AMateria
{
	protected:
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria& amateria);
		AMateria operator = (const AMateria& amateria);
		~AMateria();

		std::string const & getType() const; //Returns the materia type

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

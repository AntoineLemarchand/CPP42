#pragma once

class	Cure: public AMateria
{
	public:
		Cure();
		Cure(const Ice& cure);
		Cure operator = (const Ice& cure);
		~Cure();

		Cure&	clone() const;
		void	use(ICharacter& character) const;
};

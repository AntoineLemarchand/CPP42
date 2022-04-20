#pragma once

class Brain
{
	public:
		Brain();
		Brain(const Brain& brain);
		Brain& operator = (const Brain& brain);
		~Brain();

		std::string	ideas[100];
};

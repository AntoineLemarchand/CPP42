#include <iostream>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cerr << "WrongCat constructed" << std::endl;
}

WrongCat::WrongCat(const WrongCat& wrongCat): WrongAnimal()
{
	*this = wrongCat;
	std::cerr << "WrongCat copy constructed" << std::endl;
}

WrongCat WrongCat::operator = (const WrongCat& wrongCat)
{
	std::cerr << "WrongCat equal constructed" << std::endl;
	if (this != &wrongCat)
		type = wrongCat.getType();
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cerr << "WrongCat destroyed" << std::endl;
}

void		WrongCat::makeSound() const
{
	std::cout << "MiaOuOu (but wrong)" << std::endl;
}

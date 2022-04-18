#include "Animal.hpp"
#include "Dog.hpp"
//#include "Cat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	//const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	//std::cout << i->getType() << " " << std::endl;
	//i->makeSound(); //will output the cat sound!
	std::cout << meta->getType() << " " << std::endl;
	meta->makeSound();

	delete meta;
	// delete i;
	delete j;
	return 0;
}

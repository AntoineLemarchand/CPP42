#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "phonebook constructed !" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "phonebook destructed !" << std::endl;
}

PhoneBook::PhoneBook(PhoneBook &phonebook)
{
	for (int i = 0; i < 8; i++)
		this->setContact(phonebook.getContact(i));
};

PhoneBook& PhoneBook::operator = (PhoneBook &phonebook)
{
	for (int i = 0; i < 8; i++)
		this->setContact(phonebook.getContact(i));
	return (phonebook);
};

Contact	PhoneBook::getContact(const int index)
{
	return (&this.contacts[index]);
}

void	PhoneBook::setContact(Contact contact)
{
	if (this->contactNum == 8)
		this->contactNum = 0;
	this->contacts[this.contactNum] = contact;
	this->contactNum++;
}

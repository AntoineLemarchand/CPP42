#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
	this->contactNum = 0;
}

PhoneBook::~PhoneBook()
{}

PhoneBook::PhoneBook(const PhoneBook& phonebook)
{
	this->contactNum = phonebook.contactNum;
	for (int i = 0; i < 8; i++)
	{
		if (this->contacts[i].getInit() == true)
			this->setContact(phonebook.getContact(i));
	}
}

PhoneBook& PhoneBook::operator = (const PhoneBook& phonebook)
{
	this->contactNum = phonebook.contactNum;
	for (int i = 0; i < 8; i++)
		this->setContact(phonebook.getContact(i));
	return (*this);
}

Contact	PhoneBook::getContact(int index) const 
{
	return (this->contacts[index]);
}

void	PhoneBook::setContact(const Contact& contact)
{
	if (this->contactNum == 8)
		this->contactNum = 0;
	this->contacts[this->contactNum] = contact;
	this->contactNum++;
}

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class	PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		PhoneBook(PhoneBook &phonebook);
		PhoneBook & operator = (PhoneBook &phonebook);
		Contact	getContact(int index);
		void	setContact(class Contact contact);

	private:
		Contact	contacts[8];
		int		contactNum;
};

#endif

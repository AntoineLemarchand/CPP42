#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class	PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		PhoneBook(const PhoneBook &phonebook);
		PhoneBook & operator = (const PhoneBook &phonebook);
		Contact	getContact(int index) const;
		void	setContact(const Contact& contact);

	private:
		Contact	contacts[8];
		int		contactNum;
};

#endif

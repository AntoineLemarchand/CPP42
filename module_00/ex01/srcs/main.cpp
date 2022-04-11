#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

static std::string	getprompt(std::string prompt)
{
	std::string	output;

	std::cout << prompt;
	std::getline(std::cin, output);
	return (output);
}

static std::string	getNewVal(std::string prompt)
{
	std::string ret;
	bool empty = true;

	while (empty)
	{
		ret = getprompt(prompt);
		if (ret.empty())
			std::cout << "Please do not input empty field" << std::endl;
		else 
			empty = false;
	}
	return (ret);
}

static void	newContact(PhoneBook phonebook)
{
	Contact	ret;

	std::string input;
	ret.setFirstName(getNewVal("First Name     > "));
	ret.setLastName(getNewVal("Last Name      > "));
	ret.setNickName(getNewVal("Nickname       > "));
	ret.setPhone(getNewVal("Phone number   > "));
	ret.setSecret(getNewVal("Darkest secret > "));
	phonebook.setContact(ret);
}

static void	displaysearch(PhoneBook phonebook)
{
	std::cout << "| index    | firstName| lastName | nickName |" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (phonebook.getContact(i).getInit())
		{
		}
	}
}

int	main()
{
	PhoneBook	phonebook;
	std::string	input;

	while (1)
	{
		input = getprompt("SuperAwesomePhoneBook > ");
		if (!input.compare("EXIT") || input.size() == 0)
			break;
		else if (!input.compare("ADD"))
			newContact(phonebook);
		else if (!input.compare("SEARCH"))
			displaysearch(phonebook);
		for (int i = 0; i < 8; i++)
		{
			if (phonebook.getContact(i).getInit())
			{
				std::cout << phonebook.getContact(i).getFirstName() << std::endl;
				std::cout << phonebook.getContact(i).getLastName() << std::endl;
				std::cout << phonebook.getContact(i).getNickName() << std::endl;
				std::cout << phonebook.getContact(i).getPhone() << std::endl;
				std::cout << phonebook.getContact(i).getSecret() << std::endl;
			}
		}
	}
	return (0);
}

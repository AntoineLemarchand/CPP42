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

static Contact	newContact(void)
{
	Contact	ret;

	ret.setFirstName(getNewVal("First Name     > "));
	ret.setLastName(getNewVal("Last Name      > "));
	ret.setNickName(getNewVal("Nickname       > "));
	ret.setPhone(getNewVal("Phone number   > "));
	ret.setSecret(getNewVal("Darkest secret > "));
	return (ret);
}

static void	printcell(std::string content)
{
	std::cout << "|";
	for (unsigned int i = 0; i < content.size() && i < 9; i++)
		std::cout << content[i];

	if (content.size() == 10)
		std::cout << content[9];
	else if (content.size() > 10)
		std::cout << ".";
	int diff = 10 - content.size();
	while (diff > 0)
	{
		std::cout << " ";
		diff--;
	}
}

static void printList(PhoneBook& phonebook)
{
	std::cout << "/-------------------------------------------\\" << std::endl;
	std::cout << "| index    |firstName |lastName  |nickName  |" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (phonebook.getContact(i).getInit())
		{
			std::cout << "| " << i + 1 << "        ";
			printcell(phonebook.getContact(i).getFirstName());
			printcell(phonebook.getContact(i).getLastName());
			printcell(phonebook.getContact(i).getNickName());
			std::cout << "|" << std::endl;
		}
	}
	std::cout << "\\-------------------------------------------/" << std::endl;
}

static void selectContact(PhoneBook& phonebook)
{
	std::string input;
	Contact		contact;

	input = getprompt("index: ");
	if (input.size() > 1 || input[0] > '8' || input[0] < '0')
	{
		std::cout << "syntax error: nonexistant index" << std::endl;
		return ;
	}
	else
		contact = phonebook.getContact(input[0] - '0' - 1);
	if (contact.getInit() == false)
	{
		std::cout << "syntax error: nonexistant index" << std::endl;
		return ;
	}
	std::cout << "First name   : " << contact.getFirstName() << std::endl;
	std::cout << "Last name    : " << contact.getLastName() << std::endl;
	std::cout << "Nickname     : " << contact.getNickName() << std::endl;
	std::cout << "Phone number : " << contact.getPhone() << std::endl;
	std::cout << "Darket secret: " << contact.getSecret() << std::endl;
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
			phonebook.setContact(newContact());
		else if (!input.compare("SEARCH"))
		{
			printList(phonebook);
			selectContact(phonebook);
		}
		else
		{
			std::cout << "Usage:" << std::endl;
			std::cout << "\tADD: add a contact" << std::endl;
			std::cout << "\tSEARCH: search a contact:" << std::endl;
			std::cout << "\tEXIT: quit the best phonebook in the world" << std::endl;
		}
	}
	return (0);
}

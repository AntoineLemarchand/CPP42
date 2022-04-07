#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class	Contact
{
	public:
		Contact(void)
		{
			std::cout << "hello world ! i'm contact" << std::endl;
		};

		~Contact(void);
		{
			std::cout << "bye world ! i'm contact" << std::endl;
		};

		Contact(Contact &contact)
		{
			contact.setFirstName(this->first);
			contact.setLastName(this->last);
			contact.setNickName(this->nick);
			contact.setPhone(this->phone);
			contact.setSecret(this->secret);
		};

		Contact & operator = (Contact &contact)
		{
			contact.setFirstName(this->first);
			contact.setLastName(this->last);
			contact.setNickName(this->nick);
			contact.setPhone(this->phone);
			contact.setSecret(this->secret);
			return (contact);
		};

		void	setFirstName(std::string val)
		{
			this->first = val;
		};

		void	setLastName(std::string val)
		{
			this->last = val;
		};

		void	setNickName(std::string val)
		{
			this->nick = val;
		};

		void	setPhone(std::string val)
		{
			this->phone = val;
		};

		void	setSecret(std::string val)
		{
			this->secret = val;
		};

	private:
		std::string	first;
		std::string	last;
		std::string	nick;
		std::string	phone;
		std::string	secret;
};

#endif

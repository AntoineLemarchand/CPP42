#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class	Contact
{
	public:
		Contact(void);
		~Contact(void);
		Contact(Contact &contact);
		Contact & operator = (Contact &contact);
		void	setFirstName(std::string val);
		void	setLastName(std::string val);
		void	setNickName(std::string val);
		void	setPhone(std::string val);
		void	setSecret(std::string val);

	private:
		int			init;
		std::string	first;
		std::string	last;
		std::string	nick;
		std::string	phone;
		std::string	secret;
};

#endif

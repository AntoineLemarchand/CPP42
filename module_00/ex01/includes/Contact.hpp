#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class	Contact
{
	public:
		Contact(void);
		~Contact(void);
		Contact(const Contact &contact);
		Contact & operator = (const Contact &contact);

		void		setFirstName(std::string val);
		void		setLastName(std::string val);
		void		setNickName(std::string val);
		void		setPhone(std::string val);
		void		setSecret(std::string val);
		std::string	getFirstName(void) const;
		std::string	getLastName(void) const;
		std::string	getNickName(void) const;
		std::string	getPhone(void) const;
		std::string	getSecret(void) const;
		bool		getInit(void) const;

	private:
		bool		init;
		std::string	first;
		std::string	last;
		std::string	nick;
		std::string	phone;
		std::string	secret;
};

#endif

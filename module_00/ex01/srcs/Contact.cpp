#include <iostream>
#include "Contact.hpp"

Contact::Contact(void)
{
	this->init = 0;
};

Contact::~Contact(void)
{
};

Contact::Contact(Contact &contact)
{
	this->init = 1;
	this->first = contact.first;
	this->last = contact.last;
	this->nick = contact.nick;
	this->phone = contact.phone;
	this->secret = contact.secret;
};

Contact& Contact::operator = (Contact &contact)
{
	this->init = 1;
	this->first = contact.first;
	this->last = contact.last;
	this->nick = contact.nick;
	this->phone = contact.phone;
	this->secret = contact.secret;
	return (contact);
}

void	Contact::setFirstName(std::string val)
{
	this->first = val;
}

void	Contact::setLastName(std::string val)
{
	this->last = val;
}

void	Contact::setNickName(std::string val)
{
	this->nick = val;
}

void	Contact::setPhone(std::string val)
{
	this->phone = val;
}

void	Contact::setSecret(std::string val)
{
	this->secret = val;
}

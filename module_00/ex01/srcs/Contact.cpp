#include <iostream>
#include "Contact.hpp"

Contact::Contact(void)
{
	this->init = false;
}

Contact::~Contact(void)
{
}

Contact::Contact(const Contact &contact)
{
	this->init = contact.init;
	this->first = contact.first;
	this->last = contact.last;
	this->nick = contact.nick;
	this->phone = contact.phone;
	this->secret = contact.secret;
}

Contact& Contact::operator = (const Contact &contact)
{
	this->init = contact.init;
	this->first = contact.first;
	this->last = contact.last;
	this->nick = contact.nick;
	this->phone = contact.phone;
	this->secret = contact.secret;
	return (*this);
}

void	Contact::setFirstName(std::string val)
{
	this->init = true;
	this->first = val;
}

void	Contact::setLastName(std::string val)
{
	this->init = true;
	this->last = val;
}

void	Contact::setNickName(std::string val)
{
	this->init = true;
	this->nick = val;
}

void	Contact::setPhone(std::string val)
{
	this->init = true;
	this->phone = val;
}

void	Contact::setSecret(std::string val)
{
	this->init = true;
	this->secret = val;
}

std::string	Contact::getFirstName(void) const
{
	return (this->first);
}

std::string	Contact::getLastName(void) const
{
	return (this->last);
}

std::string	Contact::getNickName(void) const
{
	return (this->nick);
}

std::string	Contact::getPhone(void) const
{
	return (this->phone);
}

std::string	Contact::getSecret(void) const
{
	return (this->secret);
}

bool		Contact::getInit(void) const
{
	return (this->init);
}

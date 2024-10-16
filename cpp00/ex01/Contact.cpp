#include "Contact.hpp"

void	Contact::setName(std::string name)
{
	this->name = name;
}

void	Contact::setLastname(std::string lname)
{
	this->lname = lname;
}

void	Contact::setUsername(std::string username)
{
	this->username = username;
}

void	Contact::setTelephoneNumber(std::string tel)
{
	this->tel = tel;
}

void	Contact::setDarkSecret(std::string secret)
{
	this->secret = secret;
}

std::string Contact::getName(void)
{
	return (this->name);
}

std::string Contact::getLastname(void)
{
	return (this->lname);
}

std::string Contact::getUsername(void)
{
	return (this->username);
}

std::string Contact::getTelephoneNumber(void)
{
	return (this->tel);
}

std::string Contact::getDarkSecret(void)
{
	return (this->secret);
}

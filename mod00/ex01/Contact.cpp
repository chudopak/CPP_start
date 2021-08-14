#include "Contact.hpp"

Contact::Contact(void) {
	_firstName = "";
	_lastName = "";
	_nickName = "";
	_phoneNumber = "";
	_darkestSecret = "";
}

void	Contact::setFirstName(std::string valueFirstName) {
	this->_firstName = valueFirstName;
}

void	Contact::setLastName(std::string valueLastName) {
	this->_lastName = valueLastName;
}

void	Contact::setNickName(std::string valueNickName) {
	this->_nickName = valueNickName;
}

void	Contact::setPhoneNumber(std::string valuePhoneNumber) {
	this->_phoneNumber = valuePhoneNumber;
}

void	Contact::setDarkestSecret(std::string valueDarkestSecret) {
	this->_darkestSecret = valueDarkestSecret;
}

std::string	Contact::getFirstName(void) const {
	return (_firstName);
}

std::string	Contact::getLastName(void) const {
	return (_lastName);
}

std::string Contact::getNickName(void) const {
	return (_nickName);
}

std::string	Contact::getPhoneNumber(void) const {
	return (_phoneNumber);
}

std::string	Contact::getDarkestSecret(void) const {
	return (_darkestSecret);
}

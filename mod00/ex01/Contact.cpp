#include "Contact.hpp"

Contact::Contact(void) {
	this->_contactExistance = false;
	return ;
}

void	Contact::setContactExistance(bool valueContactExistance) {
	this->_contactExistance = valueContactExistance;
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

bool	Contact::getContactExistance(void) const {
	return (_contactExistance);
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

void	Contact::showFullContactInfo(void) const {
	if (!_contactExistance)
		return ;
	std::cout << "First Name - " << _firstName << std::endl;
	std::cout << "Last Name - " << _lastName << std::endl;
	std::cout << "Nickname - " << _nickName << std::endl;
	std::cout << "Phone Number - " << _phoneNumber << std::endl;
	std::cout << "Darkest Secret - " << _darkestSecret << std::endl;
}
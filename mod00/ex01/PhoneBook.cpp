#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	this->_createdContacts = 0;
}

int		PhoneBook::getNumberContacts(void) const {
	return (_createdContacts);
}

std::string	PhoneBook::_lenghtField(std::string str) {
	if (str.length() <= 10)
		return (str);
	return (str.substr(0, 9) + '.');
}

void	PhoneBook::showPreliminaryContactInfo(Contact &contact, int contactIndex) {
	std::cout << "|" << std::setw(10) << contactIndex;
	std::cout << "|" << std::setw(10) << _lenghtField(this->contact->getFirstName());
	std::cout << "|" << std::setw(10) << _lenghtField(this->contact->getLastName());
	std::cout << "|" << std::setw(10) << _lenghtField(this->contact->getNickName())
			<< "|" << std::endl;
}

void	PhoneBook::showContacts(void){
	int		numberContacts;
	
	numberContacts = getNumberContacts();
	std::cout << "____________________________________________" << std::endl;
	if (!getNumberContacts())
		std::cout << "|              Empty Phone Book            |" << std::endl;
	else {
		for (int i = 0; i < numberContacts; i++)
			showPreliminaryContactInfo(this->contact[i], i);
	}
	std::cout << "--------------------------------------------" << std::endl;
}

void	PhoneBook::addNewContact(void) {
	std::cout << "First Name: ";
	getline
}

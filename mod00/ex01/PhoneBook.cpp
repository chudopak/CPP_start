#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	this->_createdContacts = 0;
	_field[5] = {
		"First Name",
		"Last Name",
		"Nickname",
		"Phone Number",
		"Darcest Secret"
	};
}

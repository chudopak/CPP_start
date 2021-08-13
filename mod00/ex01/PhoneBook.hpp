#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include <iomanip>
# include "Contact.hpp"

class	PhoneBook
{
private:
	std::string	_field[5];
	int			_createdContacts;
	
public:
	PhoneBook();

	Contact		contact[8];

	void		addNewContact(PhoneBook *phoneBook);
	void		showContacts(PhoneBook *phoneBook);
};

#endif
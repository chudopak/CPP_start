#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include <iomanip>
# include "Contact.hpp"

class	PhoneBook
{
private:
	int			_createdContacts;
	
	std::string	_lenghtField(std::string str);
	
public:
	PhoneBook();

	Contact		contact[8];

	int			getNumberContacts(void) const;
	void		showPreliminaryContactInfo(Contact &contact, int contactIndex);

	void		addNewContact(void); //finish him
	void		showContacts(void);
};

#endif
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "Contact.hpp"

class	PhoneBook
{
private:
	int							_numberContacts;
	int							_indexReplaceContact;
	int							_maxContactsInBook;
	static const std::string	_fields[5];
	static const unsigned int	_numberFields;
	
	std::string					_lenghtField(std::string str);
	void						_setField(std::string info, int i);
	void						_showFullContactInfo(int index) const;
	
public:
	PhoneBook();

	Contact						contact[8];

	int							getNumberContacts(void) const;
	void						showPreliminaryContactInfo(int contactIndex);

	void						addNewContact(void);
	void						showContacts(void);
	void						serchContact(void);
};

#endif
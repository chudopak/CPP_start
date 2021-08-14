#include "PhoneBook.hpp"

const unsigned int	PhoneBook::_numberFields = 5;

const std::string	PhoneBook::_fields[5] = {
	"First Name",
	"Last Name",
	"Nickname",
	"Phone Number",
	"Darkest Secret"
};

PhoneBook::PhoneBook(void) {
	this->_numberContacts = 0;
	this->_indexReplaceContact = 0;
	this->_maxContactsInBook = 8;
}

int		PhoneBook::getNumberContacts(void) const {
	return (_numberContacts);
}

std::string	PhoneBook::_lenghtField(std::string str) {
	if (str.length() <= 10)
		return (str);
	return (str.substr(0, 9) + '.');
}

void	PhoneBook::_showFullContactInfo(int index) const
{
	std::cout << _fields[0] << " - " << contact[index].getFirstName() << std::endl;
	std::cout << _fields[1] << " - " << contact[index].getLastName() << std::endl;
	std::cout << _fields[2] << " - " << contact[index].getNickName() << std::endl;
	std::cout << _fields[3] << " - " << contact[index].getPhoneNumber() << std::endl;
	std::cout << _fields[4] << " - " << contact[index].getDarkestSecret() << std::endl;
}

void	PhoneBook::serchContact(void)
{
	int		index;
	std::string	forEnter;

	if (!_numberContacts)
		return ;
	std::cout << "Type contact index: ";
	std::cin >> index;
	std::getline(std::cin, forEnter);
	if (!std::cin.fail() && 0 < index && index <= _numberContacts)
		_showFullContactInfo(index - 1);
	else
		std::cout << "Contact doesn't exist" << std::endl;
	std::cin.clear();
}

void	PhoneBook::showPreliminaryContactInfo(int contactIndex)
{
	std::cout << "|" << std::setw(10) << contactIndex + 1;
	std::cout << "|" << std::setw(10) << _lenghtField(this->contact[contactIndex].getFirstName());
	std::cout << "|" << std::setw(10) << _lenghtField(this->contact[contactIndex].getLastName());
	std::cout << "|" << std::setw(10) << _lenghtField(this->contact[contactIndex].getNickName())
			<< "|" << std::endl;
}

void	PhoneBook::showContacts(void)
{
	std::cout << "_____________________________________________" << std::endl;
	if (!_numberContacts) {
		std::cout << "|              Empty Phone Book            |" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
	} else {
		for (int i = 0; i < _numberContacts; i++) {
			showPreliminaryContactInfo(i);
			std::cout << "---------------------------------------------" << std::endl;
		}
	}
}

void	PhoneBook::_setField(std::string info, int i)
{
	if (i == 0)
		this->contact[_indexReplaceContact].setFirstName(info);
	else if (i == 1)
		this->contact[_indexReplaceContact].setLastName(info);
	else if (i == 2)
		this->contact[_indexReplaceContact].setNickName(info);
	else if (i == 3)
		this->contact[_indexReplaceContact].setPhoneNumber(info);
	else if (i == 4)
		this->contact[_indexReplaceContact].setDarkestSecret(info);
}

void	PhoneBook::addNewContact(void)
{
	std::string	tmp;

	for (unsigned int i = 0; i < _numberFields; i++) {
		tmp = "";
		std::cout << _fields[i] << ": ";
		std::getline(std::cin, tmp);
		if (std::cin.eof())
			exit(0);
		else if (tmp.empty()) {
			std::cout << "**Field must contain some information, try again**" << std::endl;
			i--;
		}
		else {
			_setField(tmp, i);
		}
	}
	if (_numberContacts != _maxContactsInBook)
		_numberContacts++;
	if (_indexReplaceContact != _maxContactsInBook)
		_indexReplaceContact++;
	else
		_indexReplaceContact = 0;
}

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class	Contact
{
protected:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string	_darkestSecret;

public:
	Contact(void);

	void		setFirstName(std::string valueFirstName);
	void		setLastName(std::string valueLastName);
	void		setNickName(std::string valueNickName);
	void		setPhoneNumber(std::string valuePhoneNumber);
	void		setDarkestSecret(std::string valueDarkestSecret);

	std::string	getFirstName(void) const;
	std::string	getLastName(void) const;
	std::string	getNickName(void) const;
	std::string	getPhoneNumber(void) const;
	std::string	getDarkestSecret(void) const;

};

#endif

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class	Weapon
{
private:
	std::string			_type;

public:
	Weapon(void);
	Weapon(std::string weapon);

	const std::string&	getType(void);
	void				setType(std::string weapon);
};

#endif

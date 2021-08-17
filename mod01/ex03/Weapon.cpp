#include "Weapon.hpp"

Weapon::Weapon(void) {
	_type = "faith";
}
Weapon::Weapon(std::string weapon) {
	_type = weapon;
}

const std::string&	Weapon::getType(void) {
	return (_type);
}

void	Weapon::setType(std::string weapon) {
	_type = weapon;
}
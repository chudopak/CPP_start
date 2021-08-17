#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	_name = name;
	_weapon = NULL;
}

HumanB::HumanB(void) {
	_name = "noName";
	_weapon = NULL;
}

void	HumanB::attack(void) const {
	if (_weapon)
		std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " don't have a weapon" << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon) {
	_weapon = &weapon;
}

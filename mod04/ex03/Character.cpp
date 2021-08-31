#include "Character.hpp"

Character::Character(void) : _name("noName") {
	_setEmptyInventoty();
}

Character::Character(std::string const &name) : _name(name) {
	_setEmptyInventoty();
}

Character::Character(Character const & src) {
	_setEmptyInventoty();
	*this = src;
}

Character::~Character(void) {
	for (unsigned int i = 0; i < INVENTORY_SIZE; i++) {
		if (_inventory[i])
			_deleatMaterialFromInventory(i);
	}
}

Character&	Character::operator=(Character const & src) {
	_name = src.getName();
	_copyInventory(src._inventory);
	return (*this);
}

void	Character::_copyInventory(AMateria* const inventory[]) {
	for (unsigned int i = 0; i < INVENTORY_SIZE; i++) {
		if (inventory[i])
			_setMaterialToInventorySlot(i, inventory);
	}
}

void	Character::_setMaterialToInventorySlot(unsigned int const idx, AMateria* const inventory[]) {
	if (0 <= idx && idx < INVENTORY_SIZE && _inventory[idx])
		_deleatMaterialFromInventory(idx);
	this->_inventory[idx] = inventory[idx]->clone();
}

void	Character::_deleatMaterialFromInventory(unsigned int const idx) {
	delete _inventory[idx];
	_inventory[idx] = NULL;
}

void	Character::_setEmptyInventoty(void) {
	for (unsigned int i = 0; i < INVENTORY_SIZE; i++)
		_inventory[i] = NULL;
}

std::string	const &		Character::getName(void) const {
	return (_name);
}

void	Character::equip(AMateria* m) {
	if (!m)
		return ;
	for (unsigned int i = 0; i < INVENTORY_SIZE; i++) {
		if (!_inventory[i]) {
			_inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx) {
	if (0 <= idx && idx < INVENTORY_SIZE && _inventory[idx])
		_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target) {
	if (0 <= idx && idx < INVENTORY_SIZE && _inventory[idx])
		_inventory[idx]->use(target);
}

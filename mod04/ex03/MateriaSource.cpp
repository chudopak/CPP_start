#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	_setEmptyInventoty();
}

MateriaSource::MateriaSource(MateriaSource const & src) {
	_setEmptyInventoty();
	*this = src;
}

MateriaSource::~MateriaSource(void) {
	for (unsigned int i = 0; i < INVENTORY_SIZE; i++) {
		if (_inventory[i])
			_deleatMaterialFromInventory(i);
	}
}

MateriaSource&	MateriaSource::operator=(MateriaSource const & src) {
	_copyInventory(src._inventory);
	return (*this);
}

void	MateriaSource::_copyInventory(AMateria* const inventory[]) {
	for (unsigned int i = 0; i < INVENTORY_SIZE; i++) {
		if (inventory[i])
			_setMaterialToInventorySlot(i, inventory);
	}
}

void	MateriaSource::_setMaterialToInventorySlot(unsigned int const idx, AMateria* const inventory[]) {
	if (0 <= idx && idx < INVENTORY_SIZE && _inventory[idx])
		_deleatMaterialFromInventory(idx);
	this->_inventory[idx] = inventory[idx]->clone();
}

void	MateriaSource::_deleatMaterialFromInventory(unsigned int const idx) {
	delete _inventory[idx];
	_inventory[idx] = NULL;
}

void	MateriaSource::_setEmptyInventoty(void) {
	for (unsigned int i = 0; i < INVENTORY_SIZE; i++)
		_inventory[i] = NULL;
}

void	MateriaSource::learnMateria(AMateria* m) {
	if (!m)
		return ;
	for (unsigned int i = 0; i < INVENTORY_SIZE; i++) {
		if (!_inventory[i]) {
			_inventory[i] = m;
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	for (unsigned int i = 0; i < INVENTORY_SIZE; i++) {
		if (_inventory[i] && _inventory[i]->getType() == type)
			return (_inventory[i]->clone());
	}
	return (NULL);
}

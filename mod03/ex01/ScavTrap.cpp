#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
	std::cout << "DEFAULT constructor of ScavTrap class called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) {
	std::cout << "COPY constructor of ScavTrap class called" << std::endl;
	*this = src;
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name) {
	std::cout << "NAME constructor of ScavTrap class called" << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "DESTRUCTOR of ScavTrap class called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const &src) {
	std::cout << "ASSIGNATION operator of ScavTrap class called" << std::endl;
	_name = src.getName();
	_hitpoints = src.getHitpoints();
	_energyPoints = src.getEnergyPoints();
	_attackDamage = src.getAttackDamage();
	return (*this);
}

void	ScavTrap::attack(std::string const &target) {
	std::cout << _name << " going to hit " << target << " sooo hard!" << std::endl;
	ClapTrap::attack(target);
}

void	ScavTrap::guardGate(void) const {
	std::cout << "ScavTrap " << _name << " now in charge of gate keeping!" << std::endl;
}

std::ostream&	operator<<(std::ostream &out, ScavTrap const & src) {
	out << "Name - " << src.getName() << std::endl;
	out << "Hitpoints - " << src.getHitpoints() << std::endl;
	out << "EnergyPoints - " << src.getEnergyPoints() << std::endl;
	out << "AttackDamage - " << src.getAttackDamage() << std::endl;
	return (out);
}

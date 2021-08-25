#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("noName", 100, 50, 20) {
	std::cout << "DEFAULT constructor of ScavTrap class called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src) {
	std::cout << "COPY constructor of ScavTrap class called" << std::endl;
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name, 100, 50, 20) {
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

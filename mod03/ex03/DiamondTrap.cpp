#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap(), _name("NoName") {
	std::cout << "Default CONstructOR of DiamondTrap class called" << std::endl;
	ClapTrap::_name = this->_name + "_clap_trap";
	FragTrap::_hitpoints = 0;
	ScavTrap::_energyPoints = 0;
	FragTrap::_attackDamage = 0;
}

DiamondTrap::DiamondTrap(std::string const &name) : ClapTrap(name + "_clap_trap"), ScavTrap(), FragTrap(), _name(name) {
	std::cout << "NAME CONstructOR of DiamondTrap class called" << std::endl;
	FragTrap::_hitpoints = 45;
	ScavTrap::_energyPoints = 123;
	FragTrap::_attackDamage = 70;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(), ScavTrap(), FragTrap() {
	std::cout << "CoPY CONstructOR of DiamondTrap class called" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DESTruCTOR of DiamondTrap class called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const &src) {
	std::cout << "Assignation OPERatOR of DiamondTrap class called" << std::endl;
	this->_name = src.DiamondTrap::getName();
	ClapTrap::_name = src.ClapTrap::getName();
	FragTrap::_hitpoints = src.getHitpoints();
	ScavTrap::_energyPoints = src.getEnergyPoints();
	FragTrap::_attackDamage = src.getAttackDamage();
	return (*this);
}

std::string	DiamondTrap::getName(void) const {
	return (_name);
}

void	DiamondTrap::setName(std::string const &name) {
	this->_name = name;
	ClapTrap::_name = this->_name + "_clap_trap";
}

void	DiamondTrap::whoAmI(void) const {
	std::cout << "Am I " << this->_name << " or I am " << ClapTrap::getName() << "?" << std::endl;
}

std::ostream&	operator<<(std::ostream & out, DiamondTrap const &src) {
	out << "DiamondTrap Name - " << src.DiamondTrap::getName() << std::endl;
	out << "ClapTrap Name - " << src.ClapTrap::getName() << std::endl;
	out << "Hitpoints - " << src.getHitpoints() << std::endl;
	out << "EnergyPoints - " << src.getEnergyPoints() << std::endl;
	out << "AttackDamage - " << src.getAttackDamage() << std::endl;
	return (out);
}

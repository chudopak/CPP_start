#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("noName", 100, 100, 30) {
	std::cout << "DeFaUlT constructor of FragTrap class called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src) {
	std::cout << "CoPy constructor of FragTrap class called" << std::endl;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name, 100, 100, 30) {
	std::cout << "NaMe constructor of FragTrap class called" << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << "DeStRuCtOr of FragTrap class called" << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const &src) {
	std::cout << "AsSiGnAtIoN operator of FragTrap class called" << std::endl;
	_name = src.getName();
	_hitpoints = src.getHitpoints();
	_energyPoints = src.getEnergyPoints();
	_attackDamage = src.getAttackDamage();
	return (*this);
}

void	FragTrap::highFiveGuys(void) const {
	std::cout << "FragTrap " << _name << " : give me five or die!" << std::endl;
}

std::ostream&	operator<<(std::ostream &out, FragTrap const & src) {
	out << "Name - " << src.getName() << std::endl;
	out << "Hitpoints - " << src.getHitpoints() << std::endl;
	out << "EnergyPoints - " << src.getEnergyPoints() << std::endl;
	out << "AttackDamage - " << src.getAttackDamage() << std::endl;
	return (out);
}


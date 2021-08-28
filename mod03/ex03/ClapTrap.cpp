#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("noName") {
	std::cout << "Default constructor of ClapTrap class called" << std::endl;
	_hitpoints		= 0;
	_energyPoints	= 0;
	_attackDamage	= 0;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
	std::cout << "Copy constructor of ClapTrap class called" << std::endl;
	*this = src;
}

ClapTrap::ClapTrap(std::string const & name) : _name(name) {
	std::cout << "Name constructor of ClapTrap class called" << std::endl;
	_hitpoints		= 10;
	_energyPoints	= 10;
	_attackDamage	= 0;
}

ClapTrap::ClapTrap(std::string const &name, unsigned int hitpoints,
			unsigned int energyPoints, unsigned int attackDamage) : _name(name)
{
	std::cout << "Full setup constructor of ClapTrap class called" << std::endl;
	_hitpoints = hitpoints;
	_energyPoints = energyPoints;
	_attackDamage = attackDamage;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor of ClapTrap class called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const &src) {
	std::cout << "Assignation operator of ClapTrap class called" << std::endl;
	_name			= src.getName();
	_hitpoints		= src.getHitpoints();
	_energyPoints	= src.getEnergyPoints();
	_attackDamage	= src.getAttackDamage();
	return (*this);
}

void	ClapTrap::setName(std::string & name) {
	_name = name;
}

void	ClapTrap::setHitpoints(unsigned int hipoints) {
	_hitpoints = hipoints;
}

void	ClapTrap::setEnergyPoints(unsigned int energyPoints) {
	_energyPoints = energyPoints;
}

void	ClapTrap::setAttackDamage(unsigned int attackDamage) {
	_attackDamage = attackDamage;
}

std::string		ClapTrap::getName(void) const {
	return (_name);
}

unsigned int	ClapTrap::getEnergyPoints(void) const {
	return (_energyPoints);
}

unsigned int	ClapTrap::getHitpoints(void) const {
	return (_hitpoints);
}

unsigned int	ClapTrap::getAttackDamage(void) const {
	return (_attackDamage);
}

void	ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap " << _name << " attack " << target << ", causing "
			<< _attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (_hitpoints <= amount)
		_hitpoints = 0;
	else
		_hitpoints -= amount;
	std::cout << "ClapTrap " << _name << " takes " << amount \
			<< " points of damage! Deeemn(" << " | Hitpoints left - " << _hitpoints << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	_hitpoints += amount;
	std::cout << "ClapTrap " << _name << " receive " << amount \
		<< " hitpoints." << " | Hitpoints left - " << _hitpoints << std::endl;
}

std::ostream&	operator<<(std::ostream& out, ClapTrap const & src) {
	out << "Name - " << src.getName() << std::endl;
	out << "Hitpoints - " << src.getHitpoints() << std::endl;
	out << "EnergyPoints - " << src.getEnergyPoints() << std::endl;
	out << "AttackDamage - " << src.getAttackDamage() << std::endl;
	return (out);
}

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
protected:
	std::string		_name;
	unsigned int	_hitpoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

public:
	ClapTrap(void);
	ClapTrap(std::string const &name);
	ClapTrap(std::string const &name, unsigned int hitpoints,
			unsigned int energyPoints, unsigned int attackDamage);
	ClapTrap(ClapTrap const &src);
	~ClapTrap(void);

	ClapTrap&		operator=(ClapTrap const &src);

	std::string		getName(void) const;
	unsigned int	getHitpoints(void) const;
	unsigned int	getEnergyPoints(void) const;
	unsigned int	getAttackDamage(void) const;
	void			setName(std::string & name);
	void			setHitpoints(unsigned int hipoints);
	void			setEnergyPoints(unsigned int energyPoints);
	void			setAttackDamage(unsigned int attackDamage);

	void			attack(std::string const & target);
	void			takeDamage(unsigned int	amount);
	void			beRepaired(unsigned int amount);
};

std::ostream&	operator<<(std::ostream& out, ClapTrap const & src);

#endif
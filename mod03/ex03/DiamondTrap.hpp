#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string		_name;

public:
	DiamondTrap(void);
	DiamondTrap(std::string const &name);
	DiamondTrap(DiamondTrap const &src);
	~DiamondTrap(void);

	DiamondTrap&	operator=(DiamondTrap const &src);

	std::string		getName(void) const;
	void			setName(std::string const &name);

	void			whoAmI(void) const;
};

std::ostream&	operator<<(std::ostream &out, DiamondTrap const & src);

#endif
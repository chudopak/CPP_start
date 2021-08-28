#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(ScavTrap const & src);
	ScavTrap(std::string const & name);
	~ScavTrap(void);

	ScavTrap&	operator=(ScavTrap const & src);

	void		guardGate(void) const;
	void		attack(std::string const &target);
};

std::ostream&	operator<<(std::ostream &out, ScavTrap const & src);

#endif
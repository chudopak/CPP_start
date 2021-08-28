#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(FragTrap const & src);
	FragTrap(std::string const & name);
	~FragTrap(void);

	FragTrap&	operator=(FragTrap const & src);

	void	highFiveGuys(void) const;
};

std::ostream&	operator<<(std::ostream &out, FragTrap const & src);

#endif
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap none;
	ScavTrap mick("Micky");

	std::cout << none << std::endl;
	std::cout << mick << std::endl;

	none.attack("Micky");
	mick.takeDamage(none.getAttackDamage());
	mick.beRepaired(13);

	std::cout << none << std::endl;
	std::cout << mick << std::endl;


	std::cout << std::endl;

	mick.guardGate();

	std::cout << std::endl;
	std::cout << "####################Destructors#####################" << std::endl;
	std::cout << std::endl;
	return (0);
}
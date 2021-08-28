#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap o;
	std::cout << "--------------------------------------" << std::endl;
	DiamondTrap stan("Stanly");
	std::cout << "--------------------------------------" << std::endl;
	DiamondTrap bob("BOB Wans");
	std::cout << "--------------------------------------" << std::endl;
	DiamondTrap copyStan(stan);

	std::cout << "--------------------------------------" << std::endl;
	std::cout << o << std::endl;
	std::cout << stan << std::endl;
	std::cout << bob << std::endl;

	o.setAttackDamage(321);
	o.DiamondTrap::setName("Dwight");
	std::cout << "--------------------------------------" << std::endl;
	std::cout << o << std::endl;

	stan.beRepaired(100);
	std::cout << stan << std::endl;
	bob.ScavTrap::attack("Stanly");
	stan.takeDamage(bob.getAttackDamage());
	std::cout << stan << std::endl;
	copyStan.highFiveGuys();
	stan.whoAmI();

	std::cout << std::endl;
	std::cout << "####################Destructors#####################" << std::endl;
	std::cout << std::endl;
	return (0);
}
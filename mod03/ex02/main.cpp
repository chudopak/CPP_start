#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	FragTrap o;
	FragTrap stan("Stanly");
	FragTrap bob("BOB Wans");
	FragTrap copyStan(stan);

	std::cout << o << std::endl;
	std::cout << stan << std::endl;
	std::cout << bob << std::endl;

	stan.beRepaired(100);
	std::cout << stan << std::endl;
	bob.attack("Stanly");
	stan.takeDamage(bob.getAttackDamage());
	std::cout << stan << std::endl;
	copyStan.highFiveGuys();

	std::cout << std::endl;
	std::cout << "####################Destructors#####################" << std::endl;
	std::cout << std::endl;
	return (0);
}
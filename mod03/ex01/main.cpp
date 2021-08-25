#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap none;
	ScavTrap mick("Micky");

	std::cout << none << std::endl;
	std::cout << mick << std::endl;

	none.attack("Micky");
	mick.takeDamage(none.getAttackDamage());
	mick.beRepaired(3);

	std::cout << none << std::endl;
	std::cout << mick << std::endl;


	std::cout << std::endl;


	ScavTrap	a;
	ScavTrap	b("Jimmy");

	a.setEnergyPoints(100U);
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	b = a;
	std::cout << b << std::endl;
	return (0);
}
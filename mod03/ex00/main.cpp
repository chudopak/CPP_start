#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap none;
	ClapTrap mick("Micky");

	std::cout << none << std::endl;
	std::cout << mick << std::endl;

	none.attack("Micky");
	mick.takeDamage(none.getAttackDamage());
	mick.beRepaired(3);

	std::cout << none << std::endl;
	std::cout << mick << std::endl;


	std::cout << std::endl;


	ClapTrap	a;
	ClapTrap	b("Jimmy");

	a.setEnergyPoints(100U);
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	b = a;
	std::cout << b << std::endl;
}
#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap none;
	ClapTrap numberOne("Micky");

	std::cout << none << std::endl;
	std::cout << numberOne << std::endl;

	none.attack("Micky");
	numberOne.takeDamage(none.getAttackDamage());
	numberOne.beRepaired(3);

	std::cout << none << std::endl;
	std::cout << numberOne << std::endl;


	std::cout << std::endl;


	ClapTrap	a;
	ClapTrap	b("Jimmy");

	a.setEnergyPoints(100U);
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	b = a;
	std::cout << b << std::endl;
}
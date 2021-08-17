#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	std::cout << "Test HumanA\n" << std::endl;
	{
		Weapon	club = Weapon("crude spiked club");
		HumanA	bob("Bob", club);

		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	std::cout << "\nTest HumanB\n" << std::endl;
	{
		Weapon	club = Weapon("crude spiked club");
		HumanB	jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	{
		Weapon	hummer;
		HumanB	jim;
		jim.attack();
		hummer.setType("hummer");
		jim.setWeapon(hummer);
		jim.attack();
	}
}
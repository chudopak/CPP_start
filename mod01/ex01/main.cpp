#include "Zombie.hpp"

int	main(void)
{
	int		numberZombies = 10;
	Zombie*	zombie;

	zombie = zombieHorde(numberZombies, "Andy");
	for (int i = 0; i < numberZombies; i++) {
		zombie[i].announce();
	}
	delete [] zombie;
	return (0);
}

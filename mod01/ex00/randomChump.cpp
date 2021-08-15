#include "Zombie.hpp"

void	randomChump(std::string zombieName)
{
	Zombie	zombie;

	zombie.setName(zombieName);
	zombie.announce();
}

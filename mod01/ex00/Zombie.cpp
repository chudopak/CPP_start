#include "Zombie.hpp"

Zombie::Zombie(std::string zombieName) {
	_name = zombieName;
	std::cout << "Created zombie named: " << _name << std::endl;
}

Zombie::Zombie(void) {
	std::cout << "Deafolt Constructor call" << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << "Destructor call - " << _name << " had been killed" << std::endl;
}

void	Zombie::announce(void) const {
	std::cout << _name << "  BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string zombieName){
	_name = zombieName;
}

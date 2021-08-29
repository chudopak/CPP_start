#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
	std::cout << "WrongCat: Deafolt constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) {
	std::cout << "WrongCat: Copy constructor called" << std::endl;
	*this = src;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat: Destructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(WrongCat const &src) {
	std::cout << "WrongCat: Assignation constructor called" << std::endl;
	_type = src.getType();
	return (*this);
}

void	WrongCat::makeSound(void) const {
	std::cout << _type << ": mauuuuuuu, ichi nica" << std::endl;
}

#include "Animal.hpp"

Animal::Animal(void) : _type("noType") {
	std::cout << "Animal: Deafolt constructor called" << std::endl;
}

Animal::Animal(Animal const &src) {
	std::cout << "Animal: Copy constructor called" << std::endl;
	*this = src;
}

Animal::Animal(std::string const & type) : _type(type) {
	std::cout << "Animal: Type constructor called" << std::endl;
}

Animal::~Animal(void) {
	std::cout << "Animal: Destructor called" << std::endl;
}

Animal&		Animal::operator=(Animal const &src) {
	std::cout << "Animal: Assignation operator called" << std::endl;
	_type = src.getType();
	return (*this);
}

std::string	Animal::getType(void) const {
	return (_type);
}

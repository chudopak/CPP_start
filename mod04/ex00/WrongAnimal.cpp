#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("noType") {
	std::cout << "WrongAnimal: Deafolt constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) {
	std::cout << "WrongAnimal: Copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal::WrongAnimal(std::string const & type) : _type(type) {
	std::cout << "WrongAnimal: Type constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal: Destructor called" << std::endl;
}

WrongAnimal&		WrongAnimal::operator=(WrongAnimal const &src) {
	std::cout << "WrongAnimal: Assignation operator called" << std::endl;
	_type = src.getType();
	return (*this);
}

std::string	WrongAnimal::getType(void) const {
	return (_type);
}

void		WrongAnimal::makeSound(void) const {
	std::cout << _type << " doesn't make noise" << std::endl;
}

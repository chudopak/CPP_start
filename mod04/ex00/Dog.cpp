#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
	std::cout << "Dog: Deafolt constructor called" << std::endl;
}

Dog::Dog(Dog const &src) {
	std::cout << "Dog: Copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog(void) {
	std::cout << "Dog: Destructor called" << std::endl;
}

Dog&	Dog::operator=(Dog const &src) {
	std::cout << "Dog: Assignation constructor called" << std::endl;
	_type = src.getType();
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << _type << ": bark bark, give me your love" << std::endl;
}
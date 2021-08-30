#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat"), _brain(new Brain("let's go eat")) {
	std::cout << "Cat: Deafolt constructor called" << std::endl;
}

Cat::Cat(Cat const &src) : _brain(new Brain()) {
	std::cout << "Cat: Copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat(void) {
	std::cout << "Cat: Destructor called" << std::endl;
	delete _brain;
}

Cat&	Cat::operator=(Cat const &src) {
	std::cout << "Cat: Assignation constructor called" << std::endl;

	_type = src.getType();
	*_brain = *src._brain;
	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << _type << ": mauuuuuuu, ichi nica" << std::endl;
}

Brain&			Cat::getBrain(void) const {
	return (*_brain);
}

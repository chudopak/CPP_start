#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {
	/*std::cout << "Ice: Default constructor called" << std::endl;*/
}

Ice::Ice(Ice const & src) {
	/*std::cout << "Ice: Copy constructor called" << std::endl;*/
	*this = src;
}

Ice::~Ice(void) {
	/*std::cout << "Ice: Destructor called" << std::endl;*/
}

Ice&	Ice::operator=(Ice const & src) {
	/*std::cout << "Ice: Asignation operator called" << std::endl;*/
	_type = src.getType();
	return (*this);
}

AMateria*	Ice::clone(void) const {
	return (new Ice);
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoot an ice bolt at " << target.getName() << " *" << std::endl;
}
#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {
	/*std::cout << "Cure: Default constructor called" << std::endl;*/
}

Cure::Cure(Cure const & src) {
	/*std::cout << "Cure: Copy constructor called" << std::endl;*/
	*this = src;
}

Cure::~Cure(void) {
	/*std::cout << "Cure: Destructor called" << std::endl;*/
}

Cure&	Cure::operator=(Cure const & src) {
	/*std::cout << "Cure: Asignation operator called" << std::endl;*/
	_type = src.getType();
	return (*this);
}

AMateria*	Cure::clone(void) const {
	return (new Cure);
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
#include "AMateria.hpp"

AMateria::AMateria(void) : _type("noType") {
	/*std::cout << "AMateria: Default constructor called" << std::endl;*/
}

AMateria::AMateria(std::string const &type) : _type(type) {
	/*std::cout << "AMateria: Type setter constructor called" << std::endl;*/
}

AMateria::AMateria(AMateria const &src) : _type(src.getType()) {
	/*std::cout << "AMateria: COpy constructor called" << std::endl;*/
}

AMateria::~AMateria(void) {
	/*std::cout << "AMateria: Destructor called" << std::endl;*/
}

AMateria&	AMateria::operator=(AMateria const &src) {
	/*std::cout << "AMateria: Assignation called" << std::endl;*/
	(void)src;
	return (*this);
}

std::string const &		AMateria::getType(void) const {
	return (_type);
}

void	AMateria::use(ICharacter& target) {
	(void)target;
}


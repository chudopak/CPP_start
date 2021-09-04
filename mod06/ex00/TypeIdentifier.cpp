#include "TypeIdentifier.hpp"

TypeIdentifier::TypeIdentifier(void) {}

TypeIdentifier::TypeIdentifier(TypeIdentifier const &src) {
	*this = src;
}

TypeIdentifier::~TypeIdentifier(void) {}


TypeIdentifier&	TypeIdentifier::operator=(TypeIdentifier const &src)
{
	(void)src;
	return (*this);
}

bool	TypeIdentifier::isChar(char const *arg) const {
	std::string	argStr = static_cast<std::string>(arg);

	if (argStr.length() == 1)
		return (true);
	return (false);
}

bool	TypeIdentifier::isInt(char const *arg) const {
	char	*lineResidual;

	strtol(arg, &lineResidual, 10);
	std::cout << strtol(arg, &lineResidual, 10) << lineResidual << std::endl;
	if (*lineResidual)
		return (false);
	return (true);
}
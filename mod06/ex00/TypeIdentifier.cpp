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

void	TypeIdentifier::isArgumentExist(int const ac) const throw(std::exception) {
	if (ac != 2)
		throw NotEnoughArgumentsException();
}

void	TypeIdentifier::isArgumentMatchAnyType(char const * arg) const throw(std::exception) {
	if (!isInt(arg) && !isChar(arg) && !isFloat(arg) && !isDouble(arg))
		throw ExistTypeToConvertNotFoundException();
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
	if (*lineResidual)
		return (false);
	return (true);
}

bool	TypeIdentifier::isFloat(char const *arg) const {
	char	*lineResidual;

	strtod(arg, &lineResidual);
	if (lineResidual[0] == 'f' && !lineResidual[1])
		return (true);
	return (false);
}

bool	TypeIdentifier::isDouble(char const *arg) const {
	char	*lineResidual;

	strtod(arg, &lineResidual);
	if (*lineResidual)
		return (false);
	return (true);
}

bool	TypeIdentifier::isNan(std::string const & arg) const {
	if (arg == "nanf" || arg == "nan")
		return (true);
	return (false);
}

bool	TypeIdentifier::isInf(std::string const &arg) const {
	if (arg == "-inf" || arg == "-inff" || arg == "inf" || arg == "inff")
		return (true);
	return (false);
}

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
	if (!isArgumentStartsWithDot(arg))
		throw ExistTypeToConvertNotFoundException();
	if (!isInt(arg) && !isChar(arg) && !isFloat(arg) && !isDouble(arg)
			&& !isNan(static_cast<std::string>(arg)) && !isInf(static_cast<std::string>(arg)))
		throw ExistTypeToConvertNotFoundException();
}

bool	TypeIdentifier::isArgumentStartsWithDot(char const *arg) const {
	int		i = 0;

	if (arg[0] == '.' && !arg[1])
		return (true);
	while (arg[i] && arg[i] == ' ')
		i++;
	if (arg[i] == '.')
		return (false);
	return (true);
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

	strtol(arg, &lineResidual, 10);
	if (*lineResidual != '.' || !('0' <= *(lineResidual + 1) && *(lineResidual + 1) <='9'))
		return(false);
	strtod(arg, &lineResidual);
	if (lineResidual[0] == 'f' && !lineResidual[1])
		return (true);
	return (false);
}

bool	TypeIdentifier::isDouble(char const *arg) const {
	char	*lineResidual;

	strtol(arg, &lineResidual, 10);
	if (*lineResidual != '.' || !('0' <= *(lineResidual + 1) && *(lineResidual + 1) <='9'))
		return(false);
	strtod(arg, &lineResidual);
	if (*lineResidual)
		return (false);
	return (true);
}

bool	TypeIdentifier::isNan(std::string const & arg) const {
	if (arg == "nanf" || arg == "nan" || arg == "-nan" || arg == "-nanf")
		return (true);
	return (false);
}

bool	TypeIdentifier::isInf(std::string const &arg) const {
	if (arg == "-inf" || arg == "-inff" || arg == "inf" || arg == "inff")
		return (true);
	return (false);
}

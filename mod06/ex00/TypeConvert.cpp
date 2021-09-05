#include "TypeConvert.hpp"

TypeConvert::TypeConvert(void) {}

TypeConvert::TypeConvert(TypeConvert const &src) {
	*this = src;
}

TypeConvert::~TypeConvert(void) {}

TypeConvert&	TypeConvert::operator=(TypeConvert const & src) {
	(void)src;
	return (*this);
}

void	TypeConvert::printConvertionFromInt(char const *arg) {
	long	nb = strtol(arg, NULL, 10);

	if (nb < INT_MIN || nb > INT_MAX) {
		std::cout << "char: Int overload" << std::endl;
		std::cout << "int: Int overload" << std::endl;
		std::cout << "float: Int overload" << std::endl;
		std::cout << "double: Int overload" << std::endl;
	} else {
		std::cout << "char: ";
		if (32 <= nb && nb <= 126)
			std::cout << "'" <<static_cast<char>(nb) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;

		std::cout << "int: " << static_cast<int>(nb) << std::endl;

		if (nb / 1000000 == 0) {
			std::cout << "float: " << static_cast<float>(nb) << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(nb) << ".0" << std::endl;
		} else {
			std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
			std::cout << "double: " << static_cast<double>(nb) << std::endl;
		}
	}
}

void	TypeConvert::printConvertionFromChar(char const *arg) {
	char	ch = *arg;

	if (32 <= ch && ch <= 126)
		std::cout << "char: " << "'" << ch << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(ch) << std::endl;
	std::cout << "float: " << static_cast<float>(ch) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(ch) << ".0" << std::endl;
}

bool	TypeConvert::_includeFloatIdentifier(int dotPosition, char const *arg) {
	int		i = dotPosition + 1;
	int		significantNumbersAfterDot;

	if (arg[0] == '-')
		significantNumbersAfterDot = 8;
	else
		significantNumbersAfterDot = 7;
	while (i < significantNumbersAfterDot && arg[i] == '0') {
		i++;
	}
	if (arg[i] == 'f')
		return (true);
	if (i == significantNumbersAfterDot && '0' <= arg[i] && arg[i] <= '4')
		return (true);
	return (false);
}

bool	TypeConvert::_includeDoubleIdentifier(int dotPosition, char const *arg) {
	int		i = dotPosition + 1;
	int		significantNumbersAfterDot;

	if (arg[0] == '-')
		significantNumbersAfterDot = 8;
	else
		significantNumbersAfterDot = 7;
	while (arg[i] && i < significantNumbersAfterDot && arg[i] == '0') {
		i++;
	}
	if (!arg[i])
		return (true);
	if (i == significantNumbersAfterDot && '0' <= arg[i] && arg[i] <= '5')
		return (true);
	return (false);
}

void	TypeConvert::printFloat(double nb, char const *arg) {
	std::string	argToStr	= static_cast<std::string>(arg);
	int			dotPosition	= argToStr.find(".", 0);

	if (dotPosition > 6) {
		std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
	} else {
		if (_includeFloatIdentifier(dotPosition, arg))
			std::cout << "float: " << static_cast<float>(nb) << ".0f" << std::endl;
		else
			std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
	}
}

void	TypeConvert::printDouble(double nb, char const *arg) {
	std::string	argToStr	= static_cast<std::string>(arg);
	int			dotPosition	= argToStr.find(".", 0);

	if (dotPosition > 6) {
		std::cout << "double: " << nb << std::endl;
	} else {
		if (_includeDoubleIdentifier(dotPosition, arg))
			std::cout << "double: " << nb << ".0" << std::endl;
		else
			std::cout << "double: " << nb << std::endl;
	}
}

void	TypeConvert::printConvertionFromFloatAndDouble(char const *arg) {
	double		nb = strtod(arg, NULL);

	if (isInf(static_cast<std::string>(arg)) || isNan(static_cast<std::string>(arg))) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << nb << "f" << std::endl;
		std::cout << "double: " << nb << std::endl;
	} else {
		if (32.0 <= nb && nb <= 126.0)
			std::cout << "char: " << "'" << static_cast<char>(nb) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(nb) << std::endl;
		printFloat(nb, arg);
		printDouble(nb, arg);
	}
}

void	TypeConvert::printConvertionResult(char const *arg) {
	if (isChar(arg))
		printConvertionFromChar(arg);
	else if (isInt(arg))
		printConvertionFromInt(arg);
	else
		printConvertionFromFloatAndDouble(arg);
}

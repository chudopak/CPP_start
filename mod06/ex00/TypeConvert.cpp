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

void	TypeConvert::printConvertionResult(char const *arg) {
	if (isChar(arg))
		printConvertionFromChar(arg);
	else if (isInt(arg))
		printConvertionFromInt(arg);

}

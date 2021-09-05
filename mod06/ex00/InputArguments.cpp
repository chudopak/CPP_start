#include "InputArguments.hpp"

InputArguments::InputArguments(void) {
	_amountArguments = 0;
	_argumentToConvert = NULL;
}

InputArguments::InputArguments(int ac, char **av) {
	_amountArguments = ac;
	_argumentToConvert = av;
}

InputArguments::InputArguments(InputArguments const &src) {
	(void)src;
}

InputArguments::~InputArguments(void) {}

InputArguments& InputArguments::operator=(InputArguments const & src) {
	(void)src;
	return (*this);
}

int		InputArguments::getAmountArguments(void) const {
	return (_amountArguments);
}

char**	InputArguments::getArgumentToConvert(void) const {
	return (_argumentToConvert);
}

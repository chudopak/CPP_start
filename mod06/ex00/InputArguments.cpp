#include "InputArguments.hpp"

InputArguments::InputArguments(void) {
	_amountArguments = 0;
	_arguments = NULL;
	_argumentToConvert = NULL;
}

InputArguments::InputArguments(int ac, char **av) {
	_amountArguments = ac;
	_arguments = av;
	if (ac >= 2)
		_argumentToConvert = av[1];
	else
		_argumentToConvert = NULL;
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

char*	InputArguments::getArgumentToConvert(void) const {
	return (_argumentToConvert);
}

void	InputArguments::beautifyArgumentForConvertion(void) throw(std::exception){
	int		i = 0;

	if (!_argumentToConvert)
		throw NotEnoughArgumentsException();
	if (_argumentToConvert[0] == ' ' && !_argumentToConvert[1])
		return ;
	while (_argumentToConvert[i] && _argumentToConvert[i] == ' ')
		i++;
	_argumentToConvert += i;
}

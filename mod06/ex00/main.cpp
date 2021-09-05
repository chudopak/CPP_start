#include <iostream>
#include "TypeConvert.hpp"
#include "InputArguments.hpp"

bool	validateArg(TypeConvert	& convertedTypes, InputArguments & inputArguments) {
	try {
		convertedTypes.isArgumentExist(inputArguments.getAmountArguments());
		return (true);
	} catch (std::exception & e) {
		std::cout << "Error catched: " << e.what() << std::endl;
	}
	return (false);
}

bool	convertToRequestTypes(InputArguments & inputArguments)
{
	TypeConvert	convertedTypes;

	if (validateArg(convertedTypes, inputArguments)) {
		std::cout << "All ok" << std::endl;
	}
	return (false);
}

int		main(int ac, char **av)
{
	InputArguments	inputArguments(ac, av);
	if (!convertToRequestTypes(inputArguments))
		return (1);
	return (0);
}
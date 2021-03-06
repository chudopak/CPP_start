#include <iostream>
#include "TypeConvert.hpp"
#include "InputArguments.hpp"

bool	validateInputArguments(TypeConvert	& convertedTypes, InputArguments & inputArguments) {
	try {
		convertedTypes.isArgumentExist(inputArguments.getAmountArguments());
		convertedTypes.isArgumentMatchAnyType(inputArguments.getArgumentToConvert());
		return (true);
	} catch (std::exception & e) {
		std::cout << "Error catched: " << e.what() << std::endl;
	}
	return (false);
}

bool	convertToRequestTypes(InputArguments & inputArguments)
{
	TypeConvert	convertedTypes;

	if (validateInputArguments(convertedTypes, inputArguments)) {
		inputArguments.beautifyArgumentForConvertion();
		convertedTypes.printConvertionResult(inputArguments.getArgumentToConvert());
		return (true);
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
#include <iostream>
#include "TypeConvert.hpp"

bool	convertToRequestType(char *arg)
{
	if ()
		;
}

int		main(int ac, char **av)
{
	if (ac != 2)
		std::cout << "There must be one scalar type: <char> <int> <double> <float>" << std::endl;
	if (!convertToRequestType(av[1]))
		return (1);
	return (0);
}
#include "Karen.hpp"

int	main(int ac, char **av)
{
	Karen	karen;

	if (av[1] && ac == 2) {
		karen.complain(static_cast<std::string>(av[1]));
	}
	else
		std::cout << "MUST be: ./karenFilter <level>" << std::endl;
	return 0;
}
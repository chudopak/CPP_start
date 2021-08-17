#include "Sed.hpp"

static bool	validate_input(int ac, char **av)
{
	if (ac != 4) {
		std::cout << "usage: ./replace <filename> <string_to_find> <string_to_replace>"
			<< std::endl;
		return (false);
	}
	else if (!std::strlen(av[1]) || !std::strlen(av[2]) || !std::strlen(av[3])) {
		std::cout << "Usage: ./replace <filename> <string_to_find> <string_to_replace>"
			<< std::endl;
		return (false);
	}
	return (true);
}

int	main(int ac, char **av)
{
	Sed				sed;
	int				status;
	std::string		fileName;
	std::string		line;
	std::string		buff;

	if (!validate_input(ac, av))
		return (1);
	if (!sed.openInputFile(static_cast<std::string>(av[1]))) {
		std::cout << "can't open file: " << av[1] << std::endl;
		return (1);
	}
	buff = sed.reedFile();
	fileName = std::string(av[1]).append(".replace");
	if (!sed.openOutputFile(fileName))
		return (1);
	status = sed.replace(buff, static_cast<std::string>(av[2]),
		static_cast<std::string>(av[3]));
	if (status == -1)
		std::cout << "File wasn't opened of string is empty" << std::endl;
	else if (status == 0)
		std::cout << "Nothing was replaced" << std::endl;
	return (0);
}
#include <iostream>

char	ft_toupper(char c)
{
	if ('a' <= c && c <= 'z')
		return (c - 32);
	return (c);
}

int		main(int ac, char **av)
{
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < ac; i++)
			for (int j = 0; av[i][j]; j++)
				std::cout << ft_toupper(av[i][j]);
		std::cout << std::endl;
	}
	return (0);
}

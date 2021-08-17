#include <iostream>
#include <string>

int	main(void)
{
	std::string		message = "HI THIS IS BRAIN";
	std::string*	stringPTR = &message;
	std::string&	stringREF = message;

	std::cout << "The address of the message - " << &message << std::endl;
	std::cout << "The stringPTR address - " << stringPTR << std::endl;
	std::cout << "The stringREF address - " << &stringREF << std::endl;

	std::cout << "Output string using pointer - " << *stringPTR << std::endl;
	std::cout << "Output string using reference - " << stringREF << std::endl;
	return (0);
}
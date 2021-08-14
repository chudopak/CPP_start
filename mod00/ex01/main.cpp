#include "PhoneBook.hpp"

std::string	getCommand(void)
{
	std::string	command;

	std::cout << "phonebook > ";
	std::getline(std::cin, command);
	if (std::cin.eof())
		exit(0);
	return (command);
}

void	printInstruction(void)
{
	std::cout << "Instraction:" << std::endl << std::endl;
	std::cout << "ADD - create new contact" << std::endl;
	std::cout << "SEARCH - shows all contacts & allow to chouse and see full contact info" << std::endl;
	std::cout << "EXIT - exit program and delete all contacts" << std::endl << std::endl;
}

int	main(void)
{
	PhoneBook	phoneBook;
	std::string	command;

	printInstruction();
	while (true) {
		command = getCommand();
		if (command.empty())
			continue ;
		else if (command == "EXIT")
			break ;
		else if (command == "SEARCH") {
			phoneBook.showContacts();
			phoneBook.serchContact();
		}
		else if (command == "ADD")
			phoneBook.addNewContact();
		else {
			std::cout << "**Ivalid input**" << std::endl;
			printInstruction();
		}
	}
	return (0);
}
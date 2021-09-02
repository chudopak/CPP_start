#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main(void)
{
	std::cout << "TEST ShrubberyCreationForm" << std::endl;
	ShrubberyCreationForm form("picul");
	Bureaucrat mikl("mikl", 138);
	
	std::cout << mikl << std::endl;

	std::cout << form << std::endl;

	mikl.executeForm(form);
	mikl.incrementGrade();
	std::cout << mikl << std::endl;
	mikl.executeForm(form);
	mikl.signForm(form);
	mikl.executeForm(form);

	std::cout << std::endl;
	
	std::cout << "TEST RobotomyRequestForm" << std::endl;

	RobotomyRequestForm atom("atom");
	Bureaucrat cat("cat", 46);
	
	std::cout << cat << std::endl;

	std::cout << atom << std::endl;
	cat.executeForm(atom);
	cat.incrementGrade();
	std::cout << cat << std::endl;
	cat.executeForm(atom);
	cat.signForm(atom);
	cat.executeForm(atom);

	std::cout << std::endl;
	
	std::cout << "TEST PresidentialPardonForm" << std::endl;
	Bureaucrat zhuk("zhuk", 6);
	PresidentialPardonForm berduberdy("Berdu BErdy Muhamedov");
	
	std::cout << zhuk << std::endl;

	std::cout << berduberdy << std::endl;
	zhuk.executeForm(berduberdy);
	zhuk.incrementGrade();
	std::cout << zhuk << std::endl;
	zhuk.executeForm(berduberdy);
	zhuk.signForm(berduberdy);
	zhuk.executeForm(berduberdy);

	return (0);
}
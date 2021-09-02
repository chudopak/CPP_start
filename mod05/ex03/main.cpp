#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main(void)
{
	Intern	intern;

	std::cout << "TEST ShrubberyCreationForm" << std::endl;
	Form*	form;
	Bureaucrat mikl("mikl", 138);
	
	form = intern.makeForm("shrubbery creation", "picul");

	std::cout << mikl << std::endl;

	std::cout << *form << std::endl;

	mikl.executeForm(*form);
	mikl.incrementGrade();
	std::cout << mikl << std::endl;
	mikl.executeForm(*form);
	mikl.signForm(*form);
	mikl.executeForm(*form);

	std::cout << std::endl;
	
	std::cout << "TEST RobotomyRequestForm" << std::endl;

	Form*	atom;
	Bureaucrat cat("cat", 46);
	
	atom = intern.makeForm("robotomy request", "atom");
	std::cout << cat << std::endl;

	std::cout << *atom << std::endl;
	cat.executeForm(*atom);
	cat.incrementGrade();
	std::cout << cat << std::endl;
	cat.executeForm(*atom);
	cat.signForm(*atom);
	cat.executeForm(*atom);

	std::cout << std::endl;
	
	std::cout << "TEST PresidentialPardonForm" << std::endl;
	Bureaucrat zhuk("zhuk", 6);
	Form*	berduberdy;
	berduberdy = intern.makeForm("presidential pardon", "berduberdy");
	

	std::cout << zhuk << std::endl;

	std::cout << *berduberdy << std::endl;
	zhuk.executeForm(*berduberdy);
	zhuk.incrementGrade();
	std::cout << zhuk << std::endl;
	zhuk.executeForm(*berduberdy);
	zhuk.signForm(*berduberdy);
	zhuk.executeForm(*berduberdy);

	std::cout << "This tests Must fail" << std::endl;;

	intern.makeForm("RabotomyRequestForm", "1");
	intern.makeForm("Shruberry Creation", "3ykik");
	intern.makeForm("presidential pardon ", "u4");
	intern.makeForm("unexistante form", "tykik");

	delete form;
	delete atom;
	delete berduberdy;
	return (0);
}
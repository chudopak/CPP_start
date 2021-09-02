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

	/*std::cout << "TRYING GOOD VALUES in Form constructor" << std::endl;
	std::cout << std::endl;

	try {
		Form	test("Form1", 1, 1);
		std::cout << "TEST (1): OK" << std::endl << test << std::endl;
	} catch (std::exception & e) {
		std::cout << "TEST (1): " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Form	test("Form2", 150, 150);
		std::cout << "TEST (2): OK: " << std::endl << test << std::endl;
	} catch (std::exception & e) {
		std::cout << "TEST (2): " << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << "TRYING BAD VALUES in Form constructor" << std::endl;
	std::cout << std::endl;

	try {
		Form	test("Form3", 151, 150);
		std::cout << "TEST (3): OK: " << std::endl << test << std::endl;
	} catch (std::exception & e) {
		std::cout << "TEST (3): " << e.what() << ": sign Grade - 151" << std::endl;
	}

	std::cout << std::endl;

	try {
		Form	test("Form4", 1, 0);
		std::cout << "TEST (4): OK" << std::endl << test << std::endl;
	} catch (std::exception & e) {
		std::cout << "TEST (4): " << e.what() << ": execute Grade - 0" << std::endl;
	}

	std::cout << std::endl;
	std::cout << "TRYING SIGN Forms" << std::endl;
	std::cout << std::endl;

	try {
		Form	testF("Form5", 1, 1);
		std::cout << testF << std::endl;
		Bureaucrat	testB("bureaucrat", 150);
		std::cout << testB << std::endl;
		std::cout << "trying to sign" << std::endl;
		testB.signForm(testF);
		std::cout << "TEST (5): OK" << ": form signed" << testF.getName() << std::endl;
	} catch (std::exception & e) {
		std::cout << "TEST (5): " << e.what() << ": form can't be signed" << std::endl;
	}

	std::cout << std::endl;

	try {
		Form	testF("Form6", 1, 1);
		std::cout << testF << std::endl;
		Bureaucrat	testB("bureaucratBIGBOSS", 1);
		std::cout << testB << std::endl;
		//testB.incrementGrade();
		std::cout << "trying to sign" << std::endl;
		testB.signForm(testF);
		std::cout << "TEST (6): OK" << ": form signed " << testF.getName() << std::endl;
	} catch (std::exception & e) {
		std::cout << "TEST (6): " << e.what() << ": form can't be signed" << std::endl;
	}


	std::cout << std::endl;

	try {
		Form	testF("Form7", 100, 1);
		std::cout << testF << std::endl;
		Bureaucrat	testB("bureaucratSmallShrimp", 99);
		std::cout << testB << std::endl;
		std::cout << "trying to sign" << std::endl;
		testB.signForm(testF);
		std::cout << "TEST (7): OK" << ": form signed " << testF.getName() << std::endl;
	} catch (std::exception & e) {
		std::cout << "TEST (7): " << e.what() << ": form can't be signed" << std::endl;
	}*/
	return (0);
}
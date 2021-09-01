#include "Bureaucrat.hpp"

int		main(void)
{
	std::cout << "TRYING GOOD VALUES in constructor" << std::endl;
	std::cout << std::endl;

	try {
		Bureaucrat	test;
		std::cout << "TEST (1): OK: Default constructor call" << std::endl;
	} catch (std::exception & e) {
		std::cout << "TEST (1): " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat	test("TEST2", 150);
		std::cout << "TEST (2): OK: " << "Name - TEST2, Grade - 150" << std::endl;
	} catch (std::exception & e) {
		std::cout << "TEST (2): " << e.what() << std::endl;
	}
	
	std::cout << std::endl;

	try {
		Bureaucrat	test("TEST3", 1);
		std::cout << "TEST (3): OK: " << "Name - TEST3, Grade - 1"<< std::endl;
	} catch (std::exception & e) {
		std::cout << "TEST (3): " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "TRYING BAD VALUES in constructor" << std::endl;
	std::cout << std::endl;

	try {
		Bureaucrat	test("TEST4", 0);
		std::cout << "TEST (4): OK" << ": Name - TEST4, Grade - 0"<< std::endl;
	} catch (std::exception & e) {
		std::cout << "TEST (4): " << e.what() << ": Name - TEST4, Grade - 0" << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat	test("TEST5", 151);
		std::cout << "TEST (5): OK" << ": Name - TEST5, Grade - 151"<< std::endl;
	} catch (std::exception & e) {
		std::cout << "TEST (5): " << e.what() << ": Name - TEST5, Grade - 151" << std::endl;
	}

	std::cout << std::endl;
	std::cout << "TRYING BAD VALUES increment decrement" << std::endl;
	std::cout << std::endl;

	try {
		Bureaucrat	test("TEST6", 1);
		test.incrementGrade();
		std::cout << "TEST (6): OK" << ": Name - TEST6, Grade - 1--"<< std::endl;
	} catch (std::exception & e) {
		std::cout << "TEST (6): " << e.what() << ": Name - TEST6, Grade - 1--" << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat	test("TEST7", 150);
		test.decrementGrade();
		std::cout << "TEST (7): OK" << ": Name - TEST7, Grade - 150++"<< std::endl;
	} catch (std::exception & e) {
		std::cout << "TEST (7): " << e.what() << ": Name - TEST7, Grade - 150++" << std::endl;
	}
	return (0);
}
#include <iostream>
#include "TestClass.hpp"
#include "Array.hpp"

#define TEST_SIZE	10

int		main(void)
{
	std::cout << "Create empty array" << std::endl;
	Array<int> empty;
	std::cout << empty.size() << std::endl;

	std::cout << "Create array of int's" << std::endl;
	
	Array<int> test_int(TEST_SIZE);
	srand(time(NULL));
	for (int i = 0; i < TEST_SIZE; i++) {
		int	random = rand() % 100;
		test_int[i] = random;
	}
	
	std::cout << "[";
	for (unsigned int i = 0; i < test_int.size(); i++) {
		std::cout << test_int[i];
		if (i + 1 != test_int.size())
			std::cout << ",";
	}
	std::cout << "]" << std::endl;

	std::cout << "Changing first element in array" << std::endl;

	test_int[0] = 1023;
	std::cout << "[";
	for (unsigned int i = 0; i < test_int.size(); i++) {
		std::cout << test_int[i];
		if (i + 1 != test_int.size())
			std::cout << ",";
	}
	std::cout << "]" << std::endl;

	std::cout << "Assign arrays of int's" << std::endl;

	Array<int> test_copy_int(TEST_SIZE + 1);
	srand(time(NULL));
	for (int i = 0; i < TEST_SIZE + 1; i++) {
		int	random = rand() % 47;
		test_copy_int[i] = random;
	}
	std::cout << "Vefore: [";
	for (unsigned int i = 0; i < test_copy_int.size(); i++) {
		std::cout << test_copy_int[i];
		if (i + 1 != test_copy_int.size())
			std::cout << ",";
	}
	std::cout << "]" << std::endl;
	test_copy_int = test_int;
	std::cout << "After: [";
	for (unsigned int i = 0; i < test_copy_int.size(); i++) {
		std::cout << test_copy_int[i];
		if (i + 1 != test_copy_int.size())
			std::cout << ",";
	}
	std::cout << "]" << std::endl;

	std::cout << std::endl;

	std::cout << "Create array of TestClass" << std::endl;
	Array<TestClass> test_class(TEST_SIZE);
	std::cout << "[";
	for (unsigned int i = 0; i < test_class.size(); i++) {
		std::cout << test_class[i].getN();
		if (i + 1 != test_class.size())
			std::cout << ",";
	}
	std::cout << "]" << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;

	std::cout << "Trying to get unexect ceiling" << std::endl;
	std::cout << std::endl;
	try {
		std::cout << "trying negative value" << std::endl;
		TestClass *cl = &test_class[-2];
		(void)cl;
		std::cout << "ALL DOOG" << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "trying BIG value" << std::endl;
		TestClass *cl = &test_class[TEST_SIZE];
		(void)cl;
		std::cout << "ALL DOOG" << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	
	return (0);
}
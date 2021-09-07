#include "iter.hpp"
#include "TestClass.hpp"

int		main(void)
{
	{
		std::cout << "Simple dimpl tests" << std::endl;
		std::cout << std::endl;

		std::cout << "Test int array" << std::endl;
		int	test_int_array[] = {1, 2, 3, 4, 5};
		iter(test_int_array, 5, print);
		std::cout << std::endl;

		std::cout << "Test string array" << std::endl;
		std::string test_str_array[] = {"i", "am", "sooooo", "happy"};
		iter(test_str_array, 4, print);
		std::cout << std::endl;

		std::cout << "Test string array" << std::endl;
		TestClass test_class_array[5];
		iter(test_class_array, 5, print);
	}
	return (0);
}

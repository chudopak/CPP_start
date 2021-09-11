#include "span.hpp"

int		main(void){
	std::vector<int>	test;
	srand(time(NULL));

	test.reserve(20);
	std::cout << test.size() << std::endl;
	std::cout << test.capacity() << std::endl;
	for (int i = 0; i < static_cast<int>(test.capacity()); i++) {
		test.push_back(rand() % 100);
	}

	for (int i = 0; i < static_cast<int>(test.capacity()); i++) {
		std::cout << test[i] << ' ';
	}
	std::cout << std::endl;

	std::vector<int>::iterator	itb = test.begin();
	std::vector<int>::iterator	ite = test.end();

	std::sort(itb, ite);
	for (int i = 0; i < static_cast<int>(test.capacity()); i++) {
		std::cout << test[i] << ' ';
	}
	std::cout << std::endl;
	std::cout << test.size() << std::endl;
	std::cout << test.capacity() << std::endl;

	Span span(5);

	try {
		span.longestSpan();
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		span.shortestSpan();
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		span.addNumber(5);
		span.addNumber(3);
		span.addNumber(17);
		span.addNumber(9);
		span.addNumber(11);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		span.addNumber(2);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "shortest span: " << span.shortestSpan() << std::endl;
	std::cout << "longest  span: " << span.longestSpan() << std::endl << std::endl;

	Span megaspan(10000);
	megaspan.fillWithRandom(std::numeric_limits<int>::max());
	std::cout << "shortest span: " << megaspan.shortestSpan() << std::endl;
	std::cout << "longest  span: " << megaspan.longestSpan() << std::endl;


	return 0;
}
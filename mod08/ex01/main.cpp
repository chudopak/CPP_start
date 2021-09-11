#include "span.hpp"

int		main(void){
	srand(time(NULL));
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
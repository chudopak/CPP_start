#include "Fixed.hpp"

int	main()
{
	// Increment and decrement overload tests
	Fixed	a;
	
	std::cout << "Increment and decrement operators tests" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a <<  std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << std::endl;
	
	// Min max tests
	std::cout << "Min and max operators tests" << std::endl;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;
	std::cout << Fixed::max(Fixed(-3), Fixed(42)) << std::endl;
	std::cout << Fixed::min(Fixed(0.0f), Fixed(32.56f)) << std::endl;
	std::cout << Fixed::max(Fixed(-7.32f), Fixed(7)) << std::endl;
	std::cout << Fixed::min(Fixed(53.99f), Fixed(54)) << std::endl;

	Fixed const	i(42);
	Fixed const	j(63.7f);
	std::cout << Fixed::max(i, j) << std::endl;
	
	std::cout << std::endl;

	//Comparison overload tests
	Fixed	x(5);
	Fixed	y(3);

	std::cout << "Comparisons operators tests" << std::endl;
	std::cout << "x: " << x << " | y: " << y << std::endl;
	if (x < y)
		std::cout << "x is inferior to y y" << std::endl;
	else
		std::cout << "x is not inferior to y " << std::endl;

	if (x > y)
		std::cout << "x is superior to y" << std::endl;
	else
		std::cout << "x is not superior to y" << std::endl;

	if (x <= y)
		std::cout << "x is inferior or equal to y" << std::endl;
	else
		std::cout << "x is not inferior or equal to y" << std::endl;

	if (x >= y)
		std::cout << "x is superior or equal to y" << std::endl;
	else
		std::cout << "x is not superior or equal to y" << std::endl;

	if (x == y)
		std::cout << "x is equal to y" << std::endl;
	else
		std::cout << "x is not equal to y" << std::endl;
		
	if (x != y)
		std::cout << "x is different to y" << std::endl;
	else
		std::cout << "x is not different to y" << std::endl;

	std::cout << std::endl;

	//Assignation operators
	int		n1 = 3;
	int		n2 = 6;

	std::cout << "Assignation operators tests" << std::endl;
	Fixed	resultConstructPlus(Fixed(n1) + Fixed(n2));
	std::cout << "resultPlus: " << Fixed(n1) + Fixed(n2) << std::endl;
	std::cout << "resultConstructPlus: " << resultConstructPlus << std::endl;

	Fixed	resultConstructMinus(Fixed(n1) - Fixed(n2));
	std::cout << "resultMinus: " << Fixed(n1) - Fixed(n2) << std::endl;
	std::cout << "resultConstructMinus: " << resultConstructMinus << std::endl;

	Fixed	resultConstructMult(Fixed(n1) * Fixed(n2));
	std::cout << "resultMult: " << Fixed(n1) * Fixed(n2)<< std::endl;
	std::cout << "resultConstructMult: " << resultConstructMult << std::endl;

	Fixed	resultConstructDiv(Fixed(n1) / Fixed(n2));
	std::cout << "resultDiv: " << Fixed(n1) / Fixed(n2) << std::endl;
	std::cout << "resultConstructDiv: " << resultConstructDiv << std::endl;
}
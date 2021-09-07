#include <iostream>
#include "template.hpp"
#include "TestClass.hpp"

int		main(void)
{
	{
		int a = 2;
		int b = 3;
		::swap( &a, &b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(&c, &d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}

	{
		std::cout << "My tests" << std::endl;
		int		a(5), b(7);
		float	c(34.4), d(23.56);

		std::cout << "Test with standat types" << std::endl;
		std::cout << std::endl;

		std::cout << "a = 5 b = 7" << std::endl;
		std::cout << "c = 34.4 d = 23.56" << std::endl;
		std::cout << std::endl;

		std::cout << "Print biggest int " << max<int>(a, b) << std::endl;
		std::cout << "Print biggest float " << max<float>(c, d) << std::endl;
		std::cout << std::endl;

		std::cout << "Print smallest int " << min<int>(a, b) << std::endl;
		std::cout << "Print smallest float " << min<float>(c, d) << std::endl;
		std::cout << std::endl;

		std::cout << "Swap a = 5 and b = 7" << std::endl;
		swap<int>(&a, &b);
		std::cout << "a - " << a << " b - " << b << std::endl;

		std::cout << "Swap c = 34.4 and d = 23" << std::endl;
		swap<float>(&c, &d);
		std::cout << "c - " << c << " d - " << d << std::endl;

		std::cout << std::endl;
		std::cout << "Test with my class" << std::endl;
		std::cout << std::endl;

		TestClass	nb1(2);
		TestClass	nb2(7);

		std::cout << "nb1 = 2 nb2 = 7" << std::endl;
		std::cout << std::endl;

		std::cout << "Print biggest TestClass " << max<TestClass>(nb1, nb2) << std::endl;
		std::cout << "Print smallest TestClass " << min<TestClass>(nb1, nb2) << std::endl;

		std::cout << "Swap It" << std::endl;
		swap<TestClass>(&nb1, &nb2);
		std::cout << "a - " << nb1 << "b - " << nb2 << std::endl;
	}
	return (0);
}
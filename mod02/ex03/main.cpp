#include "Point.hpp"

void	printResult(Point const &A, Point const &B, Point const &C, Point const &P)
{
	if (bsp(A, B, C, P))
		std::cout << P << " is inside the triangle" << std::endl;
	else
		std::cout << P << " is not inside the triangle" << std::endl;
}

int	main()
{
	std::cout << "Triangle +x +y" << std::endl;
	Point const	A(0, 4);
	Point const	B;
	Point const	C(4, 0);
	
	//std::cout << "cX - " << a.getXInt() << " cY - " << c.getYInt() << std::endl;
	std::cout << "Triangle corners: " << A << " " << B << " " << C << " " << std::endl;

	Point const	Point01(1, 1); // Inside
	printResult(A, B, C, Point01);

	Point const	Point02(A); // On a corner
	printResult(A, B, C, Point02);

	Point const	Point03(0.03f, 0.03f); // Juste barely inside
	printResult(A, B, C, Point03);

	Point const	Point04(46.53f, 10); // Far outsise
	printResult(A, B, C, Point04);
	

	std::cout << std::endl;
	

	std::cout << "Triangle -x +y" << std::endl;
	Point const	A1(-0, 4);
	Point const	B1;
	Point const	C1(-4, 0);
	
	std::cout << "Triangle corners: " << A1 << " " << B1 << " " << C1 << " " << std::endl;

	Point const	Point11(-1, 1); // Inside
	printResult(A1, B1, C1, Point11);

	Point const	Point12(A1); // On a corner
	printResult(A1, B1, C1, Point12);

	Point const	Point13(-0.01f, 0.01f); // Juste barely inside
	printResult(A1, B1, C1, Point13);

	Point const	Point14(-46.53f, 10); // Far outsise
	printResult(A1, B1, C1, Point14);
	

	std::cout << std::endl;
	
	
	std::cout << "Triangle +x -y" << std::endl;
	Point const	A2(0, -4);
	Point const	B2;
	Point const	C2(4, -0);
	
	std::cout << "Triangle corners: " << A2 << " " << B2 << " " << C2 << " " << std::endl;

	Point const	Point21(1, -1); // Inside
	printResult(A2, B2, C2, Point21);

	Point const	Point22(A2); // On a corner
	printResult(A2, B2, C2, Point22);

	Point const	Point23(0.01f, -0.01f); // Juste barely inside
	printResult(A2, B2, C2, Point23);

	Point const	Point24(46.53f, -10); // Far outsise
	printResult(A2, B2, C2, Point24);
	

	std::cout << std::endl;
	
	
	std::cout << "Triangle -x -y" << std::endl;
	Point const	A3(-0, -4);
	Point const	B3;
	Point const	C3(-4, -0);
	
	std::cout << "Triangle corners: " << A3 << " " << B3 << " " << C3 << " " << std::endl;

	Point const	Point31(-1, -1); // Inside
	printResult(A3, B3, C3, Point31);

	Point const	Point32(A3); // On a corner
	printResult(A3, B3, C3, Point32);

	Point const	Point33(-0.01f, -0.01f); // Juste barely inside
	printResult(A3, B3, C3, Point33);

	Point const	Point34(-46.53f, -10); // Far outsise
	printResult(A3, B3, C3, Point34);
}
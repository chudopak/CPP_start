#include <iostream>

class	Base
{
public:
	virtual ~Base(void) {};
};

class	A : public Base {};
class	B : public Base {};
class	C : public Base {};

Base*	generate(void)
{
	srand((unsigned int)time(NULL));
	int randomBase = std::rand() % 3;

	if (randomBase == 0)
		return (new A());
	else if (randomBase == 1)
		return (new B());
	else
		return (new C());
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	std::cout << "None of inherits classes present here" << std::endl;
}

void	identify(Base& p)
{
	try {
		A a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	} catch (std::bad_cast &bc) {
		try {
			B b = dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		} catch (std::bad_cast &bc) {
			try {
				C c = dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			} catch (std::bad_cast &bc) {
				std::cout << "None of inherits classes present here" << std::endl;
			}
		}
	}
}

int	main(void)
{
	std::cout << "Create new object" << std::endl;
	Base*	p = generate();

	std::cout << "Identify by using pointer" << std::endl;
	identify(p);

	std::cout << "Identify by using reference" << std::endl;
	identify(*p);

	delete p;
	return (0);
}
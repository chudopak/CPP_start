#include <iostream>

class	Overload
{
private:
	int		_i;

public:

	Overload (int	i) {_i = i;}
	int		getI(void) {
		return (_i);
	}
};

Overload	operator+(Overload &i1, Overload &i2) {
	return Overload(i1.getI() + i2.getI());
}

int	main(void) {
	Overload	i1 = Overload(5);
	Overload	i2 = Overload(2);

	i1 = i1 + i2;
	std::cout << i1.getI() << std::endl;
	return (0);
}

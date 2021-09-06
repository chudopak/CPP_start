#include <iostream>

struct	Data {
	float	test1;
	float	test2;
};

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw){
	return (reinterpret_cast<Data*>(raw));
}

int		main(void)
{
	Data*	example = new Data();

	example->test1 = 389.13f;
	example->test2 = 214.123f;

	std::cout << "Before convertion" << std::endl;
	std::cout << example->test1 << std::endl;
	std::cout << example->test2 << std::endl;

	uintptr_t	p 			= serialize(example);
	Data*		convetred	= deserialize(p);

	std::cout << "After convertion" << std::endl;
	std::cout << convetred->test1 << std::endl;
	std::cout << convetred->test2 << std::endl;

	delete example;
	return (0);
}
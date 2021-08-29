#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int		main(void)
{
	const Animal	*cat = new Cat();
	std::cout << std::endl;
	const Animal	*dog = new Dog();
	std::cout << std::endl;

	delete cat;
	std::cout << std::endl;
	delete dog;
	return (0);
}
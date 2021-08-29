#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int		main(void)
{
	const Animal	*cat = new Cat();
	const Animal	*dog = new Dog();

	delete cat;
	delete dog;
	return (0);
}
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

void	makeSomeNoise(const Animal *an) {
	an->makeSound();
}

int		main(void)
{
	const Animal	*cat = new Cat();
	std::cout << std::endl;

	const Animal	*dog = new Dog();
	std::cout << std::endl;

	const Animal	*none = new Animal();
	std::cout << std::endl;

	makeSomeNoise(cat);
	makeSomeNoise(dog);
	makeSomeNoise(none);

	std::cout << std::endl;

	delete cat;
	delete dog;
	delete none;

	std::cout << std::endl;
	std::cout << "Testing without virtual methods" << std::endl;
	std::cout << std::endl;

	const WrongAnimal	*wrongCat = new WrongCat();
	std::cout << std::endl;

	const WrongAnimal	*wrongNone = new WrongAnimal();
	std::cout << std::endl;

	wrongCat->makeSound();
	wrongNone->makeSound();
	
	std::cout << std::endl;

	delete wrongNone;
	delete wrongCat;
	return (0);
}
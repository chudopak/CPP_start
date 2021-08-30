#include "Cat.hpp"
#include "Dog.hpp"

int		main(void)
{
	const Animal	*cat = new Cat();
	std::cout << std::endl;

	const Animal	*dog = new Dog();
	std::cout << std::endl;

	//Animal	test;
	//const Animal	*none = new Animal();

	cat->makeSound();
	dog->makeSound();
	std::cout << std::endl;
	delete cat;
	delete dog;


	std::cout << std::endl;
	std::cout << "Check cat deep copy" << std::endl;
	std::cout << std::endl;
	Cat*	catDeep = new Cat();
	std::cout << std::endl;

	std::cout << "Cat first idea: " << catDeep->getBrain().getIdeas()[0] << std::endl;
	std::cout << "Cat first ideas address: " << catDeep->getBrain().getIdeas() << std::endl;
	std::cout << "Cat second idea address: " << &(catDeep->getBrain().getIdeas()[1]) << std::endl;

	std::cout << std::endl;
	Cat*	catDeepCopy = new Cat(*catDeep);
	std::cout << std::endl;

	std::cout << "Cat COPY first idea: " << catDeepCopy->getBrain().getIdeas()[0] << std::endl;
	std::cout << "Cat first ideas address: " << catDeepCopy->getBrain().getIdeas() << std::endl;
	std::cout << "Cat second idea address: " << &(catDeepCopy->getBrain().getIdeas()[1]) << std::endl;

	std::cout << std::endl;

	std::cout << std::endl;
	delete catDeep;
	delete catDeepCopy;

	std::cout << std::endl;

	std::cout << "Check dog deep copy" << std::endl;
	std::cout << std::endl;
	Dog*	dogDeep = new Dog();
	std::cout << std::endl;

	std::cout << "dog first idea: " << dogDeep->getBrain().getIdeas()[0] << std::endl;
	std::cout << "dog first ideas address: " << dogDeep->getBrain().getIdeas() << std::endl;
	std::cout << "dog second idea address: " << &(dogDeep->getBrain().getIdeas()[1]) << std::endl;

	std::cout << std::endl;
	Dog*	dogDeepCopy = new Dog(*dogDeep);
	std::cout << std::endl;

	std::cout << "dog COPY first idea: " << dogDeepCopy->getBrain().getIdeas()[0] << std::endl;
	std::cout << "dog first ideas address: " << dogDeepCopy->getBrain().getIdeas() << std::endl;
	std::cout << "dog second idea address: " << &(dogDeepCopy->getBrain().getIdeas()[1]) << std::endl;

	std::cout << std::endl;

	std::cout << std::endl;
	delete dogDeep;
	delete dogDeepCopy;

	return (0);
}
# include "AMateria.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include "ICharacter.hpp"
# include "Character.hpp"
# include "IMateriaSource.hpp"
# include "MateriaSource.hpp"

int	main(void)
{	
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	
	std::cout << std::endl;

	IMateriaSource*	source = new MateriaSource();
	AMateria*	m;
	AMateria*	m1 = new Cure;
	AMateria*	m2 = new Ice;
	ICharacter*	notme = new Character("notme");
	ICharacter*	dummy = new Character("Dummy");

	m = source->createMateria("Cure");
	notme->equip(m);
	std::cout << "Should display nothing because Cure materia template is not known by source:" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		notme->use(i, *dummy);
		notme->unequip(i);
	}

	std::cout << std::endl;

	source->learnMateria(m1);
	source->learnMateria(m2);
	source->learnMateria(new Ice);
	source->learnMateria(new Ice);
	source->learnMateria(m);
	// Last Cure (m) is not learned because source inventory is full

	std::cout << "Should print Cure / Ice / Ice / Ice messages:" << std::endl;
	notme->equip(source->createMateria("cure"));
	notme->equip(source->createMateria("ice"));
	notme->equip(source->createMateria("ice"));
	notme->equip(source->createMateria("ice"));
	m = source->createMateria("cure");
	notme->equip(m);
	
	for (int i = 0; i < 4; i++)
		notme->use(i, *dummy);

	std::cout << "Doesn´t print cure message because inventory is full when 'learned':" << std::endl;
	notme->use(5, *dummy);
	std::cout << "Doesn´t unequip it neither:" << std::endl;
	notme->unequip(5);

	std::cout << std::endl;

	std::cout << "Character copy constructor:" << std::endl;
	Character* copy = new Character(*static_cast<Character*>(notme));
	for (int i = 0; i < 4; i++)
		notme->use(i, *dummy);

	std::cout << "Character assignation:" << std::endl;
	for (int i = 0; i < 4; i++)
		dummy->use(i, *notme);
	*static_cast<Character*>(dummy) = *copy;
	for (int i = 0; i < 4; i++)
		dummy->use(i, *notme);

	delete m;
	delete source;
	delete copy;
	delete dummy;
	delete notme;

	return 0;
}
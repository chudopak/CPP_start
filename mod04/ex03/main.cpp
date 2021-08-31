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

	IMateriaSource* mSource = new MateriaSource();

	std::cout << "trying to learn more materia than inventory size can contain" << std::endl;
	mSource->learnMateria(new Ice());
	mSource->learnMateria(new Cure());
	mSource->learnMateria(NULL); // this must not segfault
	mSource->learnMateria(new Ice());
	mSource->learnMateria(new Cure()); // this one cant be learned;
	
	ICharacter* kavin = new Character("Kavin");


	kavin->equip(mSource->createMateria("ice"));
	kavin->equip(mSource->createMateria("ice"));
	kavin->equip(mSource->createMateria("cure"));
	kavin->equip(mSource->createMateria("ice"));
	kavin->equip(mSource->createMateria("cure")); // can't be equip
	kavin->equip(mSource->createMateria("ice"));
	for (int i = 0; i < INVENTORY_SIZE; i++)
		kavin->use(i, *kavin);

	delete kavin;
	delete mSource;
	return 0;
}
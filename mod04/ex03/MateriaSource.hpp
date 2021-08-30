#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include <iostream>

# ifndef INVENTORY_SIZE
#  define INVENTORY_SIZE 4
# endif
class MateriaSource : public IMateriaSource
{
private:
	AMateria*			_inventory[INVENTORY_SIZE];

	void				_setEmptyInventoty(void);
	void				_copyInventory(AMateria* const inventory[]);
	void				_deleatMaterialFromInventory(unsigned int const idx);
	void				_setMaterialToInventorySlot(unsigned int const idx,
												AMateria* const inventory[]);

public:
	MateriaSource(void);
	MateriaSource(MateriaSource const & src);
	virtual ~MateriaSource(void);

	MateriaSource&		operator=(MateriaSource const &src);

	virtual void		learnMateria(AMateria* m);
	virtual AMateria*	createMateria(std::string const & type);
	
};

#endif
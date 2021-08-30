#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

# ifndef INVENTORY_SIZE
#  define INVENTORY_SIZE 4
# endif

class Character : public ICharacter
{
private:
	std::string					_name;
	AMateria*					_inventory[INVENTORY_SIZE];

	void						_setEmptyInventoty(void);
	void						_copyInventory(AMateria* const inventory[]);
	void						_deleatMaterialFromInventory(unsigned int const idx);
	void						_setMaterialToInventorySlot(unsigned int const idx,
														AMateria* const inventory[]);

public:
	Character(void);
	Character(std::string const & name);
	Character(Character const & src);
	virtual ~Character(void);

	Character&					operator=(Character const & src);

	virtual	std::string const &	getName() const;
	virtual void				equip(AMateria* m);
	virtual void				unequip(int idx);
	virtual void				use(int idx, ICharacter& target);
};

#endif
#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class ICharacter;

class AMateria
{
protected:
	std::string		_type;

public:
	AMateria(void);
	AMateria(AMateria const & src);
	AMateria(std::string const & type);
	virtual ~AMateria(void);

	AMateria&				operator=(AMateria const &src);

	std::string const &		getType(void) const;
	virtual AMateria*		clone(void) const = 0;
	virtual void			use(ICharacter& target);
};

#endif
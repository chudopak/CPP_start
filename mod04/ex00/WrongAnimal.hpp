#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class	WrongAnimal
{
protected:
	std::string		_type;

public:
	WrongAnimal(void);
	WrongAnimal(std::string const & type);
	WrongAnimal(WrongAnimal const & src);
	~WrongAnimal(void);
	
	WrongAnimal&	operator=(WrongAnimal const & src);

	std::string		getType(void) const;

	void	makeSound(void) const;
};

#endif
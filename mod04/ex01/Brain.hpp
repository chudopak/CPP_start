#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
private:
	std::string			*_ideas;

public:
	Brain(void);
	Brain(Brain const &src);
	Brain(std::string const &idea);
	~Brain(void);

	Brain&				operator=(Brain const &src);

	std::string*		getIdeas(void) const;
};

#endif
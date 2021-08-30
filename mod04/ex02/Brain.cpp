#include "Brain.hpp"

Brain::Brain(void) : _ideas(new std::string[100]) {
	std::cout << "Brain: Default constructor call" << std::endl;
	_setIdea("noIdeas:(");
}

Brain::Brain(std::string const & idea) : _ideas(new std::string[100]) {
	std::cout << "Brain: Set Idea constructor call" << std::endl;
	_setIdea(idea);
}

Brain::Brain(Brain const & src) : _ideas(new std::string[100]) {
	std::cout << "Brain: Copy constructor call" << std::endl;
	*this = src;
}

Brain::~Brain(void) {
	std::cout << "Brain: Destructor  call" << std::endl;
	delete [] _ideas;
}

Brain&	Brain::operator=(Brain const & src) {
	std::cout << "Brain: Assignation operator call" << std::endl;
	_copyIdeas(src.getIdeas());
	return (*this);
}

std::string*	Brain::getIdeas(void) const {
	return (_ideas);
}

void	Brain::_setIdea(std::string const &idea) {
	for (int i = 0; i < 100; i++)
		_ideas[i] = idea;
}

void	Brain::_copyIdeas(std::string const * ideas) {
	for (int i = 0; i < 100; i++)
		_ideas[i] = ideas[i];
}


#include "Brain.hpp"

Brain::Brain(void) : _ideas(new std::string[100]) {
	std::cout << "Brain: Default constructor call" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = "noIdeas:(";
}

Brain::Brain(std::string const & idea) : _ideas(new std::string[100]) {
	std::cout << "Brain: Set Idea constructor call" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = idea;
}

Brain::Brain(Brain const & src) : _ideas(new std::string[100]) {
	std::cout << "Brain: Copy constructor call" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = src._ideas[i];
}

Brain::~Brain(void) {
	std::cout << "Brain: Destructor  call" << std::endl;
	delete [] _ideas;
}

Brain&	Brain::operator=(Brain const & src) {
	std::cout << "Brain: Assignation operator call" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = src._ideas[i];
	return (*this);
}

std::string*	Brain::getIdeas(void) const {
	return (_ideas);
}
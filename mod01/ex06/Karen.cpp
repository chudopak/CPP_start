#include "Karen.hpp"

Karen::Karen(void) {}

Karen::~Karen(void) {}

void	Karen::_debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout <<
		"I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. "
		<< "I just love it!"
		<< std::endl;
	std::cout << std::endl;
}

void	Karen::_info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout <<
		"I cannot believe adding extra bacon cost more money. " << 
		"You don’t put enough! If you did I would not have to ask for it!"
		<< std::endl;
	std::cout << std::endl;
}

void	Karen::_warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout <<
		"I think I deserve to have some extra bacon for free." <<
		" I’ve been coming here for years and you just started working here last month."
		<< std::endl;
	std::cout << std::endl;
}

void	Karen::_error(void) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout <<
		"This is unacceptable, I want to speak to the manager now."
		<< std::endl;
	std::cout << std::endl;
}

void	Karen::complain(std::string level)
{
	_ComplainList	complainCase[4] = {
		{"DEBUG",	&Karen::_debug},
		{"INFO",	&Karen::_info},
		{"WARNING",	&Karen::_warning},
		{"ERROR",	&Karen::_error}
	};

	for (int i = 0; i < 4; i++) {
		if (complainCase[i].lvl == level) {
			switch (i) {
				case 0: (this->*complainCase[0].f)();
				case 1: (this->*complainCase[1].f)();
				case 2: (this->*complainCase[2].f)();
				case 3: (this->*complainCase[3].f)();
			}
			return ;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
		: Form("RobotomyRequestForm", 72, 45)
{
	_target = "RObotomy";
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target)
		: Form("RobotomyRequestForm", 72, 45)
{
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
		: Form("RobotomyRequestForm", 72, 45)
{
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const & src) {
	_target = src.getTarget();
	return (*this);
}

std::string		RobotomyRequestForm::getTarget(void) const {
	return (_target);
}

void	RobotomyRequestForm::action(void) const {
	srand((unsigned int)time(NULL));
	int robotomiseResult = std::rand() % 2;
	std::cout << "Drilling noises * ";
	if (robotomiseResult)
		std::cout << _target << " has been robotomized" << std::endl;
	else
		std::cout << _target << " has not been robotomized" << std::endl;
}

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
		: Form("PresidentialPardonForm", 25, 5)
{
	_target = "President";
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target)
		: Form("PresidentialPardonForm", 25, 5)
{
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
		: Form("PresidentialPardonForm", 25, 5)
{
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const & src) {
	_target = src.getTarget();
	return (*this);
}

std::string		PresidentialPardonForm::getTarget(void) const {
	return (_target);
}

void	PresidentialPardonForm::action(void) const {
	std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

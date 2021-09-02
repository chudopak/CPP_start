#include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(Intern const & src) {
	(void)src;
}

Intern::~Intern(void) {}

Intern&		Intern::operator=(Intern const & src) {
	(void)src;
	return (*this);
}

Form*	Intern::_makePresidentialPardon(std::string const & target) const {
	return (new PresidentialPardonForm(target));
}

Form*	Intern::_makeShrubberyCretion(std::string const & target) const {
	return (new ShrubberyCreationForm(target));
}

Form*	Intern::_makeRobotomyRequest(std::string const & target) const {
	return (new RobotomyRequestForm(target));
}

Form*	Intern::makeForm(std::string const & formName, std::string const & target) {
	t_forms	formsCreatingMethods[AMOUNT_BASE_FORMS] = {
		{ROBOTOMY_REQUEST,		&Intern::_makeRobotomyRequest},
		{SHRUBBERY_CREATION,	&Intern::_makeShrubberyCretion},
		{PRESIDENTIAL_PARDON,	&Intern::_makePresidentialPardon}
	};

	for (int i = 0; i < AMOUNT_BASE_FORMS; i++) {
		if (formName == formsCreatingMethods[i].standartFormName) {
			Form*	form;
			form = (this->*formsCreatingMethods[i].f)(target);
			std::cout << "Intern creates " << form->getName() << ", "
				<< formsCreatingMethods[i].standartFormName << std::endl;
			return (form);
		}
	}
	return (NULL);
}
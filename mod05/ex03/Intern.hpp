#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

# ifndef AMOUNT_BASE_FORMS
#  define AMOUNT_BASE_FORMS 3
# endif

# ifndef ROBOTOMY_REQUEST
#  define ROBOTOMY_REQUEST "robotomy request"
# endif

# ifndef SHRUBBERY_CREATION
#  define SHRUBBERY_CREATION "shrubbery creation"
# endif

# ifndef PRESIDENTIAL_PARDON
#  define PRESIDENTIAL_PARDON "presidential pardon"
# endif

class Intern
{
private:
	struct t_forms {
		std::string	standartFormName;
		Form*		(Intern::*f)(std::string const & target) const;
	};

	Form*	_makeRobotomyRequest(std::string const & target) const;
	Form*	_makeShrubberyCretion(std::string const & target) const;
	Form*	_makePresidentialPardon(std::string const & target) const;
	
public:
	Intern(void);
	Intern(Intern const & src);
	~Intern(void);

	Intern&	operator=(Intern const & src);

	Form*	makeForm(std::string const & formName, std::string const & target);
};

#endif
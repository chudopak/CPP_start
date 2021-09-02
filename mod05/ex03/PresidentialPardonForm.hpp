#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# include <cstdlib>

class PresidentialPardonForm : public Form
{
private:
	std::string				_target;

public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string const &target);
	PresidentialPardonForm(PresidentialPardonForm const & src);
	virtual ~PresidentialPardonForm(void);

	PresidentialPardonForm&	operator=(PresidentialPardonForm const & src);

	virtual void			action(void) const;
	std::string				getTarget(void) const;
};

#endif
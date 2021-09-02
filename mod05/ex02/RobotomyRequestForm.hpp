#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <cstdlib>

class RobotomyRequestForm : public Form
{
private:
	std::string				_target;

public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const & src);
	virtual ~RobotomyRequestForm(void);

	RobotomyRequestForm&	operator=(RobotomyRequestForm const & src);

	virtual void			action(void) const;
	std::string				getTarget(void) const;
};

#endif
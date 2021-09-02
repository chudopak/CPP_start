#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string				_target;

public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	virtual ~ShrubberyCreationForm(void);

	ShrubberyCreationForm&	operator=(ShrubberyCreationForm const & src);

	virtual void			action(void) const;
	std::string				getTarget(void) const;

	class ShrubberyCreationFormException : public std::exception
	{
	public:
		virtual const char *	what(void) const throw();
	};
};

#endif
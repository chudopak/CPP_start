#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <exception>
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;

public:
	Bureaucrat(void);
	Bureaucrat(std::string const & name, int const grade);
	Bureaucrat(Bureaucrat const &src);
	~Bureaucrat(void);

	Bureaucrat&			operator=(Bureaucrat const & src);

	std::string			getName(void) const;
	int					getGrade(void) const;
	void				incrementGrade(void);
	void				decrementGrade(void);
	
	void				signForm(Form & src) const;

	class	GradeTooHighException : public std::exception
	{
	public:
		virtual const char *	what(void) const throw();
	};

	class	GradeTooLowException : public std::exception
	{
	public:
		virtual const char *	what(void) const throw();
	};
};

std::ostream&	operator<<(std::ostream &o, Bureaucrat const & src);

#endif
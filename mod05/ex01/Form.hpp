#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	bool				_signStatus;
	int const			_signGrade;
	int const			_executeGrade;

public:
	Form(void);
	Form(std::string const & name, int signGrade, int executeGrade);
	Form(Form const & src);
	~Form(void);

	Form&				operator=(Form const & src);

	std::string			getName(void) const;
	bool				getSignStatus(void) const;
	int					getSignGrade(void) const;
	int					getExecuteGrade(void) const;

	void				beSigned(Bureaucrat const &src);

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *	what(void) const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *	what(void) const throw();
	};

	class FormAlreadySignedExeption : public std::exception
	{
	public:
		virtual const char *	what(void) const throw();
	};
};

std::ostream &	operator<<(std::ostream &o, Form const &src);

#endif
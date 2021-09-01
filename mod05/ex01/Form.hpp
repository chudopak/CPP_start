#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

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

	class GradeTooHighException : public std::exception
	{
	private:
		bool	_isSignSuccesfull;
		bool	_unexictantSignGrade;
		bool	_unexictantExecuteGrade;

	public:
		GradeTooHighException(void);
		GradeTooHighException(bool isSignSuccesfull, bool unexictantSignGrade, bool unexictantExecuteGrade);
		virtual const char *	what(void) const throw();
	};

	class GradeTooLowException : public std::exception
	{
	private:
		bool	_isSignSuccesfull;
		bool	_unexictantSignGrade;
		bool	_unexictantExecuteGrade;

	public:
		GradeTooLowException(void);
		GradeTooLowException(bool isSignSuccesfull, bool unexictantSignGrade, bool unexictantExecuteGrade);
		virtual const char *	what(void) const throw();
	};

	void				beSigned(Bureaucrat const &src);
};

#endif
#include "Form.hpp"

Form::Form(void) : _name("Untitled"), _signGrade(150), _executeGrade(150) {
	_signStatus = false;
}

Form::Form(std::string const & name, int signGrade, int executeGrade) 
			: _name(name), _signGrade(signGrade), _executeGrade(executeGrade) {
	_signStatus = false;

}

Form&	Form::operator=(Form const & src) {
	(void)src;
	return (*this);
}

std::string		Form::getName(void) const {
	return (_name);
}

bool	Form::getSignStatus(void) const {
	return (_signStatus);
}

int		Form::getSignGrade(void) const {
	return (_signGrade);
}

int		Form::getExecuteGrade(void) const {
	return (_executeGrade);
}

/*
** exception classes methods implimentation
*/

Form::GradeTooLowException::GradeTooLowException(bool isSignSuccesfull,
		bool unexictantSignGrade, bool unexictantExecuteGrade)
{
	_isSignSuccesfull = isSignSuccesfull;
	_unexictantExecuteGrade = unexictantExecuteGrade;
	_unexictantSignGrade = unexictantSignGrade;
}


Form::GradeTooHighException::GradeTooHighException(void) {
	_isSignSuccesfull 		= false;
	_unexictantExecuteGrade	= false;
	_unexictantSignGrade	= false;
}

Form::GradeTooHighException::GradeTooHighException(bool isSignSuccesfull,
		bool unexictantSignGrade, bool unexictantExecuteGrade)
{
	_isSignSuccesfull = isSignSuccesfull;
	_unexictantExecuteGrade = unexictantExecuteGrade;
	_unexictantSignGrade = unexictantSignGrade;
}

const char *	Form::GradeTooHighException::what(void) const throw() {

	if (_isSignSuccesfull)
		return ("Form already signed");
}
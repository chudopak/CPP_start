#include "Form.hpp"

Form::Form(void) : _name("Untitled"), _signGrade(150), _executeGrade(150) {
	_signStatus = false;
}

Form::Form(std::string const & name, int signGrade, int executeGrade) 
			: _name(name), _signGrade(signGrade), _executeGrade(executeGrade) {
	_signStatus = false;
	if (_signGrade < 1 || _executeGrade < 1)
		throw Form::GradeTooHighException();
	if (_signGrade > 150 || _executeGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const & src) : _name(src.getName()),
			_signGrade(src.getSignGrade()), _executeGrade(src.getExecuteGrade())
{
	_signStatus = src.getSignStatus();
}

Form::~Form(void) {}

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

void	Form::beSigned(Bureaucrat const &src) {
	if (src.getGrade() > _signGrade)
		throw Form::GradeTooLowException();
	if (_signStatus == true)
		throw Form::FormAlreadySignedExeption();
	_signStatus = true;
}

void	Form::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > this->getExecuteGrade())
		throw Form::GradeTooLowException();
	if (!this->getSignStatus())
		throw Form::FormUnsignedExeption();
	this->action();
}

/*
** exception classes methods implimentation
*/

const char *	Form::GradeTooLowException::what(void) const throw() {
	return ("Grade is to low");
}

const char *	Form::GradeTooHighException::what(void) const throw() {
	return ("Grade is to hight");
}

const char *	Form::FormAlreadySignedExeption::what(void) const throw () {
	return ("Form already signed");
}

const char *	Form::FormUnsignedExeption::what(void) const throw () {
	return ("Form unsigned");
}

std::ostream &	operator<<(std::ostream &o, Form const &src) {
	o << "Form - " << src.getName() << " info:" << std::endl;
	if (src.getSignStatus())
		o << "Sign status: Signed" << std::endl;
	else
		o << "Sign status: not Signed" << std::endl;
	o << "Sign grade: " << src.getSignGrade() << std::endl;
	o << "Execute grade: " << src.getExecuteGrade() << std::endl;
	return (o);
}

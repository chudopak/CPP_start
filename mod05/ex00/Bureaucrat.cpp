#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("nameLessBureaucrat") {
	_grade = 150;
}

Bureaucrat::Bureaucrat(std::string const & name, int const grade) : _name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src.getName()) {
	*this = src;
}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat&			Bureaucrat::operator=(Bureaucrat const & src) {
	_grade = src.getGrade();
	return (*this);
}

std::string	Bureaucrat::getName(void) const {
	return (_name);
}

int		Bureaucrat::getGrade(void) const {
	return (_grade);
}

void	Bureaucrat::incrementGrade(void) {
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void	Bureaucrat::decrementGrade(void) {
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

/*
** exception classes methods implimentation
*/

const char *	Bureaucrat::GradeTooHighException::what(void) const throw() {
	return ("Grade to High");
}

const char *	Bureaucrat::GradeTooLowException::what(void) const throw() {
	return ("Grade to Low");
}


std::ostream&	operator<<(std::ostream &o, Bureaucrat const & src) {
	std::cout << src.getName() << ", bureaucrat grade - " << src.getGrade() << std::endl;
	return (o);
}

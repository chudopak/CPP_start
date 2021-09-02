#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
		: Form("ShrubberyCreationForm", 145, 137)
{
	_target = "Shrubarry";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target)
		: Form("ShrubberyCreationForm", 145, 137)
{
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
		: Form("ShrubberyCreationForm", 145, 137)
{
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src) {
	_target = src.getTarget();
	return (*this);
}

std::string		ShrubberyCreationForm::getTarget(void) const {
	return (_target);
}

void	ShrubberyCreationForm::action(void) const{
	std::string		file_name = _target + "_shrubbery";
	std::ofstream	ofs;

	ofs.open(file_name);
	if (!ofs.is_open())
		throw ShrubberyCreationForm::ShrubberyCreationFormException();

	ofs << "     /\\     " << std::endl;
	ofs << "    /  \\    " << std::endl;
	ofs << "   /    \\   " << std::endl;
	ofs << "    /  \\    " << std::endl;
	ofs << "   /    \\   " << std::endl;
	ofs << "  /      \\  " << std::endl;
	ofs << " /        \\ " << std::endl;
	ofs << "     ||      " << std::endl;
	ofs << "     ||      " << std::endl;

	ofs.close();
}

/*
** exception for this class
*/

const char *	ShrubberyCreationForm::ShrubberyCreationFormException::what(void) const throw() {
	return ("Can't open or create file");
}
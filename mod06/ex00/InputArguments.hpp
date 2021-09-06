#ifndef INPUTARGUMENTS_HPP
# define INPUTARGUMENTS_HPP

# include <iostream>
#include "Exception.hpp"

class InputArguments : public Exceptions
{
private:
	int		_amountArguments;
	char**	_arguments;
	char*	_argumentToConvert;

	InputArguments(void);
	InputArguments(InputArguments const &src);
	InputArguments&		operator=(InputArguments const &src);
public:
	InputArguments(int ac, char **av);
	~InputArguments(void);

	int		getAmountArguments(void) const;
	char*	getArgumentToConvert(void) const;
	void	beautifyArgumentForConvertion(void) throw(std::exception);
};


#endif
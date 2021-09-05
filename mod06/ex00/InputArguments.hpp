#ifndef INPUTARGUMENTS_HPP
# define INPUTARGUMENTS_HPP

# include <iostream>

class InputArguments
{
private:
	int		_amountArguments;
	char**	_argumentToConvert;

	InputArguments(void);
	InputArguments(InputArguments const &src);
	InputArguments&		operator=(InputArguments const &src);
public:
	InputArguments(int ac, char **av);
	~InputArguments(void);

	int		getAmountArguments(void) const;
	char**	getArgumentToConvert(void) const;
};


#endif
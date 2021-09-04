#ifndef TYPEIDENTIFIER_HPP
# define TYPEIDENTIFIER_HPP

# include <iostream>


class TypeIdentifier
{
protected:
	TypeIdentifier(void);
	TypeIdentifier(TypeIdentifier const & src);

	TypeIdentifier&	operator=(TypeIdentifier const &src);

public:
	~TypeIdentifier(void);

	bool			isChar(char const *arg) const;
	bool			isFloat(char const *arg) const;
	bool			isDouble(char const *arg) const;
	bool			isInt(char const *arg) const;
	bool			isNan(std::string const &literal);
	bool			isInf(std::string const &literal);
};

#endif
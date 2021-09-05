#ifndef TYPEIDENTIFIER_HPP
# define TYPEIDENTIFIER_HPP

# include <iostream>
# include "Exception.hpp"
# include <limits>

# define FLOAT_MIN std::numeric_limits<float>::min()
# define FLOAT_MAX std::numeric_limits<float>::max()

class TypeIdentifier : public Exceptions
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
	bool			isNan(std::string const &literal) const;
	bool			isInf(std::string const &literal) const;

	void			isArgumentExist(int const ac) const throw(std::exception);
	void			isArgumentMatchAnyType(char const * arg) const throw(std::exception);
};

#endif
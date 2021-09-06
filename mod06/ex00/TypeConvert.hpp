#ifndef TYPECONVERT_HPP
# define TYPECONVERT_HPP

# include <iostream>
# include "TypeIdentifier.hpp"
# include <cmath>


class TypeConvert : public TypeIdentifier
{
private:
	TypeConvert(TypeConvert const &src);
	TypeConvert&	operator=(TypeConvert const &src);

	bool			_includeIdentifier(int dotPosition, char const *arg);
public:
	TypeConvert(void);
	~TypeConvert(void);

	void			printFloat(double nb, char const *arg);
	void			printDouble(double nb, char const *arg);

	void			printConvertionFromInt(char const *arg);
	void			printConvertionFromChar(char const *arg);
	void			printConvertionFromFloatOrDouble(char const *arg);
	void			printConvertionResult(char const *arg);
};

#endif
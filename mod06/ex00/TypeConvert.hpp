#ifndef TYPECONVERT_HPP
# define TYPECONVERT_HPP

# include <iostream>
# include "TypeIdentifier.hpp"


class TypeConvert : public TypeIdentifier
{
private:
	TypeConvert(TypeConvert const &src);
	TypeConvert&	operator=(TypeConvert const &src);

public:
	TypeConvert(void);
	~TypeConvert(void);

	void			printConvertionFromInt(char const *arg);
	void			printConvertionFromChar(char const *arg);
	void			printConvertionResult(char const *arg);
};

#endif
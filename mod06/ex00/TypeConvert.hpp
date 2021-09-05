#ifndef TYPECONVERT_HPP
# define TYPECONVERT_HPP

# include <iostream>
# include "TypeIdentifier.hpp"


class TypeConvert : public TypeIdentifier
{
private:
	char			_ch;
	int				_nbInt;
	float			_nbFloat;
	double			_nbDouble;

public:
	TypeConvert(void);
	TypeConvert(TypeConvert const &src);
	~TypeConvert(void);

	//TypeConvert&		operator=(TypeConvert const &src);

	//void				convertToInt(char const *arg);
};

#endif
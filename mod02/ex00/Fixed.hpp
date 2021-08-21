#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	const static int	_fractionalBits;
	int					_rawBits;

public:
	Fixed(void);
	Fixed(Fixed const &src);
	~Fixed(void);

	Fixed&				operator=(Fixed const &src);

	int					getRawBits(void) const;
	void				setRawBits(int const raw);

};

#endif
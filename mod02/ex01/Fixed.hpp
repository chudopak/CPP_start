#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
class Fixed
{
private:
	const static int	_fractionalBits;
	int					_nb;

public:
	Fixed(void);
	Fixed(Fixed const &src);
	Fixed(int const &nb);
	Fixed(float const &nb);
	~Fixed(void);

	Fixed&				operator=(Fixed const &src);

	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	float				toFloat(void) const;
	int					toInt(void) const;

};

std::ostream& operator<<(std::ostream& out, Fixed const &nb);

#endif
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
	bool				operator==(Fixed const &src) const;
	bool				operator!=(Fixed const &src) const;
	bool				operator>(Fixed const &src) const;
	bool				operator>=(Fixed const &src) const;
	bool				operator<(Fixed const &src) const;
	bool				operator<=(Fixed const &src) const;
	Fixed				operator+(Fixed const &src) const;
	Fixed				operator-(Fixed const &src) const;
	Fixed				operator*(Fixed const &src) const;
	Fixed				operator/(Fixed const &src) const;

	Fixed&				operator++(void);
	Fixed&				operator--(void);
	Fixed				operator++(int);
	Fixed				operator--(int);

	Fixed const &		min(Fixed const &a, Fixed const &b) const;
	Fixed const &		max(Fixed const &a, Fixed const &b) const;
	Fixed&				min(Fixed& a, Fixed& b) const;
	Fixed&				max(Fixed& a, Fixed& b) const;


	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	int					toInt(void) const;
	float				toFloat(void) const;

};

std::ostream& operator<<(std::ostream& out, Fixed const &nb);

#endif
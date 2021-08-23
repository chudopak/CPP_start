#include "Fixed.hpp"

const int	Fixed::_fractionalBits = 8;

Fixed::Fixed(void) : _nb(0) {}

Fixed::Fixed(Fixed const &src) {
	_nb = src.getRawBits();
}

Fixed::Fixed(int const &nb) {
	_nb = nb << _fractionalBits;
}

Fixed::Fixed(float const &nb) {
	_nb = static_cast<int>(roundf(nb * (1 << _fractionalBits)));
}
Fixed::~Fixed(void) {}

int	Fixed::getRawBits(void) const {
	return (_nb);
}

void	Fixed::setRawBits(int const raw) {
	_nb = raw;
}

float	Fixed::toFloat(void) const {
	return (static_cast<float>(_nb) / static_cast<float>(1 << _fractionalBits));
}

int	Fixed::toInt(void) const {
	return (_nb >> _fractionalBits);
}

Fixed&	Fixed::operator=(Fixed const &src) {
	_nb = src.getRawBits();
	return (*this);
}

bool	Fixed::operator==(Fixed const &src) const {
	return (_nb == src.getRawBits());
}

bool	Fixed::operator!=(Fixed const &src) const {
	return (_nb != src.getRawBits());
}

bool	Fixed::operator>(Fixed const &src) const {
	return (_nb > src.getRawBits());
}

bool	Fixed::operator<(Fixed const &src) const {
	return (_nb < src.getRawBits());
}

bool	Fixed::operator<=(Fixed const &src) const {
	return (_nb <= src.getRawBits());
}

bool	Fixed::operator>=(Fixed const &src) const {
	return (_nb >= src.getRawBits());
}

Fixed	Fixed::operator+(Fixed const &src) const {
	return Fixed(toFloat() + src.toFloat());
}

Fixed	Fixed::operator-(Fixed const &src) const {
	return Fixed(toFloat() - src.toFloat());
}

Fixed	Fixed::operator*(Fixed const &src) const {
	return Fixed(toFloat() * src.toFloat());
}

Fixed	Fixed::operator/(Fixed const &src) const {
	return Fixed(toFloat() / src.toFloat());
}

Fixed&	Fixed::operator++(void) {
	_nb += 1;
	return (*this);
}

Fixed&	Fixed::operator--(void) {
	_nb -= 1;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	temp(*this);

	++(*this);
	return (temp);
}

Fixed	Fixed::operator--(int) {
	Fixed	temp(*this);

	--(*this);
	return (temp);
}

Fixed const &	Fixed::min(Fixed const &a, Fixed const &b) {
	if (a < b)
		return (a);
	return (b);
}

Fixed const &	Fixed::max(Fixed const &a, Fixed const &b) {
	if (a < b)
		return (b);
	return (a);
}

Fixed&	Fixed::min(Fixed& a, Fixed& b) {
	if (a < b)
		return (a);
	return (b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b) {
	if (a < b)
		return (b);
	return (a);
}

std::ostream& operator<<(std::ostream& out, Fixed const &nb) {
	out << nb.toFloat();
	return (out);
}


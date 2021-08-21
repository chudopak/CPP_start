#include "Fixed.hpp"

const int	Fixed::_fractionalBits = 8;

Fixed::Fixed(void) : _nb(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy constructor called" << std::endl;
	_nb = src.getRawBits();
}

Fixed::Fixed(int const &nb) {
	std::cout << "Int constructor called" << std::endl;
	_nb = nb << _fractionalBits;
}

Fixed::Fixed(float const &nb) {
	std::cout << "Float constructor called" << std::endl;
	_nb = static_cast<int>(roundf(nb * (1 << _fractionalBits)));
}
Fixed::~Fixed(void) {
	std::cout << "Default detructor called" << std::endl;
}


int	Fixed::getRawBits(void) const {
	return (_nb);
}

void	Fixed::setRawBits(int const raw) {
	_nb = raw;
}

Fixed&	Fixed::operator=(Fixed const &src) {
	std::cout << "Assignation operator called" << std::endl;
	_nb = src.getRawBits();
	return (*this);
}

float	Fixed::toFloat(void) const {
	return (static_cast<float>(_nb) / static_cast<float>(1 << _fractionalBits));
}

int	Fixed::toInt(void) const {
	return (_nb >> _fractionalBits);
}

std::ostream& operator<<(std::ostream& out, Fixed const &nb) {
	out << nb.toFloat();
	return (out);
}
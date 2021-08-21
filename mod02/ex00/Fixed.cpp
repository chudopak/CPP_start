#include "Fixed.hpp"

const int	Fixed::_fractionalBits = 8;

Fixed::Fixed(void) : _rawBits(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy constructor called" << std::endl;
	_rawBits = src.getRawBits();
}

Fixed::~Fixed(void) {
	std::cout << "Default detructor called" << std::endl;
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (_rawBits);
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_rawBits = raw;
}

Fixed&	Fixed::operator=(Fixed const &src) {
	std::cout << "Assignation operator called" << std::endl;
	_rawBits = src.getRawBits();
	return (*this);
}

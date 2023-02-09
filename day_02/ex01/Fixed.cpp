#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &c)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = c;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
    this->fixed_point_value = value << this->fractional_bits;
}


Fixed::Fixed(const float fvalue)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point_value = fvalue * 256;
}

float	Fixed::toFloat(void) const
{
	float res = (float)fixed_point_value / 256;
	return (res);
}

std::ostream &operator<< (std::ostream &out,  Fixed const &c)
{
	out << c.toFloat();
	return out;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &c)
{
	std::cout << "Assignation operator called" << std::endl;
	this->fixed_point_value = c.fixed_point_value;
	return *this;
}

int		Fixed::toInt(void) const
{
	return (fixed_point_value >> fractional_bits);
}
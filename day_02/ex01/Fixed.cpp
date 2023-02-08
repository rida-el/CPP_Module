#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fractional_bits = 8;
}

Fixed::Fixed(const int value)
{
    this->fixed_point_value = value << this->fractional_bits;
}

float	Fixed::toFloat(void) const
{
	float res = (float)fixed_P / pow(2, fractional_bits);
	return (res);
}

std::ostream & operator<< (std::ostream &out,  Fixed const &c)
{
	out << c.toFloat();
	return out;
}

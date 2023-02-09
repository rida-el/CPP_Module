#include "Fixed.hpp"

// *****************Orthodox Canonical*****************

Fixed::Fixed(/* args */)
{
    std::cout << "Default constructor called" << std::endl;
    fixed_point_value = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &c)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = c;
}

Fixed &Fixed::operator=(const Fixed &c)
{
    std::cout << "Assignation operator called" << std::endl;
    fixed_point_value = c.getRawBits();
    return *this;
}

int Fixed::getRawBits()const
{
    return this->fixed_point_value;
}

void Fixed::setRawBits(int const raw)
{
    this->fixed_point_value = raw;
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

int		Fixed::toInt(void) const
{
	return (fixed_point_value >> fractional_bits);
}

// ****************comparison operators****************

bool Fixed::operator>(const Fixed &c) const
{
    return fixed_point_value > c.getRawBits();
}

bool Fixed::operator<(const Fixed &c) const
{
    return fixed_point_value < c.getRawBits();
}

bool Fixed::operator>=(const Fixed &c) const
{
    return fixed_point_value >= c.getRawBits();
}

bool Fixed::operator<=(const Fixed &c) const
{
    return fixed_point_value <= c.getRawBits();
}

bool Fixed::operator==(const Fixed &c) const
{
    return fixed_point_value == c.getRawBits();
}

bool Fixed::operator!=(const Fixed &c) const
{
    return fixed_point_value != c.getRawBits();
}

// ****************arithmetic operators****************

Fixed Fixed::operator+(const Fixed &c) const
{
    return Fixed(toFloat() + c.toFloat());
}

Fixed Fixed::operator-(const Fixed &c) const
{
    return Fixed(toFloat() - c.toFloat());
}

Fixed Fixed::operator*(const Fixed &c) const
{
    return Fixed(toFloat() * c.toFloat());
}

Fixed Fixed::operator/(const Fixed &c) const
{
    return Fixed(toFloat() / c.toFloat());
}


// ****************increment operators****************


Fixed &Fixed::operator++()
{
    fixed_point_value++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed &Fixed::operator--()
{
    fixed_point_value--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return tmp;
}



Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return a < b ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return a > b ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return a < b ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return a > b ? a : b;
}

std::ostream & operator<< (std::ostream &out,  Fixed const &c)
{
    out << c.toFloat();
    return out;
}

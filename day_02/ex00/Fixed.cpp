#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixed_point_value = 0;
    this->oop = 42;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

// Fixed::Fixed(const Fixed &copy)
// {
//     std::cout << "Copy constructor called" << std::endl;
//     *this = copy;
// }

// Fixed &Fixed::operator=(const Fixed &copy)
// {
//     std::cout << "Assignation operator called" << std::endl;
//     this->oop = copy.getOop();
//     return *this;
// }

// int Fixed::getRawBits(void) const
// {
//     std::cout << "getRawBits member function called" << std::endl;
//     return this->fixed_point_value;
// }

// int Fixed::getOop(void) const
// {
//     return this->oop;
// }

// void Fixed::setRawBits(int const raw)
// {
//     this->fixed_point_value = raw;
// }
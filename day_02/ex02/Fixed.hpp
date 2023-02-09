#include <iostream>
#include <cmath>

class Fixed
{
private:
    static const int fractional_bits = 8;
    int fixed_point_value;
public:
    Fixed(/* args */);
    ~Fixed();
    Fixed(const Fixed &c);
    Fixed(const int value);
    Fixed(const float fvalue);
    Fixed &operator=(const Fixed &c);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float	toFloat(void) const;
    int		toInt(void) const;

    // ****************comparison operators****************

    bool operator>(const Fixed &c) const;
    bool operator<(const Fixed &c) const;
    bool operator>=(const Fixed &c) const;
    bool operator<=(const Fixed &c) const;
    bool operator==(const Fixed &c) const;
    bool operator!=(const Fixed &c) const;

    // ****************arithmetic operators****************

    Fixed operator+(const Fixed &c) const;
    Fixed operator-(const Fixed &c) const;
    Fixed operator*(const Fixed &c) const;
    Fixed operator/(const Fixed &c) const;

    // ****************increment operators****************
    // pre-increment ++ return
    Fixed &operator++();
    // post-increment
    Fixed operator++(int);
    Fixed &operator--();
    Fixed operator--(int);

    // ****************static functions****************

    static Fixed &min(Fixed &a, Fixed &b);
    static const Fixed &min(const Fixed &a, const Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream & operator<< (std::ostream &out,  Fixed const &c);

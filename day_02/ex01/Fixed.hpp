
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
    float	toFloat(void) const;
    int		toInt(void) const;
};

std::ostream & operator<< (std::ostream &out,  Fixed const &c);

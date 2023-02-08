#include <iostream>

class Fixed
{
private:
    int fixed_point_value;
    int oop = 3;
    static const int fractional_bits = 8;
public:
    Fixed();
    ~Fixed();
    // Fixed(const Fixed &copy);
    // Fixed &operator=(const Fixed &copy);
    int getRawBits(void) const;
    int getOop(void) const;
    void setRawBits(int const raw);

};
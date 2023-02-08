
#include <iostream>

class Fixed
{
private:
    const int fractional_bits = 8;
    int fixed_point_value;

public:
    Fixed(/* args */);
    ~Fixed();
    Fixed(const int value);


};

std::ostream & operator<< (std::ostream &out,  Fixed const &c);

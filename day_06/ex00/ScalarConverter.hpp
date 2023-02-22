#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <limits>
#include <cmath>
#include <cfloat>


class ScalarConverter
{
    private:
        static int toInt(std::string const &str);
        static float toFloat(std::string const &str, int *isFloat);
        static double toDouble(std::string const &str, int *isDouble);
        static char toChar(std::string const &str);
    public:
        ScalarConverter();
        ~ScalarConverter();
        static void convert(std::string const &str);

};
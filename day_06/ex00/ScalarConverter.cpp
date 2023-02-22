#include"ScalarConverter.hpp"
#include <exception>

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

int ScalarConverter::toInt(std::string const &str)
{
    int i = 0;
    try
    {
        std::istringstream ss(str);
        ss >> i;
    }
    catch (std::exception &e)
    {
        std::cout << "impossible" << std::endl;
        return 0;
    }
    return i;
}

float ScalarConverter::toFloat(std::string const &str, int *isFloat)
{
    float f = 0;
    int i = 0;
    char *end;
    try
    {
        f = std::strtod(str.c_str(), &end);
        i = std::strtod(str.c_str(), &end);
        if (f - i == 0)
            *isFloat = 1;
    }
    catch (std::exception &e)
    {
        std::cout << "impossible" << std::endl;
    }
    return(f);
}


double ScalarConverter::toDouble(std::string const &str, int *isDouble)
{
    double d = 0;
    int     i = 0;
    char *end;
    try
    {   
        d = std::strtod(str.c_str(), &end);
        i = std::strtod(str.c_str(), &end);
        if (d - i == 0)
            *isDouble = 1;
    }
    catch (std::exception &e)
    {
        std::cout << "impossible" << std::endl;
    }
    return d;
}

char ScalarConverter::toChar(std::string const &str)
{
    char c = 0;
    int i = 0;
    try
    {
        std::istringstream ss(str);
        ss >> i;
        c = static_cast<char>(i);
    }
    catch (std::exception &e)
    {
        std::cout << "impossible" << std::endl;
        return 0;
    }
    return c;
}


void ScalarConverter::convert(std::string const &str)
{
    std::cout << "char: ";
    if (str.length() == 1 && !std::isdigit(str[0]))
        std::cout << "'" << str[0] << "'" << std::endl;
    else
    {
        char c = ScalarConverter::toChar(str);
        if (c >= 32 && c <= 126)
            std::cout << "'" << c << "'" << std::endl;
        else
            std::cout << "Non displayable" << std::endl;
    }
    std::cout << "int: " << ScalarConverter::toInt(str) << std::endl;
    int isFloat = 0;
    int isDouble = 0;
    ScalarConverter::toFloat(str, &isFloat);
    ScalarConverter::toDouble(str, &isDouble);
    if (isFloat == 1)
        std::cout << "float: " << ScalarConverter::toFloat(str, &isFloat) << ".0f" << std::endl;
    else
        std::cout << "float: " << ScalarConverter::toFloat(str, &isFloat ) << "f" << std::endl;
    if (isDouble == 1)
        std::cout << "double: " << ScalarConverter::toDouble(str, &isDouble) << ".0" << std::endl;
    else
        std::cout << "double: " << ScalarConverter::toDouble(str, &isDouble) << std::endl;
}
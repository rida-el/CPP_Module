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
        i = std::stoi(str);
    }
    catch (std::exception &e)
    {
        std::cout << "impossible" << std::endl;
        return 0;
    }
    return i;
}

float ScalarConverter::toFloat(std::string const &str)
{
    float f = 0;
    try
    {
        f = static_cast<float>(std::stoi(str));
    }
    catch (std::exception &e)
    {
        std::cout << "impossible" << std::endl;
        return 0;
    }
    return (f + 0.1);
}


double ScalarConverter::toDouble(std::string const &str)
{
    double d = 0;
    try
    {
        d = std::stod(str);
    }
    catch (std::exception &e)
    {
        std::cout << "impossible" << std::endl;
        return 0;
    }
    return d;
}

char ScalarConverter::toChar(std::string const &str)
{
    char c = 0;
    try
    {
        c = static_cast<char>(std::stoi(str));
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
    std::cout << "float: " << ScalarConverter::toFloat(str) << "f" << std::endl;
    std::cout << "double: " << ScalarConverter::toDouble(str) << std::endl;
}
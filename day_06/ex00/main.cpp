#include <iostream>
#include <string>
#include "ScalarConverter.hpp"


// int main(int argc, char **argv)
// {
//     // if (argc != 2)
//     // {
//     //     std::cout << "Error: Wrong number of arguments" << std::endl;
//     //     return 1;
//     // }
//     // ScalarConverter::convert(argv[1]);
//     int a = 5;
//     std::cout << "this is int : "<< a << std::endl;
//     float b = static_cast<float>(a) ;
//     std::cout << "this is float : "<< b << std::endl;
//     return 0;
// }


int main() {
  int x = 42;
  float f = static_cast<float>(x); // cast to float
  std::cout << "x = " << x << ", f = " << f << std::endl;
  return 0;
}
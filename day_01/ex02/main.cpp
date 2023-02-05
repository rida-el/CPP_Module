#include <iostream>
#include <string>

int main()
{
    std::string str="HI THIS IS BRAIN";
    std::string *str_ptr = &str;
    std::string &str_ref = str;

    std::cout << "str: " << str << std::endl;

    std::cout << "Address of str: " << &str << std::endl;
    std::cout << "Address of str_ptr: " << str_ptr << std::endl;
    std::cout << "Address of str_ref: " << &str_ref << std::endl;

    std::cout << "-------------------------" << std::endl;

    std::cout << "str :" << str << std::endl;
    std::cout << "str_ptr :" << *str_ptr << std::endl;
    std::cout << "str_ref :" << str_ref << std::endl;

    *str_ptr = "I AM A REFERENCE";
    std::cout << *str_ptr << std::endl;
    std::cout << str << std::endl;
    std::cout << str_ref << std::endl;
    return 0;
}
#include <iostream>
#include <string>

void replace(std::string &s1, std::string &s2)
{
    s1 = "HI THIS IS BRAIN";
    s2 = s1;
    std::cout << s2 << std::endl;
}

int main()
{
    std::string s1;
    std::string s2;
    replace(s1, s2);
    return 0;
}
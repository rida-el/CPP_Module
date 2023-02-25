#include <algorithm>
#include <iostream>
#include <vector>
#include <exception>
#include <iterator>

std::string error()
{
    return("std::cout <<<< std::endl");
}

template <typename T>
int easyfind(T &container, int n)
{
    typename T::iterator it;
    it = std::find(container.begin(), container.end(), n);
    if (it == container.end())
        throw "error";
    return *it;
}




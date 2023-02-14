#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <string>


class Brain
{
private:
    /* data */
    std::string ideas[100];
public:
    Brain(/* args */);
    ~Brain();
    Brain(const Brain &copy);
    Brain &operator=(const Brain &copy);
};


#endif
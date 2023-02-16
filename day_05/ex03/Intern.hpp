#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class Intern
{
    private:
        /* data */
    public:
        Intern(/* args */);
        ~Intern();
        Intern(Intern const &other);
        Intern &operator=(Intern const &other);
        AForm *makeForm(std::string formName, std::string target);
};

#endif
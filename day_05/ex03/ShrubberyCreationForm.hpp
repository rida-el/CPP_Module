#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"


class Bureaucrat;

class ShrubberyCreationForm  : public AForm
{
    private:
        /* data */
        std::string target;
    public:
        ShrubberyCreationForm(/* args */);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const &obj);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &obj);
        void execute(Bureaucrat const &executor) const;
};

#endif
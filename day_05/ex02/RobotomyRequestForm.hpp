#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include <string>
#include <exception>


class Bureaucrat;
class RobotomyRequestForm : public AForm
{
    private:
        /* data */
        std::string target;
    public:
        RobotomyRequestForm(/* args */);
        ~RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm const &obj);
        RobotomyRequestForm &operator=(RobotomyRequestForm const &obj);
        void execute(Bureaucrat const &executor) const;
};

#endif
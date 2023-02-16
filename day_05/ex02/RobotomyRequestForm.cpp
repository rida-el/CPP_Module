#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(/* args */)
{
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;

}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor called" << std::endl;

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj) : AForm(obj)
{
    *this = obj;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
    if (this != &obj)
    {
        this->target = obj.target;
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    // if (this->getIsSigned() == false)
    //     throw FormNotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    else
    {
        std::cout << "Brrrrbrrrrbrr" << std::endl;
        if (rand() % 2 == 0)
            std::cout << this->target << " has been robotomized successfully" << std::endl;
        else
            std::cout << this->target << " has not been robotomized successfully" << std::endl;
    }
}




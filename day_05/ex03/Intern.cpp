#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(/* args */)
{
    std::cout << "Intern constructor called" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Intern destructor called" << std::endl;
}

Intern::Intern(Intern const &other)
{
    *this = other;
}

Intern &Intern::operator=(Intern const &other)
{
    if (this != &other)
    {
        /* data */
    }
    
    return *this;
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
    int i = 0;
    std::string formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm *forms;
    while (i < 3)
    {
        if (formName == formNames[i])
        {
            std::cout << "Intern creates " << formName << std::endl;
            break;
        }
        i++;
    }
    switch (i)
    {
    case 0:
        forms = new ShrubberyCreationForm(target);
        break;
    case 1:
        forms = new RobotomyRequestForm(target);
        break;
    case 2:
        forms = new PresidentialPardonForm(target);
        break;
    default:
        std::cout << "error : Intern can't create " << formName << std::endl;
        return NULL;
        break;
    }

    return forms;
}
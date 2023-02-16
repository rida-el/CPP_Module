#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm(/* args */)
{
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj) : AForm(obj)
{
    *this = obj;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
    if (this != &obj)
    {
        this->target = obj.target;
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    // if (this->getIsSigned() == false)
    //     throw FormNotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    else
    {
        std::ofstream file;
        file.open(this->target + "_shrubbery");
        file  << "          *" << std::endl;
        file  << "          |" << std::endl;
        file << "        *****" << std::endl;
        file << "        |   |" << std::endl;
        file << "       *** ***" << std::endl;
        file << "       | | | |" << std::endl;
        file << "      ** *** **" << std::endl;
        file << "      |  | |  |" << std::endl;
        file << "     ** ** ** **" << std::endl;
        file << "     | | | | | |" << std::endl;
        file << "    * ********* *" << std::endl;
        file << "    |    | |    |" << std::endl;
        file << "   **   * * *   **" << std::endl;
        file << "   |    | | |    |" << std::endl;
        file << "   *   ***** *   *" << std::endl;
        file << "   |   | | | |   |" << std::endl;
        file << "  *** ******* ***" << std::endl;
        file << "  |   | | | | |   |" << std::endl;
        file << " *** * ***** * ***" << std::endl;
        file << " | | | | | | | | | |" << std::endl;
        file << "******** | ********" << std::endl;
        file.close();
    }

}


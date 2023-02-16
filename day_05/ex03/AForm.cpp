#include "AForm.hpp"

AForm::AForm(/* args */) : gradeToSign(0), gradeToExecute(0)
{
    std::cout << "AForm constructor called" << std::endl;
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    std::cout << "AForm constructor called" << std::endl;
    if(gradeToSign < 1 || gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    else if(gradeToSign > 150 || gradeToExecute > 150)
        throw AForm::GradeTooLowException();
    this->isSigned = false;
}

AForm::~AForm()
{
    std::cout << "AForm destructor called" << std::endl;
}

AForm::AForm(AForm const &other) : name(other.name), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
    *this = other;
}

AForm &AForm::operator=(AForm const &other)
{
    if (this != &other)
    {
        this->isSigned = other.isSigned;
    }

    return *this;
}

std::string const &AForm::getName() const
{
    return this->name;
}

bool AForm::getIsSigned() const
{
    return this->isSigned;
}

int AForm::getGradeToSign() const
{
    return this->gradeToSign;
}

int AForm::getGradeToExecute() const
{
    return this->gradeToExecute;
}

void AForm::beSigned(Bureaucrat const &bureaucrat)
{
    if (bureaucrat.getGrade() <= this->gradeToSign)
    {
        this->isSigned = true;
    }
    else
    {
        throw AForm::GradeTooLowException();
    }
}


const char *AForm::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

std::ostream &operator<<(std::ostream &out, AForm const &other)
{
    out << "Form name: " << other.getName() << std::endl;
    out << "Form is signed: " << other.getIsSigned() << std::endl;
    out << "Form grade to sign: " << other.getGradeToSign() << std::endl;
    out << "Form grade to execute: " << other.getGradeToExecute() << std::endl;

    return out;
}

void execute(Bureaucrat const &executor, AForm const &form)
{
    if (executor.getGrade() <= form.getGradeToExecute())
    {
        std::cout << executor.getName() << " executes " << form.getName() << std::endl;
    }
    else
    {
        throw AForm::GradeTooLowException();
    }
}
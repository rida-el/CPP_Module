#include "Form.hpp"

Form::Form(/* args */) : name("default"), gradeToSign(150), gradeToExecute(150)
{
    std::cout << "Form constructor called" << std::endl;
}

Form::Form(std::string const &name, int gradeToSign, int gradeToExecute) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    std::cout << "Form constructor called" << std::endl;
    if (gradeToSign < 1)
    {
        throw Form::GradeTooHighException();
    }
    else if (gradeToSign > 150)
    {
        throw Form::GradeTooLowException();
    }
    if (gradeToExecute < 1)
    {
        throw Form::GradeTooHighException();
    }
    else if (gradeToExecute > 150)
    {
        throw Form::GradeTooLowException();
    }
    this->isSigned = false;
}

Form::~Form()
{
    std::cout << "Form destructor called" << std::endl;
}

Form::Form(Form const &other) : name(other.name), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
    *this = other;
    std::cout << "Form copy constructor called" << std::endl;

}

Form &Form::operator=(Form const &other)
{
    if (this != &other)
    {
        this->isSigned = other.isSigned;
    }

    return *this;
}

std::string const &Form::getName() const
{
    return this->name;
}

int Form::getGradeToSign() const
{
    return this->gradeToSign;
}

int Form::getGradeToExecute() const
{
    return this->gradeToExecute;
}

bool Form::getIsSigned() const
{
    return this->isSigned;
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
    if (bureaucrat.getGrade() <=  this->gradeToSign)
    {
        this->isSigned = true;
    }else
        throw Form::GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

std::ostream &operator << (std::ostream &out, Form const &form)
{
    out << "Form name: " << form.getName() << std::endl;
    out << "Form grade to sign: " << form.getGradeToSign() << std::endl;
    out << "Form grade to execute: " << form.getGradeToExecute() << std::endl;
    out << "Form is signed: " << form.getIsSigned() << std::endl;

    return out;
}


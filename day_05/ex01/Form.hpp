#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
    std::string const name;
    bool isSigned;
    int const gradeToSign; //  required to sign
    int const gradeToExecute; //  required to execute
public:
    Form(/* args */);
    ~Form();
    Form(std::string const &name , int gradeToSign, int gradeToExecute);
    Form(Form const &other);
    Form &operator=(Form const &other);
    std::string const &getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    //  sign the form
    void beSigned(Bureaucrat const &bureaucrat);

    class GradeTooHighException : public std::exception {
            public :
                const char * what() const throw();
    };
    class GradeTooLowException : public std::exception {
            public : 
                const  char * what() const throw();
    };

};

std::ostream &operator<<(std::ostream &out, Form const &other);

#endif
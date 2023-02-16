#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"


class Bureaucrat;
class AForm
{
    private:
        /* data */
        std::string const name;
        bool isSigned;
        int const gradeToSign; //  required to sign
        int const gradeToExecute; //  required to execute

    public:
        AForm(/* args */);
        ~AForm();
        AForm(std::string name , int gradeToSign, int gradeToExecute);
        AForm(AForm const &other);
        AForm &operator=(AForm const &other);
        std::string const &getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        //  sign the form
        void beSigned(Bureaucrat const &bureaucrat);
        virtual void execute(Bureaucrat const &executor) const = 0;
        class GradeTooHighException : public std::exception {
                public :
                    const char * what() const throw();
        };

        class GradeTooLowException : public std::exception {
                public : 
                    const  char * what() const throw();
        };


};

std::ostream &operator<<(std::ostream &out, AForm const &other);

#endif
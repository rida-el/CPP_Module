#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm ;
class Bureaucrat
{
private:
    /* data */
    std::string const name;
    int grade;
public:
    Bureaucrat(/* args */);
    ~Bureaucrat();
    Bureaucrat(std::string const name, int grade);
    Bureaucrat(Bureaucrat const &other);
    Bureaucrat &operator=(Bureaucrat const &other);
    std::string const &getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
    void signForm(AForm &form);  
    void executeForm(AForm const &form);


    class GradeTooHighException : public std::exception {
			public :
				const char * what() const throw();
	};
	class GradeTooLowException : public std::exception {
			public : 
				const  char * what() const throw();
	};

};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &other);

#endif
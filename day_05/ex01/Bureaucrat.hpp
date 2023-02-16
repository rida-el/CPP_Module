#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"

class Form ;
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
    void signForm(Form &form);  
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
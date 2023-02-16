#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try {

		Bureaucrat Ghost("Ghost", 1);
		PresidentialPardonForm p("home");
		RobotomyRequestForm r("Robot");
		ShrubberyCreationForm a("pop");
		// r.beSigned(Ghost);
		// p.beSigned(Ghost);
		a.beSigned(Ghost);
		Ghost.signForm(a);
		// Ghost.signForm(p);
		// Ghost.signForm(r);
		Ghost.executeForm(a);
		// Ghost.executeForm(p);
		// Ghost.executeForm(r);
		// std::cout << p;
		// std::cout << r;
		// std::cout << a;

	}
	catch (std::exception const &obj) {
		std::cout << obj.what() << std::endl;
	}
	return (0);
}
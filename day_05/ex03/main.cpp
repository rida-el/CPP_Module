#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


void leak()
{
	system("leaks Bureaucrat");
}

int main()
{
	Intern someRandomIntern;
	AForm *rrf;

	rrf = someRandomIntern.makeForm("presidential pardon", "home");
	delete rrf;
	atexit(leak);
	return (0);
}
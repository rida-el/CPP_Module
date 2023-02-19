#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	try {

		Bureaucrat b1("lmodir", 10);
		b1.decrementGrade();
		Form f1("f1", 10, 10);
		b1.signForm(f1);
	}
	catch (std::exception const &obj) {
		std::cout << obj.what() << std::endl;
	}
	return (0);
}
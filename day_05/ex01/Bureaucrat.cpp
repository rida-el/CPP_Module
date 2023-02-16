#include"Bureaucrat.hpp"
#include"Form.hpp"

Bureaucrat::Bureaucrat(/* args */)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const _name, int grade) : name(_name)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
    if (grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    else if (grade > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    this->grade = grade;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other)
{
    *this = other;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
    if (this != &other)
    {
        this->grade = other.grade;
    }

    return *this;
}

std::string const &Bureaucrat::getName() const
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

void Bureaucrat::incrementGrade()
{
    this->grade--;

    if (this->grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }

}

void Bureaucrat::decrementGrade()
{
    this->grade++;
    if (this->grade > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &other)
{
    out << other.getName() << ", bureaucrat grade " << other.getGrade() << std::endl;
    return out;
}

const  char * Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade Too Low");
}

const  char * Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade Too High");
}


void Bureaucrat::signForm(Form &form)
{
   try
   {
    form.beSigned(*this);
    std::cout << this->getName() << " signs " << form.getName() << std::endl;
   }
   catch(const std::exception& e)
   {    

        std::cerr << this->getName() << " cannot sign " << form.getName() << " because ";
        std::cerr << e.what() << std::endl;
   }
   
    
}

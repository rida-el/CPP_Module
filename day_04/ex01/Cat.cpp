#include"Cat.hpp"
#include"Brain.hpp"

Cat::Cat(/* args */)
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
    this->brain1 = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete brain1;
}

Cat::Cat(const Cat &copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    if (this != &copy)
    {
        this->brain1 = new Brain;
        *(this->brain1) = *(copy.brain1);
        this->type = copy.type;
    }   
}

Cat &Cat::operator=(const Cat &copy)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &copy)
    {
        Brain *temp = new Brain;
        *temp = *(copy.brain1);
        this->brain1 = temp;
        this->type = copy.type;
    }
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Meeeeeeeeeeeeeeeeeeeeow Meow" << std::endl;
}
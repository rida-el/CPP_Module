#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(/* args */)
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
    brain2 = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete brain2;
}

Dog::Dog(const Dog &copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}

Dog &Dog::operator=(const Dog &copy)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &copy)
    {
        Brain *temp = new Brain;
        *temp = *(copy.brain2);
        this->brain2 = temp;
        this->type = copy.type;
    }
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Wooooooooooooooooooooof Woof" << std::endl;
}




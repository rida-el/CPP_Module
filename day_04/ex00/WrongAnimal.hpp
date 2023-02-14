#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
    /* data */
    std::string type;
public:
    WrongAnimal(/* args */);
    ~WrongAnimal();
    WrongAnimal(const WrongAnimal &copy);
    WrongAnimal &operator=(const WrongAnimal &copy);
    std::string getType() const;
    void makeSound() const;
};

#endif
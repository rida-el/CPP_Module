#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wrong = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    std::cout <<  " ********" << std::endl;
    wrong->makeSound();
    wrongCat->makeSound();
    std::cout <<  " ********" << std::endl;
    meta->makeSound();
    delete j;//should not create a leak
    delete i;
    delete meta;
    return (0);
}


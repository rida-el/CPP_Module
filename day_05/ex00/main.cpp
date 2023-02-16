#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"


int main()
{

    try
    {
        Bureaucrat b("bureaucrat", 55);
        std::cout << b ;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
// les exceptions sont des erreurs qui peuvent survenir pendant l'execution du programme
// gere les sutiation a normal for example 7/0
// les exceptions sont des objets
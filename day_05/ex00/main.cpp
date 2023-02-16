#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

// int ft(int a, int b)
// {
//     if (b == 0)
//     {
//         throw "division by zero";
//     }
//     return a/b;
// }


int main()
{

    try
    {
        Bureaucrat b("bureaucrat", 148);
        Form f("form", 150, 150);
        std::cout << b;
        std::cout << f;
        b.signForm(f);
        std::cout << f;
        // b.decrementGrade();
        b.decrementGrade();
        b.decrementGrade();
        std::cout << b;
        
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
        std::cout << "end" << std::endl;

    return 0;
}
// les exceptions sont des erreurs qui peuvent survenir pendant l'execution du programme
// gere les sutiation a normal for example 7/0
// les exceptions sont des objets
#include "Harl.hpp"

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
    std::cout << "\33[0;32m[DEBUGaa]\33[0m" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "\33[0;32m[INFO]\33[0m" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "\33[0;32m[WARNING]\33[0m" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "\33[0;32m[ERROR]\33[0m" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now" << std::endl;
}

// an array of function pointers ptr with 4 elements of type void (Harl::*)(void).
// Each element of the array is a pointer to a member function of the Harl class
// that takes no arguments and returns void.

void Harl::complain( std::string level )
{
    int id = 0;
    void (Harl::*ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    while (id < 4)
    {
        if (!level.compare(levels[id]))
            break;
        id++;
    }
    switch (id)
    {
    case 0:
        (this->*ptr[0])();
    case 1:
        (this->*ptr[1])();
    case 2:
        (this->*ptr[2])();
    case 3:
        (this->*ptr[3])();
        break;
    default:
        std::cout << "[Probably complaining about insignificant problems]" << std::endl;
    }
    
    

    
}
#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl harlobject;
    if (ac == 2)
        harlobject.complain(av[1]);
    return (0);
}
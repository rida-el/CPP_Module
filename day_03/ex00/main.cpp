#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("reda");
    clap.clapTrapInfo();
    clap.attack("nono");
    clap.attack("bobo");
    clap.attack("bobo");
    clap.attack("bobo");
    clap.attack("bobo");
    clap.attack("bobo");
    clap.takeDamage(1);
    clap.beRepaired(2);
    clap.clapTrapInfo();
    return (0);
}
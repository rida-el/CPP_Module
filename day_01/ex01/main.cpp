#include "zombie.hpp"

int main()
{
    zombie *zombies = zombieHorde(5, "Bob");
    for (int i = 0; i < 5; i++)
    {
        zombies[i].announce();
    }
    delete [] zombies;
    return 0;
}
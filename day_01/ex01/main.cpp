#include "zombie.hpp"

int main()
{
    int i = 0;
    int N = 2;

    zombie *zombies = zombieHorde(N, "Bob");
    while (i < N)
    {
        zombies[i].announce();
        i++;
    }
    delete [] zombies;
    return 0;
}
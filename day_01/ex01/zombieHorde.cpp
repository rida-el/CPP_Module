#include "zombie.hpp"

zombie* zombieHorde( int N, std::string name )
{
    int i=0;
    zombie *zombies = new zombie[N];
    while (i < N)
    {
        zombies[i].set_name(name);
        i++;
    }
    return zombies;
}

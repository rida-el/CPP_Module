#include "Zombie.hpp"

zombie* zombieHorde( int N, std::string name )
{
    zombie *zombies = new zombie[N];
    for (int i = 0; i < N; i++)
    {
        zombies[i].set_name(name);
    }
    return zombies;
}

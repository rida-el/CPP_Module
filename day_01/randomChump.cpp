#include "zombie.hpp"

void randomChump(std::string name)
{
    zombie z(name);
    z.announce();
}
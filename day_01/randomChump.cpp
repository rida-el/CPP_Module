#include "zombie.hpp"

void randomChump(std::string name)
{
    zombie zom(name);
    zom.announce();
}
#include "zombie.hpp"

zombie* new_zombie(std::string name)
{
    zombie *ptr = new zombie(name);
    return (ptr);
}
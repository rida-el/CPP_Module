#include "zombie.hpp"

int main()
{
    zombie *z1 = new_zombie("reda");

    z1->announce();
    delete z1;
    randomChump("redaaaaaaa");
    return 0;
}
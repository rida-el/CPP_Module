#include "zombie.hpp"

int main()
{
    zombie *zombie2 = new_zombie("rida2");
    zombie *zombie3 = new_zombie("rida3");
    zombie2->announce();
    zombie3->announce();
    delete zombie2;
    delete zombie3;
    return 0;
}
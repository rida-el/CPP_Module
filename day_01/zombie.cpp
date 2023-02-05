#include "zombie.hpp"

void zombie::announce( void )
{
    std::cout << name << ": " << " Braiiiiiiinnnssss..." << std::endl;
}

zombie::zombie(/* args */)
{
}

zombie::zombie(std::string name_)
{
    name = name_;
}
zombie::~zombie()
{
    std::cout <<name << " is dead." << std::endl;
}

int main()
{
    zombie *zombie2 = new zombie("rida2");
    zombie2->announce();
    delete zombie2;

    return 0;
}

#include "zombie.hpp"


void zombie::set_name(std::string _name)
{
    name = _name;
}

zombie::~zombie()
{
    std::cout << this->name << ": "<< " is dead."<< std::endl;
}

void zombie::announce( void )
{
    std::cout << name << ": "<< "Braiiiiiiinnnssss..."<< std::endl;
}
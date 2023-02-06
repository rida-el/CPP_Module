#include "HumanB.hpp"

HumanB::HumanB(std::string str)
{
    name = str;
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
    std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon_ptr)
{
    weapon = &weapon_ptr;
}
#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &weapon) : weapon_ref(weapon)
{
    name = str;
}

HumanA::~HumanA()
{
    std::cout << "HumanA destructor called" << std::endl;
}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon_ref.getType() << std::endl;
}

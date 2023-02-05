#include "Weapon.hpp"

std::string Weapon::getType()
{
    return type;
}

void Weapon::setType(std::string str)
{
    type = str;
}

Weapon::Weapon(std::string _type)
{
    setType(_type);
}
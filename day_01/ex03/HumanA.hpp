#ifndef HUMAN_A
#define HUMAN_A

#include "Weapon.hpp"

class HumanA
{
private:
    Weapon &weapon_ref;
    std::string name;
public:
    HumanA(std::string str, Weapon &weapon);
    ~HumanA();
    void attack();
};

#endif


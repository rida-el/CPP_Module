#ifndef WEAPON
#define WEAPON

#include <iostream>
#include <string>

class Weapon
{
private:
    std::string type;
public:
    Weapon(std::string type_);
    std::string getType();
    void setType(std::string str);
};


#endif
#include <iostream>
#include <string>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"

class ClapTrap
{
protected:
    std::string name;
    int hit_points;
    int energy_points;
    int attack_damage;

public:
    ClapTrap();
    ClapTrap(std::string _name);
    ~ClapTrap();
    ClapTrap &operator=(const ClapTrap &obj);
    ClapTrap(const ClapTrap &copy);
    void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void clapTrapInfo();
    std::string getName();
    int getDamage();
};



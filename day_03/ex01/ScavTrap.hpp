#include <iostream>
#include <string>

class ScavTrap:public ClapTrap
{
private:
    /* data */
    
public:
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const & copy);
    ~ScavTrap();
    ScavTrap & operator=(ScavTrap const & op);
    void attack(std::string const & target);
    void guardGate();
    void ScavInfo();
    std::string getDamage();

};

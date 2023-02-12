#include <iostream>
#include <string>

class FragTrap : public ClapTrap
{
private:
    /* data */
public:
    FragTrap(/* args */);
    FragTrap(std::string name);
    FragTrap(FragTrap const & copy);
    ~FragTrap();
    FragTrap & operator=(FragTrap const & op);
    void attack(std::string const & target);
    void highFivesGuys();
    void FragInfo();
    std::string getDamage();
};

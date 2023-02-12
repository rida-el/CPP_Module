#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(/* args */)
{
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    std::cout << "FragTrap defult constructor called" << std::endl;

}

FragTrap::FragTrap(FragTrap const & copy) : ClapTrap(copy)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & op)
{
    std::cout << "FragTrap assignation operator called" << std::endl;
    this->name = op.name;
    this->hit_points = op.hit_points;
    this->attack_damage = op.attack_damage;
    this->energy_points = op.energy_points;
    return (*this);
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->name << " high fives guys" << std::endl;
}

std::string FragTrap::getDamage()
{
    return (this->name);
}


void FragTrap::attack(std::string const &target)
{
    if (this->energy_points <= 0 || this->hit_points <= 0)
    {
        std::cout << "FragTrap " << this->name << " can’t do anything!!" << std::endl;
        return ;
    }
    this->energy_points--;
    std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
}
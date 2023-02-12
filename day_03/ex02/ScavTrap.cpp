#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
   std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & op)
{
    std::cout << "ScavTrap assignation operator called" << std::endl;
    this->name = op.name;
    this->hit_points = op.hit_points;
    this->attack_damage = op.attack_damage;
    this->energy_points = op.energy_points;
    return (*this);
}

void ScavTrap::attack(std::string const & target)
{
    if (this->energy_points <= 0 || this->hit_points <= 0)
    {
        std::cout << "ScavTrap " << this->name << "can’t do anything!!" << std::endl;
        return ;
    }
    this->energy_points--;
    std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
}


void ScavTrap::ScavInfo()
{
    std::cout << "ScavTrap " << this->name << " has " << this->hit_points << " hit points, " << this->energy_points << " energy points and " << this->attack_damage << " attack damage" << std::endl;
}

std::string ScavTrap::getDamage()
{
    return (this->name);
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " has entered in Gate keeper mode" << std::endl;
}
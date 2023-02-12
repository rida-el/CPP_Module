#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name)
{
    std::cout << "ClapTrap " << name << " is created!" << std::endl;
    this->name = _name;
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->name << " is destroyed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->name = copy.name;
    this->hit_points = copy.hit_points;
    this->energy_points = copy.energy_points;
    this->attack_damage = copy.attack_damage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
    std::cout << "Assignation operator called" << std::endl;
    this->name = obj.name;
    this->hit_points = obj.hit_points;
    this->energy_points = obj.energy_points;
    this->attack_damage = obj.attack_damage;
    return (*this);
}

void ClapTrap::attack(std::string const &target)
{
    if (this->energy_points <= 0 || this->hit_points <= 0)
    {
        std::cout << "ClapTrap " << this->name << "can’t do anything!!" << std::endl;
        return ;
    }
    this->energy_points--;
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->hit_points <= 0 || amount > this->hit_points)
    {
        std::cout << "ClapTrap " << this->name << " is dead " << std::endl;
        return ;
    }
    this->hit_points = this->hit_points - amount;
    std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hit_points <= 0 || this->energy_points <= 0)
    {
        std::cout << "ClapTrap " << this->name << "can’t do anything" << std::endl;
        return ;
    }
    this->hit_points = this->hit_points + amount;
    this->energy_points--;
    std::cout << "ClapTrap " << this->name << " is repaired " << amount << " points of damage!" << std::endl;
}

void ClapTrap::clapTrapInfo()
{
	std::cout << GREEN << "Name          :"  << this->getName() << std::endl;
	std::cout << "Hit points    : " << this->hit_points<< std::endl;
	std::cout << "Energy points : " << this->energy_points << std::endl;
	std::cout << "Attack damage : " << this->attack_damage  << RESET << std::endl;
}

std::string ClapTrap::getName()
{
    return (this->name);
}

int ClapTrap::getDamage()
{
    return (this->attack_damage);
}
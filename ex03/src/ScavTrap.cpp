#include "../ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {
    if (DEBUG)
        std::cout << "Default constructor called" << std::endl;
    return ;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name) {
    this->HitPoint = 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 20;
    if (DEBUG)
        std::cout << "ScavTrap" << "string constructor called" << std::endl;
    return ;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other.getName()) {
    this->HitPoint = 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 20;
    if (DEBUG)
        std::cout << "copy constructor called" << std::endl;
    return ;
}

ScavTrap::~ScavTrap( void ) {
    if (DEBUG)
        std::cout << "ScavTrap destructor called" << std::endl;
    return ;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap& other) {
    setName(other.getName());
    return (*this);
}

void    ScavTrap::guardGate( void ) {
    std::cout << getName() << ": Gate Keeper mode activated!!" << std::endl;
    return ;
}

void   ScavTrap::attack(const std::string& target) {
    if (EnergyPoint <= 0)
        std::cout << "ScavTrap " << getName() << " doesn't have enough energy points" << std::endl;
    else {
        std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
        --EnergyPoint;
    }
    return ;
}

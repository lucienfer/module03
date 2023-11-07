#include "../FragTrap.hpp"

FragTrap::FragTrap( void ) {
    if (DEBUG)
        std::cout << "FragTrap Default constructor called" << std::endl;
    return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    if (DEBUG)
        std::cout << "FragTrap string constructor called" << std::endl;
    return ;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other.getName()) {
    if (DEBUG)
        std::cout << "ScavTrap copy constructor called" << std::endl;
    return ;
}

FragTrap::~FragTrap( void ) {
    if (DEBUG)
        std::cout << "FragTrap destructor called" << std::endl;
    return ;
}

FragTrap&   FragTrap::operator=(const FragTrap& other) {
    Name = other.getName();
    return (*this);
}

void    FragTrap::highFivesGuys( void ) {
    std::cout << "Hey give me a high five !!!" << std::endl;
    return ;
}

void   FragTrap::attack(const std::string& target) {
    if (EnergyPoint <= 0)
        std::cout << "FragTrap " << Name << " doesn't have enough energy points" << std::endl;
    else {
        std::cout << "FragTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
        --EnergyPoint;
    }
    return ;
}

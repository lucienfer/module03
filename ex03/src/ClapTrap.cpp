#include "../ClapTrap.hpp"

std::string ClapTrap::getName( void ) const {
    return (Name);
}

int ClapTrap::getDamage( void ) const {
    return (AttackDamage);
}

void    ClapTrap::setName(std::string name) {
    Name = name;
    return ;
}

ClapTrap::ClapTrap( void ) : Name("noName"), HitPoint(10), EnergyPoint(10), AttackDamage(0) {
    if (DEBUG)
        std::cout << "Default constructor called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(std::string Name) : Name(Name), HitPoint(10), EnergyPoint(10), AttackDamage(0) {
    if (DEBUG)
        std::cout << "string constructor called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(const ClapTrap& other) : Name(other.getName()) {
    if (DEBUG)
        std::cout << "copy constructor called" << std::endl;
    return ;
}

ClapTrap::~ClapTrap( void ) {
    if (DEBUG)
        std::cout << "destructor called" << std::endl;
    return ;
}

ClapTrap&   ClapTrap::operator=(const ClapTrap& other) {
    Name = other.getName();
    return (*this);
}

void   ClapTrap::attack(const std::string& target) {
    if (EnergyPoint <= 0)
        std::cout << "ClapTrap " << Name << " doesn't have enough energy points" << std::endl;
    else {
        std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
        --EnergyPoint;
    }
    return ;
}

void   ClapTrap::takeDamage(unsigned int amount) {
    if (HitPoint <= 0)
        std::cout << "ClapTrap " << Name << " is already dead!" << std::endl;
    else {
        std::cout << "ClapTrap " << Name << " takes " << amount << " damage!" << std::endl;
        HitPoint -= amount;
    }
    return ;
}

void   ClapTrap::beRepaired(unsigned int amount) {
    if (EnergyPoint <= 0)
        std::cout << "ClapTrap " << Name << " doesn't have enough energy points" << std::endl;
    else {
        std::cout << "ClapTrap " << Name << " regains " << amount << " of hit point!" << std::endl;
        --EnergyPoint;
        HitPoint += amount;
    }
    return ;
}

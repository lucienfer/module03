#include "../DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
    return ;
}

DiamondTrap::~DiamondTrap() {
    return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap( name ), ScavTrap( name ), FragTrap( name ),  Name(name) {
    this->ClapTrap::Name += "_clap_trap";
    this->HitPoint = 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 30;
    return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other.getName()), ScavTrap(other.getName()), FragTrap(other.getName()),  Name(other.getName()) {
    if (DEBUG)
        std::cout << "copy constructor called" << std::endl;
    return ;
}

DiamondTrap&   DiamondTrap::operator=(const DiamondTrap& other) {
    this->Name = other.getName();
    return (*this);
}

void    DiamondTrap::whoAmI() {
    std::cout << "clapTrap name: " << ClapTrap::Name << std::endl;
    std::cout << "DiamondTrap" << this->Name << std::endl;
    return ;
}


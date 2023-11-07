#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
    std::string Name;

public:
    DiamondTrap( void );
    DiamondTrap(const DiamondTrap& other);
    ~DiamondTrap( void );
    DiamondTrap(std::string name);

    DiamondTrap&   operator=(const DiamondTrap& other);

    using   ScavTrap::attack;
    void    whoAmI( void );
};

#endif

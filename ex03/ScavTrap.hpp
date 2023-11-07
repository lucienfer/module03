#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:

public:
    ScavTrap( void );
    ScavTrap( std::string Name );
    ScavTrap(const ScavTrap& other);
    ~ScavTrap();

    ScavTrap&   operator=(const ScavTrap& other);

    void    guardGate( void );
    void    attack(const std::string& target);
};
#endif

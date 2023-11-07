#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>
#include <string>

#define DEBUG 1

class ClapTrap
{
protected:

    std::string Name;
    int HitPoint;
    int EnergyPoint;
    int AttackDamage;
    
public:

    int getDamage( void ) const;
    std::string getName( void ) const;
    void    setName(std::string name);

    ClapTrap( void );
    ClapTrap(std::string Name);
    ~ClapTrap();
    ClapTrap(const ClapTrap& other);

    ClapTrap&   operator=(const ClapTrap& other);

    void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

};

#endif
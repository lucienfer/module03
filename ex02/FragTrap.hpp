#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class   FragTrap : public ClapTrap {
private:

public:
    FragTrap( void );
    ~FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap& other);

    FragTrap&   operator=(const FragTrap& other);

    void    highFivesGuys( void );
    void    attack(const std::string& target);
};

#endif
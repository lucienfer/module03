#include "../ClapTrap.hpp"
#include "../ScavTrap.hpp"

int main( void ) {
    ScavTrap    Fighter("Hugo");
    ScavTrap    Fighter2;
    ScavTrap    Fighter3(Fighter2);
    ScavTrap    Fighter4;

    Fighter4 = Fighter;
    Fighter.attack("noName");
    Fighter2.takeDamage(Fighter.getDamage());
    Fighter2.beRepaired(0);
    Fighter.guardGate();
    std::cout << "Fighter3 name = " << Fighter3.getName() << std::endl;
    std::cout << "Fighter4 name = " << Fighter4.getName() << std::endl;
    return (0);
}

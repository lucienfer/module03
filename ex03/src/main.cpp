#include "../ClapTrap.hpp"
#include "../FragTrap.hpp"
#include "../DiamondTrap.hpp"
#include "../FragTrap.hpp"

int main( void ) {
    DiamondTrap Fighter("Hugo");
    DiamondTrap Fighter2;
    DiamondTrap Fighter3(Fighter);
    DiamondTrap Fighter4 = Fighter2;

    Fighter.attack("noName");
    Fighter2.takeDamage(Fighter.getDamage());
    Fighter2.beRepaired(0);
    Fighter.highFivesGuys();
    Fighter.whoAmI();
    std::cout << "Fighter3 name: " << Fighter3.getName() << std::endl;
    std::cout << "Fighter4 name: " << Fighter4.getName() << std::endl;
    return (0);
}

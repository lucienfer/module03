#include "../ClapTrap.hpp"
#include "../FragTrap.hpp"

int main( void ) {
    FragTrap    Fighter("Hugo");
    FragTrap    Fighter2;
    FragTrap    Fighter3(Fighter2);
    FragTrap    Fighter4;

    Fighter4 = Fighter;
    Fighter.attack("noName");
    Fighter2.takeDamage(Fighter.getDamage());
    Fighter2.beRepaired(0);
    std::cout << "Fighter3 name = " << Fighter3.getName() << std::endl;
    std::cout << "Fighter4 name = " << Fighter4.getName() << std::endl;
    Fighter.highFivesGuys();
    return (0);
}

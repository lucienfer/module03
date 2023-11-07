#include "../ClapTrap.hpp"

int main( void ) {
    ClapTrap    Fighter("Hugo");
    ClapTrap    Fighter2;
    ClapTrap    Fighter3(Fighter);

    Fighter.attack("noName");
    Fighter2.takeDamage(Fighter.getDamage());
    Fighter2.beRepaired(0);
    std::cout << "Fighter3 name: " << Fighter.getName() << std::endl;
    return (0);
}

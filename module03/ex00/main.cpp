#include "ClapTrap.h"

int main() {
    
    ClapTrap claptrap1("CLTP");
    ClapTrap claptrap2 = claptrap1;
    ClapTrap claptrap3;
    claptrap3 = claptrap1;

    claptrap1.attack("target1");
    claptrap2.takeDamage(5);
    claptrap3.beRepaired(3);

    return 0;
}
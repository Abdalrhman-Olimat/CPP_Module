#include "ClapTrap.hpp"

int main()
{
// clap
    ClapTrap clap1("clap");
    ClapTrap clap2(clap1);
    ClapTrap clap3;
    
    clap3 = clap1;
    clap1.attack("test clap 1");
    clap1.takeDamage(5);
    clap1.beRepaired(3);
    clap1.takeDamage(10);
    clap1.attack("test clap 2");
    clap1.beRepaired(5);
    return 0;
}
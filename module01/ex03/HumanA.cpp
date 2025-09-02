#include "HumanA.hpp"
#include "iostream"

HumanA::HumanA(std::string name, Weapon &Weapon): name(name), weapon(Weapon)
{
    std::cout << "HumanA "<< name << " created with "<< weapon.getType() << std::endl;
}
HumanA::~HumanA()
{
    std::cout << "HumanA " << this-> name << " was killed" << std::endl;
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with his " << this-> weapon.getType() << std::endl;
}
void HumanA::setWeapon(Weapon Weapon)
{
    this-> weapon = Weapon;
}
#include "HumanB.hpp"

HumanB::HumanB(std::string name):  weapon(NULL)
{
	this-> name = name;
	std::cout << "HumanB " << name << " created with no weapon" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB " << this-> name << " was killed" << std::endl;
}

void	HumanB::attack(void)
{
	
	std::cout << this-> name << " attacks with his " << \
		this-> weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this-> weapon = &weapon;
}
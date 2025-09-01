#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>

class HumanB{

    private:
    Weapon *weapon;
    std:: string name;
    public:
    void    attack();
    void	setWeapon(Weapon weapon);
};


#endif
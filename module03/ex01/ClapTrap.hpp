#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap{
protected:
    std::string name;
    unsigned int hitPoints;//health
    unsigned int energyPoints;//energy
    unsigned int attackDamage;//damage
public:
    ClapTrap();//constructor
    ClapTrap(std::string name);//constructor
    ClapTrap(const ClapTrap &other);//copy
    ClapTrap &operator=(const ClapTrap &other);
    ~ClapTrap();

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
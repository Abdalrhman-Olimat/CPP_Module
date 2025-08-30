#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <stdlib.h>

class Zombie{
    private:
    std::string name;
    public:
    Zombie(void);
    Zombie(std::string name);
    ~Zombie();
    void announce( void );
    void setName(std::string);
};



#endif
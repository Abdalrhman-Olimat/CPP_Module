#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class weapon {

    private:
    std:: string type;

    public:
    void getType(std:: string &w);
    std:: string setType();
};


#endif
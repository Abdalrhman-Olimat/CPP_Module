#include "Zombie.hpp"

Zombie::Zombie(void): name("abd")
{
    std::cout << name << " Have the virus now" << std::endl;
}


Zombie::Zombie(std::string s): name(s)
{
    std::cout << name << " Do you Know what time it's" << std::endl;
}
Zombie::~Zombie(){
    std::cout << "The police catch "<< name <<" in the uni street"  << std::endl;
}
void Zombie::announce( void ){
    std::cout<<name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

void Zombie::setName(std::string n){
    name = n;
}

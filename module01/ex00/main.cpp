#include "Zombie.hpp"
void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

int main ()
{
    Zombie *zombie = newZombie("Abd");
    zombie->announce();
    randomChump("RandomChump");
    delete zombie;
    return 0;
}

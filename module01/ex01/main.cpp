#include "Zombie.hpp"
void	randomChump(std::string name);
Zombie	*newZombie(std::string name);
Zombie* zombieHorde( int N, std::string name );

int main ()
{
    int N = 5;

    Zombie *x = zombieHorde(N,"Abd");

    for(int i = 0; i < N;i++)
        x[i].announce();

    delete []x;
    
    return 0;
}

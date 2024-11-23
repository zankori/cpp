#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main()
{
    Zombie *z = zombieHorde(10, "ori");
    for (int i = 0; i < 10; i++)
        z[i].announce();
    delete [] z;
}
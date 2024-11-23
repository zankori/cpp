#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N < 1)
        return nullptr;
    Zombie *n_z = new Zombie[N];
    for (int i = 0; i < N; i++)
        n_z[i].setting(name);
    return (n_z);
}
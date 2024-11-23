#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );


int main()
{
    std::cout << "___________run newZombie function____________" << std::endl;
    Zombie *z = newZombie("zombie_one");
    z->announce();
    std::cout << "___________run randomChump function____________" << std::endl;
    randomChump("zombie_two");

    delete(z);
}
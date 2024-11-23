#include "Zombie.hpp"

void Zombie::announce(void){
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << this->name << " is destroyed !" << std::endl;
}

void Zombie::setting(std::string setname)
{
    this->name = setname;
}

Zombie::Zombie(){}
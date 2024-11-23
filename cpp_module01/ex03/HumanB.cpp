#include "HumanB.hpp"

void HumanB::attack()
{
    std::cout << this->my_name 
    << " attacks with their " 
    << this->my_weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name)
{
    this->my_name = name;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->my_weapon = &weapon;
}
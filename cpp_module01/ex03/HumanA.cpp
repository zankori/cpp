#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout << this->my_name 
    << " attacks with their " 
    << this->my_weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon)
: my_name(name), my_weapon(weapon){}
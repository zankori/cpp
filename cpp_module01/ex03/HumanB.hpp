#ifndef HUMAN_B
#define HUMAN_B

#include "Weapon.hpp"
#include <iostream>

class HumanB{
    private :
    Weapon *my_weapon;
    std::string my_name;
    public:
    void attack();
    void setWeapon(Weapon &weapon);
    HumanB(std::string name);
};

#endif
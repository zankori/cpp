#ifndef HUMAN_A
#define HUMAN_A

#include "Weapon.hpp"
#include <iostream>

class HumanA{
    private :
    Weapon &my_weapon;
    std::string my_name;
    public:
    void attack();
    HumanA(std::string name, Weapon &weapon);

};

#endif
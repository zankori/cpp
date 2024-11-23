#include "Weapon.hpp"

const std::string& Weapon::getType(void)
{  
    const std::string &ref_type = this->type;
    return ref_type;
}

void  Weapon::setType(std::string newType)
{
    this->type = newType;
}

Weapon::Weapon(std::string settype)
{
    this->setType(settype);
}
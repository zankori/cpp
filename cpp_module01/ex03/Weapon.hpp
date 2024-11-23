#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>


class Weapon
{
    private :
        std::string type;
    public :
    const std::string& getType(void);
    void  setType(std::string newType);
    Weapon(std::string settype);
};

#endif

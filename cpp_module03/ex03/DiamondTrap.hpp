#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
    private :
    std::string Name;
    public :
    DiamondTrap();
    DiamondTrap(std::string Name);
    void whoAmI();
    void attack()
    {
        ScavTrap::attack("dd");
    }
};

#endif
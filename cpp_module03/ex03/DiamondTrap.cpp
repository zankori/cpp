#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "constructer Called From Diamond class" << std::endl;
}

DiamondTrap::DiamondTrap(std::string Name) : Name(Name){}

void DiamondTrap::whoAmI()
{
    std::cout << this->Name << std::endl;
    // std::cout << ClapTrap::Name << std::endl;
    
}


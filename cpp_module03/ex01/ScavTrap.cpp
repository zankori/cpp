#include "ScavTrap.hpp"

    ScavTrap::ScavTrap()
    {
        std::cout << "Default Constructer Called From ScavTrap !" << std::endl;
    }
    ScavTrap::ScavTrap(std::string Name)
    {
        std::cout << "Parameterized Constructor Called From ScavTrap!" << std::endl;
        this->Name = Name;
        this->Hit_points = 100;
        this->Energy_points = 50;
        this->Attack_damage = 20;
    }

    ScavTrap::~ScavTrap()
    {
        std::cout << "Destructer Called From ScavTrap!" << std::endl;
    }
    void ScavTrap::attack(const std::string& target)
    {
        if (this->Hit_points <= 0)
        {
            std::cout << "Scav Trap robot attack is imposible because you are a" 
            << " died man , current [hit point = 0]" << std::endl;
            return ;
        }
        else if (this->Energy_points <= 0)
        {
            std::cout << "Scav Trap robot attack is imposible because you dont have" 
            << " enough energy points " << std::endl;
            return ;
        }
        this->Energy_points--;
        std::cout << "Scav Trap robot " << this->Name << " attacks " << target << " "
        << "causing " << this->Attack_damage << " points of damage !"
        <<  std::endl;
    }

    void ScavTrap::guardGate()
    {
        std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
    }

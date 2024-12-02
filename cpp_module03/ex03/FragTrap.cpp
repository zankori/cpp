#include "FragTrap.hpp"

    FragTrap::FragTrap()
    {
        std::cout << "Default Constructer Called From FragTrap !" << std::endl;
    }
    FragTrap::FragTrap(std::string Name)
    {
        std::cout << "Parameterized Constructor Called From FragTrap!" << std::endl;
        this->Name = Name;
        this->Hit_points = 100;
        this->Energy_points = 100;
        this->Attack_damage = 30;
    }

    FragTrap::~FragTrap()
    {
        std::cout << "Destructer Called From FragTrap!" << std::endl;
    }

    void FragTrap::highFivesGuys()
    {
        std::cout << "fives request i will add them in future" << std::endl;
    }

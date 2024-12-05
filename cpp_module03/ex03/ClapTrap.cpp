#include "ClapTrap.hpp"

    // Orthodox Canonical Form //
    ClapTrap::ClapTrap(void){
        std::cout << "Default constructer Called From ClapTrap!" << std::endl;
    }
    ClapTrap::ClapTrap(std::string Name)
    {
        std::cout << "Parameterized Constructor Called !" << std::endl;
        this->Name = Name;
        this->Hit_points = 10;
        this->Energy_points = 10;
        this->Attack_damage = 0;
    }

    ClapTrap::ClapTrap(const ClapTrap& other_claptrap)
    {
        std::cout << "Copy constructor Called !" << std::endl;
        this->Name = other_claptrap.Name;
        this->Hit_points = other_claptrap.Hit_points;
        this->Energy_points = other_claptrap.Energy_points;
        this->Attack_damage = other_claptrap.Attack_damage;
    }

    ClapTrap& ClapTrap::operator=(const ClapTrap& other_claptrap)
    {
        std::cout << "Copy assignment operator Called !" << std::endl;
        if (this == &other_claptrap)
            return (*this);
        this->Name = other_claptrap.Name;
        this->Hit_points = other_claptrap.Hit_points;
        this->Energy_points = other_claptrap.Energy_points;
        this->Attack_damage = other_claptrap.Attack_damage;
        return (*this);
    }
    ClapTrap::~ClapTrap()
    {
        std::cout << "Destructer Called From ClapTrap !" << std::endl;
    }
    // ---------- //

    void ClapTrap::attack(const std::string& target)
    {
        if (this->Hit_points <= 0)
        {
            std::cout << "attack is imposible because you are a" 
            << " died man , current [hit point = 0]" << std::endl;
            return ;
        }
        else if (this->Energy_points <= 0)
        {
            std::cout << "attack is imposible because you dont have" 
            << " enough energy points " << std::endl;
            return ;
        }
        this->Energy_points--;
        std::cout << this->Name << " attacks " << target << " "
        << "causing " << this->Attack_damage << " points of damage !"
        <<  std::endl;
    }
    void ClapTrap::takeDamage(unsigned int amount)
    {
        this->Hit_points -= amount;
        if (this->Hit_points <= 0)
            this->Hit_points = 0;
        std::cout << this->Name << " take damage " << amount
        << " current hit point is : [" << this->Hit_points 
        << "]" << std::endl;
        if (this->Hit_points == 0)
            std::cout << "you died !" << std::endl;
        
    }
    void ClapTrap::beRepaired(unsigned int amount)
    {
        if (this->Hit_points <= 0)
        {
            std::cout << "repair your self is imposible because you already" 
            << " died , current [hit point = 0]" << std::endl;
            return ;
        }
        else if (this->Energy_points <= 0)
        {
            std::cout << "repair your self is imposible because you dont have" 
            << " enough energy points " << std::endl;
            return ;
        }
        this->Energy_points--;
        this->Hit_points += amount;
        std::cout << this->Name << " repair itself by " << amount
        << " current hit point is : [" << this->Hit_points 
        << "] " 
        <<  "current Energy points [" << this->Energy_points << "]"
        << std::endl;
    }

    // ----- //
    int ClapTrap::getter_attackDMG()
    {
        return (this->Attack_damage);
    }
    void ClapTrap::setting_attackDMG(int attack_damage)
    {
        this->Attack_damage = attack_damage;
    }

    std::string ClapTrap::getName()
    {
        return this->Name;
    }

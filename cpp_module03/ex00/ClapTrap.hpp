#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
    private:
    std::string Name;
    int Hit_points;
    int Energy_points;
    int Attack_damage;
    public:
    // Orthodox Canonical Form //
    ClapTrap(void);
    ClapTrap(std::string Name);
    ClapTrap(const ClapTrap& other_claptrap);
    ClapTrap& operator=(const ClapTrap& other_claptrap);
    ~ClapTrap();
    // ---------- //
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    int getter_attackDMG();
    void setting_attackDMG(int attack_damage);
};

#endif
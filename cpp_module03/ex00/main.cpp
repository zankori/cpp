#include "ClapTrap.hpp"

int main()
{
    ClapTrap human1("ori");
    ClapTrap enemy1("en1");
    ClapTrap enemy2("en2");

    human1.setting_attackDMG(5);
    enemy1.setting_attackDMG(6);
    enemy2.setting_attackDMG(6);

    human1.attack("en1");
    enemy1.takeDamage(human1.getter_attackDMG());
    human1.attack("en2");
    enemy2.takeDamage(human1.getter_attackDMG());
    enemy1.beRepaired(1);
    enemy2.beRepaired(1);
    enemy1.attack("human1");
    human1.takeDamage(enemy1.getter_attackDMG());
    enemy2.attack("human1");
    human1.takeDamage(enemy2.getter_attackDMG());
    human1.beRepaired(1);
}
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie{
    private:
        std::string name;
    public :
        void announce( void );
        void setting(std::string setname);
        Zombie(std::string name);
        Zombie();
        ~Zombie();
};

#endif
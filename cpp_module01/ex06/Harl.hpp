#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl{
    private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    void out_index(void);
    public :
    void complain(std::string level);
    int type_complain(std::string level);
};

#endif
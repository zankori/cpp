#include "Harl.hpp"

int main()
{
    Harl harl;
    std::cout << "Harl using DEBUG level" << std::endl;
    harl.complain("DEBUG");
    std::cout << "------------------------" << std::endl;
    std::cout << "Harl using INFO level" << std::endl;
    harl.complain("INFO");
    std::cout << "------------------------" << std::endl;
    std::cout << "Harl using WARNING level" << std::endl;
    harl.complain("WARNING");
    std::cout << "------------------------" << std::endl;
    std::cout << "Harl using ERROR level" << std::endl;
    harl.complain("ERROR");
    std::cout << "------------------------" << std::endl;
    std::cout << "Harl using a work not in level list" << std::endl;
    harl.complain("somethinge else");


}
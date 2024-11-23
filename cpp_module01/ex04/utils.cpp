#include "Sed.hpp"

void    fill_newfile(std::ofstream &file_replace, std::string line)
{
    file_replace << line;
    if (file_replace.fail())
    {
        std::cerr << "Error during reading from the file !" << std::endl;
        exit (1);
    }
}

int check_error(std::ifstream &file)
{
    if (file.is_open() == false)
    {
        std::cerr << "fail when opening the file !" << std::endl;
        return (-1);
    }
    return (0);
}
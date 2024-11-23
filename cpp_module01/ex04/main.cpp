#include "Sed.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "argument error !" << std::endl;
        return 0;
    }
    
    std::ifstream file_one;
    std::ofstream file_replace;

    std::string data;
    std::string file_name = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty() || s2.empty())
    {
        std::cerr << "error s1 or s2 is empty!" << std::endl;
        return (1);
    }
    
    int index = 0;

    file_one.open(file_name);

    if (check_error(file_one) == -1)
        return (0);

    file_replace.open(file_name + ".replace", std::ios_base::app);
    if (file_replace.is_open() == false)
    {
        std::cerr << "fail when opening the file !" << std::endl;
        return (-1);
    }
   
    while (std::getline(file_one, data))
    {
        if (file_one.fail())
        {
            std::cerr << "Error during reading from the file !" << std::endl;
            return (0);
        }
        index = data.find(s1);
        while (index != std::string::npos)
        {
            fill_newfile(file_replace, data.substr(0, index));
            data = data.substr(index, data.size() - index);
            fill_newfile(file_replace, s2);
            data = data.substr(s1.size(), data.size() - s1.size());
            index = data.find(s1);
        }
        fill_newfile(file_replace, data);
        if (file_one.eof() == false)
            fill_newfile(file_replace, "\n");
    }

    file_one.close();
    file_replace.close();

}
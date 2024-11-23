#include <iostream>

int main()
{
    std::string the_str = "HI THIS IS BRAIN";
    std::string *stringPTR = &the_str;
    std::string &stringREF = the_str;

    std::cout << "The memory address of the string : " << &the_str << std::endl;
    std::cout << "The memory address held by stringPTR : " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF : " << &stringREF << std::endl;

    std::cout << "The value of the string : " << the_str << std::endl;
    std::cout << "The value pointed to by stringPTR : " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF : " << stringREF << std::endl;
}


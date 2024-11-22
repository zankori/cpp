#include "code.hpp"

void    display_index(int index)
{
    std::cout << std::setw(10) << std::right;
    std::cout << index;
}
void    display_str(std::string str)
{
    
    if (str.length() > 10)
    {
        for (int i = 0; i < 9; i++)
            std::cout << str[i];
        std::cout << '.';
    }
    else
    {
        std::cout << std::setw(10) << std::right;
        std::cout << str;
    }
}



void    display(int index, std::string first_name,
std::string last_name, std::string nickname)
{
    for (int i = 0; i < 43; i++)
        std::cout << '_';
    std::cout << '\n';
    display_index(index);
    std::cout << "|";
    display_str(first_name);
    std::cout << "|";
    display_str(last_name);
    std::cout << "|";
    display_str(nickname);
    std::cout << '\n';
}


void    Search_for_contact(PhoneBook *phone_book)
{
    std::string index;
    int num = 0;
    int range = 0;
    for (int i = 0; i < 8; i++)
    {
        if (phone_book->array_contact[i].is_filled)
        {
            display(i,
        phone_book->array_contact[i].get_attribute("first_name"), 
        phone_book->array_contact[i].get_attribute("last_name"), 
        phone_book->array_contact[i].get_attribute("nickname"));
        range++;
        }
    }
    if (range == 0)
    {
        std::cout << "there is no contact yet !" << std::endl;
        return ;
    }
    int flag_index = 0;
    while (!flag_index)
    {
        std::cout << "enter the index (begin with 0) of the contact you want : ";
        std::getline(std::cin, index);
        if (index.size() == 1 && index[0] >= '0' && index[0] <= '7')
        {
            num = index[0] - 48;
            if (num >= 0 && num < range)
            {
                phone_book->array_contact[num].display_info();
                flag_index = 1;
            }
            else
                std::cout << "index you typed is not in the contact list !" << std::endl;
        }
        else
            std::cout << "wrong index !" << std::endl;
    } 

}
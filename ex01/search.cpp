#include "PhoneBook.hpp"

void    display_index(int index)
{
    std::cout << index;
    for (int i = 0; i < 9; i++)
        std::cout << " ";
}
void    display_str(std::string str)
{
    /////////////////
}



void    display(int index, std::string first_name,
std::string last_name, std::string nickname)
{
    display_index(index);
    std::cout << "|";
    display_str(first_name);
    std::cout << "|";
    display_str(last_name);
    std::cout << "|";
    display_str(nickname);
}


void    Search_for_contact(PhoneBook *phone_book)
{
    int index = 0;
    int range = 0;
    for (int i = 0; i < 8; i++)
    {
        if (phone_book->array_contact[i].is_filled)
        {
            display(i,
        phone_book->array_contact[i].get_attribute("first_name"), 
        phone_book->array_contact[i].get_attribute("last_name"), 
        phone_book->array_contact[i].get_attribute("nickname"));
        std::cout << "\n";
        range++;
        }
    }
    if (range == 0)
    {
        std::cout << "there is no concat yet ! \n";
        return ;
    }
    std::cout << "enter the index of the contact you want : ";
    std::cin >> index;
    if (std::cin.fail())
    {
        std::cout << "not a number !!!!!" << '\n';
        exit(1);
    }
    if (index >= 0 && index < range)
        phone_book->array_contact[index].display_info();
    else
        std::cout << "index you typed is out of range !" << '\n';

}
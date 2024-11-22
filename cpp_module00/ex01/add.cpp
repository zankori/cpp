#include "PhoneBook.hpp"

void    fifo_algo(PhoneBook *phone_book)
{
    for (int i = 0; i < 7; i++)
    {
        phone_book->array_contact[i].fill_data(
        phone_book->array_contact[i + 1].get_attribute("first_name"), 
        phone_book->array_contact[i + 1].get_attribute("last_name"), 
        phone_book->array_contact[i + 1].get_attribute("nickname"),
        phone_book->array_contact[i + 1].get_attribute("phone_number"), 
        phone_book->array_contact[i + 1].get_attribute("darkest_secret"));
    }
}

void    Add_contact(PhoneBook *phone_book)
{
    int index;
    int flag = 0;
    for (index = 0; index < 8; index++)
    {
        if (!phone_book->array_contact[index].is_filled)
        {
            flag = 1;
            break ;
        }
    }
    if (flag == 0)
    {
        // all the fileds is full
        fifo_algo(phone_book);
        index = 7;
    }
    
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;

        std::cout << "enter your first_name :";
        std::getline(std::cin , first_name);


        std::cout << "enter your last_name :";
        std::getline(std::cin , last_name);


        std::cout << "enter your nickname :";
        std::getline(std::cin , nickname);

        
        std::cout << "enter your phone number :";
        std::getline(std::cin , phone_number);
        

        std::cout << "enter your darkest_secret :";
        std::getline(std::cin , darkest_secret);

        phone_book->array_contact[index].fill_data(first_name, last_name, nickname,
        phone_number, darkest_secret);
        phone_book->array_contact[index].is_filled = 1;



}

#include "PhoneBook.hpp"

void    Contact::fill_data(std::string first_name,std::string last_name,
         std::string nickname, std::string phone_number, std::string darkest_secret)
{
            this->first_name = first_name;
            this->last_name = last_name;
            this->nickname = nickname;
            this->phone_number = phone_number;
            this->darkest_secret = darkest_secret;
}

std::string Contact::get_attribute(std::string attr)
{
            if (!attr.compare("first_name"))
                return this->first_name;
            else if (!attr.compare("last_name"))
                return this->last_name;
            else if (!attr.compare("nickname"))
                return this->nickname;
            else if (!attr.compare("phone_number"))
                return this->phone_number;
            else if (!attr.compare("darkest_secret"))
                return this->darkest_secret;
            return "error";
}

void    Contact::display_info()
{
            std::cout << "first_name : " + this->first_name;
            std::cout << '\n';
            std::cout << "last_name : " + this->last_name;
            std::cout << '\n';
            std::cout << "nickname : " + this->nickname;
            std::cout << '\n';
            std::cout << "phone_number : " + this->phone_number;
            std::cout << '\n';
            std::cout << "darkest_secret : " + this->darkest_secret;
            std::cout << '\n';
}



int check_order_exist(std::string user_order)
{
    if (!user_order.compare("ADD"))
        return ADD;
    else if (!user_order.compare("SEARCH"))
        return SEARCH;
    else if (!user_order.compare("EXIT"))
        return EXIT;
    else
        return 0;
}


int main()
{
    PhoneBook phone_book;
    std::string user_order;
    int order;
    while (1)
    {
        std::cout << "PhoneBook--your orders : ADD-SEARCH-EXIT\n: ";
        std::cin >> user_order;
        order = check_order_exist(user_order);
        if (order == ADD)
            Add_contact(&phone_book);
        else if (order == SEARCH)
            Search_for_contact(&phone_book);
        else if (order == EXIT)
            return 0;
    } 
}

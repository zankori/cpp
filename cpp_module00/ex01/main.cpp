#include "code.hpp"

int check_order_exist(std::string user_order)
{
    if (!user_order.compare("ADD"))
        return 1;
    else if (!user_order.compare("SEARCH"))
        return 2;
    else if (!user_order.compare("EXIT"))
        return 3;
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
        std::getline(std::cin, user_order);
        order = check_order_exist(user_order);
        if (order == 1)
            Add_contact(&phone_book);
        else if (order == 2)
            Search_for_contact(&phone_book);
        else if (order == 3)
            return 0;
    } 
}
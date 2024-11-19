#include "PhoneBook.hpp"



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

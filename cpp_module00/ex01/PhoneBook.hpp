#include <iostream>
#include <string>
#include <iomanip>

class Contact{
    private :
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public :
        int is_filled = 0;
        void    fill_data(std::string first_name,std::string last_name,
        std::string nickname, std::string phone_number, std::string darkest_secret);
        std::string get_attribute(std::string attr);
        void    display_info();
};

class PhoneBook{
    public :
        Contact array_contact[8];
};

enum{
    ADD = 1,
    SEARCH = 2,
    EXIT = 3
};


void    Add_contact(PhoneBook *phone_book);
void    Search_for_contact(PhoneBook *phone_book);
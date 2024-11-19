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
         std::string nickname, std::string phone_number, std::string darkest_secret)
        {
            this->first_name = first_name;
            this->last_name = last_name;
            this->nickname = nickname;
            this->phone_number = phone_number;
            this->darkest_secret = darkest_secret;
        }

        std::string get_attribute(std::string attr)
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

        void    display_info()
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
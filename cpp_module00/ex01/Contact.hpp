#ifndef CONTACT_HPP
#define CONTACT_HPP

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

#endif
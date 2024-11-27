#include "Harl.hpp"

    void Harl::debug(void)
    {
        std::cout << "[ DEBUG ]" << std::endl;
        std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
    }

    void Harl::info(void)
    {
        std::cout << "[ INFO ]" << std::endl;
        std::cout << "I cannot believe adding extra bacon costs more money.";
        std::cout << "  You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
    }

    void Harl::warning(void)
    {
        std::cout << "[ WARNING ]" << std::endl;
        std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
    }

    void Harl::error(void)
    {
        std::cout << "[ ERROR ]" << std::endl;
        std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    }

    void Harl::out_index(void)
    {
        std::cout << "that not a comments from Harl ! try another" << std::endl;
    }


 float compare_str(std::string str1, std::string str2)
    {
        static float x = 0;
        if (!str1.compare(str2))
            return (x = 0, x);
        return(x += 0.25, x);
    }

    void Harl::complain(std::string level)
    {
        void (Harl::*function[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::out_index};
        float x;
        x = compare_str("trick", "trick"); // that mean I will initialize the x by 0 whenever i enter this function.
        x = compare_str(level, "ERROR"); // x = 0; | x = 0.75 --> 3
        x = compare_str(level, "WARNING"); // x = 0; | x = 0.5 --> 2
        x = compare_str(level, "INFO"); // x = 0; | x = 0.25 --> 1
        x = compare_str(level, "DEBUG"); // x = 0; | x = 0 --> 0
        int y = x * 4;
        (this->*function[y])();
    }

    int Harl::type_complain(std::string level)
    {
        void (Harl::*function[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::out_index};
        float x;
        x = compare_str("trick", "trick"); // that mean I will initialize the x by 0 whenever i enter this function.
        x = compare_str(level, "ERROR"); // x = 0; | x = 0.75 --> 3
        x = compare_str(level, "WARNING"); // x = 0; | x = 0.5 --> 2
        x = compare_str(level, "INFO"); // x = 0; | x = 0.25 --> 1
        x = compare_str(level, "DEBUG"); // x = 0; | x = 0 --> 0
        int y = x * 4;
        return (y);
    }
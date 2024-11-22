#include <iostream>
#include <cctype>

int get_length(char *str)
{
    int     i = 0;
    for (i = 0; str[i] != '\0'; i++){}
    return (i);
}

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
        return 1;
    }
    for (int i = 1; i < argc; i++)
    {
        int length = get_length(argv[i]);
        for (int j = 0; j < length ; j++)
        {
            if (isalpha(argv[i][j]) && islower(argv[i][j]))
                std::cout << (char)toupper(argv[i][j]);
            else
                std::cout << argv[i][j];
        }
    }
    std::cout << "\n";
}
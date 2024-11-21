#include <iostream>
#include <cctype>

int get_length(char *str)
{
    int     i;
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
        int find_space = 0;
        int non_space = 0;
        for (int j = 0; j < length ; j++)
        {
            if (argv[i][j] == ' ')
                find_space++;
            else
            {
                if (find_space && non_space)
                    std::cout << ' ';
                find_space = 0;
                non_space = 1;
                if (isalpha(argv[i][j]) && islower(argv[i][j]))
                    std::cout << (char)toupper(argv[i][j]);
                else
                    std::cout << argv[i][j];
            }
        }

        if (i != argc - 1)
            std::cout << " ";
    }
    std::cout << "\n";
}
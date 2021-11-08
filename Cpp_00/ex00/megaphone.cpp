#include <iostream>

void    megaphone(int argc, char **argv)
{
    int j = 1;
    while (argv[j])
    {
        int i = 0;
        while (argv[j][i])
        {
            if (argv[j][i] >= 'a' && argv[j][i] <= 'z')
                std::cout << (char)toupper(argv[j][i]);
            else
                std::cout << argv[j][i];
            i++;
        }
        if (j != argc - 1)
            std::cout << " ";
        j++;
    }
}

int main(int argc, char **argv)
{
    if (argc > 1)
        megaphone(argc, argv);
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    return (0);
}           
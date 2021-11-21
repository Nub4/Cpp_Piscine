#include <cctype>
#include <string>
#include <iostream>

void ft_megaphone(int ac, char **av)
{
    int i;
    int j;

    for (i = 1; i < ac; i++)
        for (j = 0; j < (int)strlen(av[i]); j++)
            std::cout << (char)toupper(av[i][j]);
    std::cout << "\n";
}

int main(int ac, char **av)
{
    if (ac > 1)
        ft_megaphone(ac, av);
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    return (0);
}
#include "Karen.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Error, 1 argument needed!\n";
        return (1);
    }
    Karen karen;
    int i = 0;
    std::string s = (std::string)av[1];
    if (s.compare("DEBUG") == 0)
        i = 1;
    else if (s.compare("INFO") == 0)
        i = 2;
    else if (s.compare("WARNING") == 0)
        i = 3;
    else if (s.compare("ERROR") == 0)
        i = 4;
    switch (i)
    {
        case 1:
            karen.complain("DEBUG");
            karen.complain("INFO");
            karen.complain("WARNING");
            karen.complain("ERROR");
            break;
        case 2:
            karen.complain("INFO");
            karen.complain("WARNING");
            karen.complain("ERROR");
            break;
        case 3:
            karen.complain("WARNING");
            karen.complain("ERROR");
            break;
        case 4:
            karen.complain("ERROR");
            break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]\n";
        break;
    }
    return (0);
}
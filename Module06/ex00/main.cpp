#include "Scalar.hpp"

int main(int ac, char **av)
{
    if (ac != 2){
        std::cout << "Error, need 1 argument\n";
        return (1);
    }
    std::string str = av[1];
    Scalar  a(str);
    a.toChar();
    a.toInt();
    a.toFloat();
    a.toDouble();
    
    return (0);
}
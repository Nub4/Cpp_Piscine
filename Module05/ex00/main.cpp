#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat jake("jake", 1);
    Bureaucrat mike("mike", 149);
    Bureaucrat kia(jake);

    std::cout << jake << std::endl;
    std::cout << mike << std::endl;
    std::cout << kia << std::endl;
    
    try{
        kia.decrement(2);
        jake.increment(2);
        mike.decrement(1);
    }
    catch(std::exception &ex){
        std::cerr << ex.what() << std::endl;
    }

    std::cout << jake << std::endl;
    std::cout << mike << std::endl;
    std::cout << kia << std::endl;

    try{
        mike.decrement(5);
    }
    catch(std::exception &ex){
        std::cerr << ex.what() << std::endl;
    }

    std::cout << mike << std::endl;

    return (0);
}
#include "Karen.hpp"

Karen::Karen(){}

Karen::~Karen(){}

void    Karen::complain(std::string level){

    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Karen::*function[4])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*function[i])();
            return ;
        }
    }
}

void    Karen::debug(void){
    std::cerr << "[ DEBUG ]\n";
    std::cerr << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n\n";
}

void    Karen::info(void){
    std::cerr << "[ INFO ]\n";
    std::cerr << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n\n";
}

void    Karen::warning(void){
    std::cerr << "[ WARNING ]\n";
    std::cerr << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n\n";
}

void    Karen::error(void){
    std::cerr << "[ ERROR ]\n";
    std::cerr << "This is unacceptable, I want to speak to the manager now.\n\n";
}
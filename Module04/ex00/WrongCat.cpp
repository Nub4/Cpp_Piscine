#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"){
    std::cout << "WrongCat construtor called\n";
}

WrongCat    &WrongCat::operator=(const WrongCat &rhs){
    WrongAnimal::operator=(rhs);
    return *this;
}

WrongCat::WrongCat(const WrongCat &src){
    std::cout << "WrongCat copy constructor called\n";
    *this = src;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called\n";
}

void    WrongCat::makeSound() const{
    std::cout << "WrongCat makes a sound!\n";
}
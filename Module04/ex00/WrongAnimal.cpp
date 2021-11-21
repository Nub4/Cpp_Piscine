#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
: _type("WrongAnimal"){
    std::cout << "WrongAnimal construtor called\n";
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor called\n";
}

WrongAnimal::WrongAnimal(std::string type)
: _type(type){
    std::cout << "WrongAnimal naming constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &src){
    std::cout << "WrongAnimal copy constructor called\n";
    _type = src._type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs){
    _type = rhs._type;
    return *this;
}

std::string WrongAnimal::getType() const{
    return (_type);
}

void    WrongAnimal::makeSound() const{
    std::cout << "WrongAnimal makes a sound!\n";
}
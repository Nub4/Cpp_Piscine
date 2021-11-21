#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
    std::cout << "Cat constructor called\n";
}

Cat::Cat(const Cat &src){
    std::cout << "Cat copy constructor called\n";
    *this = src;
}

Cat &Cat::operator=(const Cat &rhs){
    Animal::operator=(rhs);
    return *this;
}

Cat::~Cat(){
    std::cout << "Cat destructor called\n";
}

void    Cat::makeSound() const{
    std::cout << "Cat says: MIAUUUU\n";
}
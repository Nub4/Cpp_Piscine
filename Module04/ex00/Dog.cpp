#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
    std::cout << "Dog constructor called\n";
}

Dog::Dog(const Dog &src){
    std::cout << "Dog copy constructor called\n";
    *this = src;
}

Dog &Dog::operator=(const Dog &rhs){
    Animal::operator=(rhs);
    return *this;
}

Dog::~Dog(){
    std::cout << "Dog destructor called\n";
}

void    Dog::makeSound() const{
    std::cout << "Dog says: VUF VUF\n";
}
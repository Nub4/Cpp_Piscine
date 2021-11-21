#include "Animal.hpp"

Animal::Animal() : _type("Animal"){
    std::cout << "Animal constructor called\n";
}

Animal::Animal(std::string type) : _type(type){
    std::cout << "Animal name constructor called\n";
}

Animal::Animal(const Animal &src){
    std::cout << "Animal copy constructor called\n";
    _type = src._type;
}

Animal  &Animal::operator=(const Animal &rhs){
    _type = rhs._type;
    return *this;
}

Animal::~Animal(){
    std::cout << "Animal destructor called\n";
}

void    Animal::makeSound() const{
    std::cout << "Animal makes a sound\n";
}

std::string    Animal::getType() const{
    return (_type);
}
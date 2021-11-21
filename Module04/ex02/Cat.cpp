#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
    _brain = new Brain();
    std::cout << "Cat constructor called\n";
}

Cat::Cat(const Cat &src) : Animal(src){
    std::cout << "Cat copy constructor called\n";
    _brain = new Brain(*src._brain);
}

Cat &Cat::operator=(const Cat &rhs){
    Animal::operator=(rhs);
    delete _brain;
    _brain = new Brain(*rhs._brain);
    return *this;
}

Cat::~Cat(){
    delete _brain;
    std::cout << "Cat destructor called\n";
}

void    Cat::makeSound() const{
    std::cout << "Cat says: MIAUUUU\n";
}
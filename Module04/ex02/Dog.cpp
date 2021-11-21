#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
    _brain = new Brain();
    std::cout << "Dog constructor called\n";
}

Dog::Dog(Dog const &src) : Animal(src){
    std::cout << "Dog copy constructor called\n";
    _brain = new Brain(*src._brain);
}

Dog &Dog::operator=(const Dog &rhs){
    Animal::operator=(rhs);
    delete _brain;
    _brain = new Brain(*rhs._brain);
    return *this;
}

Dog::~Dog(){
    delete _brain;
    std::cout << "Dog destructor called\n";
}

void    Dog::makeSound() const{
    std::cout << "Dog says: VUF VUF\n";
}
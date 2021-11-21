#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain constructor called\n";
}

Brain::Brain(const Brain &src){
    std::cout << "Brain copy constructor called\n";
    *this = src;
}

Brain   &Brain::operator=(const Brain &rhs){
    *_ideas = *rhs._ideas;
    return *this;
}

Brain::~Brain(){
    std::cout << "Brain deconstructor called\n";
}
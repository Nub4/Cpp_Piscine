#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
    _hitpoints = 100;
    _energypoints = 100;
    _attackdamage = 30;
    std::cout << "FragTrap constructor has created\n";
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name){
    _hitpoints = 100;
    _energypoints = 100;
    _attackdamage = 30;
    std::cout << "FragTrap naming constructor has created\n";
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap destructor has created\n";
}

FragTrap    &FragTrap::operator=(FragTrap const &rhs){
    ClapTrap::operator=(rhs);
    return (*this);
}

void    FragTrap::highFivesGuys(void){
    std::cout << "FlagTrap " << _name << " gives positive high fives!\n";
}
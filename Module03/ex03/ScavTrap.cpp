#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
    _hitpoints = 100;
    _energypoints = 100;
    _attackdamage = 30;
    std::cout << "ScavTrap constructor has created\n";
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name){
    _hitpoints = 100;
    _energypoints = 100;
    _attackdamage = 30;
    std::cout << "ScavTrap naming constructor has created\n";
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap destructor has created\n";
}

ScavTrap    &ScavTrap::operator=(ScavTrap const &rhs){
    ClapTrap::operator=(rhs);
    return (*this);
}

void    ScavTrap::guardGate(){
    std::cout << "ScavTrap " << _name << " have entered in Gate keeper mode.\n";
}
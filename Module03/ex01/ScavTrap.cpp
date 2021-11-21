#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
    _hitpoints = 100;
    _energypoints = 50;
    _attackdamage = 20;
    std::cout << "ScavTrap constructor called\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    _hitpoints = 100;
    _energypoints = 50;
    _attackdamage = 20;
    std::cout << "ScavTrap naming constructor called\n";
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap destructor called\n";
}

void    ScavTrap::guardGate(){
    std::cout << "ScavTrap " << _name << " have entered in Gate keeper mode.\n";
}
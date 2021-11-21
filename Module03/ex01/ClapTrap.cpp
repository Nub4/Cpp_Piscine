#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
: _name(), _hitpoints(100), _energypoints(50), _attackdamage(20){
    std::cout << "Claptrap default constructor called\n";
}

ClapTrap::ClapTrap(std::string name)
: _name(name), _hitpoints(100), _energypoints(50), _attackdamage(20){
    std::cout << "Claptrap naming constructor called\n";
}

ClapTrap::~ClapTrap(){
    std::cout << "Claptrap destructor called\n";
}

void    ClapTrap::attack(std::string const &target){
    std::cout << "ClapTrap " << _name << " attack ";
    std::cout << target << ", causing ";
    std::cout << _attackdamage << " points of damage!\n";
}

void    ClapTrap::takeDamage(unsigned int amount){
    std::cout << "ClapTrap " << _name << " takes ";
    std::cout << amount << " points of damage!\n";
}

void    ClapTrap::beRepaired(unsigned int amount){
    std::cout << "ClapTrap " << _name << " gets repaired ";
    std::cout << amount << " hitpoints!\n";
}
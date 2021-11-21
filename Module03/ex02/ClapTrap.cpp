#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
: _name(), _hitpoints(100), _energypoints(100), _attackdamage(30){
    std::cout << "Claptrap default constructor called\n";
}

ClapTrap::ClapTrap(std::string const &name)
: _name(name), _hitpoints(100), _energypoints(100), _attackdamage(30){
    std::cout << "Claptrap naming constructor called\n";
}

ClapTrap::~ClapTrap(){
    std::cout << "Claptrap destructor called\n";
}

ClapTrap    &ClapTrap::operator=(ClapTrap const &rhs){
    _name = rhs._name;
    _hitpoints = rhs._hitpoints;
    _energypoints = rhs._energypoints;
    _attackdamage = rhs._attackdamage;
    return (*this);
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
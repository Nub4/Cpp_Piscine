#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
: _name(), _hitpoints(10), _energypoints(10), _attackdamage(0){
    std::cout << "Default constructor called\n";
}

ClapTrap::ClapTrap(std::string name)
: _name(name), _hitpoints(10), _energypoints(10), _attackdamage(0){
    std::cout << "Naming constructor called\n";
}

ClapTrap::~ClapTrap(){
    std::cout << "Destructor called\n";
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
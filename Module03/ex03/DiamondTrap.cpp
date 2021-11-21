#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("_clap_name"), ScavTrap(), FragTrap(){
    _hitpoints = FragTrap::_hitpoints;
    _energypoints = ScavTrap::_energypoints;
    _attackdamage = FragTrap::_attackdamage;
    std::cout << "DiamondTrap constructor has created\n";
}

DiamondTrap::DiamondTrap(std::string const &name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(){
    _name = name;
    _hitpoints = FragTrap::_hitpoints;
    _energypoints = ScavTrap::_energypoints;
    _attackdamage = FragTrap::_attackdamage;
    std::cout << "DiamondTrap naming constructor has created\n";
}

DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap destructor has created\n";
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs){
    ClapTrap::operator=(rhs);
    return *this;
}

void    DiamondTrap::attack(std::string const &target){
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI(){
    std::cout << "DiamondTrap " << _name << " of " << ClapTrap::_name << std::endl;
}
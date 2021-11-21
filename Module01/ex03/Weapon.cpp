#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

Weapon::Weapon(std::string x) : _type(x){}

Weapon::~Weapon(){}

void    Weapon::setType(std::string x){
    _type = x;
}

std::string const &Weapon::getType(){
    return _type;
}
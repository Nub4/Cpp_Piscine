#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string x)
: _name(x){}

HumanB::~HumanB(){}

void    HumanB::setWeapon(Weapon &y){
    _weapon = &y;
}

void    HumanB::attack(){
    std::cout << _name << " attacks with his ";
    std::cout << _weapon->getType() << std::endl;
}
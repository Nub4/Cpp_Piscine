#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string x, Weapon &y)
: _name(x), _weapon(y){}

HumanA::~HumanA(){}

void    HumanA::attack(){
    std::cout << _name << " attacks with his ";
    std::cout << _weapon.getType() << std::endl;
}
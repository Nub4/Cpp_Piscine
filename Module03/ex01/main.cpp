#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap obj("MIKE");

    obj.attack("JAKE");
    obj.takeDamage(5);
    obj.beRepaired(5);
    obj.guardGate();

    return (0);
}
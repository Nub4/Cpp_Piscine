#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap obj("MIKE");

    obj.attack("JAKE");
    obj.takeDamage(5);
    obj.beRepaired(5);
    return (0);
}
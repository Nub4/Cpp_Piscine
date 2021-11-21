#include "FragTrap.hpp"

int main(void)
{
    FragTrap obj("MIKE");

    obj.attack("JAKE");
    obj.takeDamage(5);
    obj.beRepaired(5);
    obj.highFivesGuys();

    return (0);
}
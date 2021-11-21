#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap obj("MIKE");

    obj.attack("JAKE");
	obj.takeDamage(5);
	obj.beRepaired(5);
	obj.guardGate();
	obj.highFivesGuys();
	obj.whoAmI();

    return (0);
}
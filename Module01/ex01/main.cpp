#include "Zombie.hpp"

int main(void)
{
    Zombie *Zombies = zombieHorde(4, "Mark");

    for (int i = 0; i < 4; i++)
        Zombies[i].announce();
    delete[] Zombies;
    return (0);
}
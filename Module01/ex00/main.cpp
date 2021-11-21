#include "Zombie.hpp"

int main(void)
{
    Zombie *newZomb = newZombie("Jeppe");
    newZomb->announce();
    delete newZomb;
    randomChump("Markku");
    return (0);
}
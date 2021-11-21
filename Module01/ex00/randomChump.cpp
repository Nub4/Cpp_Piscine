#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie randoZomb;

	randoZomb.setName(name);
    randoZomb.announce();
}
#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie *newZomb = new Zombie;

	newZomb->setName(name);
	return (newZomb);
}
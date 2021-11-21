#include "Zombie.hpp"

Zombie::Zombie(void){}

Zombie::~Zombie(void){
	std::cout << _name << " died\n";
}

void	Zombie::setName(std::string name){
	_name = name;
}

void	Zombie::announce(void){
	std::cout << "<" << _name << "> BraiiiiiiinnnzzzZ...\n";
}
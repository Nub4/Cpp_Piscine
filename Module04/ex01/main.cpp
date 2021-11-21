#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    const Animal *ani[6];
    
    for (int a = 0; a < 3; a++){
        ani[a] = new Dog();
    }
    for (int a = 3; a < 6; a++){
        ani[a] = new Cat();
    }


    for (int a = 0; a < 6; a++){
        delete ani[a];
    }

    std::cout << "===== Deep Test =====" << std::endl;
	Animal *a = new Animal();
	Animal *b = new Animal(*a);
	Animal *c = new Dog();
	Animal *tmp = nullptr;

	std::cout << "a: ";
	a->makeSound();
	std::cout << "b: ";
	b->makeSound();
	std::cout << "Assigning Dog to b" << std::endl;
	tmp = b;
	b = c;
	std::cout << "a: ";
	a->makeSound();
	std::cout << "b: ";
	b->makeSound();
	delete a;
	delete b;
	delete tmp;
    return (0);
}
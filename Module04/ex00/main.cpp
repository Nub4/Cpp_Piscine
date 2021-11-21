#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete i;
    delete j;

    const WrongAnimal* metaa = new WrongAnimal();
    const WrongAnimal* ii = new WrongCat();

    std::cout << ii->getType() << " " << std::endl;
    metaa->makeSound();
    ii->makeSound();
    delete metaa;
    delete ii;
    return (0);
}
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal &src);
        virtual ~Animal();
    
        Animal &operator=(const Animal &rhs);
    
        virtual void    makeSound() const=0;
        std::string getType() const;

    protected:
        std::string _type;
};

#endif
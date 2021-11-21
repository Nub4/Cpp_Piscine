#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class Character : public ICharacter
{
    public:
        Character();
        Character(const std::string &name);
        Character(const Character &src);
        virtual ~Character();

        Character &operator=(const Character &rhs);

        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);

    private:
        std::string _name;
        AMateria* _materia[4];
        int _checkIndex(int index) const;

};

#endif

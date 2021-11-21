#ifndef ICE_H
#define ICE_H

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(const Ice &src);
        virtual ~Ice();

        virtual Ice &operator=(const Ice &rhs);

        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif

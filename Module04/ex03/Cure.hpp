#ifndef CURE_H
#define CURE_H

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(const Cure &src);
        virtual ~Cure();

        virtual Cure &operator=(const Cure &rhs);

        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif

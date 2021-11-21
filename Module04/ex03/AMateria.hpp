#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria &src);
        virtual ~AMateria();

        virtual AMateria& operator=(const AMateria &rhs);

        std::string const & getType() const;

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target) = 0;

    protected:
        std::string _type;

};

#endif

#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &src);
        virtual ~MateriaSource();

        MateriaSource& operator=(const MateriaSource &rhs);

        virtual void learnMateria(AMateria *m);
        virtual AMateria *createMateria(std::string const &type);

    private:
        AMateria *_materia[4];
};

#endif

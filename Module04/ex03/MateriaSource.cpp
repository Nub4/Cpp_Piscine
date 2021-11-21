#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    for (int i = 0; i < 4; ++i)
        _materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src){
    *this = src;
}

MateriaSource::~MateriaSource(){
    for (int i = 0; i < 4; ++i)
        if (_materia[i])
            delete _materia[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
    for (int i = 0; i < 4; ++i)
    {
        if (rhs._materia[i])
            _materia[i] = rhs._materia[i]->clone();
        else
            _materia[i] = NULL;
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; ++i)
    {
        if (!_materia[i])
        {
            _materia[i] = m;
            break;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; ++i)
    {
        if (!_materia[i])
            break;
        if (_materia[i]->getType() == type)
            return _materia[i]->clone();
    }
    return 0;
}

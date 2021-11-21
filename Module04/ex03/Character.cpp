#include "Character.hpp"

int Character::_checkIndex(int index) const{
    if (0 <= index && index < 4)
        return (1);
    return (0);
}

Character::Character() {}

Character::Character(const std::string &name) : _name(name){
    for (int i = 0; i < 4; ++i)
        _materia[i] = NULL;
}

Character::Character(const Character &src){
    *this = src;
}

Character::~Character(){
    for (int i = 0; i < 4; ++i)
        if (_materia[i])
            delete _materia[i];
}

Character &Character::operator=(const Character &rhs){
    _name = rhs.getName();
    for (int i = 0; i < 4; ++i)
    {
        if (rhs._materia[i])
            _materia[i] = rhs._materia[i]->clone();
        else
            _materia[i] = NULL;
    }
    return *this;
}

std::string const & Character::getName() const{
    return _name;
}

void Character::equip(AMateria* m){
    for (int i = 0; i < 4; ++i)
    {
        if (!_materia[i])
        {
            _materia[i] = m;
            break ;
        }
    }
}

void Character::unequip(int idx){
    if (!_checkIndex(idx) || !_materia[idx])
        return ;
    _materia[idx] = NULL;
}

void Character::use(int idx, ICharacter& target){
    if (!_checkIndex(idx) || !_materia[idx])
        return ;
    _materia[idx]->use(target);
}

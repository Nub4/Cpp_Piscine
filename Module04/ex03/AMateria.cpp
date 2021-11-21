#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const & type) : _type(type) {}

AMateria::AMateria(const AMateria &src){
    *this = src;
}

AMateria::~AMateria() {}

AMateria &AMateria::operator=(const AMateria &rhs){
    _type = rhs._type;
    return *this;
}

std::string const & AMateria::getType() const{
    return _type;
}
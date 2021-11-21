#include "Scalar.hpp"

Scalar::Scalar() : _value() {}

Scalar::Scalar(std::string &value) : _value(value) {}

Scalar::Scalar(const Scalar &src) : _value(src._value) {}

Scalar::~Scalar() {}

Scalar  &Scalar::operator=(const Scalar &rhs){
    _value = rhs._value;
    return *this;
}

void    Scalar::toChar(){
    int i;

    std::cout << "char: ";
    if (!_value[1] && !isnumber(_value[0])){
        std::cout << "'" << _value[0] << "'" << std::endl;
        return ;
    }
    try{
        i = std::stoi(_value);
        if (i < 0 || i > 255){
            std::cout << "impossible\n";
            return ;
        }
    }
    catch(...){
        std::cout << "impossible\n";
        return ;
    }
    if (!isprint(i)){
        std::cout << "Non displayable\n";
        return ;
    }
    std::cout << "'" << (char)i << "'" << std::endl;
}

void    Scalar::toInt(){
    int i;

    std::cout << "int: ";
    try{
        i = std::stoi(_value);
    }
    catch(...){
        std::cout << "impossible\n";
        return ;
    }
    std::cout << i << std::endl;
}

void    Scalar::toFloat(){
    float j;
    int i;
    int k = 0;

    std::cout << "float: ";
    try{
        j = std::stof(_value);
    }
    catch(...){
        std::cout << "impossible\n";
        return ;
    }
    i = j;
    while (_value[k] && _value[k] != '.')
        k++;
    if (i == j && k < 7)
        std::cout << j << ".0f\n";
    else{
        std::cout << j << "f\n";
    }
}

void    Scalar::toDouble(){
    double j;
    int i;
    int k = 0;

    std::cout << "double: ";
    try{
        j = std::stod(_value);
    }
    catch(...){
        std::cout << "impossible\n";
        return ;
    }
    i = j;
    while (_value[k] && _value[k] != '.')
        k++;
    if (i == j && k < 7)
        std::cout << j << ".0\n";
    else
        std::cout << j << "\n";
}
#include "Fixed.hpp"

Fixed::Fixed() : _value(0){
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int x){
    std::cout << "Int constructor called\n";
    _value = x * (1 << _bits);
}

Fixed::Fixed(const float x){
    std::cout << "Float constructor called\n";
    _value = roundf(x * (1 << _bits));
}

Fixed::Fixed(const Fixed &copy){
    std::cout << "Copy constructor called\n";
    *this = copy;
}

Fixed::~Fixed(){
    std::cout << "Destructor called\n";
}

Fixed   &Fixed::operator=(const Fixed &rhs)
{
    std::cout << "Assignment operator called\n";
    this->_value = rhs._value;
    return *this;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called\n";
    return _value;
}

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called\n";
    _value = raw;
}

float   Fixed::toFloat(void) const{
    return ((float)_value / (float)(1 << _bits));
}

int Fixed::toInt(void) const{
    return ((int)_value / (int)(1 << _bits));
}

std::ostream &operator<<(std::ostream &outfile, const Fixed &fixed){
    outfile << fixed.toFloat();
    return (outfile);
}
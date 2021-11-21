#include "Fixed.hpp"

Fixed::Fixed()
: _value(0)
{
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &copy){
    std::cout << "Copy constructor called\n";
    this->_value = copy.getRawBits();
}

Fixed::~Fixed(){
    std::cout << "Destructor called\n";
}

Fixed   &Fixed::operator=(const Fixed &rhs)
{
    std::cout << "Assignment operator called\n";
    if (this == &rhs)
        return *this;
    this->_value = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called\n";
    return _value;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called\n";
    _value = raw;
}
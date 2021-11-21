#include "Fixed.hpp"

Fixed::Fixed()
: _value(0) {}

Fixed::Fixed(const int x){
    _value = x * (1 << _bits);
}

Fixed::Fixed(const float x){
    _value = roundf(x * (float)(1 << _bits));
}

Fixed::Fixed(const Fixed &copy){
    *this = copy;
}

Fixed::~Fixed(){}

Fixed   &Fixed::operator=(const Fixed &rhs){
    this->_value = rhs._value;
    return *this;
}

bool Fixed::operator>(Fixed const &rhs){
	return (_value > rhs._value);
}

bool Fixed::operator<(Fixed const &rhs){
	return (_value < rhs._value);
}

bool Fixed::operator>=(Fixed const &rhs){
	return (_value >= rhs._value);
}

bool Fixed::operator<=(Fixed const &rhs){
	return (_value <= rhs._value);
}

bool Fixed::operator==(Fixed const &rhs){
	return (_value == rhs._value);
}

bool Fixed::operator!=(Fixed const &rhs){
	return (_value != rhs._value);
}



Fixed Fixed::operator+(Fixed const &rhs){
	Fixed	rtn;

	rtn.setRawBits(_value + rhs._value);
	return (rtn);
}

Fixed Fixed::operator-(Fixed const &rhs){
	Fixed	rtn;

	rtn.setRawBits(_value - rhs._value);
	return (rtn);
}

Fixed Fixed::operator*(Fixed const &rhs) {
	Fixed	rtn;

	rtn.setRawBits(_value * rhs._value / (1 << _bits));
	return (rtn);
}

Fixed Fixed::operator/(Fixed const &rhs){
	Fixed	rtn;

	rtn.setRawBits(_value / rhs._value * (1 << _bits));
	return (rtn);
}



Fixed Fixed::operator++(void){ // prefix
	++_value;
	return (*this);
}

Fixed Fixed::operator++(int){ // postfix
	Fixed dublicate(*this);
    _value++;
	return (dublicate);
}

Fixed Fixed::operator--(void){ // prefix
	--_value;
	return (*this);
}

Fixed Fixed::operator--(int){ // postfix
	Fixed dublicate(*this);
    _value--;
	return (dublicate);
}



int Fixed::getRawBits(void) const {
    return _value;
}

void Fixed::setRawBits(int const raw){
    _value = raw;
}



float   Fixed::toFloat(void) const{
    return ((float)_value / (1 << _bits));
}

int Fixed::toInt(void) const{
    return (_value / (1 << _bits));
}



Fixed &Fixed::min(Fixed &nr1, Fixed &nr2){
	if (nr1 < nr2)
		return (nr1);
	return (nr2);
}

Fixed &Fixed::max(Fixed &nr1, Fixed &nr2){
	if (nr1 > nr2)
		return (nr1);
	return (nr2);
}

Fixed const &Fixed::min(Fixed const &nr1, Fixed const &nr2){
	if ((Fixed)nr1 < nr2)
		return (nr1);
	return (nr2);
}

Fixed const &Fixed::max(Fixed const &nr1, Fixed const &nr2){
	if ((Fixed)nr1 > nr2)
		return (nr1);
	return (nr2);
}



std::ostream &operator<<(std::ostream &outfile, const Fixed &fixed){
    outfile << fixed.toFloat();
    return (outfile);
}
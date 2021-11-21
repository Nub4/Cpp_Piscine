#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
    public:
        Fixed();
        Fixed(const Fixed &copy);
        Fixed(const int x);
        Fixed(const float x);
        ~Fixed();

        Fixed   &operator=(const Fixed &rhs);

        bool    operator>(Fixed const &rhs);
        bool    operator<(Fixed const &rhs);
        bool    operator>=(Fixed const &rhs);
        bool    operator<=(Fixed const &rhs);
        bool    operator==(Fixed const &rhs);
        bool    operator!=(Fixed const &rhs);

        Fixed	operator+(Fixed const &rhs);
	    Fixed	operator-(Fixed const &rhs);
	    Fixed	operator*(Fixed const &rhs);
	    Fixed	operator/(Fixed const &rhs);

        Fixed	operator++(void);
	    Fixed	operator++(int);
	    Fixed	operator--(void);
	    Fixed	operator--(int);

        static Fixed		&min(Fixed &nr1, Fixed &nr2);
	    static Fixed		&max(Fixed &nr1, Fixed &nr2);	
	    static Fixed const	&min(Fixed const &nr1, Fixed const &nr2);
	    static Fixed const	&max(Fixed const &nr1, Fixed const &nr2);

        float   toFloat(void) const;
        int toInt(void) const;
        
        int getRawBits(void) const;
        void setRawBits(int const raw);

    private:
        int _value;
        static const int _bits = 8;
    
};

std::ostream &operator<<(std::ostream &outfile, const Fixed &fixed);

#endif
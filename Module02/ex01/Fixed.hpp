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
#ifndef SCALAR_HPP
# define SCALAR_HPP

# include <iostream>
# include <string>

class Scalar
{
    public:
        Scalar();
        Scalar(std::string &value);
        Scalar(const Scalar &src);
        ~Scalar();

        Scalar  &operator=(const Scalar &rhs);

        void    toChar();
        void    toInt();
        void    toFloat();
        void    toDouble();

    private:
        std::string _value;
};

#endif